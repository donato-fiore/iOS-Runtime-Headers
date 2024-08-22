// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLPLEARNERMONTREALSHADOWEVALUATOR_H
#define NLPLEARNERMONTREALSHADOWEVALUATOR_H



#import "NLPLearnerShadowEvaluator.h"

@interface NLPLearnerMontrealShadowEvaluator : NLPLearnerShadowEvaluator



+(BOOL)isInTopKPredictions:(NSUInteger)arg0 scores:(*float)arg1 total:(NSUInteger)arg2 topK:(NSUInteger)arg3 ;
+(void)initialize;
// -(id)evaluateModel:(id)arg0 onRecords:(id)arg1 options:(id)arg2 completion:(id)arg3 error:(unk)arg4  ;
-(id)evaluateModel:(struct MontrealNeuralNetwork *)arg0 onData:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(id)prepareDataFromRecords:(id)arg0 modelBundle:(id)arg1 error:(*id)arg2 ;


@end


#endif