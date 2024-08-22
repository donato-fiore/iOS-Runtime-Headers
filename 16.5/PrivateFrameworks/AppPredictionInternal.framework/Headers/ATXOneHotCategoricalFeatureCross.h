// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXONEHOTCATEGORICALFEATURECROSS_H
#define ATXONEHOTCATEGORICALFEATURECROSS_H

@class NSArray;


#import "ATXCandidateRelevanceModelOneHotCategoricalFeaturizer.h"

@interface ATXOneHotCategoricalFeatureCross : ATXCandidateRelevanceModelOneHotCategoricalFeaturizer {
    NSArray *_features;
}




-(id)categoricalFeatureValueForContext:(id)arg0 candidate:(id)arg1 ;
-(id)initWithFeatures:(id)arg0 ;


@end


#endif