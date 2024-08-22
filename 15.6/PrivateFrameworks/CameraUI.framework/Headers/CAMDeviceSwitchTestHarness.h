// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMDEVICESWITCHTESTHARNESS_H
#define CAMDEVICESWITCHTESTHARNESS_H



#import "CAMModeAndDeviceConfigurationTestHarness.h"
#import "CAMViewfinderViewController.h"

@interface CAMDeviceSwitchTestHarness : CAMModeAndDeviceConfigurationTestHarness

@property (readonly, nonatomic) NSInteger desiredDevicePosition; // ivar: _desiredDevicePosition
@property (readonly, nonatomic) NSInteger startingCaptureMode; // ivar: _startingCaptureMode
@property (readonly, nonatomic) CGFloat testExtensionSeconds; // ivar: _testExtensionSeconds
@property (readonly, nonatomic, getter=isTestingAnimation) BOOL testingAnimation; // ivar: _testingAnimation
@property (readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController; // ivar: _viewfinderViewController


-(id)initWithTestName:(id)arg0 viewfinderViewController:(id)arg1 devicePosition:(NSInteger)arg2 testingAnimation:(BOOL)arg3 startingCaptureMode:(NSInteger)arg4 testExtensionSeconds:(CGFloat)arg5 ;
-(void)_internalStopTesting;
-(void)ensureCaptureDevicePosition:(NSInteger)arg0 mode:(NSInteger)arg1 thenPerform:(id)arg2 ;
-(void)handleDidOpenViewfinderForReason:(NSInteger)arg0 ;
-(void)startTesting;


@end


#endif