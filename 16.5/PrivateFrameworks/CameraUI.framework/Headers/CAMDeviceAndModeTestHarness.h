// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMDEVICEANDMODETESTHARNESS_H
#define CAMDEVICEANDMODETESTHARNESS_H



#import "CAMModeAndDeviceConfigurationTestHarness.h"
#import "CAMViewfinderViewController.h"

@interface CAMDeviceAndModeTestHarness : CAMModeAndDeviceConfigurationTestHarness

@property (readonly, nonatomic) NSInteger _desiredMode; // ivar: __desiredMode
@property (readonly, nonatomic) NSInteger _desiredPosition; // ivar: __desiredPosition
@property (readonly, nonatomic) CAMViewfinderViewController *_viewController; // ivar: __viewController


-(id)initWithTestName:(id)arg0 devicePosition:(NSInteger)arg1 captureMode:(NSInteger)arg2 viewFinderViewControl:(id)arg3 ;
-(void)startTesting;


@end


#endif