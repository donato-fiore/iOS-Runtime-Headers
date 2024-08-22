// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCAMERASETTINGSCONTROL_H
#define HMCAMERASETTINGSCONTROL_H



#import "HMCameraControl.h"
#import "HMCharacteristic.h"
#import "_HMCameraSettingsControl.h"

@interface HMCameraSettingsControl : HMCameraControl

@property (readonly, nonatomic) HMCharacteristic *currentHorizontalTilt;
@property (readonly, nonatomic) HMCharacteristic *currentVerticalTilt;
@property (readonly, nonatomic) HMCharacteristic *digitalZoom;
@property (readonly, nonatomic) HMCharacteristic *imageMirroring;
@property (readonly, nonatomic) HMCharacteristic *imageRotation;
@property (readonly, nonatomic) HMCharacteristic *nightVision;
@property (readonly, nonatomic) HMCharacteristic *opticalZoom;
@property (retain, nonatomic) _HMCameraSettingsControl *settingsControl; // ivar: _settingsControl
@property (readonly, nonatomic) HMCharacteristic *targetHorizontalTilt;
@property (readonly, nonatomic) HMCharacteristic *targetVerticalTilt;


-(id)initWithSettingsControl:(id)arg0 ;


@end


#endif