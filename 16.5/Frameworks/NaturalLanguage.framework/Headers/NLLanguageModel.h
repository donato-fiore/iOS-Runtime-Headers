// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLLANGUAGEMODEL_H
#define NLLANGUAGEMODEL_H

@class NSString;

#import <Foundation/Foundation.h>

#import "NLLexicon.h"
#import "NLTokenizer.h"

@interface NLLanguageModel : NSObject {
    NSString *_localization;
    *void _model;
    NLLexicon *_lexicon;
    NLTokenizer *_tokenizer;
}


@property (readonly, copy) NLLexicon *lexicon;
@property (readonly, copy) NSString *localization;


+(id)languageModelWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)generatesPredictions;
-(BOOL)getConditionalProbabilityForTokenID:(unsigned int)arg0 context:(*unsigned int)arg1 length:(NSUInteger)arg2 probability:(*CGFloat)arg3 ;
-(CGFloat)conditionalProbabilityForEntry:(id)arg0 context:(id)arg1 ;
-(CGFloat)conditionalProbabilityForWord:(id)arg0 context:(id)arg1 ;
-(NSInteger)granularity;
-(id)description;
-(id)initWithLocalization:(id)arg0 ;
-(id)language;
-(id)languages;
-(id)locale;
-(id)sessionWithOptions:(id)arg0 ;
-(id)stringForTokenID:(unsigned int)arg0 ;
-(id)tokenIDConverter;
-(unsigned int)tokenIDForString:(id)arg0 ;
-(void)dealloc;
-(void)enumeratePredictionsForContext:(id)arg0 maxEntriesPerPrediction:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumeratePredictionsForContext:(id)arg0 maxWordsPerPrediction:(NSUInteger)arg1 usingBlock:(id)arg2 ;


@end


#endif