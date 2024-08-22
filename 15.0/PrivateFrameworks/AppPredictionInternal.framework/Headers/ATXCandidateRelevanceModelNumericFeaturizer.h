// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXCANDIDATERELEVANCEMODELNUMERICFEATURIZER_H
#define ATXCANDIDATERELEVANCEMODELNUMERICFEATURIZER_H



#import "ATXCandidateRelevanceModelFeaturizer.h"

@interface ATXCandidateRelevanceModelNumericFeaturizer : ATXCandidateRelevanceModelFeaturizer



-(NSUInteger)dimensions;
-(id)featureVectorForContext:(id)arg0 candidate:(id)arg1 ;
-(id)immutableCopy;
-(id)numericFeatureValueForContext:(id)arg0 candidate:(id)arg1 ;
-(void)observeContext:(id)arg0 candidate:(id)arg1 ;


@end


#endif