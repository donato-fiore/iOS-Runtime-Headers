// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCANDIDATERELEVANCEMODEL_H
#define ATXCANDIDATERELEVANCEMODEL_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXCandidateRelevanceModel : NSObject <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(NSUInteger)modelType;
-(NSUInteger)numberOfModelWeights;
-(NSUInteger)numberOfNonZeroModelWeights;
-(float)predictForContext:(id)arg0 candidate:(id)arg1 featurizationManager:(id)arg2 ;
-(id)featureContributionsDuringInferenceDescriptionForContext:(id)arg0 candidate:(id)arg1 featurizationManager:(id)arg2 ;
-(id)featureContributionsDuringInferenceForContext:(id)arg0 candidate:(id)arg1 featurizationManager:(id)arg2 ;
-(id)featureImportanceDescriptionForFeaturizationManager:(id)arg0 ;
-(id)featureImportancesForFeaturizationManager:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif