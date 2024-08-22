// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHRECOGNIZERCONFIGURATION_H
#define CHRECOGNIZERCONFIGURATION_H

@class NSLocale;

#import <Foundation/Foundation.h>


@interface CHRecognizerConfiguration : NSObject {
    NSUInteger _language;
    NSUInteger _script;
}


@property (readonly, nonatomic) int autoCapitalizationMode; // ivar: _autoCapitalizationMode
@property (readonly, nonatomic) int autoCorrectionMode; // ivar: _autoCorrectionMode
@property (readonly, nonatomic) int contentType; // ivar: _contentType
@property (readonly, nonatomic) int contentTypeForNoSpaceRecognition; // ivar: _contentTypeForNoSpaceRecognition
@property (readonly, nonatomic) BOOL enableCachingIfAvailable; // ivar: _enableCachingIfAvailable
@property (readonly, nonatomic) BOOL enableGen2CharacterLMIfAvailable; // ivar: _enableGen2CharacterLMIfAvailable
@property (readonly, nonatomic) BOOL enableGen2ModelIfAvailable; // ivar: _enableGen2ModelIfAvailable
@property (readonly, copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) int mode; // ivar: _mode


+(*void)loadWordLanguageModelFromOptions:(id)arg0 fallbackLocale:(id)arg1 ;
+(BOOL)isLanguageSupported:(NSUInteger)arg0 withMode:(int)arg1 ;
+(BOOL)isLocaleSupported:(id)arg0 withMode:(int)arg1 ;
+(BOOL)isSupportedCyrillicScriptLocale:(id)arg0 withMode:(int)arg1 ;
+(BOOL)isSupportedLatinScriptLocale:(id)arg0 withMode:(int)arg1 ;
+(BOOL)shouldAddSpaceToNeutralQuotationMarks:(id)arg0 ;
+(BOOL)shouldAdjustGroupingForLocale:(id)arg0 ;
+(BOOL)shouldAdjustGroupingHeuristicsForVeryComplexCharacters:(id)arg0 ;
+(BOOL)shouldAllowSpaceInsertionGestureForLocale:(id)arg0 ;
+(BOOL)shouldApplyLatinSpacingForLocale:(id)arg0 ;
+(BOOL)shouldForceNoAlternativeRecognitionCandidates:(id)arg0 ;
+(BOOL)shouldInsertSpaceBetweenPreviousChar:(id)arg0 andNextChar:(id)arg1 inLocale:(id)arg2 inString:(id)arg3 atRange:(struct _NSRange )arg4 withQuoteCount:(id)arg5 ;
+(BOOL)shouldPerformStrictCandidateFiltering:(id)arg0 ;
+(BOOL)shouldRefinePrefixQueryMatchesForLocale:(id)arg0 ;
+(BOOL)shouldRemoveSpaceBetweenPreviousChar:(id)arg0 andNextChar:(id)arg1 inLocale:(id)arg2 ;
+(BOOL)shouldSwapCyrillicTopResult:(id)arg0 topRange:(struct _NSRange )arg1 englishResult:(id)arg2 englishRange:(struct _NSRange )arg3 prevousGroupTopString:(id)arg4 ;
+(BOOL)shouldUseFullWidthSpaceBasedOnContextForLocale:(id)arg0 ;
+(BOOL)shouldUseStrokeReorderingForMode:(int)arg0 ;
+(CGFloat)overridenParameterValueForKey:(id)arg0 defaultValue:(CGFloat)arg1 ;
+(CGFloat)skipLatinActivationThreshold;
+(NSInteger)drawingStrokeLimitForLocale:(id)arg0 ;
+(NSUInteger)supportedLanguageForLocale:(id)arg0 ;
+(NSUInteger)supportedScriptForLocale:(id)arg0 ;
+(id)_stringForRecognitionLanguage:(NSUInteger)arg0 ;
+(id)_stringForRecognitionScript:(NSUInteger)arg0 ;
+(id)allNonLatinModelNames;
+(id)defaultActiveCharacterSetForLocale:(id)arg0 ;
+(id)defaultActiveCharacterSetForLocales:(id)arg0 ;
+(id)defaultLocaleForRecognitionType:(int)arg0 withMode:(int)arg1 ;
+(id)effectiveRecognitionLocales:(id)arg0 recognitionMode:(int)arg1 ;
+(id)forcedGen2ModelLocaleForLocale:(id)arg0 ;
+(id)localesByLanguageGroup:(id)arg0 ;
+(id)parametersOverride;
+(id)recognitionEngineCachingKeyForRecognitionLocale:(id)arg0 ;
+(id)spellCheckingLocaleForRecognitionLocale:(id)arg0 string:(id)arg1 ;
+(id)stringForAutoCapitalizationMode:(int)arg0 ;
+(id)stringForAutoCorrectionMode:(int)arg0 ;
+(id)stringForRecognitionContentType:(int)arg0 ;
+(id)stringForRecognitionMode:(int)arg0 ;
+(id)swappableColumnIndexesFromResults:(id)arg0 locales:(id)arg1 ;
+(id)swappableColumnIndexesFromResults:(id)arg0 locales:(id)arg1 topLocaleIndex:(NSInteger)arg2 ;
+(struct CGSize )defaultMinimumDrawingSize;
+(void)_decodeLocale:(id)arg0 supportedLanguage:(*NSUInteger)arg1 supportedScript:(*NSUInteger)arg2 ;
+(void)setParametersOverride:(id)arg0 ;
-(*unk)lexiconStringNormalizationFunction;
-(*void)newCJKStaticLexicon;
-(*void)newCharacterLanguageModelAndMap:(*void)arg0 force:(BOOL)arg1 ;
-(*void)newGrammarFST;
-(*void)newRadicalClusterFST;
-(*void)newWordLanguageModel;
-(*void)newWordLanguageModelForRecognizer:(id)arg0 async:(BOOL)arg1 synchronizationQueue:(id)arg2 ;
-(BOOL)hasSamePostProcessingAsConfiguration:(id)arg0 ;
-(BOOL)hasSameResourcesAsConfiguration:(id)arg0 ;
-(BOOL)isEqualToRecognizerConfiguration:(id)arg0 ;
-(BOOL)isTextMode;
-(BOOL)shouldAddAlternativeWidthCandidates;
-(BOOL)shouldAllowNGramCharacterLM;
-(BOOL)shouldApplyCandidatesThresholding;
-(BOOL)shouldApplyChinesePostProcessing;
-(BOOL)shouldApplyDiacriticSensitivity;
-(BOOL)shouldApplyLMRescoring;
-(BOOL)shouldApplyLMSorting;
-(BOOL)shouldApplyLexicalPenalty;
-(BOOL)shouldApplyRomanPostProcessing;
-(BOOL)shouldApplySemanticTokenization;
-(BOOL)shouldAutoCapitalize;
-(BOOL)shouldAutoCorrect;
-(BOOL)shouldComposeLexiconWithNetwork;
-(BOOL)shouldComputeStrokePenalties;
-(BOOL)shouldConvertKanaInPostProcessing;
-(BOOL)shouldDetectChinesePunctuation;
-(BOOL)shouldDetectRomanPunctuation;
-(BOOL)shouldEnforceGrammarOnTransliterations;
-(BOOL)shouldExpandCodePoints;
-(BOOL)shouldExpandLexiconInNetwork;
-(BOOL)shouldFallbackOnSingleCharacterExpansion;
-(BOOL)shouldFilterLowProbabilityTranscriptionPaths;
-(BOOL)shouldForwardMecabraOTAAssetsUpdate;
-(BOOL)shouldGenerateDigitLetterAlternatives;
-(BOOL)shouldIdentifyChangeableColumns;
-(BOOL)shouldKeepDuplicateTokenIDs;
-(BOOL)shouldKeepOutOfPatternCandidates;
-(BOOL)shouldLoadCJKLexicons;
-(BOOL)shouldMarkMultiWordOVS;
-(BOOL)shouldMarkNoWhiteSpaceColumnsChangeable;
-(BOOL)shouldPenalizeLetterInsertion;
-(BOOL)shouldPenalizePrefixes;
-(BOOL)shouldPerformGlobalBestSearch;
-(BOOL)shouldPerformGlobalBestSearchWithSmallLattice;
-(BOOL)shouldPerformIntegratedLexiconExpansion;
-(BOOL)shouldPreserveLegacyTranscriptionPaths;
-(BOOL)shouldPromoteCJKCommonCharacters;
-(BOOL)shouldPruneMixedScriptWordPaths;
-(BOOL)shouldRecoverCyrillicCandidates;
-(BOOL)shouldRefineCandidates;
-(BOOL)shouldRefineChineseCharacterCandidates;
-(BOOL)shouldRelaxFinalCandidatesThresholding;
-(BOOL)shouldRemoveSpacesFromEnglishAndKoreanParticles;
-(BOOL)shouldRemoveSpacesFromHashtagsAndMentions;
-(BOOL)shouldRemoveSpacesFromStrongURLs;
-(BOOL)shouldReorderSCTCConfusion;
-(BOOL)shouldReplaceInvalidTokenIDs;
-(BOOL)shouldRunLexiconCorrectionPostProcessingStep;
-(BOOL)shouldRunNextGenCharacterLM;
-(BOOL)shouldRunNextGenRecognizer;
-(BOOL)shouldTransformCharacterProbabilitiesIntoLogScores;
-(BOOL)shouldTransliterateAndSynthetizeCandidates;
-(BOOL)shouldTransliterateConfusableCharacters;
-(BOOL)shouldTransliterateForChineseJapaneseLigatures;
-(BOOL)shouldTransliterateFrenchLigatures;
-(BOOL)shouldTransliterateHalfWidthPunctuations;
-(BOOL)shouldTransliterateSentencesSCTC;
-(BOOL)shouldTreatAllSmallStrokesAsPunctuation;
-(BOOL)shouldUpdateChangeableColumnCountWithPhraseLexicon;
-(BOOL)shouldUseCaching;
-(BOOL)shouldUseTokenPrecedingSpaces;
-(BOOL)unsafeForSpellCorrection;
-(CGFloat)characterLMLowerBoundLogProbability;
-(CGFloat)decodingCharacterLMWeight;
-(CGFloat)decodingLexiconLowerBoundLogProbability;
-(CGFloat)decodingLexiconWeight;
-(CGFloat)decodingWordLMLowerBoundLogProbability;
-(CGFloat)decodingWordLMWeight;
-(NSInteger)engineCandidateCount;
-(NSInteger)maxRecognitionResultDefaultCount;
-(NSInteger)precedingSpaceDefaultBehavior;
-(NSUInteger)effectiveEngineLanguage;
-(NSUInteger)supportedSegmentationStrategy;
-(id)configurationKey;
-(id)decodingCommitActionBlock:(SEL)arg0 ;
-(id)description;
-(id)forcedActiveCharacterSet;
-(id)initWithMode:(int)arg0 locale:(id)arg1 contentType:(int)arg2 autoCapitalizationMode:(int)arg3 autoCorrectionMode:(int)arg4 enableCachingIfAvailable:(BOOL)arg5 enableGen2ModelIfAvailable:(BOOL)arg6 enableGen2CharacterLMIfAvailable:(BOOL)arg7 ;
-(id)initWithMode:(int)arg0 locale:(id)arg1 contentType:(int)arg2 enableCachingIfAvailable:(BOOL)arg3 enableGen2ModelIfAvailable:(BOOL)arg4 enableGen2CharacterLMIfAvailable:(BOOL)arg5 ;
-(id)languageResourceBundleWithStaticLexicon:(struct _LXLexicon *)arg0 customLexicon:(struct _LXLexicon *)arg1 wordLanguageModel:(*void)arg2 ;
-(id)linguisticResourcesFallbackLocale;
-(id)newCTCRecognitionModel;
-(id)newCTCTextDecoderWithStaticLexicon:(struct _LXLexicon *)arg0 customLexicon:(struct _LXLexicon *)arg1 wordLanguageModel:(*void)arg2 ;
-(id)newMecabraWrapper;
-(id)newMergedResultPostProcessorWithStaticLexicon:(struct _LXLexicon *)arg0 customLexicon:(struct _LXLexicon *)arg1 stringChecker:(id)arg2 ;
-(id)newOVSStringCheckerWithStaticLexicon:(struct _LXLexicon *)arg0 customLexicon:(struct _LXLexicon *)arg1 ;
-(id)newPatternFST;
-(id)newPostProcessorWithStaticLexicon:(struct _LXLexicon *)arg0 customLexicon:(struct _LXLexicon *)arg1 phraseLexicon:(struct _LXLexicon *)arg2 customPhraseLexicon:(struct _LXLexicon *)arg3 characterLM:(id)arg4 textReplacements:(id)arg5 postProcessingFST:(id)arg6 wordLM:(*void)arg7 mecabraWrapper:(id)arg8 ovsStringChecker:(id)arg9 spellChecker:(id)arg10 lmVocabulary:(*void)arg11 maxResultCount:(NSInteger)arg12 ;
-(id)newSpellChecker;
-(id)sharedPostProcessingFST;
-(int)mecabraInputMethodType;
-(struct CHNeuralNetwork *)newFreeFormEngine;
-(struct CHNeuralNetwork *)newRecognitionEngine;
-(struct VariantMap *)newTransliterationVariantMap;
-(struct _LXLexicon *)newPhraseLexicon:(*id)arg0 ;
-(struct _LXLexicon *)newSecondaryStaticLexicon:(*id)arg0 ;
-(struct _LXLexicon *)newStaticLexicon:(*id)arg0 ;
-(struct _LXLexicon *)postProcessorLexiconWithStaticLexicon:(struct _LXLexicon *)arg0 secondaryLexicon:(struct _LXLexicon *)arg1 ;
-(unsigned int)requiredInappropriateFilteringFlags;


@end


#endif