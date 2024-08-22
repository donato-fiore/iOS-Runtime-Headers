// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFLOGBACKENDSESSIONMANAGER_H
#define HMFLOGBACKENDSESSIONMANAGER_H

@class NSPointerArray, NSMutableArray, NSString;
@protocol _HMFLogBackendSessionDelegate, HMFLogging, HMFRTCSessionFactory;

#import <Foundation/Foundation.h>


@interface HMFLogBackendSessionManager : NSObject <_HMFLogBackendSessionDelegate, HMFLogging>

 {
    os_unfair_lock_s _lock;
    NSPointerArray *_activeSessions;
    NSMutableArray *_queuedSessions;
    id<HMFRTCSessionFactory> *_rtcFactory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)sharedSessionManager;
-(id)init;
-(id)initWithFactory:(id)arg0 ;
-(id)logBackendSessionWithServiceName:(id)arg0 samplingUUID:(id)arg1 isRealtime:(BOOL)arg2 ;
-(void)__sendMetaEventWithName:(id)arg0 correspondingServiceName:(id)arg1 ;
-(void)didCompleteActiveSession;


@end


#endif