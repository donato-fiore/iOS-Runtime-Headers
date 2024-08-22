// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCANDIDATERELEVANCELOGISTICREGRESSIONMODELTRAININGPLAN_H
#define ATXCANDIDATERELEVANCELOGISTICREGRESSIONMODELTRAININGPLAN_H

@protocol ATXCandidateRelevanceModelTrainingPlanProtocol;

#import <Foundation/Foundation.h>


@interface ATXCandidateRelevanceLogisticRegressionModelTrainingPlan : NSObject <ATXCandidateRelevanceModelTrainingPlanProtocol>



@property (readonly, nonatomic) BOOL intercept; // ivar: _intercept
@property (readonly, nonatomic) float learningRate; // ivar: _learningRate
@property (readonly, nonatomic) NSUInteger minIterations; // ivar: _minIterations
@property (readonly, nonatomic) float regularizationL1Ratio; // ivar: _regularizationL1Ratio
@property (readonly, nonatomic) float regularizationRate; // ivar: _regularizationRate
@property (readonly, nonatomic) NSUInteger regularizationStrategy; // ivar: _regularizationStrategy
@property (readonly, nonatomic) float stoppingThreshold; // ivar: _stoppingThreshold
@property (readonly, nonatomic) float weightTruncationThreshold; // ivar: _weightTruncationThreshold


+(NSUInteger)regularizationStrategyForString:(id)arg0 ;
+(id)stringForPMLRegularizationStrategy:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXCandidateRelevanceLogisticRegressionModelTrainingPlan:(id)arg0 ;
-(id)init;
-(id)initWithIntercept:(BOOL)arg0 learningRate:(float)arg1 minIterations:(NSUInteger)arg2 stoppingThreshold:(float)arg3 regularizationStrategy:(NSUInteger)arg4 regularizationRate:(float)arg5 regularizationL1Ratio:(float)arg6 weightTruncationThreshold:(float)arg7 ;
-(id)initWithParameters:(id)arg0 ;
-(id)trainModelForDataPoints:(id)arg0 candidate:(id)arg1 featurizationManager:(id)arg2 ;
-(id)truncatedWeightsForWeights:(id)arg0 ;


@end


#endif