// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _REMLFEATUREEXPLANATION_H
#define _REMLFEATUREEXPLANATION_H



#import "REMLExplanation.h"
#import "REFeatureSet.h"

@interface _REMLFeatureExplanation : REMLExplanation {
    REFeatureSet *_features;
    float _mean;
    float _variance;
}




+(id)combinedExplanationsFromExplanations:(id)arg0 ;
-(BOOL)_canCombineWithSimilarExplanation:(id)arg0 ;
-(BOOL)shouldProvideExplanation;
-(NSInteger)_rankExplanationToSimilarExplanation:(id)arg0 ;
-(id)explanationByCombiningWithExplanation:(id)arg0 ;
-(id)explanationWithStyle:(NSUInteger)arg0 ;
-(id)initWithFeature:(id)arg0 mean:(float)arg1 variance:(float)arg2 ;


@end


#endif