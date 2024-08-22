// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HMCAMERAAUDIOCONTROL_H
#define _HMCAMERAAUDIOCONTROL_H



#import "HMCameraControl.h"
#import "HMCharacteristic.h"

@interface _HMCameraAudioControl : HMCameraControl

@property (readonly, nonatomic) HMCharacteristic *mute; // ivar: _mute
@property (readonly, nonatomic) HMCharacteristic *volume; // ivar: _volume


-(id)initWithCameraProfile:(id)arg0 service:(id)arg1 profileUniqueIdentifier:(id)arg2 ;


@end


#endif