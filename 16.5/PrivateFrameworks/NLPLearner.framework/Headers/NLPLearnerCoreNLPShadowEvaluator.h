// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLPLEARNERCORENLPSHADOWEVALUATOR_H
#define NLPLEARNERCORENLPSHADOWEVALUATOR_H



#import "NLPLearnerShadowEvaluator.h"

@interface NLPLearnerCoreNLPShadowEvaluator : NLPLearnerShadowEvaluator

@property (nonatomic) NSUInteger maxSequenceLength; // ivar: _maxSequenceLength


+(void)initialize;
// -(id)evaluateModel:(id)arg0 onRecords:(id)arg1 options:(id)arg2 completion:(id)arg3 error:(unk)arg4  ;
-(id)evaluateModel:(struct CoreLanguageModelWithState *)arg0 onSingleExample:(id)arg1 tokenizer:(*void)arg2 ;
-(id)modelCreationOptionsForModelURL:(id)arg0 options:(id)arg1 ;


@end


#endif