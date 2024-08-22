// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMCAMERAROLLTESTHARNESS_H
#define CAMCAMERAROLLTESTHARNESS_H



#import "CAMPerformanceTestHarness.h"
#import "CAMViewfinderViewController.h"

@interface CAMCameraRollTestHarness : CAMPerformanceTestHarness

@property (readonly, nonatomic) BOOL awaitPreload; // ivar: _awaitPreload
@property (readonly, nonatomic) CGFloat settlingDelay; // ivar: _settlingDelay
@property (readonly, nonatomic, getter=isTestingAnimation) BOOL testingAnimation; // ivar: _testingAnimation
@property (readonly, nonatomic) BOOL testingWarmPresentation; // ivar: _testingWarmPresentation
@property (readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController; // ivar: _viewfinderViewController


-(id)initWithTestName:(id)arg0 viewfinderViewController:(id)arg1 testingAnimation:(BOOL)arg2 testingWarmPresentation:(BOOL)arg3 awaitPreload:(BOOL)arg4 settlingDelay:(CGFloat)arg5 ;
-(void)_dismissCameraRollImmediately;
-(void)_handlePUDisplayLinkStarted:(id)arg0 ;
-(void)_presentCameraRollAnimated;
-(void)startTesting;
-(void)stopTesting;


@end


#endif