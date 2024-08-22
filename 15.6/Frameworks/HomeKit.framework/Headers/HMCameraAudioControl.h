// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCAMERAAUDIOCONTROL_H
#define HMCAMERAAUDIOCONTROL_H



#import "HMCameraControl.h"
#import "_HMCameraAudioControl.h"
#import "HMCharacteristic.h"

@interface HMCameraAudioControl : HMCameraControl

@property (retain, nonatomic) _HMCameraAudioControl *audioControl; // ivar: _audioControl
@property (readonly, nonatomic) HMCharacteristic *mute;
@property (readonly, nonatomic) HMCharacteristic *volume;


-(id)initWithAudioControl:(id)arg0 ;


@end


#endif