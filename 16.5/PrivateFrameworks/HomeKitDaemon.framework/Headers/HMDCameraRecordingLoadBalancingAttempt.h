// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERARECORDINGLOADBALANCINGATTEMPT_H
#define HMDCAMERARECORDINGLOADBALANCINGATTEMPT_H

@class HMFObject, NSString, HMFTimer;
@protocol HMFLogging, HMFTimerDelegate;



@interface HMDCameraRecordingLoadBalancingAttempt : HMFObject <HMFLogging, HMFTimerDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (copy) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFTimer *localResponseTimer; // ivar: _localResponseTimer
@property (readonly, copy) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithLocalResponseTimeout:(CGFloat)arg0 logIdentifier:(id)arg1 ;
-(id)initWithLocalResponseTimer:(id)arg0 logIdentifier:(id)arg1 ;
-(void)startWithMessage:(id)arg0 messageDispatcher:(id)arg1 completion:(id)arg2 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif