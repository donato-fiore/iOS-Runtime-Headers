// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLPLEARNERNGRAMLANGUAGEMODELINGDATA_H
#define NLPLEARNERNGRAMLANGUAGEMODELINGDATA_H



#import "NLPLearnerLanguageModelingData.h"

@interface NLPLearnerNgramLanguageModelingData : NLPLearnerLanguageModelingData



+(NSUInteger)defaultMaxSequenceLength;
+(void)initialize;
-(id)initWithLocale:(id)arg0 ;
-(void)addPreprocessedExample:(*void)arg0 ;


@end


#endif