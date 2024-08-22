// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCATEGORICALFEATUREMODE_H
#define ATXCATEGORICALFEATUREMODE_H



#import "ATXCandidateRelevanceModelOneHotCategoricalFeaturizer.h"

@interface ATXCategoricalFeatureMode : ATXCandidateRelevanceModelOneHotCategoricalFeaturizer



-(id)categoricalFeatureValueForContext:(id)arg0 candidate:(id)arg1 ;
-(id)featureNameForBMInferredModeType:(NSUInteger)arg0 ;


@end


#endif