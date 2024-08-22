// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAUDIOUNITDELAY_H
#define AVAUDIOUNITDELAY_H



#import "AVAudioUnitEffect.h"

@interface AVAudioUnitDelay : AVAudioUnitEffect

@property (nonatomic) CGFloat delayTime;
@property (nonatomic) float feedback;
@property (nonatomic) float lowPassCutoff;
@property (nonatomic) float wetDryMix;


-(id)init;


@end


#endif