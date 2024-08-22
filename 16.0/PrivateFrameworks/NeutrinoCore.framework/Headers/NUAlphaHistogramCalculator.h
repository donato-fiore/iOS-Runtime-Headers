// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUALPHAHISTOGRAMCALCULATOR_H
#define NUALPHAHISTOGRAMCALCULATOR_H



#import "NUHistogramCalculator.h"

@interface NUAlphaHistogramCalculator : NUHistogramCalculator

@property (nonatomic) ? luminanceThresholds; // ivar: _luminanceThresholds
@property (nonatomic) ? luminanceWeights; // ivar: _luminanceWeights


-(id)_computeAlphaHistogramForBufferBGRA8:(id)arg0 error:(*id)arg1 ;
-(id)computeHistogramFromBuffer:(id)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif