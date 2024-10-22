// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APPLESPELL_H
#define APPLESPELL_H

@class NSMutableDictionary, NSMutableArray, NSString, NSArray, NSMutableSet, NSURL, NSData;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AppleSpell : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    *void _proofReaderConnection;
    *__CFDictionary _databaseConnections;
    NSMutableDictionary *_languageModelDicts;
    NSMutableDictionary *_lexiconDict;
    NSMutableDictionary *_phraseLexiconDict;
    *__CFDictionary _emojiPredictorDict;
    CGFloat _referenceResetTimer;
    CGFloat _lastWriteLanguageModels;
    CGFloat _lastDecayLanguageModels;
    CGFloat _lastResetLanguageModels;
    CGFloat _lastReleaseLanguageModels;
    CGFloat _lastMaintainLanguageModels;
    NSUInteger _languageModelWordCount;
    NSMutableDictionary *_localDictionaryArrays;
    NSMutableArray *_globalDictionaryArray;
    NSString *_lastLanguage;
    NSString *_lastCandidateLanguage;
    NSArray *_userPreferredLanguages;
    NSArray *_userPreferredLatinLanguages;
    NSArray *_userTopLanguages;
    NSArray *_userTransliterationLocalizations;
    NSArray *_userAdditionalEnglishLocalizations;
    NSMutableDictionary *_learnedResponses;
    NSMutableDictionary *_probationaryLearnedResponses;
    NSMutableDictionary *_probationaryLearnedResponseTimes;
    NSMutableArray *_diagnosticInfo;
    NSMutableSet *_foundNames;
    id *_foundNamesLexicon;
    id *_foundPhrasesLexicon;
    id *_supplementalLexicon;
    NSArray *_supplementalWords;
    CGFloat _lastFindNames;
    NSMutableSet *_foundShortcuts;
    NSMutableDictionary *_foundShortcutsDictionary;
    *__CFDictionary _databaseConnectionsByPathAndCode;
    NSUInteger _reserved1;
    CGFloat _reserved2;
    NSMutableArray *_reserved3;
    NSMutableDictionary *_reserved4;
    CGFloat _reserved5;
    NSMutableArray *_altBundleURLs;
    NSObject<OS_dispatch_queue> *_assetDataBundleSerialQueue;
    NSMutableDictionary *_assetDataBundleURLDictionary;
    NSMutableSet *_updatedDataBundleLanguages;
    NSURL *_updateBundleURL;
    NSMutableDictionary *_languageCounts;
    CGFloat _lastLanguageCounts;
    NSMutableDictionary *_userAdaptationDictionary;
    NSData *_lastKeyEventArray;
    *NSUInteger _keyboardHistogram;
    CGFloat _lastKeyboardHistogramRecording;
    NSMutableArray *_requestedAssets;
    NSMutableArray *_requestedByCheckerAssets;
    CGFloat _lastAssetRequest;
    NSMutableArray *_recordedCorrections;
    NSMutableArray *_recordedTICorrections;
    NSMutableDictionary *_characterLanguageModelDictionary;
    NSMutableDictionary *_transformerLanguageModelDictionary;
    NSMutableDictionary *_sentencePieceLanguageModelDictionary;
    CGFloat _probationaryInterval;
    NSMutableArray *_guessRequestTimestamps;
    BOOL _userPrefersUncheckedLatinLanguage;
    BOOL _userPrefersUncheckedCyrillicLanguage;
    BOOL _hasUpdatedDataBundleLanguages;
    BOOL _shouldClearFoundNames;
    BOOL _automaticTextCompletionCollapsed;
    BOOL _automaticTextCompletionEnabled;
    BOOL _foundNamesProhibited;
    BOOL _supplementalLexiconEnabled;
}




+(id)sharedInstance;
+(void)resetSharedInstance;
-(*void)databaseConnectionForLanguageObject:(id)arg0 ;
-(*void)englishPhraseRoot;
-(BOOL)_acceptErrorWithRuleType:(NSUInteger)arg0 ruleNumber:(NSUInteger)arg1 grammarRange:(struct _NSRange )arg2 sentenceRange:(struct _NSRange )arg3 inString:(id)arg4 corrections:(id)arg5 issueType:(*NSUInteger)arg6 ;
-(BOOL)_acceptWithoutAccentForString:(id)arg0 range:(struct _NSRange )arg1 inString:(id)arg2 languageObject:(id)arg3 ;
-(BOOL)_addLanguageModelCompletionsForPartialWordRange:(struct _NSRange )arg0 languageObject:(id)arg1 connection:(struct _PR_DB_IO *)arg2 sender:(id)arg3 tagger:(id)arg4 appIdentifier:(id)arg5 waitForLanguageModel:(BOOL)arg6 allowTransformer:(BOOL)arg7 candidates:(id)arg8 scoreDictionary:(id)arg9 tryTransliteration:(*BOOL)arg10 ;
-(BOOL)_checkEnglishGrammarInString:(id)arg0 range:(struct _NSRange )arg1 indexIntoBuffer:(NSUInteger)arg2 bufferLength:(NSUInteger)arg3 languageObject:(id)arg4 connection:(struct _PR_DB_IO *)arg5 sender:(id)arg6 bufIO:(struct _PR_BUF_IO *)arg7 retval:(*int)arg8 errorRange:(struct _NSRange *)arg9 details:(*id)arg10 ;
-(BOOL)_checkGrammarInString:(id)arg0 range:(struct _NSRange )arg1 language:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4 bufIO:(struct _PR_BUF_IO *)arg5 errorRange:(struct _NSRange *)arg6 details:(*id)arg7 ;
-(BOOL)_findMatchingRangesForRange:(struct _NSRange )arg0 inString:(id)arg1 keyEventArray:(id)arg2 endingAtIndex:(NSUInteger)arg3 matchingStringRange:(struct _NSRange *)arg4 correctableStringRange:(struct _NSRange *)arg5 matchingKeyEventRange:(struct _NSRange *)arg6 firstMisspelledKeyEventIndex:(*NSUInteger)arg7 lastMisspelledKeyEventIndex:(*NSUInteger)arg8 previousBackspaceCount:(*NSUInteger)arg9 ;
-(BOOL)_getUnigramProbabilityForString:(id)arg0 languageModel:(id)arg1 probability:(*CGFloat)arg2 ;
-(BOOL)_permitCorrection:(id)arg0 languageObject:(id)arg1 flags:(NSUInteger)arg2 isCapitalized:(BOOL)arg3 typologyCorrection:(id)arg4 ;
-(BOOL)_prohibitCorrectionBasedOnCountsForString:(id)arg0 lowercaseString:(id)arg1 appIdentifier:(id)arg2 languageObject:(id)arg3 typologyCorrection:(id)arg4 ;
-(BOOL)_spellServer:(id)arg0 canChangeCaseOfFirstLetterInString:(id)arg1 toUpperCase:(BOOL)arg2 languageObject:(id)arg3 ;
-(BOOL)_useAlternateLanguageForRange:(struct _NSRange )arg0 ofString:(id)arg1 languageObject:(id)arg2 tagger:(id)arg3 alternateLanguageObject:(id)arg4 alternateTagger:(id)arg5 appIdentifier:(id)arg6 ;
-(BOOL)checkNameWordBuffer:(char *)arg0 length:(NSUInteger)arg1 languageObject:(id)arg2 globalOnly:(BOOL)arg3 ;
-(BOOL)checkNegativeWordBuffer:(char *)arg0 length:(NSUInteger)arg1 languageObject:(id)arg2 ;
-(BOOL)checkNegativeWordBuffer:(char *)arg0 length:(NSUInteger)arg1 languageObject:(id)arg2 alreadyCapitalized:(BOOL)arg3 ;
-(BOOL)checkNoCapAbbreviationWordBuffer:(char *)arg0 length:(NSUInteger)arg1 languageObject:(id)arg2 ;
-(BOOL)checkSpecialPrefixesForWordBuffer:(char *)arg0 length:(NSUInteger)arg1 ;
-(BOOL)checkWordBuffer:(char *)arg0 length:(NSUInteger)arg1 languageObject:(id)arg2 index:(NSUInteger)arg3 ;
-(BOOL)findMatchingRangesForRange:(struct _NSRange )arg0 inString:(id)arg1 keyEventArray:(id)arg2 selectedRangeValue:(id)arg3 matchingStringRange:(struct _NSRange *)arg4 correctableStringRange:(struct _NSRange *)arg5 matchingKeyEventRange:(struct _NSRange *)arg6 firstMisspelledKeyEventIndex:(*NSUInteger)arg7 lastMisspelledKeyEventIndex:(*NSUInteger)arg8 previousBackspaceCount:(*NSUInteger)arg9 ;
-(BOOL)getCharacterModelConditionalProbabilityForString:(id)arg0 context:(id)arg1 language:(id)arg2 probability:(*CGFloat)arg3 ;
-(BOOL)getConditionalProbabilityForWord:(id)arg0 context:(id)arg1 language:(id)arg2 probability:(*CGFloat)arg3 ;
-(BOOL)getMetaFlagsForWord:(id)arg0 inLexiconForLanguage:(id)arg1 metaFlags:(*unsigned int)arg2 otherMetaFlags:(*unsigned int)arg3 ;
-(BOOL)getMetaFlagsForWord:(id)arg0 inLexiconForLanguageObject:(id)arg1 metaFlags:(*unsigned int)arg2 otherMetaFlags:(*unsigned int)arg3 ;
-(BOOL)getTransformerModelConditionalProbabilityForString:(id)arg0 context:(id)arg1 language:(id)arg2 probability:(*CGFloat)arg3 ;
-(BOOL)inputStringIsFullOrAbbreviatedPinyin:(id)arg0 ;
-(BOOL)inputStringIsPinyin:(id)arg0 allowPartialLastSyllable:(BOOL)arg1 ;
-(BOOL)noSuggestForCompletion:(id)arg0 languageObject:(id)arg1 appIdentifier:(id)arg2 alreadyCapitalized:(BOOL)arg3 ;
-(BOOL)shouldBlockWord:(id)arg0 languageObject:(id)arg1 ;
-(BOOL)spellServer:(id)arg0 canChangeCaseOfFirstLetterInString:(id)arg1 toUpperCase:(BOOL)arg2 language:(id)arg3 ;
-(BOOL)supportSentenceCorrectionForLanguageObject:(id)arg0 appIdentifier:(id)arg1 ;
-(BOOL)testTurkishSuffixationPattern:(id)arg0 ;
-(BOOL)useCharacterLanguageModelForLanguageObject:(id)arg0 tagger:(id)arg1 appIdentifier:(id)arg2 ;
-(BOOL)useSentencePieceLanguageModelForLanguageObject:(id)arg0 tagger:(id)arg1 appIdentifier:(id)arg2 ;
-(BOOL)useTransformerLanguageModelForLanguageObject:(id)arg0 tagger:(id)arg1 appIdentifier:(id)arg2 ;
-(BOOL)useUnigramProbabilityForLanguageObject:(id)arg0 ;
-(BOOL)useWordLanguageModelForLanguageObject:(id)arg0 tagger:(id)arg1 appIdentifier:(id)arg2 ;
-(BOOL)validateAbbreviationOrNumberWordBuffer:(char *)arg0 length:(NSUInteger)arg1 languageObject:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4 ;
-(BOOL)validateAdditionalWord:(id)arg0 inLexiconForLanguage:(id)arg1 ;
-(BOOL)validateAdditionalWord:(id)arg0 inLexiconForLanguageObject:(id)arg1 ;
-(BOOL)validateNoCapAbbreviation:(id)arg0 inLexiconForLanguage:(id)arg1 ;
-(BOOL)validateNoCapAbbreviation:(id)arg0 inLexiconForLanguageObject:(id)arg1 ;
-(BOOL)validateUntilLearnedWord:(id)arg0 inLexiconForLanguage:(id)arg1 ;
-(BOOL)validateUntilLearnedWord:(id)arg0 inLexiconForLanguageObject:(id)arg1 ;
-(BOOL)validateVariantWord:(id)arg0 inLexiconForLanguage:(id)arg1 ;
-(BOOL)validateVariantWord:(id)arg0 inLexiconForLanguageObject:(id)arg1 ;
-(BOOL)validateWord:(id)arg0 inLexicon:(id)arg1 ;
-(BOOL)validateWord:(id)arg0 inLexiconForLanguage:(id)arg1 ;
-(BOOL)validateWord:(id)arg0 inLexiconForLanguageObject:(id)arg1 ;
-(BOOL)validateWord:(id)arg0 inLexicons:(id)arg1 forLanguage:(id)arg2 requiredMetaFlags:(unsigned int)arg3 alternativeRequiredMetaFlags:(unsigned int)arg4 prohibitedMetaFlags:(unsigned int)arg5 caseInsensitive:(BOOL)arg6 ;
-(BOOL)validateWord:(id)arg0 inLexiconsForLanguageObject:(id)arg1 requiredMetaFlags:(unsigned int)arg2 alternativeRequiredMetaFlags:(unsigned int)arg3 prohibitedMetaFlags:(unsigned int)arg4 caseInsensitive:(BOOL)arg5 ;
-(BOOL)validateWordBuffer:(char *)arg0 length:(NSUInteger)arg1 connection:(struct _PR_DB_IO *)arg2 ;
-(BOOL)validateWordBuffer:(char *)arg0 length:(NSUInteger)arg1 languageObject:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4 checkBase:(BOOL)arg5 checkDict:(BOOL)arg6 checkNames:(BOOL)arg7 checkHyphens:(BOOL)arg8 checkIntercaps:(BOOL)arg9 checkOptions:(BOOL)arg10 depth:(NSUInteger)arg11 ;
-(BOOL)validateWordBuffer:(char *)arg0 length:(NSUInteger)arg1 languageObject:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4 checkBase:(BOOL)arg5 checkDict:(BOOL)arg6 checkTemp:(BOOL)arg7 checkNames:(BOOL)arg8 checkHyphens:(BOOL)arg9 checkIntercaps:(BOOL)arg10 checkOptions:(BOOL)arg11 depth:(NSUInteger)arg12 ;
-(BOOL)validateWordBuffer:(char *)arg0 length:(NSUInteger)arg1 languageObject:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4 checkBase:(BOOL)arg5 checkDict:(BOOL)arg6 checkTemp:(BOOL)arg7 checkUser:(BOOL)arg8 checkNames:(BOOL)arg9 checkHyphens:(BOOL)arg10 checkIntercaps:(BOOL)arg11 checkOptions:(BOOL)arg12 depth:(NSUInteger)arg13 ;
-(BOOL)validateWordBuffer:(char *)arg0 length:(NSUInteger)arg1 languageObject:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4 checkBase:(BOOL)arg5 checkDict:(BOOL)arg6 checkTemp:(BOOL)arg7 checkUser:(BOOL)arg8 checkNames:(BOOL)arg9 checkHyphens:(BOOL)arg10 checkIntercaps:(BOOL)arg11 checkOptions:(BOOL)arg12 forCorrection:(BOOL)arg13 depth:(NSUInteger)arg14 ;
-(BOOL)validateWordPrefixBuffer:(char *)arg0 length:(NSUInteger)arg1 connection:(struct _PR_DB_IO *)arg2 ;
-(BOOL)wordIsAlreadyAccented:(id)arg0 ;
-(NSUInteger)_contextLengthForRange:(struct _NSRange )arg0 languageObject:(id)arg1 tagger:(id)arg2 languageModel:(id)arg3 maxContextLength:(NSUInteger)arg4 context:(*unsigned int)arg5 cleanOffset:(*NSUInteger)arg6 cleanContextRange:(struct _NSRange *)arg7 lastTokenRange:(struct _NSRange *)arg8 lastTokenID:(*unsigned int)arg9 ;
-(NSUInteger)_getSplitIndexes:(*NSUInteger)arg0 maxCount:(NSUInteger)arg1 forPinyinInputString:(id)arg2 ;
-(NSUInteger)_resetLanguageModels;
-(NSUInteger)acceptabilityOfWordBuffer:(char *)arg0 length:(NSUInteger)arg1 languageObject:(id)arg2 forPrediction:(BOOL)arg3 alreadyCapitalized:(BOOL)arg4 ;
-(NSUInteger)acceptabilityOfWordBuffer:(char *)arg0 length:(NSUInteger)arg1 languageObject:(id)arg2 forPrediction:(BOOL)arg3 alreadyCapitalized:(BOOL)arg4 depth:(NSUInteger)arg5 ;
-(NSUInteger)loadedLexiconsCountForLanguageObject:(id)arg0 ;
-(NSUInteger)numberOfTurkishSuffixPointsInBuffer:(char *)arg0 length:(NSUInteger)arg1 maxSuffixPoints:(NSUInteger)arg2 suffixPoints:(struct ? *)arg3 ;
-(char *)_validatedGuessWordBuffer:(char *)arg0 length:(NSUInteger)arg1 languageObject:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4 checkUser:(BOOL)arg5 additionalBuffer:(char *)arg6 ;
-(float)dynamicScoreForWord:(id)arg0 languageModel:(id)arg1 languageObject:(id)arg2 ;
-(float)dynamicScoreForWord:(id)arg0 languageObject:(id)arg1 appIdentifier:(id)arg2 ;
-(id)_NLPLanguageModelWithType:(NSInteger)arg0 forLanguageObject:(id)arg1 waitForResult:(BOOL)arg2 ;
-(id)_accentCorrectionResultForString:(id)arg0 range:(struct _NSRange )arg1 inString:(id)arg2 offset:(NSUInteger)arg3 languageObject:(id)arg4 onlyAtInsertionPoint:(BOOL)arg5 capitalize:(BOOL)arg6 keyEventArray:(id)arg7 selectedRangeValue:(id)arg8 ;
-(id)_capitalizationResultForString:(id)arg0 range:(struct _NSRange )arg1 inString:(id)arg2 offset:(NSUInteger)arg3 languageObject:(id)arg4 onlyAtInsertionPoint:(BOOL)arg5 keyEventArray:(id)arg6 selectedRangeValue:(id)arg7 ;
-(id)_checkSentence:(id)arg0 languageObject:(id)arg1 ;
-(id)_connectionCorrectionForWord:(id)arg0 buffer:(char *)arg1 length:(NSUInteger)arg2 languageObject:(id)arg3 connection:(struct _PR_DB_IO *)arg4 flags:(NSUInteger)arg5 isCapitalized:(BOOL)arg6 accentCorrectionOnly:(BOOL)arg7 isAbbreviation:(*BOOL)arg8 trySpaceInsertion:(*BOOL)arg9 hasAccentCorrections:(*BOOL)arg10 candidateList:(id)arg11 typologyCorrection:(id)arg12 ;
-(id)_correctionResultForKoreanString:(id)arg0 range:(struct _NSRange )arg1 inString:(id)arg2 offset:(NSUInteger)arg3 tagger:(id)arg4 appIdentifier:(id)arg5 dictionary:(id)arg6 keyEventArray:(id)arg7 ;
-(id)_correctionResultForString:(id)arg0 range:(struct _NSRange )arg1 inString:(id)arg2 offset:(NSUInteger)arg3 tagger:(id)arg4 appIdentifier:(id)arg5 dictionary:(id)arg6 languages:(id)arg7 connection:(struct _PR_DB_IO *)arg8 flags:(NSUInteger)arg9 keyEventArray:(id)arg10 selectedRangeValue:(id)arg11 parameterBundles:(id)arg12 previousLetter:(unsigned short)arg13 nextLetter:(unsigned short)arg14 extraMisspellingCount:(NSUInteger)arg15 extraCorrectionCount:(*NSUInteger)arg16 ;
-(id)_correctionResultForWord:(id)arg0 replacementRange:(struct _NSRange )arg1 inString:(id)arg2 offset:(NSUInteger)arg3 languageObject:(id)arg4 capitalize:(BOOL)arg5 isCapitalized:(BOOL)arg6 isSecondCapitalized:(BOOL)arg7 hasCurlyApostrophe:(BOOL)arg8 capitalizationLocale:(id)arg9 proposedCorrection:(id)arg10 ;
-(id)_detailWithRange:(struct _NSRange )arg0 description:(id)arg1 corrections:(id)arg2 ;
-(id)_detailWithRange:(struct _NSRange )arg0 description:(id)arg1 corrections:(id)arg2 issueType:(NSUInteger)arg3 ;
-(id)_initialCorrectionForString:(id)arg0 lowercaseString:(id)arg1 isFirstSecondCapitalized:(BOOL)arg2 dictionary:(id)arg3 languageObject:(id)arg4 connection:(struct _PR_DB_IO *)arg5 ;
-(id)_languageModelStateScoresForCandidateList:(id)arg0 languageModel:(id)arg1 state:(id)arg2 language:(id)arg3 tagger:(id)arg4 ;
-(id)_lexiconPathForLanguageObject:(id)arg0 type:(id)arg1 ;
-(id)_lexiconPathForLocalization:(id)arg0 type:(id)arg1 ;
-(id)_lexiconsForLanguage:(id)arg0 ;
-(id)_lexiconsForLanguage:(id)arg0 waitForResult:(BOOL)arg1 ;
-(id)_lexiconsForLanguageObject:(id)arg0 ;
-(id)_loadLexiconsForLanguage:(id)arg0 localization:(id)arg1 onQueue:(id)arg2 ;
-(id)_loadNLPLanguageModelWithType:(NSInteger)arg0 forLanguageObject:(id)arg1 onQueue:(id)arg2 ;
-(id)_loadPhraseLexiconsForLanguage:(id)arg0 localization:(id)arg1 onQueue:(id)arg2 ;
-(id)_loadWordLanguageModelForLanguage:(id)arg0 localization:(id)arg1 appIdentifier:(id)arg2 onQueue:(id)arg3 ;
-(id)_modifiedGrammarDescriptionForDescription:(id)arg0 ;
-(id)_orthographyByModifyingOrthography:(id)arg0 withLatinLanguage:(id)arg1 ;
-(id)_phraseCapitalizationResultForString:(id)arg0 range:(struct _NSRange )arg1 currentWordRange:(struct _NSRange )arg2 inString:(id)arg3 offset:(NSUInteger)arg4 languageObject:(id)arg5 onlyAtInsertionPoint:(BOOL)arg6 keyEventArray:(id)arg7 selectedRangeValue:(id)arg8 ;
-(id)_phraseLexiconPathForLanguage:(id)arg0 ;
-(id)_phraseLexiconsForLanguage:(id)arg0 ;
-(id)_phraseLexiconsForLanguage:(id)arg0 waitForResult:(BOOL)arg1 ;
-(id)_pinyinStringByCombiningPinyinString:(id)arg0 withPinyinString:(id)arg1 ;
-(id)_primitiveRetainedAlternativesForPinyinInputString:(id)arg0 ;
-(id)_rankedCandidatesForCandidateList:(id)arg0 languageObject:(id)arg1 tagger:(id)arg2 appIdentifier:(id)arg3 parameterBundles:(id)arg4 ;
-(id)_rankedCandidatesForRange:(struct _NSRange )arg0 candidates:(id)arg1 languageObject:(id)arg2 tagger:(id)arg3 appIdentifier:(id)arg4 allowTransformer:(BOOL)arg5 scoreDictionary:(id)arg6 ;
-(id)_recursiveRetainedAlternativesForPinyinInputString:(id)arg0 depth:(NSUInteger)arg1 ;
-(id)_retainedAlternativesByCombiningAlternatives:(id)arg0 withAlternatives:(id)arg1 andAddingAlternatives:(id)arg2 ;
-(id)_spaceInsertionCorrectionForWord:(id)arg0 buffer:(char *)arg1 length:(NSUInteger)arg2 languageObject:(id)arg3 connection:(struct _PR_DB_IO *)arg4 flags:(NSUInteger)arg5 isCapitalized:(BOOL)arg6 typologyCorrection:(id)arg7 ;
-(id)_spellServer:(id)arg0 suggestGuessesForWordRange:(struct _NSRange )arg1 inString:(id)arg2 languageObject:(id)arg3 options:(id)arg4 ;
-(id)_spellServer:(id)arg0 suggestGuessesForWordRange:(struct _NSRange )arg1 inString:(id)arg2 languageObject:(id)arg3 options:(id)arg4 tagger:(id)arg5 errorModel:(id)arg6 guessesDictionaries:(id)arg7 ;
-(id)_standardizedLanguageModelStringForString:(id)arg0 ;
-(id)_stringForCompletion:(id)arg0 languageModel:(id)arg1 languageObject:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4 prefix:(id)arg5 capitalized:(BOOL)arg6 ;
-(id)_stringForTokenIDs:(*unsigned int)arg0 tokenCount:(NSUInteger)arg1 entryString:(id)arg2 languageModel:(id)arg3 languageObject:(id)arg4 connection:(struct _PR_DB_IO *)arg5 sender:(id)arg6 prefix:(id)arg7 capitalized:(BOOL)arg8 ;
-(id)_umlautCorrectionForWord:(id)arg0 buffer:(char *)arg1 length:(NSUInteger)arg2 languageObject:(id)arg3 connection:(struct _PR_DB_IO *)arg4 typologyCorrection:(id)arg5 ;
-(id)assetDataBundleURLsForLanguageObject:(id)arg0 ;
-(id)autocorrectionDictionaryForLanguageObject:(id)arg0 ;
-(id)backgroundLoadingQueue;
-(id)backgroundMaintenanceQueue;
-(id)capitalizationDictionaryArrayForLanguageObject:(id)arg0 ;
-(id)characterLanguageModelForLanguageObject:(id)arg0 waitForResult:(BOOL)arg1 ;
-(id)contextAlternativeAnnotatedStringsForJyutpingInputString:(id)arg0 ;
-(id)contextAlternativeAnnotatedStringsForPinyinInputString:(id)arg0 ;
-(id)contextAlternativeAnnotatedStringsForZhuyinInputString:(id)arg0 ;
-(id)dataBundle;
-(id)dataBundlesForLanguageObject:(id)arg0 ;
-(id)databasePathForLanguageObject:(id)arg0 ;
-(id)dictionaryForLanguageObject:(id)arg0 index:(NSUInteger)arg1 ;
-(id)englishStringFromWordBuffer:(char *)arg0 length:(NSUInteger)arg1 connection:(struct _PR_DB_IO *)arg2 ;
-(id)englishStringsFromWordBuffer:(char *)arg0 length:(NSUInteger)arg1 connection:(struct _PR_DB_IO *)arg2 ;
-(id)externalStringForKoreanInternalString:(id)arg0 ;
-(id)globalDictionaryArray;
-(id)guessesDictionaryForLanguageObject:(id)arg0 ;
-(id)init;
-(id)internalStringForKoreanExternalString:(id)arg0 ;
-(id)languageModelCompletionsForPartialWord:(id)arg0 languageObject:(id)arg1 sender:(id)arg2 appIdentifier:(id)arg3 ;
-(id)languageModelLocalizationForLanguage:(id)arg0 ;
-(id)lexiconForLanguage:(id)arg0 ;
-(id)lexiconForLanguageObject:(id)arg0 ;
-(id)localDictionaryArrayForLanguageObject:(id)arg0 ;
-(id)modelCreationQueue;
-(id)parameterBundleForLanguageObject:(id)arg0 ;
-(id)phraseCorrectionsDictionaryForLanguageObject:(id)arg0 ;
-(id)phraseMatching:(id)arg0 inLexiconForLanguage:(id)arg1 ;
-(id)phraseMatching:(id)arg0 inLexiconForLanguageObject:(id)arg1 ;
-(id)potentialSentenceCorrectionsForWord:(id)arg0 languageObject:(id)arg1 ;
-(id)sentenceCorrectionsDictionaryForLanguageObject:(id)arg0 ;
-(id)sentencePieceLanguageModelForLanguageObject:(id)arg0 waitForResult:(BOOL)arg1 ;
-(id)sentenceTerminatorCharacterSet;
-(id)spellServer:(id)arg0 _retainedAlternativesForPinyinInputString:(id)arg1 extended:(BOOL)arg2 ;
-(id)spellServer:(id)arg0 _retainedCorrectionsForPinyinInputString:(id)arg1 ;
-(id)spellServer:(id)arg0 _retainedFinalModificationsForPinyinInputString:(id)arg1 geometryModelData:(id)arg2 ;
-(id)spellServer:(id)arg0 _retainedModificationsForPinyinInputString:(id)arg1 geometryModelData:(id)arg2 ;
-(id)spellServer:(id)arg0 _retainedPrefixesForPinyinInputString:(id)arg1 ;
-(id)spellServer:(id)arg0 alternativesForPinyinInputString:(id)arg1 ;
-(id)spellServer:(id)arg0 alternativesForPinyinInputString:(id)arg1 language:(id)arg2 ;
-(id)spellServer:(id)arg0 candidatesForSelectedRange:(struct _NSRange )arg1 inString:(id)arg2 offset:(NSUInteger)arg3 types:(NSUInteger)arg4 options:(id)arg5 orthography:(id)arg6 ;
-(id)spellServer:(id)arg0 checkGrammarInString:(id)arg1 range:(struct _NSRange )arg2 language:(id)arg3 offset:(NSUInteger)arg4 options:(id)arg5 ;
-(id)spellServer:(id)arg0 checkString:(id)arg1 offset:(NSUInteger)arg2 types:(NSUInteger)arg3 options:(id)arg4 orthography:(id)arg5 wordCount:(*NSInteger)arg6 ;
-(id)spellServer:(id)arg0 correctionsForPinyinInputString:(id)arg1 ;
-(id)spellServer:(id)arg0 correctionsForPinyinInputString:(id)arg1 language:(id)arg2 ;
-(id)spellServer:(id)arg0 extendedAlternativesForPinyinInputString:(id)arg1 ;
-(id)spellServer:(id)arg0 extendedAlternativesForPinyinInputString:(id)arg1 language:(id)arg2 ;
-(id)spellServer:(id)arg0 finalModificationsForPinyinInputString:(id)arg1 ;
-(id)spellServer:(id)arg0 generateCandidatesForSelectedRange:(struct _NSRange )arg1 inString:(id)arg2 offset:(NSUInteger)arg3 types:(NSUInteger)arg4 options:(id)arg5 orthography:(id)arg6 ;
-(id)spellServer:(id)arg0 modificationsForPinyinInputString:(id)arg1 ;
-(id)spellServer:(id)arg0 modificationsForPinyinInputString:(id)arg1 geometryModelData:(id)arg2 ;
-(id)spellServer:(id)arg0 prefixesForPinyinInputString:(id)arg1 ;
-(id)spellServer:(id)arg0 prefixesForPinyinInputString:(id)arg1 language:(id)arg2 ;
-(id)spellServer:(id)arg0 stringForInputString:(id)arg1 language:(id)arg2 ;
-(id)spellServer:(id)arg0 suggestCompletionDictionariesForPartialWordRange:(struct _NSRange )arg1 inString:(id)arg2 inLanguage:(id)arg3 options:(id)arg4 ;
-(id)spellServer:(id)arg0 suggestCompletionDictionariesForPartialWordRange:(struct _NSRange )arg1 inString:(id)arg2 language:(id)arg3 ;
-(id)spellServer:(id)arg0 suggestCompletionDictionariesForPartialWordRange:(struct _NSRange )arg1 inString:(id)arg2 language:(id)arg3 options:(id)arg4 ;
-(id)spellServer:(id)arg0 suggestCompletionsForPartialWordRange:(struct _NSRange )arg1 inString:(id)arg2 inLanguage:(id)arg3 options:(id)arg4 ;
-(id)spellServer:(id)arg0 suggestCompletionsForPartialWordRange:(struct _NSRange )arg1 inString:(id)arg2 language:(id)arg3 ;
-(id)spellServer:(id)arg0 suggestCompletionsForPartialWordRange:(struct _NSRange )arg1 inString:(id)arg2 language:(id)arg3 options:(id)arg4 ;
-(id)spellServer:(id)arg0 suggestContextualGuessDictionariesForWordRange:(struct _NSRange )arg1 inString:(id)arg2 inLanguage:(id)arg3 options:(id)arg4 ;
-(id)spellServer:(id)arg0 suggestContextualGuessDictionariesForWordRange:(struct _NSRange )arg1 inString:(id)arg2 language:(id)arg3 options:(id)arg4 ;
-(id)spellServer:(id)arg0 suggestGuessDictionariesForWordRange:(struct _NSRange )arg1 inString:(id)arg2 inLanguage:(id)arg3 options:(id)arg4 errorModel:(id)arg5 ;
-(id)spellServer:(id)arg0 suggestGuessDictionariesForWordRange:(struct _NSRange )arg1 inString:(id)arg2 language:(id)arg3 options:(id)arg4 errorModel:(id)arg5 ;
-(id)spellServer:(id)arg0 suggestGuessesForKoreanWordRange:(struct _NSRange )arg1 inString:(id)arg2 options:(id)arg3 ;
-(id)spellServer:(id)arg0 suggestGuessesForWord:(id)arg1 inLanguage:(id)arg2 ;
-(id)spellServer:(id)arg0 suggestGuessesForWordRange:(struct _NSRange )arg1 inString:(id)arg2 inLanguage:(id)arg3 options:(id)arg4 ;
-(id)spellServer:(id)arg0 suggestGuessesForWordRange:(struct _NSRange )arg1 inString:(id)arg2 language:(id)arg3 ;
-(id)spellServer:(id)arg0 suggestGuessesForWordRange:(struct _NSRange )arg1 inString:(id)arg2 language:(id)arg3 options:(id)arg4 ;
-(id)spellServer:(id)arg0 suggestNextLetterDictionariesForPartialWordRange:(struct _NSRange )arg1 inString:(id)arg2 inLanguage:(id)arg3 options:(id)arg4 ;
-(id)spellServer:(id)arg0 suggestNextLetterDictionariesForPartialWordRange:(struct _NSRange )arg1 inString:(id)arg2 language:(id)arg3 ;
-(id)spellServer:(id)arg0 suggestNextLetterDictionariesForPartialWordRange:(struct _NSRange )arg1 inString:(id)arg2 language:(id)arg3 options:(id)arg4 ;
-(id)spellServer:(id)arg0 suggestWordWithLengthInRange:(struct _NSRange )arg1 language:(id)arg2 ;
-(id)spellServer:(id)arg0 suggestWordWithMinimumLength:(NSUInteger)arg1 maximumLength:(NSUInteger)arg2 language:(id)arg3 ;
-(id)stringByReducingArabicAlefVariantsInString:(id)arg0 ;
-(id)stringByRemovingArabicDiacriticsFromString:(id)arg0 ;
-(id)taggerForLanguageObject:(id)arg0 string:(id)arg1 range:(struct _NSRange )arg2 ;
-(id)transformerLanguageModelForLanguageObject:(id)arg0 waitForResult:(BOOL)arg1 ;
-(id)transformerParameterBundleForLanguageObject:(id)arg0 ;
-(id)vietnameseModificationForWord:(id)arg0 ;
-(id)wordLanguageModelForLanguage:(id)arg0 appIdentifier:(id)arg1 waitForResult:(BOOL)arg2 ;
-(id)wordLanguageModelForLanguageObject:(id)arg0 appIdentifier:(id)arg1 waitForResult:(BOOL)arg2 ;
-(struct _NSRange )_modifiedGrammarRangeForDoubledWordRange:(struct _NSRange )arg0 sentenceRange:(struct _NSRange )arg1 inString:(id)arg2 corrections:(id)arg3 ;
-(struct _NSRange )spellServer:(id)arg0 checkGrammarInString:(id)arg1 language:(id)arg2 details:(*id)arg3 ;
-(struct _NSRange )spellServer:(id)arg0 checkGrammarInString:(id)arg1 range:(struct _NSRange )arg2 language:(id)arg3 orthography:(id)arg4 mutableResults:(id)arg5 offset:(NSUInteger)arg6 details:(*id)arg7 ;
-(struct _NSRange )spellServer:(id)arg0 findMisspelledWordInString:(id)arg1 language:(id)arg2 wordCount:(*NSInteger)arg3 countOnly:(BOOL)arg4 ;
-(struct _NSRange )spellServer:(id)arg0 findMisspelledWordInString:(id)arg1 language:(id)arg2 wordCount:(*NSInteger)arg3 countOnly:(BOOL)arg4 correction:(*id)arg5 ;
-(struct _NSRange )spellServer:(id)arg0 findMisspelledWordInString:(id)arg1 languages:(id)arg2 wordCount:(*NSInteger)arg3 countOnly:(BOOL)arg4 correction:(*id)arg5 ;
-(struct _NSRange )spellServer:(id)arg0 findMisspelledWordInString:(id)arg1 range:(struct _NSRange )arg2 languages:(id)arg3 topLanguages:(id)arg4 orthography:(id)arg5 checkOrthography:(BOOL)arg6 mutableResults:(id)arg7 offset:(NSUInteger)arg8 autocorrect:(BOOL)arg9 onlyAtInsertionPoint:(BOOL)arg10 initialCapitalize:(BOOL)arg11 autocapitalize:(BOOL)arg12 keyEventArray:(id)arg13 appIdentifier:(id)arg14 selectedRangeValue:(id)arg15 parameterBundles:(id)arg16 wordCount:(*NSInteger)arg17 countOnly:(BOOL)arg18 correction:(*id)arg19 ;
-(unsigned int)_tokenIDForString:(id)arg0 languageModel:(id)arg1 languageObject:(id)arg2 createIfAbsent:(BOOL)arg3 terminatorTokenID:(unsigned int)arg4 ;
-(unsigned int)_tokenIDForString:(id)arg0 languageModel:(id)arg1 languageObject:(id)arg2 terminatorTokenID:(unsigned int)arg3 ;
-(void)_addAdditionalGuessesForWord:(id)arg0 sender:(id)arg1 buffer:(char *)arg2 length:(NSUInteger)arg3 languageObject:(id)arg4 connection:(struct _PR_DB_IO *)arg5 accents:(char *)arg6 isCapitalized:(BOOL)arg7 isAllCaps:(BOOL)arg8 isAllAlpha:(BOOL)arg9 hasLigature:(BOOL)arg10 suggestPossessive:(BOOL)arg11 checkUser:(BOOL)arg12 checkHyphens:(BOOL)arg13 candidateList:(id)arg14 ;
-(void)_addConnectionGuessesForWord:(id)arg0 buffer:(char *)arg1 length:(NSUInteger)arg2 languageObject:(id)arg3 connection:(struct _PR_DB_IO *)arg4 candidateList:(id)arg5 ;
-(void)_addContextAlternativesForPinyinInputString:(id)arg0 modifications:(id)arg1 afterIndex:(NSUInteger)arg2 delta:(NSInteger)arg3 toArray:(id)arg4 ;
-(void)_addContextAlternativesForZhuyinInputString:(id)arg0 modifications:(id)arg1 afterIndex:(NSUInteger)arg2 delta:(NSInteger)arg3 toArray:(id)arg4 ;
-(void)_addGuessesForWordBuffer:(char *)arg0 length:(NSUInteger)arg1 languageObject:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4 minAutocorrectionLength:(NSUInteger)arg5 previousLetter:(unsigned short)arg6 nextLetter:(unsigned short)arg7 basicOnly:(BOOL)arg8 toGuesses:(id)arg9 ;
-(void)_addLanguageModelCompletionsForPrefix:(id)arg0 languageModel:(id)arg1 languageObject:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4 capitalized:(BOOL)arg5 candidates:(id)arg6 ;
-(void)_addSpaceInsertionGuessesForWord:(id)arg0 sender:(id)arg1 buffer:(char *)arg2 length:(NSUInteger)arg3 languageObject:(id)arg4 connection:(struct _PR_DB_IO *)arg5 isCapitalized:(BOOL)arg6 checkUser:(BOOL)arg7 oneLetterWords:(char *)arg8 twoLetterWords:(char *)arg9 candidateList:(id)arg10 ;
-(void)_addTwoLetterWordGuessesForWord:(id)arg0 buffer:(char *)arg1 length:(NSUInteger)arg2 languageObject:(id)arg3 isCapitalized:(BOOL)arg4 isAllCaps:(BOOL)arg5 twoLetterWords:(char *)arg6 candidateList:(id)arg7 ;
-(void)_checkEnglishArticlesInSentence:(id)arg0 buffer:(char *)arg1 length:(NSUInteger)arg2 mutableCorrections:(id)arg3 ;
-(void)_checkEnglishPhrasesInSentence:(id)arg0 buffer:(char *)arg1 length:(NSUInteger)arg2 mutableCorrections:(id)arg3 ;
-(void)_checkSentence:(id)arg0 languageObject:(id)arg1 mutableCorrections:(id)arg2 ;
-(void)_readLanguageModelParametersFromDefaults;
-(void)_readLanguageModelParametersFromDictionary:(id)arg0 ;
-(void)_releaseLanguageModels;
-(void)addAlternateDataBundleURL:(id)arg0 ;
-(void)addGuessesForKoreanWord:(id)arg0 includeAdditionalGuesses:(BOOL)arg1 toGuesses:(id)arg2 ;
-(void)addLexiconGuessesForWord:(id)arg0 buffer:(char *)arg1 length:(NSUInteger)arg2 languageObject:(id)arg3 minCorrectionLength:(NSUInteger)arg4 minExtendedCorrectionLength:(NSUInteger)arg5 isCapitalized:(BOOL)arg6 stopAfterFreeInsertions:(BOOL)arg7 toGuesses:(id)arg8 ;
-(void)addModifiedPartialPinyinToArray:(id)arg0 connection:(struct _PR_DB_IO *)arg1 fromIndex:(NSUInteger)arg2 prevIndex:(NSUInteger)arg3 prevPrevIndex:(NSUInteger)arg4 prePrevPrevIndex:(NSUInteger)arg5 startingModificationsAt:(NSUInteger)arg6 inBuffer:(char *)arg7 length:(NSUInteger)arg8 initialSyllableCount:(NSUInteger)arg9 initialScore:(NSUInteger)arg10 prevScore:(NSUInteger)arg11 prevPrevScore:(NSUInteger)arg12 lastSyllableScore:(NSUInteger)arg13 ;
-(void)addModifiedPinyinToArray:(id)arg0 connection:(struct _PR_DB_IO *)arg1 fromIndex:(NSUInteger)arg2 prevIndex:(NSUInteger)arg3 prevPrevIndex:(NSUInteger)arg4 startingModificationsAt:(NSUInteger)arg5 inBuffer:(char *)arg6 length:(NSUInteger)arg7 initialSyllableCount:(NSUInteger)arg8 initialScore:(NSUInteger)arg9 prevScore:(NSUInteger)arg10 prevPrevScore:(NSUInteger)arg11 lastSyllableScore:(NSUInteger)arg12 couldBeAbbreviatedPinyin:(BOOL)arg13 ;
-(void)addSpecialModifiedPinyinToArray:(id)arg0 inBuffer:(char *)arg1 length:(NSUInteger)arg2 atEnd:(BOOL)arg3 ;
-(void)clearCaches;
-(void)enumerateAssetDataItemsForLocale:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateCorrectionEntriesForWord:(id)arg0 maxCorrections:(NSUInteger)arg1 inLexiconForLanguage:(id)arg2 withBlock:(id)arg3 ;
-(void)enumerateCorrectionEntriesForWord:(id)arg0 maxCorrections:(NSUInteger)arg1 inLexiconForLanguageObject:(id)arg2 withBlock:(id)arg3 ;
-(void)enumerateEntriesForWord:(id)arg0 inLexiconForLanguage:(id)arg1 withBlock:(id)arg2 ;
-(void)enumerateEntriesForWord:(id)arg0 inLexiconForLanguageObject:(id)arg1 withBlock:(id)arg2 ;
-(void)getParameterValue:(*CGFloat)arg0 forName:(id)arg1 languageObject:(id)arg2 tagger:(id)arg3 appIdentifier:(id)arg4 parameterBundles:(id)arg5 defaultValue:(CGFloat)arg6 ;
-(void)loadLexiconsAndLanguageModelsForLanguage:(id)arg0 ;
-(void)loadWordLanguageModelForLanguageObject:(id)arg0 ;
-(void)personalizeEmojiArray:(id)arg0 ;
-(void)releaseAllLanguageModels;
-(void)releaseAllLexicons;
-(void)releaseDatabaseConnections;
-(void)releaseLanguageModels;
-(void)resetAllLanguageModels;
-(void)resetDataBundlesForAllLanguages;
-(void)resetDataBundlesForLanguageObject:(id)arg0 ;
-(void)resetLanguageModels;
-(void)resetTimer;
-(void)setUpdateBundleURL:(id)arg0 ;
-(void)spellServer:(id)arg0 checkSentenceCorrectionInString:(id)arg1 range:(struct _NSRange )arg2 languageObject:(id)arg3 offset:(NSUInteger)arg4 keyEventArray:(id)arg5 selectedRangeValue:(id)arg6 autocorrect:(BOOL)arg7 checkGrammar:(BOOL)arg8 mutableResults:(id)arg9 ;
-(void)spellServer:(id)arg0 checkSentenceCorrectionInString:(id)arg1 rangeInParagraph:(struct _NSRange )arg2 languageObject:(id)arg3 locale:(id)arg4 tagger:(id)arg5 offset:(NSUInteger)arg6 keyEventArray:(id)arg7 selectedRangeValue:(id)arg8 autocorrect:(BOOL)arg9 checkGrammar:(BOOL)arg10 mutableResults:(id)arg11 ;
-(void)timeout:(id)arg0 ;
-(void)updateAllLexicons;
-(void)updateLexiconsForLanguage:(id)arg0 ;
-(void)updateLexiconsForLanguageIfNecessary:(id)arg0 ;
-(void)updateLexiconsForLanguageObject:(id)arg0 ;
-(void)updateLexiconsForLanguageObjectIfNecessary:(id)arg0 ;


@end


#endif