// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHLANGUAGEUTILITIES_H
#define CHLANGUAGEUTILITIES_H


#import <Foundation/Foundation.h>


@interface CHLanguageUtilities : NSObject



+(BOOL)findPartialMatchInPhraseLexicon:(struct _LXLexicon *)arg0 token:(id)arg1 contextBeforeToken:(id)arg2 ;
+(BOOL)isMecabraConversionCandidateAllowed:(id)arg0 ;
+(BOOL)shouldCapitalizeGivenHistory:(id)arg0 shouldAutoCapitalizeSetting:(BOOL)arg1 locale:(id)arg2 ;
+(CGFloat)characterLMLogProbabilityForString:(id)arg0 characterLM:(id)arg1 ;
+(CGFloat)computeEditPenalizationFromString:(id)arg0 toReferenceString:(id)arg1 withSuffix:(id)arg2 withCaseSensitivity:(BOOL)arg3 withFirstLetterCaseSensitivity:(BOOL)arg4 withDiacriticSensitivity:(BOOL)arg5 withDiacriticsCharSet:(id)arg6 withConsumableStrokesCharSet:(id)arg7 outputSuffix:(*id)arg8 lexiconExtraCharacters:(*id)arg9 firstLetterCaseFlipped:(*BOOL)arg10 ;
+(id)lexiconCorrectionsForToken:(id)arg0 locale:(id)arg1 lexicon:(struct _LXLexicon *)arg2 lmVocabulary:(*void)arg3 ovsStringChecker:(id)arg4 textReplacements:(id)arg5 consumableStrokesSet:(id)arg6 minimumTokenScore:(CGFloat)arg7 activeHistoryRange:(struct _NSRange )arg8 outBestTokenScore:(*CGFloat)arg9 shouldCapitalizeWord:(BOOL)arg10 shouldSkipEntryCorrection:(BOOL)arg11 allowFullCapsCorrections:(BOOL)arg12 minimalLengthForLowConfidenceCorrections:(NSInteger)arg13 lowConfidenceThreshold:(CGFloat)arg14 minimalLengthForCustomCapitalizationCorrections:(NSInteger)arg15 outBestTokenIndex:(*NSInteger)arg16 outFoundTokenInLexicon:(*BOOL)arg17 outFoundCaseMatchingTokenInLexicon:(*BOOL)arg18 outCorrectionFromOutOfContextEntry:(*BOOL)arg19 ;
+(id)mecabraTokenizationAndKanaConversionForString:(id)arg0 mecabraEngine:(struct __Mecabra *)arg1 contextRef:(struct __MecabraContext *)arg2 leftCandidateRef:(*void)arg3 alternativeCandidateLimit:(NSInteger)arg4 ;
+(id)splitStringIntoSubtokensForLexicon:(id)arg0 minLength:(NSInteger)arg1 ;
+(id)tokensRangesForString:(id)arg0 outTokenIDs:(*id)arg1 languageModel:(*void)arg2 ;
+(id)transliterateStringUsingICUTransliterator:(id)arg0 _icuTransliterator:(**void)arg1 ;
+(unsigned int)normalizeLMTokenIDForWord:(id)arg0 tokenID:(unsigned int)arg1 isFromPattern:(BOOL)arg2 score:(*CGFloat)arg3 languageModel:(*void)arg4 ;
+(unsigned int)tokenIDForString:(id)arg0 withLexicon:(struct _LXLexicon *)arg1 ;


@end


#endif