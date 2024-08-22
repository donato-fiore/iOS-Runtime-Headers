// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFQUEUINGLOGBACKENDSESSION_H
#define HMFQUEUINGLOGBACKENDSESSION_H

@class NSMutableArray, NSString, NSUUID;
@protocol HMFLogBackendSession, _HMFLogBackendSubmitterDelegate;

#import <Foundation/Foundation.h>


@interface HMFQueuingLogBackendSession : NSObject <HMFLogBackendSession>

 {
    os_unfair_lock_s _lock;
    BOOL _isOpen;
    NSMutableArray *_queuedEvents;
}


@property (readonly, nonatomic) BOOL isRealtime; // ivar: _isRealtime
@property (readonly, nonatomic) CGFloat lastEventTime; // ivar: _lastEventTime
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (readonly, weak, nonatomic) NSObject<_HMFLogBackendSubmitterDelegate> *submitter; // ivar: _submitter
@property (readonly, nonatomic) id *timeSourceBlock; // ivar: _timeSourceBlock


+(id)logCategory;
-(BOOL)sendMessage:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 sessionUUID:(id)arg1 isRealtime:(BOOL)arg2 submitter:(id)arg3 timeSourceBlock:(id)arg4 ;
-(void)close;
-(void)dealloc;


@end


#endif