// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVISIONSESSION_H
#define HMIVISIONSESSION_H

@class HMFObject, VNSession, NSString, HMFTimer;
@protocol HMFTimerDelegate, HMFLogging;



@interface HMIVisionSession : HMFObject <HMFTimerDelegate, HMFLogging>

 {
    os_unfair_lock_s _lock;
    VNSession *_session;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) VNSession *vnSession;
@property (readonly) HMFTimer *watchdogTimer; // ivar: _watchdogTimer


+(id)logCategory;
+(id)sharedInstance;
-(id)init;
-(void)timerDidFire:(id)arg0 ;


@end


#endif