// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEDEVICECONFIRMATIONHANDLER_H
#define HMDREMOTEDEVICECONFIRMATIONHANDLER_H

@class HMFObject, NSString, HMFTimer;
@protocol HMFTimerDelegate, OS_dispatch_queue;



@interface HMDRemoteDeviceConfirmationHandler : HMFObject <HMFTimerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) HMFTimer *timeoutTimer; // ivar: _timeoutTimer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithTimeoutTimer:(id)arg0 workQueue:(id)arg1 handler:(id)arg2 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif