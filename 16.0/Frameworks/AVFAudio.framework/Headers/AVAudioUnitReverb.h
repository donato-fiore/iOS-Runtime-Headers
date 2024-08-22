// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAUDIOUNITREVERB_H
#define AVAUDIOUNITREVERB_H



#import "AVAudioUnitEffect.h"

@interface AVAudioUnitReverb : AVAudioUnitEffect

@property (nonatomic) float wetDryMix;


-(id)init;
-(void)loadFactoryPreset:(NSInteger)arg0 ;


@end


#endif