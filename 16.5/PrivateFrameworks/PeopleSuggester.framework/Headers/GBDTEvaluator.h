// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GBDTEVALUATOR_H
#define GBDTEVALUATOR_H


#import <Foundation/Foundation.h>


@interface GBDTEvaluator : NSObject



+(void)initialize;
-(float)_firstOrderGradientWithPrediction:(float)arg0 label:(float)arg1 ;
-(float)_secondOrderGradientWithPrediction:(float)arg0 ;
-(float)_sigmoidWithValue:(float)arg0 ;
-(id)_computeFirstOrderGradientsWithTargets:(id)arg0 predictions:(id)arg1 positiveSampleWeight:(id)arg2 ;
-(id)_computePredictionsFromModelWithInputVectors:(id)arg0 currentModel:(id)arg1 error:(*id)arg2 ;
-(id)_computeSecondOrderGradientsWithTargets:(id)arg0 predictions:(id)arg1 positiveSampleWeight:(id)arg2 ;
-(id)_computeSumOfGradientsLeftAndRightOfSplitWithFeature:(int)arg0 threshold:(float)arg1 inputVectors:(id)arg2 gradients:(id)arg3 ;
-(id)_differenceArrayWithArray:(id)arg0 ;
-(id)_evaluateResultWithGradients:(id)arg0 questions:(id)arg1 inputVectors:(id)arg2 reportGradientsBothSidesOfSplit:(BOOL)arg3 reportNodeSumGradients:(BOOL)arg4 reportPerFeatureResultDifference:(BOOL)arg5 reportPerNodeResultDifference:(BOOL)arg6 ;
-(id)_findNodeSamplesWithDecisionPath:(id)arg0 inputVectors:(id)arg1 gradients:(id)arg2 ;
-(id)_l1NormWithArray:(id)arg0 ;
-(id)_l2NormWithArray:(id)arg0 ;
-(id)_makeKeysWithInputVectors:(id)arg0 ;
-(id)_sumAbsoluteErrorWithPredictions:(id)arg0 targets:(id)arg1 ;
-(id)_sumAccuratePredictionsWithPredictions:(id)arg0 targets:(id)arg1 ;
-(id)_translateResultWithTranslateVector:(id)arg0 result:(id)arg1 ;
-(id)_weightResultWithWeightVector:(id)arg0 result:(id)arg1 ;
-(id)evaluateWithModelURL:(id)arg0 dataSource:(id)arg1 processDataReturnDict:(id)arg2 error:(*id)arg3 ;


@end


#endif