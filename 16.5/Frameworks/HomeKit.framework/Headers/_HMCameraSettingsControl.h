// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMCAMERASETTINGSCONTROL_H
#define _HMCAMERASETTINGSCONTROL_H



#import "HMCameraControl.h"
#import "HMCharacteristic.h"

@interface _HMCameraSettingsControl : HMCameraControl

@property (retain, nonatomic) HMCharacteristic *currentHorizontalTilt; // ivar: _currentHorizontalTilt
@property (retain, nonatomic) HMCharacteristic *currentVerticalTilt; // ivar: _currentVerticalTilt
@property (retain, nonatomic) HMCharacteristic *digitalZoom; // ivar: _digitalZoom
@property (retain, nonatomic) HMCharacteristic *imageMirroring; // ivar: _imageMirroring
@property (retain, nonatomic) HMCharacteristic *imageRotation; // ivar: _imageRotation
@property (retain, nonatomic) HMCharacteristic *nightVision; // ivar: _nightVision
@property (retain, nonatomic) HMCharacteristic *opticalZoom; // ivar: _opticalZoom
@property (retain, nonatomic) HMCharacteristic *targetHorizontalTilt; // ivar: _targetHorizontalTilt
@property (retain, nonatomic) HMCharacteristic *targetVerticalTilt; // ivar: _targetVerticalTilt


-(id)initWithCameraProfile:(id)arg0 profileUniqueIdentifier:(id)arg1 service:(id)arg2 ;


@end


#endif