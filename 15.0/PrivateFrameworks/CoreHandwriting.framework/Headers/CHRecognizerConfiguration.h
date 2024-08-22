// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHRECOGNIZERCONFIGURATION_H
#define CHRECOGNIZERCONFIGURATION_H

@class NSDictionary, NSLocale;

#import <Foundation/Foundation.h>


@interface CHRecognizerConfiguration : NSObject {
    NSUInteger _language;
    NSUInteger _script;
    NSDictionary *_decoderWeightsOverride;
}


@property (readonly, nonatomic) int autoCapitalizationMode; // ivar: _autoCapitalizationMode
@property (readonly, nonatomic) int autoCorrectionMode; // ivar: _autoCorrectionMode
@property (readonly, nonatomic) int contentType; // ivar: _contentType
@property (readonly, nonatomic) int contentTypeForNoSpaceRecognition;
@property (readonly, nonatomic) BOOL enableCachingIfAvailable; // ivar: _enableCachingIfAvailable
@property (readonly, nonatomic) BOOL enableGen2CharacterLMIfAvailable; // ivar: _enableGen2CharacterLMIfAvailable
@property (readonly, nonatomic) BOOL enableGen2ModelIfAvailable; // ivar: _enableGen2ModelIfAvailable
@property (readonly, copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) int mode; // ivar: _mode


+(*void)loadLanguageModelFromOptions:(id)arg0 fallbackLocale:(id)arg1 ;
+(BOOL)isLanguageSupported:(NSUInteger)arg0 withMode:(int)arg1 ;
+(BOOL)isLocaleSupported:(id)arg0 withMode:(int)arg1 ;
+(BOOL)shouldAdjustGroupingForLocale:(id)arg0 ;
+(BOOL)shouldAdjustGroupingHeuristicsForVeryComplexCharacters:(id)arg0 ;
+(BOOL)shouldApplyLatinSpacingForLocale:(id)arg0 ;
+(BOOL)shouldInsertSpaceBetweenPreviousChar:(id)arg0 andNextChar:(id)arg1 inLocale:(id)arg2 ;
+(BOOL)shouldPerformStrictCandidateFiltering:(id)arg0 ;
+(BOOL)shouldRefinePrefixQueryMatchesForLocale:(id)arg0 ;
+(BOOL)shouldRemoveSpaceBetweenPreviousChar:(id)arg0 andNextChar:(id)arg1 inLocale:(id)arg2 ;
+(BOOL)shouldSwapTopTwoResults:(id)arg0 locales:(id)arg1 ;
+(BOOL)shouldUseFullWidthSpaceBasedOnContextForLocale:(id)arg0 ;
+(NSInteger)drawingStrokeLimitForLocale:(id)arg0 ;
+(NSUInteger)supportedLanguageForLocale:(id)arg0 ;
+(NSUInteger)supportedScriptForLocale:(id)arg0 ;
+(id)_stringForRecognitionLanguage:(NSUInteger)arg0 ;
+(id)_stringForRecognitionScript:(NSUInteger)arg0 ;
+(id)defaultLocaleForRecognitionType:(int)arg0 withMode:(int)arg1 ;
+(id)effectiveTextInputRecognitionLocales:(id)arg0 allowFallbackSecondaryLocale:(BOOL)arg1 ;
+(id)forcedGen2ModelLocaleForLocale:(id)arg0 ;
+(id)recognitionEngineCachingKeyForRecognitionLocale:(id)arg0 ;
+(id)spellCheckingLocaleForRecognitionLocale:(id)arg0 string:(id)arg1 ;
+(id)stringForAutoCapitalizationMode:(int)arg0 ;
+(id)stringForAutoCorrectionMode:(int)arg0 ;
+(id)stringForRecognitionContentType:(int)arg0 ;
+(id)stringForRecognitionMode:(int)arg0 ;
+(int)validateRecognitionMode:(int)arg0 ;
+(struct CGSize )defaultMinimumDrawingSize;
+(void)_decodeLocale:(id)arg0 supportedLanguage:(*NSUInteger)arg1 supportedScript:(*NSUInteger)arg2 ;
-(*void)newCJKStaticLexicon;
-(*void)newCharacterLanguageModelAndMap:(*void)arg0 force:(BOOL)arg1 ;
-(*void)newGrammarFST;
-(*void)newLanguageModel;
-(*void)newLanguageModelForRecognizer:(id)arg0 async:(BOOL)arg1 synchronizationQueue:(id)arg2 ;
-(*void)newRadicalClusterFST;
-(BOOL)hasSamePostProcessingAsConfiguration:(id)arg0 ;
-(BOOL)hasSameResourcesAsConfiguration:(id)arg0 ;
-(BOOL)isEqualToRecognizerConfiguration:(id)arg0 ;
-(BOOL)isTextMode;
-(BOOL)shouldAddAlternativeWidthCandidates;
-(BOOL)shouldApplyCandidatesThresholding;
-(BOOL)shouldApplyCharacterLMRescoring;
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
-(BOOL)shouldExpandNonSpaceSeparators;
-(BOOL)shouldFallbackOnSingleCharacterExpansion;
-(BOOL)shouldFilterLowProbabilityTranscriptionPaths;
-(BOOL)shouldForwardMecabraOTAAssetsUpdate;
-(BOOL)shouldGenerateDigitLetterAlternatives;
-(BOOL)shouldIdentifyChangeableColumns;
-(BOOL)shouldKeepDuplicateTokenIDs;
-(BOOL)shouldKeepOutOfPatternCandidates;
-(BOOL)shouldLoadCJKLexicons;
-(BOOL)shouldMarkMultiWordOVS;
-(BOOL)shouldMergeNoPrecedingWhiteSpaceColumns;
-(BOOL)shouldPenalizeLetterInsertion;
-(BOOL)shouldPenalizePrefixes;
-(BOOL)shouldPerformGlobalBestSearch;
-(BOOL)shouldPerformGlobalBestSearchWithSmallLattice;
-(BOOL)shouldPerformIntegratedLexiconExpansion;
-(BOOL)shouldPerformMultiWordsExpansion;
-(BOOL)shouldPerformNoSpaceRecognition;
-(BOOL)shouldPerformRegularSpaceRecognition;
-(BOOL)shouldPreserveLegacyTranscriptionPaths;
-(BOOL)shouldPromoteCJKCommonCharacters;
-(BOOL)shouldRefineCandidates;
-(BOOL)shouldRefineChineseCharacterCandidates;
-(BOOL)shouldRelaxFinalCandidatesThresholding;
-(BOOL)shouldRemoveSpacesFromHashtagsAndMentions;
-(BOOL)shouldRemoveSpacesFromStrongURLs;
-(BOOL)shouldReorderSCTCConfusion;
-(BOOL)shouldReplaceInvalidTokenIDs;
-(BOOL)shouldRunNextGenCharacterLM;
-(BOOL)shouldRunNextGenRecognizer;
-(BOOL)shouldTransformCharacterProbabilitiesIntoLogScores;
-(BOOL)shouldTransliterateAndSynthetizeCandidates;
-(BOOL)shouldTransliterateConfusableCharacters;
-(BOOL)shouldTransliterateFrenchLigatures;
-(BOOL)shouldTransliterateHalfWidthPunctuations;
-(BOOL)shouldTransliterateSentences;
-(BOOL)shouldTreatAllSmallStrokesAsPunctuation;
-(BOOL)shouldUseCaching;
-(BOOL)shouldUseTokenPrecedingSpaces;
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
-(id)initWithMode:(int)arg0 locale:(id)arg1 contentType:(int)arg2 autoCapitalizationMode:(int)arg3 autoCorrectionMode:(int)arg4 enableCachingIfAvailable:(BOOL)arg5 enableGen2ModelIfAvailable:(BOOL)arg6 enableGen2CharacterLMIfAvailable:(BOOL)arg7 ;
-(id)languageResourceBundleWithStaticLexicon:(struct _LXLexicon *)arg0 customLexicon:(struct _LXLexicon *)arg1 wordLanguageModel:(*void)arg2 ;
-(id)linguisticResourcesFallbackLocale;
-(id)newCTCRecognitionModel;
-(id)newCTCTextDecoderWithStaticLexicon:(struct _LXLexicon *)arg0 customLexicon:(struct _LXLexicon *)arg1 wordLanguageModel:(*void)arg2 ;
-(id)newCutpointModel;
-(id)newOVSCleanupPostProcessorWithRecognizer:(id)arg0 ;
-(id)newPatternFST;
-(id)newPostProcessingFST;
-(id)newPostProcessorWithStaticLexicon:(struct _LXLexicon *)arg0 customLexicon:(struct _LXLexicon *)arg1 phraseLexicon:(struct _LXLexicon *)arg2 customPhraseLexicon:(struct _LXLexicon *)arg3 characterLM:(id)arg4 recognizer:(id)arg5 textReplacements:(id)arg6 postProcessingFST:(id)arg7 languageModel:(*void)arg8 mecabra:(struct __Mecabra *)arg9 ;
-(id)newSpellChecker;
-(id)newStrokeTransitionModel;
-(int)mecabraInputMethodType;
-(struct CHNeuralNetwork *)newFreeFormEngine;
-(struct CHNeuralNetwork *)newRecognitionEngine;
-(struct VariantMap *)newTransliterationVariantMap;
-(struct _CFBurstTrie *)newOVSTrie;
-(struct _LXLexicon *)newPhraseLexicon:(*id)arg0 ;
-(struct _LXLexicon *)newStaticLexicon:(*id)arg0 ;
-(unsigned int)requiredInappropriateFilteringFlags;
-(void)dealloc;


@end


#endif