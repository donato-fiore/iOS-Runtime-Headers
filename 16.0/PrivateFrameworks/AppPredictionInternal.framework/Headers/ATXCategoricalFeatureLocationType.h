// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCATEGORICALFEATURELOCATIONTYPE_H
#define ATXCATEGORICALFEATURELOCATIONTYPE_H



#import "ATXCandidateRelevanceModelOneHotCategoricalFeaturizer.h"

@interface ATXCategoricalFeatureLocationType : ATXCandidateRelevanceModelOneHotCategoricalFeaturizer



-(id)categoricalFeatureValueForContext:(id)arg0 candidate:(id)arg1 ;
-(id)featureNameForRTLocationOfInterestType:(NSInteger)arg0 ;


@end


#endif