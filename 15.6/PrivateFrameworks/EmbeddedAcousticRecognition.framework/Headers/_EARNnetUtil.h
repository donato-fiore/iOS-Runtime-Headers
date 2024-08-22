// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARNNETUTIL_H
#define _EARNNETUTIL_H


#import <Foundation/Foundation.h>


@interface _EARNnetUtil : NSObject



+(id)doBackPropWithNnetModelFile:(id)arg0 inputFeatureVector:(id)arg1 inputTargetVector:(id)arg2 inputLearningRate:(float)arg3 inputFreezeComponents:(id)arg4 inputNumLocalIterations:(int)arg5 inputGradNormFactor:(float)arg6 inputGradNormType:(id)arg7 inputBatchSize:(float)arg8 inputObjectiveFunction:(id)arg9 outTrainingLoss:(*float)arg10 outModelLayersUpdated:(*id)arg11 ;
+(id)doBackPropWithNnetModelFile:(id)arg0 inputFeatureVector:(id)arg1 inputTargetVector:(id)arg2 inputLearningRate:(float)arg3 inputFreezeComponents:(id)arg4 inputNumLocalIterations:(int)arg5 inputGradNormFactor:(float)arg6 inputGradNormType:(id)arg7 inputBatchSize:(float)arg8 inputObjectiveFunction:(id)arg9 outTrainingLosses:(*id)arg10 outModelLayersUpdated:(*id)arg11 ;
+(void)initialize;


@end


#endif