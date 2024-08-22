// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCATEGORICALFEATURELOCATIONPOICATEGORY_H
#define ATXCATEGORICALFEATURELOCATIONPOICATEGORY_H



#import "ATXCandidateRelevanceModelOneHotCategoricalFeaturizer.h"

@interface ATXCategoricalFeatureLocationPOICategory : ATXCandidateRelevanceModelOneHotCategoricalFeaturizer



+(BOOL)ignorePoiCategoryForUsersCurrentLOI:(id)arg0 ;
-(id)categoricalFeatureValueForContext:(id)arg0 candidate:(id)arg1 ;


@end


#endif