// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNRTUNINGBAND_H
#define VNRTUNINGBAND_H


#import <Foundation/Foundation.h>

#import "GainValueArray.h"

@interface VNRTuningBand : NSObject {
    GainValueArray *_deghostPatchSigmaScalingGVA;
    GainValueArray *_deghostBoostFactorScalingGVA;
    GainValueArray *_fusionStrengthScalingGVA;
    float _deghostPatchSigmaScaling;
    float _deghostBoostFactorScaling;
    float _fusionStrengthScaling;
}




-(id)initWithTuningParamsDict:(id)arg0 ;
-(int)updateWithGain:(float)arg0 ;


@end


#endif