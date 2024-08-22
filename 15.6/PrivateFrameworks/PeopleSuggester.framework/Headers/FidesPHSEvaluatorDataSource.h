// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIDESPHSEVALUATORDATASOURCE_H
#define FIDESPHSEVALUATORDATASOURCE_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface FidesPHSEvaluatorDataSource : NSObject

@property (readonly, nonatomic) NSArray *GBDTQuestions;
@property (readonly, nonatomic) BOOL computeFirstOrderGradients;
@property (readonly, nonatomic) BOOL computeSecondOrderGradients;
@property (readonly, nonatomic) NSArray *inputVectors; // ivar: _inputVectors
@property (copy, nonatomic) NSDictionary *recipe; // ivar: _recipe
@property (retain, nonatomic) NSArray *recordDatas; // ivar: _recordDatas
@property (retain, nonatomic) NSArray *recordInfos; // ivar: _recordInfos
@property (retain, nonatomic) NSArray *records; // ivar: _records
@property (readonly, nonatomic) BOOL reportGradientsBothSidesOfSplit;
@property (readonly, nonatomic) BOOL reportNodeSumGradients;
@property (readonly, nonatomic) BOOL reportPerFeatureResultDifference;
@property (readonly, nonatomic) BOOL reportPerNodeResultDifference;
@property (readonly, nonatomic) NSArray *targetVector; // ivar: _targetVector
@property (readonly, nonatomic) NSArray *translateVector;
@property (readonly, nonatomic) NSArray *weightVector;


+(id)defaultRecipeParams;
+(void)initialize;
-(float)gradNormFactor;
-(float)l2NormBound;
-(float)learningRate;
-(float)learningRateDecay;
-(id)classLearningRates;
-(id)freezeComponents;
-(id)gradNormType;
-(id)initWithRecipe:(id)arg0 inputVectors:(id)arg1 targetVector:(id)arg2 error:(*id)arg3 ;
-(id)inputSplice;
-(id)labelMap;
-(id)layersToTrain;
-(id)objectiveFunction;
-(int)batchSize;
-(int)classThreshold;
-(int)numLocalIterations;


@end


#endif