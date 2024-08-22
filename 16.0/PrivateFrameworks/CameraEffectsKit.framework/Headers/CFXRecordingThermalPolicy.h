// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CFXRECORDINGTHERMALPOLICY_H
#define CFXRECORDINGTHERMALPOLICY_H



#import "JFXCameraFPSThermalPolicy.h"

@interface CFXRecordingThermalPolicy : JFXCameraFPSThermalPolicy



-(NSUInteger)priority;
-(void)cameraFPSForThermalLevel:(int)arg0 deviceType:(id)arg1 minRate:(*int)arg2 maxRate:(*int)arg3 ;


@end


#endif