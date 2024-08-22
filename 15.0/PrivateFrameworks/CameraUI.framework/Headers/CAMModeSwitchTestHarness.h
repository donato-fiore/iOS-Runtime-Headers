// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMMODESWITCHTESTHARNESS_H
#define CAMMODESWITCHTESTHARNESS_H



#import "CAMModeAndDeviceConfigurationTestHarness.h"
#import "CAMViewfinderViewController.h"

@interface CAMModeSwitchTestHarness : CAMModeAndDeviceConfigurationTestHarness

@property (readonly, nonatomic) NSInteger desiredMode; // ivar: _desiredMode
@property (readonly, nonatomic) CGFloat testExtensionSeconds; // ivar: _testExtensionSeconds
@property (readonly, nonatomic, getter=isTestingAnimation) BOOL testingAnimation; // ivar: _testingAnimation
@property (readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController; // ivar: _viewfinderViewController


-(id)initWithTestName:(id)arg0 viewfinderViewController:(id)arg1 mode:(NSInteger)arg2 testingAnimation:(BOOL)arg3 testExtensionSeconds:(CGFloat)arg4 ;
-(void)_ensureCaptureMode:(NSInteger)arg0 thenPerform:(id)arg1 ;
-(void)_internalStopTesting;
-(void)_startTestingAfterModeSwitchIsTestingAnimation:(BOOL)arg0 ;
-(void)handleDidOpenViewfinderForReason:(NSInteger)arg0 ;
-(void)startTesting;


@end


#endif