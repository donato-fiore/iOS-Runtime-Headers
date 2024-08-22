// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUSERPRESENCEFEEDSESSION_H
#define HMDUSERPRESENCEFEEDSESSION_H

@class HMFObject, NSString, HMFMessageDispatcher, HMUserPresenceAuthorization, HMUserPresenceCompute, NSUUID, NSDate;
@protocol HMFLogging, HMFTimerDelegate, HMDUserPresenceFeedSessionDelegate, OS_dispatch_queue;


#import "HMDUserPresenceRegion.h"
#import "HMDUserPresenceUpdateReason.h"
#import "HMDUserPresenceFeedRetryTimer.h"
#import "HMDUser.h"

@interface HMDUserPresenceFeedSession : HMFObject <HMFLogging, HMFTimerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HMDUserPresenceFeedSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *logIdentifierString; // ivar: _logIdentifierString
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus; // ivar: _presenceAuthStatus
@property (readonly, nonatomic) HMUserPresenceCompute *presenceComputeStatus; // ivar: _presenceComputeStatus
@property (readonly, nonatomic) HMDUserPresenceRegion *presenceRegionStatus; // ivar: _presenceRegionStatus
@property (retain, nonatomic) HMDUserPresenceUpdateReason *reason; // ivar: _reason
@property (readonly, nonatomic) NSUUID *sessionID; // ivar: _sessionID
@property (readonly, nonatomic) NSDate *statusChangeDate; // ivar: _statusChangeDate
@property (retain, nonatomic) HMDUserPresenceFeedRetryTimer *statusUpdateRetryTimer; // ivar: _statusUpdateRetryTimer
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *targetUUID; // ivar: _targetUUID
@property (readonly, nonatomic) HMDUser *user; // ivar: _user
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)attributeDescriptions;
-(id)initWithDelegate:(id)arg0 workQueue:(id)arg1 targetUUID:(id)arg2 messageDispatcher:(id)arg3 user:(id)arg4 presenceAuthStatus:(id)arg5 presenceComputeStatus:(id)arg6 presenceRegionStatus:(id)arg7 reason:(id)arg8 ;
-(id)logIdentifier;
-(void)_callDelegate;
-(void)_handleStatusUpdateMessageError:(id)arg0 responseTime:(CGFloat)arg1 ;
-(void)_send;
-(void)dealloc;
-(void)send;
-(void)timerDidFire:(id)arg0 ;


@end


#endif