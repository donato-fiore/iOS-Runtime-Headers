// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLPROGRAMTRAINER_H
#define MLPROGRAMTRAINER_H

@protocol MLFeatureProvider, MLModeling, MLProgramInternal;

#import <Foundation/Foundation.h>

#import "MLProgramContext.h"
#import "MLProgramEvaluator.h"

@interface MLProgramTrainer : NSObject

@property (retain, nonatomic) MLProgramContext *context; // ivar: _context
@property (retain, nonatomic) NSObject<MLFeatureProvider> *currentUpdatedWeights; // ivar: _currentUpdatedWeights
@property (retain, nonatomic) MLProgramEvaluator *evaluator; // ivar: _evaluator
@property (readonly, copy) NSObject<MLModeling> *inferenceModel;
@property (nonatomic) CGFloat learningRate; // ivar: _learningRate
@property (retain, nonatomic) NSObject<MLProgramInternal> *program; // ivar: _program


-(id)attachLearningRateToFeatures:(id)arg0 ;
-(id)copyCurrentTrainingDelta;
-(id)evaluateUsingTestData:(id)arg0 error:(*id)arg1 ;
-(id)evaluateUsingTestData:(id)arg0 evaluationMetricNames:(id)arg1 error:(*id)arg2 ;
-(id)evaluateUsingTestData:(id)arg0 evaluationMetricNames:(id)arg1 evaluateOnTrainFunction:(BOOL)arg2 error:(*id)arg3 ;
-(id)flattenFeatures:(id)arg0 orderedFeatures:(id)arg1 ;
-(id)initWithProgram:(id)arg0 learningRate:(CGFloat)arg1 error:(*id)arg2 ;
-(id)orderedTrainableWeightsNames;
-(id)trainUsingTrainingData:(id)arg0 error:(*id)arg1 ;
-(id)trainUsingTrainingData:(id)arg0 evaluationMetricNames:(id)arg1 error:(*id)arg2 ;


@end


#endif