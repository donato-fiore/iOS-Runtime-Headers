// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYBOARDINPUTMANAGERCHINESEPHONETIC_H
#define TIKEYBOARDINPUTMANAGERCHINESEPHONETIC_H

@class NSOperationQueue, TIKeyboardCandidate, NSString, TIMecabraIMLogger, TIKeyboardCandidateResultSet, NSArray, NSMutableArray;
@protocol TIKeyboardInputManagerChineseCompletion;


#import "TIKeyboardInputManagerChinese.h"
#import "CIMCandidateData.h"
#import "TIConversionHistory.h"

@interface TIKeyboardInputManagerChinesePhonetic : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion>

 {
    BOOL _usesCandidateSelection;
    CIMCandidateData *_candidateData;
    NSOperationQueue *_operationQueue;
    BOOL _isCandidateSelected;
    BOOL _acceptingCandidate;
    BOOL _isInAmbiguousMode;
    BOOL _lockingPinyinSyllableSelection;
}


@property (readonly, nonatomic) TIKeyboardCandidate *candidateForInlineTextSegmentation;
@property (copy, nonatomic) NSString *composedTextBeforeFirstSyllableLocked; // ivar: _composedTextBeforeFirstSyllableLocked
@property (retain, nonatomic) TIConversionHistory *conversionHistory; // ivar: _conversionHistory
@property (readonly, nonatomic) NSString *convertedInput;
@property (nonatomic) BOOL filterCandidatesUsingInputIndex; // ivar: _filterCandidatesUsingInputIndex
@property (readonly, nonatomic) NSString *inputStringForSearch;
@property (readonly, copy, nonatomic) NSString *internalInputString;
@property (retain, nonatomic) TIMecabraIMLogger *logger; // ivar: _logger
@property (retain, nonatomic) TIKeyboardCandidateResultSet *mostRecentCandidateResultSetPendingDisplay; // ivar: _mostRecentCandidateResultSetPendingDisplay
@property (readonly, nonatomic, getter=isPhraseBoundarySet) BOOL phraseBoundarySet;
@property (retain, nonatomic) NSArray *pinyinSyllableCandidates; // ivar: _pinyinSyllableCandidates
@property (copy, nonatomic) NSString *remainingInput; // ivar: _remainingInput
@property (retain, nonatomic) NSMutableArray *replacedAmbiguousPinyinSyllables; // ivar: _replacedAmbiguousPinyinSyllables
@property (retain, nonatomic) NSMutableArray *replacementUnambiguousPinyinSyllables; // ivar: _replacementUnambiguousPinyinSyllables
@property (nonatomic) NSUInteger selectedPinyinSyllableCandidateIndex; // ivar: _selectedPinyinSyllableCandidateIndex
@property (nonatomic) BOOL shouldAdvanceSyllableSelection; // ivar: _shouldAdvanceSyllableSelection
@property (nonatomic) BOOL shouldClearBeforeContinuousPath; // ivar: _shouldClearBeforeContinuousPath
@property (nonatomic) BOOL skipSetMarkedTextDuringInput; // ivar: _skipSetMarkedTextDuringInput
@property (readonly, nonatomic) NSString *unconvertedInput;
@property (readonly, nonatomic) BOOL usesGeometryModelData;


+(Class)wordSearchClass;
+(id)ambiguousDefaults;
+(id)ambiguousPinyinSet;
+(id)directlyCommittedCharacterSetForEmptyInline;
+(id)stringByRemovingSyllableSeparatorsFromString:(id)arg0 ;
+(id)stringFallBackForTenKeyInput:(id)arg0 range:(struct _NSRange )arg1 ;
-(BOOL)_shouldCommitInputDirectly:(id)arg0 ;
-(BOOL)canStartSentenceAfterString:(id)arg0 ;
-(BOOL)commitsAcceptedCandidate;
-(BOOL)doesComposeText;
-(BOOL)generateReanalysisCandidatesIfAppropriate;
-(BOOL)handleDirectlyCommitForInput:(id)arg0 withContext:(id)arg1 ;
-(BOOL)hasExtensionEmojiCandidates;
-(BOOL)hasLockedSyllable;
-(BOOL)ignoresDeadKeys;
-(BOOL)inputContinuesGB18030OrUnicodeLookupKey:(id)arg0 ;
-(BOOL)isSpecialInput:(id)arg0 ;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(BOOL)shouldDelayUpdateComposedText;
-(BOOL)shouldExtendPriorWord;
-(BOOL)shouldLookForCompletionCandidates;
-(BOOL)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)arg0 ;
-(BOOL)suppliesCompletions;
-(BOOL)supportsLearning;
-(BOOL)supportsNumberKeySelection;
-(BOOL)supportsPerRecipientLearning;
-(BOOL)supportsSetPhraseBoundary;
-(BOOL)suppressCompletionsForFieldEditor;
-(BOOL)updateCandidatesByWaitingForResults:(BOOL)arg0 ;
-(BOOL)usesAutoDeleteWord;
-(BOOL)usesCandidateSelection;
-(NSInteger)addTouch:(id)arg0 shouldHitTest:(BOOL)arg1 ;
-(NSUInteger)internalInputCount;
-(NSUInteger)internalInputIndex;
-(NSUInteger)phraseBoundary;
-(id)addInput:(id)arg0 flags:(unsigned int)arg1 point:(struct CGPoint )arg2 firstDelete:(*NSUInteger)arg3 ;
-(id)candidateResultSet;
-(id)candidateResultSetByWaitingForResults:(BOOL)arg0 ;
-(id)composedTextForSelectedCandidate:(id)arg0 remainingInput:(id)arg1 ;
-(id)convertInputsToSyntheticInputUptoCount:(int)arg0 ;
-(id)defaultCandidate;
-(id)deleteFromInput:(*NSUInteger)arg0 ;
-(id)didAcceptCandidate:(id)arg0 ;
-(id)externalStringToInternal:(id)arg0 ;
-(id)handleAcceptedCandidate:(id)arg0 keyboardState:(id)arg1 ;
-(id)handleKeyboardInput:(id)arg0 ;
-(id)initWithConfig:(id)arg0 keyboardState:(id)arg1 ;
-(id)inputString;
-(id)internalStringToExternal:(id)arg0 ;
-(id)keyboardBehaviors;
-(id)keyboardConfigurationLayoutTag;
-(id)locale;
-(id)newInputManagerState;
-(id)phoneticSortingMethod;
-(id)rawInputString;
-(id)remapInput:(id)arg0 isFacemarkInput:(*BOOL)arg1 ;
-(id)searchStringForMarkedText;
-(id)segmentedPinyinStringFromString:(id)arg0 ;
-(id)sentenceDelimitingCharacters;
-(id)sortingMethods;
-(id)stringByPrependingConvertedCandidateTextToString:(id)arg0 ;
-(id)stringByStrippingConvertedCandidateTextFromString:(id)arg0 ;
-(int)inputMethodType;
-(struct _NSRange )analysisStringRange;
-(unsigned int)externalIndexToInternal:(unsigned int)arg0 ;
-(unsigned int)externalIndexToInternal:(unsigned int)arg0 shouldBoundToInputCount:(BOOL)arg1 ;
-(unsigned int)inputCount;
-(unsigned int)inputIndex;
-(unsigned int)internalIndexToExternal:(unsigned int)arg0 ;
-(void)_nop;
-(void)addInput:(id)arg0 withContext:(id)arg1 ;
-(void)addInputToInternal:(id)arg0 ;
-(void)checkAutocorrectionDictionaries;
-(void)clearDynamicDictionary;
-(void)clearInput;
-(void)clearPinyinSyllableSelection;
-(void)dealloc;
-(void)didDeleteCandidates:(id)arg0 ;
-(void)handleAcceptedPinyinDisambiguationCandidate:(id)arg0 keyboardState:(id)arg1 ;
-(void)inputLocationChanged;
-(void)lastAcceptedCandidateCorrected;
-(void)loadAddressBook;
-(void)processDeleteInputs;
-(void)resume;
-(void)revertLastDisambiguation;
-(void)setAutoCorrects:(BOOL)arg0 ;
-(void)setInHardwareKeyboardMode:(BOOL)arg0 ;
-(void)setInput:(id)arg0 ;
-(void)setPhraseBoundary:(NSUInteger)arg0 ;
-(void)shiftPinyinSyllableSelection;
-(void)storeLanguageModelDynamicDataIncludingCache;
-(void)suspend;
-(void)syncToKeyboardState:(id)arg0 from:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)syncToLayoutState:(id)arg0 ;
-(void)updateComposedText;
-(void)wordSearchEngineDidFindCandidates:(id)arg0 forOperation:(id)arg1 ;
-(void)wordSearchEngineDidFindPredictionCandidates:(id)arg0 ;


@end


#endif