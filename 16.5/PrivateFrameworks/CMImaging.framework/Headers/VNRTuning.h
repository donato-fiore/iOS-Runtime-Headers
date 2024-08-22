// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNRTUNING_H
#define VNRTUNING_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GainValueArray.h"

@interface VNRTuning : NSObject {
    GainValueArray *_deghostPatchSigmaLumaGVA;
    GainValueArray *_deghostPatchSigmaChromaGVA;
    GainValueArray *_deghostBoostFactorGVA;
    GainValueArray *_fusionStrengthLumaGVA;
    GainValueArray *_fusionStrengthChromaGVA;
    GainValueArray *_ghostAttenuationLumaGVA;
    GainValueArray *_ghostAttenuationBreakthroughSigmaLumaGVA;
    GainValueArray *_ghostAttenuationChromaGVA;
    GainValueArray *_ghostAttenuationBreakthroughSigmaChromaGVA;
    float _deghostPatchSigmaLuma;
    float _deghostPatchSigmaChroma;
    float _deghostBoostFactor;
    float _fusionStrengthLuma;
    float _fusionStrengthChroma;
    float _ghostAttenuationLuma;
    float _ghostAttenuationBreakthroughSigmaLuma;
    float _ghostAttenuationChroma;
    float _ghostAttenuationBreakthroughSigmaChroma;
    NSArray *_lumaBands;
    NSArray *_chromaBands;
}




-(id)initWithTuningParamsDict:(id)arg0 ;
-(int)updateWithGain:(float)arg0 ;


@end


#endif