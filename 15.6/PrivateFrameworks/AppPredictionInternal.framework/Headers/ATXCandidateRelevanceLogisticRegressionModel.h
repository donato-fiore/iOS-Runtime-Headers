// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCANDIDATERELEVANCELOGISTICREGRESSIONMODEL_H
#define ATXCANDIDATERELEVANCELOGISTICREGRESSIONMODEL_H

@class PMLLogisticRegressionModel;


#import "ATXCandidateRelevanceModel.h"

@interface ATXCandidateRelevanceLogisticRegressionModel : ATXCandidateRelevanceModel

@property (readonly, nonatomic) PMLLogisticRegressionModel *model; // ivar: _model


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXCandidateRelevanceLogisticRegressionModel:(id)arg0 ;
-(NSUInteger)numberOfModelWeights;
-(NSUInteger)numberOfNonZeroModelWeights;
-(float)predictForContext:(id)arg0 candidate:(id)arg1 featurizationManager:(id)arg2 ;
-(id)description;
-(id)featureContributionsDuringInferenceDescriptionForContext:(id)arg0 candidate:(id)arg1 featurizationManager:(id)arg2 ;
-(id)featureContributionsDuringInferenceForContext:(id)arg0 candidate:(id)arg1 featurizationManager:(id)arg2 ;
-(id)featureImportanceDescriptionForFeaturizationManager:(id)arg0 ;
-(id)featureImportancesForFeaturizationManager:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif