// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMCAMERAROLLTESTHARNESS_H
#define CAMCAMERAROLLTESTHARNESS_H

@class NSString;
@protocol CAMViewfinderViewControllerCameraRollTestingDelegate;


#import "CAMPerformanceTestHarness.h"
#import "CAMViewfinderViewController.h"

@interface CAMCameraRollTestHarness : CAMPerformanceTestHarness <CAMViewfinderViewControllerCameraRollTestingDelegate>



@property (readonly, nonatomic) BOOL awaitPreload; // ivar: _awaitPreload
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat settlingDelay; // ivar: _settlingDelay
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTestingAnimation) BOOL testingAnimation; // ivar: _testingAnimation
@property (readonly, nonatomic) BOOL testingWarmPresentation; // ivar: _testingWarmPresentation
@property (readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController; // ivar: _viewfinderViewController


-(id)initWithTestName:(id)arg0 viewfinderViewController:(id)arg1 testingAnimation:(BOOL)arg2 testingWarmPresentation:(BOOL)arg3 awaitPreload:(BOOL)arg4 settlingDelay:(CGFloat)arg5 ;
-(void)_dismissCameraRollImmediately;
-(void)_handlePUDisplayLinkStarted:(id)arg0 ;
-(void)_presentCameraRollAnimated;
-(void)startTesting;
-(void)stopTesting;
-(void)viewfinderViewController:(id)arg0 didDismissPresentedCameraRoll:(id)arg1 ;
-(void)viewfinderViewController:(id)arg0 didPresentCameraRoll:(id)arg1 ;
-(void)viewfinderViewController:(id)arg0 willPresentCameraRoll:(id)arg1 withOneUpController:(id)arg2 ;


@end


#endif