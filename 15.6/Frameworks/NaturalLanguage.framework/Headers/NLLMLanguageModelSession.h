// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLLMLANGUAGEMODELSESSION_H
#define NLLMLANGUAGEMODELSESSION_H



#import "NLTokenIDBasedLanguageModelSession.h"
#import "NLTokenizer.h"

@interface NLLMLanguageModelSession : NLTokenIDBasedLanguageModelSession {
    *void _model;
    NLTokenizer *_tokenizer;
}




-(BOOL)addTokenForString:(id)arg0 tokenID:(*unsigned int)arg1 ;
-(BOOL)getFirstDynamicTokenID:(*unsigned int)arg0 lastDynamicTokenID:(*unsigned int)arg1 ;
-(BOOL)shouldAdaptToTokenIDs:(*unsigned int)arg0 length:(NSUInteger)arg1 ;
-(NSInteger)blocklistStatusForString:(id)arg0 matchType:(NSInteger)arg1 ;
-(NSInteger)blocklistStatusForTokenIDs:(*unsigned int)arg0 length:(NSUInteger)arg1 matchType:(NSInteger)arg2 ;
-(float)usageCountForTokenID:(unsigned int)arg0 ;
-(id)conditionalProbabilityForString:(id)arg0 context:(id)arg1 ;
-(id)conditionalProbabilityForToken:(id)arg0 context:(id)arg1 ;
-(id)conditionalProbabilityForTokenID:(unsigned int)arg0 contextTokenIDs:(*unsigned int)arg1 length:(NSUInteger)arg2 ;
-(id)description;
-(id)initWithLanguageModel:(id)arg0 options:(id)arg1 ;
-(void)adaptToToken:(id)arg0 context:(id)arg1 ;
-(void)adaptToTokenID:(unsigned int)arg0 contextTokenIDs:(*unsigned int)arg1 length:(NSUInteger)arg2 ;
-(void)applyExponentialDecay;
-(void)dealloc;
-(void)enumeratePredictionsForContext:(id)arg0 maximumPredictions:(NSUInteger)arg1 maximumTokensPerPrediction:(NSUInteger)arg2 withBlock:(id)arg3 ;
-(void)enumeratePredictionsForContextTokenIDs:(*unsigned int)arg0 length:(NSUInteger)arg1 maximumPredictions:(NSUInteger)arg2 maximumTokensPerPrediction:(NSUInteger)arg3 withBlock:(id)arg4 ;
-(void)flushDynamicData;
-(void)pruneToSize:(NSUInteger)arg0 ;
-(void)recordWithDifferentialPrivacy:(id)arg0 ;
-(void)reset;
-(void)unadaptToToken:(id)arg0 context:(id)arg1 ;
-(void)unadaptToTokenID:(unsigned int)arg0 contextTokenIDs:(*unsigned int)arg1 length:(NSUInteger)arg2 ;


@end


#endif