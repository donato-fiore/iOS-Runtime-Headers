// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFQUEUINGLOGBACKENDSESSIONMANAGER_H
#define HMFQUEUINGLOGBACKENDSESSIONMANAGER_H

@class NSPointerArray, NSOperationQueue;
@protocol _HMFLogBackendSubmitterDelegate, HMFLogBackendSessionManager, HMFRTCSessionFactory;

#import <Foundation/Foundation.h>


@interface HMFQueuingLogBackendSessionManager : NSObject <_HMFLogBackendSubmitterDelegate, HMFLogBackendSessionManager>

 {
    os_unfair_lock_s _lock;
    NSPointerArray *_activeSessions;
    CGFloat _nextStaleCheckTime;
    BOOL __isTimeValid;
}


@property (readonly, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (readonly, nonatomic) NSObject<HMFRTCSessionFactory> *rtcFactory; // ivar: _rtcFactory
@property (readonly, nonatomic) id *timeSourceBlock; // ivar: _timeSourceBlock


+(id)logCategory;
+(id)sharedSessionManager;
-(BOOL)_isTimeValid;
-(id)initWithRTCFactory:(id)arg0 timeSourceBlock:(id)arg1 ;
-(id)logBackendSessionWithServiceName:(id)arg0 sessionUUID:(id)arg1 isRealtime:(BOOL)arg2 ;
-(void)checkForStaleSessions;
-(void)sendMetaEventWithName:(id)arg0 forServiceName:(id)arg1 ;
-(void)submitMessages:(id)arg0 serviceName:(id)arg1 sessionUUID:(id)arg2 isRealtime:(BOOL)arg3 ;


@end


#endif