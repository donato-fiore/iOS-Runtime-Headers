// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HREACTIONSETDERIVINGRECOMMENDATIONGENERATORPROCESS_H
#define HREACTIONSETDERIVINGRECOMMENDATIONGENERATORPROCESS_H

@class NSDictionary;


#import "HREStandardAsyncRecommendationGenerationProcess.h"

@interface HREActionSetDerivingRecommendationGeneratorProcess : HREStandardAsyncRecommendationGenerationProcess

@property (retain, nonatomic) NSDictionary *sourceCharacteristics; // ivar: _sourceCharacteristics


-(id)_createRecommendationWithActionSet:(id)arg0 trigger:(id)arg1 ;
-(id)_recommendationForActionSet:(id)arg0 trigger:(id)arg1 ;
-(id)generateRecommendations;


@end


#endif