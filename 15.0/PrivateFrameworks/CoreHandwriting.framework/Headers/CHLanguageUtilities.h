// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHLANGUAGEUTILITIES_H
#define CHLANGUAGEUTILITIES_H


#import <Foundation/Foundation.h>


@interface CHLanguageUtilities : NSObject



+(BOOL)findPartialMatchInPhraseLexicon:(struct _LXLexicon *)arg0 token:(id)arg1 contextBeforeToken:(id)arg2 ;
+(BOOL)isMecabraConversionCandidateAllowed:(id)arg0 ;
+(CGFloat)characterLMLogProbabilityForString:(id)arg0 characterLM:(id)arg1 ;
+(id)mecabraTokenizationAndKanaConversionForString:(id)arg0 mecabraEngine:(struct __Mecabra *)arg1 contextRef:(struct __MecabraContext *)arg2 leftCandidateRef:(*void)arg3 alternativeCandidateLimit:(NSInteger)arg4 ;
+(id)splitStringIntoSubtokensForLexicon:(id)arg0 minLength:(NSInteger)arg1 ;
+(id)tokensRangesForString:(id)arg0 outTokenIDs:(*id)arg1 languageModel:(*void)arg2 ;
+(id)transliterateStringUsingICUTransliterator:(id)arg0 _icuTransliterator:(**void)arg1 ;
+(unsigned int)normalizeLMTokenIDForWord:(id)arg0 tokenID:(unsigned int)arg1 isFromPattern:(BOOL)arg2 score:(*CGFloat)arg3 languageModel:(*void)arg4 ;
+(unsigned int)tokenIDForString:(id)arg0 withLexicon:(struct _LXLexicon *)arg1 ;


@end


#endif