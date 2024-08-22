// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAUDIOUNITDISTORTION_H
#define AVAUDIOUNITDISTORTION_H



#import "AVAudioUnitEffect.h"

@interface AVAudioUnitDistortion : AVAudioUnitEffect

@property (nonatomic) float preGain;
@property (nonatomic) float wetDryMix;


-(id)init;
-(struct AUPreset )FillOutAUPreset:(NSInteger)arg0 ;
-(void)loadFactoryPreset:(NSInteger)arg0 ;


@end


#endif