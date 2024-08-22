// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLLMSLANGUAGEMODELSESSION_H
#define NLLMSLANGUAGEMODELSESSION_H



#import "NLLanguageModelSession.h"
#import "NLTokenizer.h"

@interface NLLMSLanguageModelSession : NLLanguageModelSession {
    unique_ptr<language_modeling::LanguageModelSession, std::default_delete<language_modeling::LanguageModelSession>> _session;
    NLTokenizer *_tokenizer;
}




-(NSInteger)blocklistStatusForString:(id)arg0 matchType:(NSInteger)arg1 ;
-(id)conditionalProbabilityForString:(id)arg0 context:(id)arg1 ;
-(id)conditionalProbabilityForToken:(id)arg0 context:(id)arg1 ;
-(id)description;
-(id)initWithLanguageModel:(id)arg0 options:(id)arg1 ;
-(void)adaptToToken:(id)arg0 context:(id)arg1 ;
-(void)enumeratePredictionsForContext:(id)arg0 maximumPredictions:(NSUInteger)arg1 maximumTokensPerPrediction:(NSUInteger)arg2 withBlock:(id)arg3 ;
-(void)reset;
-(void)unadaptToToken:(id)arg0 context:(id)arg1 ;


@end


#endif