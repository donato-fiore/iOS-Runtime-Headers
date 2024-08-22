// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDURATIONEVENT_H
#define HMDDURATIONEVENT_H

@class NSString, NSNumber, NSSet, NSUUID;
@protocol NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver, OS_dispatch_queue;


#import "HMDTimeEvent.h"

@interface HMDDurationEvent : HMDTimeEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSNumber *duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)_nextTimerDate;
-(id)analyticsTriggerEventData;
-(id)createPayload;
-(id)emptyModelObject;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModel:(id)arg0 home:(id)arg1 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(void)_handleUpdateRequest:(id)arg0 ;
-(void)_transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)_transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif