// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRWORDLANGUAGEMODEL_H
#define PRWORDLANGUAGEMODEL_H

@class NSString, NLLanguageModel, NLLMLanguageModelSession, NLTokenIDConverter;

#import <Foundation/Foundation.h>

#import "PRLexicon.h"

@interface PRWordLanguageModel : NSObject {
    NSString *_localization;
    NSString *_appIdentifier;
    NLLanguageModel *_model;
    NLLMLanguageModelSession *_session;
    NLTokenIDConverter *_converter;
    PRLexicon *_lexicon;
}




+(id)languageModelWithLocalization:(id)arg0 appIdentifier:(id)arg1 lexicon:(id)arg2 ;
+(void)performMaintenance;
+(void)setLogLevel:(NSInteger)arg0 ;
-(BOOL)addTokenForString:(id)arg0 tokenID:(*unsigned int)arg1 ;
-(BOOL)getConditionalProbabilityForTokenID:(unsigned int)arg0 context:(*unsigned int)arg1 length:(NSUInteger)arg2 probability:(*CGFloat)arg3 ;
-(BOOL)getFirstDynamicTokenID:(*unsigned int)arg0 lastDynamicTokenID:(*unsigned int)arg1 ;
-(BOOL)getUnigramProbabilityForString:(id)arg0 probability:(*CGFloat)arg1 ;
-(BOOL)shouldAdaptToTokenSequence:(*unsigned int)arg0 length:(NSUInteger)arg1 ;
-(BOOL)tokenSequenceIsBlocklisted:(*unsigned int)arg0 length:(NSUInteger)arg1 ;
-(float)usageCountForTokenID:(unsigned int)arg0 ;
-(id)_descriptionForTokenSequence:(*unsigned int)arg0 length:(NSUInteger)arg1 ;
-(id)appIdentifier;
-(id)description;
-(id)initWithLocalization:(id)arg0 appIdentifier:(id)arg1 lexicon:(id)arg2 ;
-(id)localization;
-(id)stringForTokenID:(unsigned int)arg0 ;
-(unsigned int)tokenIDForString:(id)arg0 ;
-(void)applyExponentialDecay;
-(void)dealloc;
-(void)enumerateCompletionEntriesForPrefix:(id)arg0 maxCompletions:(NSUInteger)arg1 withBlock:(id)arg2 ;
-(void)enumerateCompletionsForPrefix:(id)arg0 maxCompletions:(NSUInteger)arg1 withBlock:(id)arg2 ;
-(void)enumerateEntriesForString:(id)arg0 withBlock:(id)arg1 ;
-(void)enumeratePredictionsForContext:(*unsigned int)arg0 length:(NSUInteger)arg1 maxPredictions:(NSUInteger)arg2 maxTokensPerPrediction:(NSUInteger)arg3 withBlock:(id)arg4 ;
-(void)flushDynamicData;
-(void)incrementUsageCountForTokenID:(unsigned int)arg0 context:(*unsigned int)arg1 length:(NSUInteger)arg2 ;
-(void)pruneToSize:(NSUInteger)arg0 ;
-(void)recordWithDifferentialPrivacy:(id)arg0 ;
-(void)reset;


@end


#endif