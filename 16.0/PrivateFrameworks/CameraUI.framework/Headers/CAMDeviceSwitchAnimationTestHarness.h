// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMDEVICESWITCHANIMATIONTESTHARNESS_H
#define CAMDEVICESWITCHANIMATIONTESTHARNESS_H



#import "CAMModeAndDeviceConfigurationTestHarness.h"
#import "CAMViewfinderViewController.h"

@interface CAMDeviceSwitchAnimationTestHarness : CAMModeAndDeviceConfigurationTestHarness {
    CAMViewfinderViewController *_viewfinder;
    NSInteger _desiredDevicePosition;
}




+(id)harnessWithTestName:(id)arg0 viewfinder:(id)arg1 devicePosition:(NSInteger)arg2 ;
-(id)initWithTestName:(id)arg0 viewfinder:(id)arg1 devicePosition:(NSInteger)arg2 ;
-(void)ensureCaptureDevicePosition:(NSInteger)arg0 mode:(NSInteger)arg1 thenPerform:(id)arg2 ;
-(void)startTesting;


@end


#endif