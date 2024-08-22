// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCANDIDATERELEVANCEMODELMULTIHOTCATEGORICALFEATURIZER_H
#define ATXCANDIDATERELEVANCEMODELMULTIHOTCATEGORICALFEATURIZER_H

@class NSMutableDictionary;


#import "ATXCandidateRelevanceModelFeaturizer.h"

@interface ATXCandidateRelevanceModelMultiHotCategoricalFeaturizer : ATXCandidateRelevanceModelFeaturizer {
    NSMutableDictionary *_observedFeatureValueCounts;
    NSUInteger _maxCategoricalFeaturesCount;
}




-(id)categoricalFeatureValuesForContext:(id)arg0 candidate:(id)arg1 ;
-(id)computeFeatureValueNames;
-(id)featureVectorForContext:(id)arg0 candidate:(id)arg1 ;
-(id)immutableCopy;
-(id)init;
-(id)initWithObservedFeatureValueCounts:(id)arg0 ;
-(id)initWithObservedFeatureValueCounts:(id)arg0 maxCategoricalFeaturesCount:(NSUInteger)arg1 ;
-(void)observeContext:(id)arg0 candidate:(id)arg1 ;


@end


#endif