// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLBAYESIANPROBITREGRESSION_H
#define MLBAYESIANPROBITREGRESSION_H

@class NSString;
@protocol MLSupervisedOnlineUpdatable, MLModelSpecificationLoader, MLModelSpecificationSaver;


#import "MLRegressor.h"

@interface MLBayesianProbitRegression : MLRegressor <MLSupervisedOnlineUpdatable, MLModelSpecificationLoader, MLModelSpecificationSaver>

 {
    ? _model;
    NSString *_regressionInputFeatureName;
    NSString *_optimismInputFeatureName;
    NSString *_meanOutputFeatureName;
    NSString *_varianceOutputFeatureName;
    NSString *_pessimisticProbabilityOutputFeatureName;
    NSString *_sampledProbabilityOutputFeatureName;
    NSString *_samplingScaleInputFeatureName;
    NSString *_samplingTruncationInputFeatureName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)setFeatureName:(*id)arg0 to:(id)arg1 descriptions:(id)arg2 ;
+(BOOL)validateModelDescription:(id)arg0 ;
+(id)loadModelFromSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(id)modelWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(*void)saveModelToSpecification:(*id)arg0 ;
-(BOOL)convertOutputFeatureToPredictionValues:(id)arg0 event:(*BOOL)arg1 importance:(*CGFloat)arg2 error:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBopr:(id)arg0 ;
-(BOOL)setFeatureCount:(NSUInteger)arg0 ;
-(BOOL)setInputFeatureName:(*id)arg0 to:(id)arg1 ;
-(BOOL)setOutputFeatureName:(*id)arg0 to:(id)arg1 ;
-(BOOL)updateModelFromFeatures:(id)arg0 toTarget:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateModelFromFeatures:(id)arg0 toTarget:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(CGFloat)getFeatureValue:(id)arg0 forName:(id)arg1 withType:(NSInteger)arg2 ;
-(CGFloat)getOptimism:(id)arg0 ;
-(CGFloat)getSamplingScale:(id)arg0 ;
-(CGFloat)getSamplingTruncation:(id)arg0 ;
-(NSUInteger)FeatureCount;
-(id)createRegressorResult:(struct Prediction *)arg0 ;
-(id)getArrayFeatureValue:(id)arg0 ;
-(id)initWithDescription:(id)arg0 numberOfFeatures:(NSInteger)arg1 priorMean:(id)arg2 ;
-(id)initWithDescription:(id)arg0 numberOfFeatures:(NSInteger)arg1 priorMean:(id)arg2 regressionInputName:(id)arg3 optimismInputName:(id)arg4 samplingScaleInputName:(id)arg5 samplingTruncationInputName:(id)arg6 meanOutputName:(id)arg7 varianceOutputName:(id)arg8 pessimisticProbabilityOutputName:(id)arg9 sampledProbabilityOutputName:(id)arg10 ;
-(id)initWithSpecification:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)regress:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(struct shared_ptr<CoreML::BayesianProbitRegression::BayesianProbitRegression> )model;
-(struct shared_ptr<CoreML::BayesianProbitRegression::FeatureValues> )getOneHotFeatureValues:(id)arg0 error:(*id)arg1 ;
-(void)createCheckpoint;
-(void)reset;
-(void)resetToLastCheckpointBeforeDate:(id)arg0 ;


@end


#endif