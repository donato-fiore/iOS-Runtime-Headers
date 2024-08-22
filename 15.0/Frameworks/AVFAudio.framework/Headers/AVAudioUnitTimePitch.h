// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAUDIOUNITTIMEPITCH_H
#define AVAUDIOUNITTIMEPITCH_H



#import "AVAudioUnitTimeEffect.h"

@interface AVAudioUnitTimePitch : AVAudioUnitTimeEffect

@property (nonatomic) float overlap;
@property (nonatomic) float pitch;
@property (nonatomic) float rate;


-(id)init;


@end


#endif