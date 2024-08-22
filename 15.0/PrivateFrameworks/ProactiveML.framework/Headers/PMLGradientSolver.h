// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMLGRADIENTSOLVER_H
#define PMLGRADIENTSOLVER_H


#import <Foundation/Foundation.h>

#import "PMLSparseMatrix.h"
#import "PMLModelRegressor.h"
#import "PMLModelWeights.h"

@interface PMLGradientSolver : NSObject {
    float _learningRate;
    float _stoppingThreshold;
    NSUInteger _minIterations;
    id *_gradientCalculator;
    id *_predictionCalculator;
    id *_batchPredictionCalculator;
}


@property (retain, nonatomic) PMLSparseMatrix *covariates; // ivar: _covariates
@property (nonatomic) BOOL intercept; // ivar: _intercept
@property (retain, nonatomic) PMLModelRegressor *objective; // ivar: _objective
@property (retain, nonatomic) PMLModelWeights *weights; // ivar: _weights


-(float)predict:(id)arg0 ;
-(id)batchPredict:(id)arg0 ;
-(id)computeAvgGradientWithIterations:(NSUInteger)arg0 ;
-(id)init;
// -(id)initWithLearningRate:(float)arg0 minIterations:(NSUInteger)arg1 stoppingThreshold:(float)arg2 weights:(id)arg3 intercept:(BOOL)arg4 gradientCalculator:(id)arg5 predictionCalculator:(unk)arg6 batchPredictionCalculator:(id)arg7  ;
-(id)solveWithAvgGradient:(*float)arg0 maxNumberOfIterations:(NSUInteger)arg1 ;
-(void)solve;
-(void)solveForCovariates:(id)arg0 objectives:(id)arg1 ;


@end


#endif