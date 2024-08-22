// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMIDLECONTROLLER_H
#define CAMIDLECONTROLLER_H

@class NSString, NSTimer;
@protocol CAMStillImageCaptureRequestDelegate, CAMVideoCaptureRequestDelegate, CAMPanoramaCaptureRequestDelegate, CAMStillImageCapturingVideoDelegate;

#import <Foundation/Foundation.h>


@interface CAMIdleController : NSObject <CAMStillImageCaptureRequestDelegate, CAMVideoCaptureRequestDelegate, CAMPanoramaCaptureRequestDelegate, CAMStillImageCapturingVideoDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic, getter=_enableIdleTimer, setter=_setEnableIdleTimer:) NSTimer *enableIdleTimer; // ivar: _enableIdleTimer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_isIdleTimerIndefinitelyDisabled) BOOL idleTimerIndefinitelyDisabled;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUpdatingIdleTimer, setter=_setUpdatingIdleTimer:) BOOL updatingIdleTimer; // ivar: _updatingIdleTimer


-(id)init;
-(void)_delayIdleTimerByTimeInterval:(CGFloat)arg0 ;
-(void)_delayIdleTimerByTimeIntervalUnlessIndefinitelyDisabled:(CGFloat)arg0 ;
-(void)_immediatelyEnableApplicationIdleTimer;
-(void)_indefinitelyDisableApplicationIdleTimer;
-(void)_teardownEnableIdleTimer;
-(void)dealloc;
-(void)panoramaRequestDidStartCapturing:(id)arg0 ;
-(void)panoramaRequestDidStopCapturing:(id)arg0 interrupted:(BOOL)arg1 ;
-(void)startUpdatingIdleTimer;
-(void)stillImageRequestDidStopCapturingStillImage:(id)arg0 ;
-(void)stillImageRequestWillStartCapturingCTMVideoWithCaptureInFlight:(BOOL)arg0 ;
-(void)stillImageRequestsDidStopCapturingCTMVideo;
-(void)stopUpdatingIdleTimer;
-(void)timelapseRequestDidResumeCapturing;
-(void)timelapseRequestDidStartCapturing;
-(void)timelapseRequestDidStopCapturing;
-(void)videoRequestDidStartCapturing:(id)arg0 ;
-(void)videoRequestDidStopCapturing:(id)arg0 ;


@end


#endif