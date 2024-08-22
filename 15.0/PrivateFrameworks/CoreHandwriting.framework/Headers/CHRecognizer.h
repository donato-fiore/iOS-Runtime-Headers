// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHRECOGNIZER_H
#define CHRECOGNIZER_H

@class NSArray, NSCharacterSet, NSString, NSMutableIndexSet, NSURL, NSLocale, CVNLPCTCTextDecoder, NSMutableDictionary, NSDictionary;
@protocol CHRecognizing, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CHRecognitionInsightRequest.h"
#import "CHRecognitionInsight.h"
#import "CHDrawing.h"
#import "CHRecognizerConfiguration.h"
#import "CHCutpointModel.h"
#import "CHPostProcessingManager.h"
#import "CHPatternNetwork.h"
#import "CHCTCRecognitionModel.h"
#import "CHSpellChecker.h"
#import "CHStrokeTransitionModel.h"

@interface CHRecognizer : NSObject <CHRecognizing>

 {
    CHRecognitionInsightRequest *_nextRecognitionInsightRequest;
    CHRecognitionInsight *_activeRecognitionInsight;
    NSArray *_whitelistMecabraRareCharacters;
    map<std::set<long>, std::vector<CHCandidateResult>, std::less<std::set<long>>, std::allocator<std::pair<const std::set<long>, std::vector<CHCandidateResult>>>> _cachedResults;
    map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> _characterIDMap;
}


@property (retain, nonatomic) NSCharacterSet *activeCharacterSet; // ivar: _activeCharacterSet
@property (nonatomic) int autoCapitalizationMode;
@property (nonatomic) int autoCorrectionMode;
@property (copy, nonatomic) CHDrawing *cachedDrawing; // ivar: _cachedDrawing
@property ? cachedResults;
@property ? characterIDMap;
@property (nonatomic) *void characterLanguageModel; // ivar: _characterLanguageModel
@property (nonatomic) *void cjkDynamicLexicon; // ivar: _cjkDynamicLexicon
@property (nonatomic) *void cjkStaticLexicon; // ivar: _cjkStaticLexicon
@property (retain, nonatomic, setter=_setConfiguration:) CHRecognizerConfiguration *configuration; // ivar: _configuration
@property (nonatomic) int contentType;
@property (nonatomic) *_LXLexicon customLexicon; // ivar: _customLexicon
@property (nonatomic) *_LXLexicon customPhraseLexicon; // ivar: _customPhraseLexicon
@property (retain, nonatomic) CHCutpointModel *cutpointModel; // ivar: _cutpointModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableCachingIfAvailable;
@property (nonatomic) BOOL enableGen2CharacterLMIfAvailable;
@property (nonatomic) BOOL enableGen2ModelIfAvailable;
@property (nonatomic) *CHNeuralNetwork engine; // ivar: _engine
@property (nonatomic) *void formatGrammarFST; // ivar: _formatGrammarFST
@property (nonatomic) *CHNeuralNetwork freeformEngine; // ivar: _freeformEngine
@property (readonly) NSUInteger hash;
@property (nonatomic) **void icuTransliterator; // ivar: _icuTransliterator
@property (nonatomic) *void languageModel; // ivar: _languageModel
@property (nonatomic) NSUInteger lastCharacterSegmentCount; // ivar: _lastCharacterSegmentCount
@property (retain, nonatomic) NSMutableIndexSet *lastCharacterSegmentIndexes; // ivar: _lastCharacterSegmentIndexes
@property (retain, nonatomic) NSURL *learningDictionaryURL; // ivar: _learningDictionaryURL
@property (nonatomic) *void lmVocabulary; // ivar: _lmVocabulary
@property (copy, nonatomic) NSLocale *locale;
@property (nonatomic) NSUInteger maxRecognitionResultCount; // ivar: _maxRecognitionResultCount
@property (nonatomic) *__Mecabra mecabra; // ivar: _mecabra
@property (nonatomic) CGSize minimumDrawingSize; // ivar: _minimumDrawingSize
@property (retain, nonatomic) CHPostProcessingManager *ovsCleanupPostProcessor; // ivar: _ovsCleanupPostProcessor
@property (nonatomic) *_CFBurstTrie ovsTrie; // ivar: _ovsTrie
@property (retain, nonatomic) CHPatternNetwork *patternFST; // ivar: _patternFST
@property (nonatomic) *_LXLexicon phraseLexicon; // ivar: _phraseLexicon
@property (retain, nonatomic) CHPatternNetwork *postProcessingFST; // ivar: _postProcessingFST
@property (retain, nonatomic) CHPostProcessingManager *postProcessor; // ivar: _postProcessor
@property (nonatomic) *void radicalClusterFST; // ivar: _radicalClusterFST
@property (nonatomic) int recognitionMode;
@property (retain, nonatomic) CHCTCRecognitionModel *recognitionModel; // ivar: _recognitionModel
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recognitionQueue; // ivar: _recognitionQueue
@property (nonatomic) int recognitionType; // ivar: _recognitionType
@property (readonly, nonatomic) CHRecognitionInsight *recordedInsightFromLastRequest;
@property (nonatomic) BOOL saveDrawingUntilNextCandidateAccepted; // ivar: _saveDrawingUntilNextCandidateAccepted
@property (copy, nonatomic) CHDrawing *savedDrawing; // ivar: _savedDrawing
@property (copy, nonatomic) NSString *savedTop1CandidateString; // ivar: _savedTop1CandidateString
@property (retain, nonatomic) CHSpellChecker *spellChecker; // ivar: _spellChecker
@property (nonatomic) *_LXLexicon staticLexicon; // ivar: _staticLexicon
@property (retain, nonatomic) CHStrokeTransitionModel *strokeTransitionModel; // ivar: _strokeTransitionModel
@property (readonly) Class superclass;
@property (retain, nonatomic) CVNLPCTCTextDecoder *textDecoder; // ivar: _textDecoder
@property (retain, nonatomic) NSMutableDictionary *textReplacementLowercasedKeyMapping; // ivar: _textReplacementLowercasedKeyMapping
@property (retain, nonatomic) NSDictionary *textReplacements; // ivar: _textReplacements
@property (nonatomic) *VariantMap transliterationVariantMap; // ivar: _transliterationVariantMap


+(BOOL)isLocaleSupported:(id)arg0 withMode:(int)arg1 ;
+(CGFloat)_computeEditPenalizationFromString:(id)arg0 toReferenceString:(id)arg1 withSuffix:(id)arg2 withCaseSensitivity:(BOOL)arg3 withFirstLetterCaseSensitivity:(BOOL)arg4 withDiacriticSensitivity:(BOOL)arg5 withDiacriticsCharSet:(id)arg6 withConsumableStrokesCharSet:(id)arg7 outputSuffix:(*id)arg8 lexiconExtraCharacters:(*id)arg9 firstLetterCaseFlipped:(*BOOL)arg10 ;
+(NSUInteger)_decodeTempDelayedSegmentID:(NSUInteger)arg0 ;
+(NSUInteger)_encodeTempDelayedSegmentID:(NSUInteger)arg0 ;
+(void)_updatePrecedingAndTrailingSeparatorsForTopCandidate:(id)arg0 history:(id)arg1 textAfter:(id)arg2 locale:(id)arg3 outTrailingSeparator:(*id)arg4 inFirstTokenHasPrecedingSpace:(BOOL)arg5 outFirstTokenHasPrecedingSpace:(*BOOL)arg6 ;
-(*unsigned int)_createNetworkTruncatedPrefixStringUsingPrefix:(id)arg0 fullHistoryStringLength:(NSInteger)arg1 hasLexiconCursor:(BOOL)arg2 prefixStringLength:(*NSUInteger)arg3 hasComplexChars:(*BOOL)arg4 activeHistoryRange:(struct _NSRange *)arg5 ;
-(BOOL)_isInappropriateLexiconEntry:(struct _LXEntry *)arg0 ;
-(BOOL)_isInappropriateString:(id)arg0 ;
-(BOOL)_isInappropriateString:(id)arg0 withLexicon:(struct _LXLexicon *)arg1 ;
-(BOOL)_isInappropriateString:(id)arg0 withTrie:(struct _CFBurstTrie *)arg1 ;
-(BOOL)_isLocaleSupported:(id)arg0 ;
-(BOOL)_shouldCapitalizeGivenHistory:(id)arg0 ;
-(BOOL)_shouldReturnDefaultResultsForDrawing:(id)arg0 ;
-(BOOL)_updateResults:(id)arg0 string:(id)arg1 score:(CGFloat)arg2 recognitionScore:(CGFloat)arg3 lexicalEntry:(BOOL)arg4 patternEntry:(BOOL)arg5 isInappropriateWord:(BOOL)arg6 wordID:(unsigned int)arg7 wordStrokeSet:(id)arg8 ;
-(BOOL)isOVSString:(id)arg0 ;
-(BOOL)isRareChineseEntry:(id)arg0 ;
-(CGFloat)_calculateJointWordLMScoreForString:(id)arg0 wordRanges:(id)arg1 wordIDs:(id)arg2 patternEntries:(id)arg3 history:(*unsigned int)arg4 historyLength:(NSUInteger)arg5 ;
-(CGFloat)_calculateJointWordLMScoreForTokenPath:(id)arg0 tokenizedResult:(id)arg1 history:(*unsigned int)arg2 historyLength:(NSUInteger)arg3 pathTranscription:(*id)arg4 ;
-(CGFloat)_candidateLatticePruningThresholdForEdgeType:(BOOL)arg0 ;
-(CGFloat)_lmRescoringWeightForPath:(id)arg0 ;
-(NSInteger)_classifyEdgeDrawingsFromContexts:(id)arg0 allEdges:(*void)arg1 segmentationNetwork:(*void)arg2 candidateNetwork:(*void)arg3 cachedEdgeSet:(*void)arg4 completeDrawing:(id)arg5 allowSmallerFinalBatch:(BOOL)arg6 shouldCancel:(id)arg7 ;
-(NSInteger)_precedingSpaceBehaviorFromRecognizerOptions:(id)arg0 ;
-(id)_activationMatrixFromInferenceCache:(id)arg0 forDrawing:(id)arg1 outStrokeEndings:(*void)arg2 ;
-(id)_addAlternativeCandidatesForTokenizedResult:(id)arg0 ;
-(id)_alternativeInterpretationsForString:(id)arg0 ;
-(id)_applySentenceTransliterationCandidates:(*unsigned short)arg0 codesLen:(int)arg1 codesMax:(int)arg2 ;
-(id)_contextTokenIDsFromHistory:(id)arg0 maxCharacterLength:(NSUInteger)arg1 maxTokenCount:(NSUInteger)arg2 ;
-(id)_defaultLegacyPunctuationResultsWithStrokeCount:(NSUInteger)arg0 ;
-(id)_defaultPunctuationResultWithStrokeCount:(NSUInteger)arg0 ;
-(id)_defaultPunctuationStringsOutputScores:(*id)arg0 maxCandidateCount:(NSInteger)arg1 ;
-(id)_historyStringFromRecognizerOptions:(id)arg0 ;
-(id)_inferenceCacheFromRecognizerOptions:(id)arg0 ;
-(id)_legacyTextRecognitionResultsForDrawing:(id)arg0 options:(id)arg1 shouldCancel:(id)arg2 ;
-(id)_lexiconCorrectionsForToken:(id)arg0 withLexicon:(struct _LXLexicon *)arg1 textReplacements:(id)arg2 consumableStrokesSet:(id)arg3 minimumTokenScore:(CGFloat)arg4 activeHistoryRange:(struct _NSRange )arg5 outBestTokenScore:(*CGFloat)arg6 shouldCapitalizeWord:(BOOL)arg7 shouldSkipEntryCorrection:(BOOL)arg8 allowFullCapsCorrections:(BOOL)arg9 minimalLengthForLowConfidenceCorrections:(NSInteger)arg10 lowConfidenceThreshold:(CGFloat)arg11 minimalLengthForCustomCapitalizationCorrections:(NSInteger)arg12 outBestTokenIndex:(*NSInteger)arg13 outFoundTokenInLexicon:(*BOOL)arg14 outFoundCaseMatchingTokenInLexicon:(*BOOL)arg15 outCorrectionFromOutOfContextEntry:(*BOOL)arg16 ;
-(id)_ovsCleanupRecognitionResult:(id)arg0 options:(id)arg1 ;
-(id)_recognitionResultsForMultipleCharacterDrawing:(id)arg0 segmentGroups:(id)arg1 options:(id)arg2 shouldCancel:(id)arg3 ;
-(id)_resultUsingNextGenerationPipelineWithDrawing:(id)arg0 options:(id)arg1 ;
-(id)_resultUsingSegmentAndDecodePipelineWithDrawing:(id)arg0 insight:(id)arg1 options:(id)arg2 shouldCancel:(id)arg3 ;
-(id)_segmentWordRangesForSegments:(id)arg0 ;
-(id)_spellCheckerCorrectionsForToken:(id)arg0 ;
-(id)_textAfterFromRecognizerOptions:(id)arg0 ;
-(id)_textReplacementResultForLegacyRecognitionResult:(id)arg0 ;
-(id)_textResultWithLexiconExpansionFromCandidateNetwork:(*void)arg0 history:(id)arg1 prefix:(id)arg2 activeHistoryRange:(struct _NSRange )arg3 rootStaticCursor:(struct _LXCursor *)arg4 rootCustomCursor:(struct _LXCursor *)arg5 rootPatternCursor:(id)arg6 segmentGroup:(id)arg7 maxRecognitionResultCount:(NSUInteger)arg8 precedingSpaceBehavior:(NSInteger)arg9 shouldPerformNoSpaceRecognition:(BOOL)arg10 inLatticePaths:(*void)arg11 outLatticePaths:(*void)arg12 totalStrokeCount:(NSInteger)arg13 totalSubstrokeCount:(NSInteger)arg14 shouldCancel:(id)arg15 ;
-(id)_textResultWithNetworkComposeFromCandidateNetwork:(*void)arg0 segmentGroup:(id)arg1 drawing:(id)arg2 maxRecognitionResultCount:(NSUInteger)arg3 history:(id)arg4 totalStrokeCount:(NSInteger)arg5 totalSubstrokeCount:(NSInteger)arg6 ;
-(id)_tokenFromLegacyResult:(id)arg0 wordIndex:(NSUInteger)arg1 strokeSet:(id)arg2 substrokeCount:(NSInteger)arg3 ;
-(id)_tokenizedTextRecognitionResultForDrawing:(id)arg0 options:(id)arg1 shouldCancel:(id)arg2 ;
-(id)_tokenizedTextResultFromTextDecodingResult:(id)arg0 options:(id)arg1 strokeEndings:(struct vector<long, std::allocator<long>> )arg2 drawing:(id)arg3 ;
-(id)_tokensUsingLMTokenizerForString:(id)arg0 wordRanges:(id)arg1 nonWordPatterns:(id)arg2 outTokenIDs:(*id)arg3 ;
-(id)_transliterationVariantsForString:(id)arg0 ;
-(id)bestPathsFromNetwork:(*void)arg0 pathCount:(NSUInteger)arg1 staticLexiconCursor:(struct _LXCursor *)arg2 customLexiconCursor:(struct _LXCursor *)arg3 patternCursor:(id)arg4 history:(id)arg5 activeHistoryRange:(struct _NSRange )arg6 mecabraIDs:(*void)arg7 segmentGroup:(id)arg8 precedingSpaceBehavior:(NSInteger)arg9 effectiveContentType:(int)arg10 shouldAllowSpaceInsertion:(BOOL)arg11 inLatticePaths:(*void)arg12 outLatticePaths:(*void)arg13 totalStrokeCount:(NSInteger)arg14 totalSubstrokeCount:(NSInteger)arg15 ;
-(id)bestTranscriptionPathsForTokenizedResult:(id)arg0 scores:(*id)arg1 history:(id)arg2 ;
-(id)characterSetForStrings:(id)arg0 ;
-(id)chatBubbleCandidateResultForDrawing:(id)arg0 candidate:(struct CHCandidateResult *)arg1 rejectionResult:(*id)arg2 ;
-(id)cloudCandidateResultForDrawing:(id)arg0 candidate:(struct CHCandidateResult *)arg1 rejectionResult:(*id)arg2 ;
-(id)ellipseCandidateResultForDrawing:(id)arg0 candidate:(struct CHCandidateResult *)arg1 ;
-(id)heartCandidateResultForDrawing:(id)arg0 candidate:(struct CHCandidateResult *)arg1 ;
-(id)initWithMode:(int)arg0 locale:(id)arg1 ;
-(id)initWithMode:(int)arg0 locale:(id)arg1 learningDictionaryURL:(id)arg2 ;
-(id)initWithMode:(int)arg0 locale:(id)arg1 learningDictionaryURL:(id)arg2 recognizerOptions:(id)arg3 ;
-(id)initWithMode:(int)arg0 locale:(id)arg1 recognizerOptions:(id)arg2 ;
-(id)initWithType:(int)arg0 mode:(int)arg1 ;
-(id)initWithType:(int)arg0 mode:(int)arg1 learningDictionaryURL:(id)arg2 ;
-(id)initWithType:(int)arg0 mode:(int)arg1 locale:(struct __CFLocale *)arg2 ;
-(id)initWithType:(int)arg0 mode:(int)arg1 locale:(struct __CFLocale *)arg2 learningDictionaryURL:(id)arg3 ;
-(id)lineCandidateResultForDrawing:(id)arg0 candidate:(struct CHCandidateResult *)arg1 ;
-(id)manhattanLineCandidateResultForDrawing:(id)arg0 candidate:(struct CHCandidateResult *)arg1 rejectionResult:(*id)arg2 ;
-(id)mecabraRareWordIndexes:(id)arg0 wordRanges:(id)arg1 ;
-(id)obfuscateString:(id)arg0 ;
-(id)outlineArrowCandidateResultForDrawing:(id)arg0 candidate:(struct CHCandidateResult *)arg1 ;
-(id)pentagonCandidateResultForDrawing:(id)arg0 candidate:(struct CHCandidateResult *)arg1 ;
-(id)recognitionResultsForDrawing:(id)arg0 options:(id)arg1 ;
-(id)recognitionResultsForDrawing:(id)arg0 options:(id)arg1 shouldCancel:(id)arg2 ;
-(id)recognitionResultsForSingleCharacterDrawing:(id)arg0 segmentGroup:(id)arg1 options:(id)arg2 history:(id)arg3 ;
-(id)recognitionResultsForSketchDrawing:(id)arg0 options:(id)arg1 ;
-(id)rectangleCandidateResultForDrawing:(id)arg0 candidate:(struct CHCandidateResult *)arg1 ;
-(id)segmentationPointsForDrawing:(id)arg0 ;
-(id)sketchCodeForDescription:(id)arg0 ;
-(id)sketchDescriptionForCode:(int)arg0 ;
-(id)starCandidateResultForDrawing:(id)arg0 candidate:(struct CHCandidateResult *)arg1 ;
-(id)textRecognitionResultForDrawing:(id)arg0 options:(id)arg1 shouldCancel:(id)arg2 ;
-(id)tokenizedTextResultForChineseLatticePaths:(*void)arg0 maximumPathCount:(NSUInteger)arg1 network:(*void)arg2 mecabraIDs:(*void)arg3 startNode:(NSInteger)arg4 endNode:(NSInteger)arg5 segmentGroup:(id)arg6 ;
-(id)tokenizedTextResultForRomanLatticePaths:(*void)arg0 history:(id)arg1 activeHistoryRange:(struct _NSRange )arg2 isMultiWordsPath:(BOOL)arg3 isNoSpacePath:(BOOL)arg4 maximumPathCount:(NSUInteger)arg5 startNode:(NSInteger)arg6 segmentGroup:(id)arg7 precedingSpaceBehavior:(NSInteger)arg8 totalStrokeCount:(NSInteger)arg9 totalSubstrokeCount:(NSInteger)arg10 ;
-(id)tokenizedTextResultForRomanMultiWordsLatticePaths:(*void)arg0 maximumResultCount:(NSUInteger)arg1 history:(id)arg2 activeHistoryRange:(struct _NSRange )arg3 startNode:(NSInteger)arg4 segmentGroup:(id)arg5 precedingSpaceBehavior:(NSInteger)arg6 ;
-(id)tokenizedTextResultForRomanNoSpaceLatticePaths:(*void)arg0 maximumResultCount:(NSUInteger)arg1 activeHistoryRange:(struct _NSRange )arg2 precedingSpaceBehavior:(NSInteger)arg3 totalStrokeCount:(NSInteger)arg4 totalSubstrokeCount:(NSInteger)arg5 ;
-(id)tokenizedTextResultForRomanSingleWordLatticePaths:(*void)arg0 history:(id)arg1 activeHistoryRange:(struct _NSRange )arg2 startNode:(NSInteger)arg3 segmentGroup:(id)arg4 ;
-(id)transliterationVariantsForString:(id)arg0 ;
-(id)triangleCandidateResultForDrawing:(id)arg0 candidate:(struct CHCandidateResult *)arg1 ;
-(struct CGPoint )_drawingAnchorPointFromRecognizerOptions:(id)arg0 ;
-(struct CGRect )_computeLocalFrameWithLeftBounds:(struct CGRect )arg0 rightBounds:(struct CGRect )arg1 delayedStrokeDrawingsLocalBounds:(*void)arg2 delayedStrokeDrawings:(id)arg3 ;
-(struct CGRect )_initialContextRectFromRecognizerOptions:(id)arg0 ;
-(struct Network )_candidateNetworkFromSegmentationNetwork:(*void)arg0 segmentGroup:(id)arg1 drawing:(id)arg2 boundsAtNode:(*void)arg3 matchingStrokeRange:(struct _NSRange )arg4 sortedSegmentIndexes:(struct vector<long, std::allocator<long>> )arg5 shouldCancel:(id)arg6 ;
-(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )_stringForCode:(unsigned int)arg0 ;
-(struct set<long, std::less<long>, std::allocator<long>> )_correctedDelayedStrokeIDs:(*void)arg0 inDrawing:(id)arg1 segmentationPoints:(id)arg2 correctedSegmentationPoints:(*id)arg3 ;
-(struct vector<const void *, std::allocator<const void *>> )completionsForCandidate:(id)arg0 candidateContext:(id)arg1 prefix:(id)arg2 option:(NSUInteger)arg3 ;
-(struct vector<const void *, std::allocator<const void *>> )completionsForCandidate:(id)arg0 prefix:(id)arg1 option:(NSUInteger)arg2 ;
-(struct vector<long, std::allocator<long>> )_sortedIndexesForSegmentGroup:(id)arg0 drawing:(id)arg1 ;
-(unsigned int)_tokenIDForString:(id)arg0 withLexicon:(struct _LXLexicon *)arg1 outIsInappropriate:(*BOOL)arg2 ;
-(unsigned int)_tokenIDForUNKCharacterString:(id)arg0 ;
-(void)_addEdgesFromCandidates:(struct vector<CHCandidateResult, std::allocator<CHCandidateResult>> )arg0 toEdges:(*void)arg1 referenceEdge:(*void)arg2 network:(*void)arg3 consumedSegmentCount:(NSInteger)arg4 delayedSegmentIDs:(struct vector<long, std::allocator<long>> )arg5 numSubstrokes:(NSInteger)arg6 ;
-(void)_adjustCandidatesForChinesePunctuation:(*void)arg0 segmentDrawing:(id)arg1 completeDrawing:(id)arg2 ;
-(void)_adjustCandidatesForConfusableCharacters:(*void)arg0 ;
-(void)_adjustCandidatesForRomanPunctuation:(*void)arg0 segmentDrawing:(id)arg1 ;
-(void)_adjustResultsForConfusableCharacters:(id)arg0 ;
-(void)_applyTransliterationAndSyntheticCandidates:(*void)arg0 ;
-(void)_cachingWithMatchingStrokeRange:(struct _NSRange )arg0 drawing:(id)arg1 ;
-(void)_calculateBestTranscriptionPaths:(*id)arg0 scores:(*id)arg1 fromTokenizedResult:(id)arg2 pathCount:(NSInteger)arg3 history:(id)arg4 skipLMRescoring:(BOOL)arg5 ;
-(void)_filterNonHumanFriendlyCandidates:(id)arg0 ;
-(void)_penalizeCandidatesForRomanPunctuation:(*void)arg0 punctuationStrokeCount:(NSInteger)arg1 ;
-(void)_refineCandidates:(*void)arg0 withAllowedCandidateCodes:(*void)arg1 ;
-(void)_refineChineseCharacterCandidates:(*void)arg0 drawing:(id)arg1 ;
-(void)_removeOVSResults:(id)arg0 withHistory:(id)arg1 ;
-(void)_rescoreCandidatesWithLanguageModel:(*void)arg0 history:(id)arg1 ;
-(void)_updateLanguageModel:(*void)arg0 ;
-(void)candidateAccepted:(*void)arg0 ;
-(void)endpointsForDrawing:(id)arg0 startLocation:(struct CGPoint *)arg1 endLocation:(struct CGPoint *)arg2 ;
-(void)logCandidateIfAppropriate:(*void)arg0 ;
-(void)recordInsightWithRequest:(id)arg0 ;
-(void)updateAddressBookLexicon:(id)arg0 ;
-(void)updateUserDictionaryLexicon:(id)arg0 ;


@end


#endif