// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAUDIOMIXSWEEPFILTEREFFECTPARAMETERS_H
#define AVAUDIOMIXSWEEPFILTEREFFECTPARAMETERS_H



#import "AVAudioMixEffectParameters.h"
#import "AVAudioMixSweepFilterEffectParametersInternal.h"

@interface AVAudioMixSweepFilterEffectParameters : AVAudioMixEffectParameters {
    AVAudioMixSweepFilterEffectParametersInternal *_sweepFilterAudioEffect;
}


@property (readonly, nonatomic) float bypassThreshold;
@property (readonly, nonatomic) int maximumCutOffFrequency;
@property (readonly, nonatomic) int minimumCutOffFrequency;
@property (readonly, nonatomic) float sweepValue;


+(id)sweepFilterEffectParametersWithMinimumCutOffFrequency:(unsigned int)arg0 maximumCutOffFrequency:(unsigned int)arg1 bypassThreshold:(float)arg2 sweepValue:(float)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithMinimumCutOffFrequency:(unsigned int)arg0 maximumCutOffFrequency:(unsigned int)arg1 bypassThreshold:(float)arg2 sweepValue:(float)arg3 ;
-(id)sweepFilterEffectWithSweepValue:(float)arg0 ;
-(void)dealloc;


@end


#endif