// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYBOARDINPUTMANAGER_ZH_JA_H
#define TIKEYBOARDINPUTMANAGER_ZH_JA_H

@class NSArray, NSString, NSMutableArray, TIKeyboardTouchEvent, NSMutableDictionary, NSCharacterSet;


#import "TIKeyboardInputManager.h"
#import "MCDrawInput.h"
#import "TIKeyboardInputManager_zh_ja.h"
#import "MCKeyboardInput.h"
#import "TIWordSearch.h"
#import "TIWordSearchCandidateResultSet.h"

@interface TIKeyboardInputManager_zh_ja : TIKeyboardInputManager

@property (readonly, nonatomic) RefPtr<TI::Favonius::KeyboardLayout> baseLayout; // ivar: _baseLayout
@property (readonly, nonatomic) CGRect baseLayoutCharacterKeysFrame;
@property (retain, nonatomic) MCDrawInput *cancelledDrawInput; // ivar: _cancelledDrawInput
@property (readonly, nonatomic) TIKeyboardInputManager_zh_ja *chainedKeyboardInputManager; // ivar: chainedKeyboardInputManager
@property (retain, nonatomic) NSArray *clearedGeometryDataArray; // ivar: _clearedGeometryDataArray
@property (retain, nonatomic) NSArray *clearedTouchDataArray; // ivar: _clearedTouchDataArray
@property (readonly, nonatomic) MCKeyboardInput *composingInput; // ivar: _composingInput
@property (retain, nonatomic) TIKeyboardInputManager_zh_ja *composingKeyboardInputManager; // ivar: _composingKeyboardInputManager
@property (copy, nonatomic) id *compositionCompletionHandler; // ivar: _compositionCompletionHandler
@property (copy, nonatomic) NSString *currentClientIdentifier; // ivar: _currentClientIdentifier
@property (readonly, nonatomic) CGRect currentLayoutCharacterKeysFrame; // ivar: _currentLayoutCharacterKeysFrame
@property (copy, nonatomic) NSString *currentRecipientIdentifier; // ivar: _currentRecipientIdentifier
@property (nonatomic) RefPtr<TI::Favonius::KeyboardLayout> favoniusLayoutForCharacterKeysFrame; // ivar: _favoniusLayoutForCharacterKeysFrame
@property (readonly, nonatomic) NSMutableArray *geometryDataArray; // ivar: _geometryDataArray
@property (nonatomic) BOOL hasBackspacedIntoInputString; // ivar: _hasBackspacedIntoInputString
@property (nonatomic) BOOL hasCommittedPartialCandidate; // ivar: _hasCommittedPartialCandidate
@property (nonatomic) int lastCommittedCandidateType; // ivar: _lastCommittedCandidateType
@property (readonly, nonatomic) *__Mecabra mecabra;
@property (nonatomic) BOOL preservesComposingInput; // ivar: _preservesComposingInput
@property (retain, nonatomic) TIKeyboardTouchEvent *previousTouchEvent; // ivar: _previousTouchEvent
@property (retain, nonatomic) MCKeyboardInput *previouslyDeletedTypeInput; // ivar: _previouslyDeletedTypeInput
@property (retain, nonatomic) MCKeyboardInput *previouslyProcessedDeleteInput; // ivar: _previouslyProcessedDeleteInput
@property (readonly, nonatomic) BOOL supportsPerRecipientLearning;
@property (readonly, nonatomic) NSMutableArray *touchDataArray; // ivar: _touchDataArray
@property (readonly, nonatomic) NSMutableDictionary *touchDownEvents; // ivar: _touchDownEvents
@property (readonly, nonatomic) NSMutableDictionary *touchUpEvents; // ivar: _touchUpEvents
@property (readonly, nonatomic) BOOL usesComposingInput;
@property (readonly, nonatomic) NSCharacterSet *validCharacterSetForAutocorrection;
@property (readonly, nonatomic) TIWordSearch *wordSearch; // ivar: _wordSearch
@property (retain, nonatomic) TIWordSearchCandidateResultSet *wordSearchCandidateResultSet; // ivar: _wordSearchCandidateResultSet


+(id)dummyGeometryData;
+(id)dummyTouchData;
+(id)initializedClients;
+(id)inputMethodWithChainedKeyboardInputManager:(id)arg0 ;
+(id)offlineLearningHandleForInputMode:(id)arg0 ;
+(void)removeDynamicDictionaryForInputMode:(id)arg0 ;
-(*void)mecabraCandidateRefFromCandidate:(id)arg0 ;
-(BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)arg0 granularity:(int)arg1 ;
-(BOOL)alreadyGeneratedCandidates;
-(BOOL)isProgressivelyPathing;
-(BOOL)needsTouchEvents;
-(BOOL)shouldClearInputOnMarkedTextOutOfSync;
-(BOOL)shouldDelayUpdateComposedText;
-(BOOL)shouldUpdateLanguageModel;
-(BOOL)supportsCandidateGeneration;
-(BOOL)syncToKeyboardState:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)updateLanguageModelForKeyboardState;
-(NSInteger)addTouch:(id)arg0 shouldHitTest:(BOOL)arg1 ;
-(NSInteger)performHitTestForTouchEvent:(id)arg0 keyboardState:(id)arg1 ;
-(NSUInteger)autoquoteType;
-(id)adaptationContextReadingForReanalysisString:(id)arg0 fromRecentlyCommittedCandidates:(id)arg1 ;
-(id)candidateResultSetFromWordSearchCandidateResultSet:(id)arg0 ;
-(id)convertInputsToSyntheticInputUptoCount:(int)arg0 ;
-(id)generateRefinementsForCandidate:(id)arg0 ;
-(id)generateReplacementsForString:(id)arg0 keyLayout:(id)arg1 ;
-(id)geometryModelData;
-(id)handleAcceptedCandidate:(id)arg0 keyboardState:(id)arg1 ;
-(id)handleKeyboardInput:(id)arg0 ;
-(id)initWithConfig:(id)arg0 keyboardState:(id)arg1 ;
-(id)initWithKeyboardInputManagerToChain:(id)arg0 ;
-(id)inputsToReject;
-(id)keyboardConfiguration;
-(id)segmentsFromCandidate:(id)arg0 phraseBoundary:(BOOL)arg1 ;
-(id)touchDataForPathIndex:(NSInteger)arg0 ;
-(id)wordSeparator;
-(int)mecabraTextContentTypeFromTITextContentType:(id)arg0 ;
-(struct _NSRange )analysisStringRange;
-(struct pair<NSString *, NSArray<NSNumber *> *> )_supplementalItemIdentifiersInCurrentSelection;
-(void)_completeComposition:(BOOL)arg0 ;
-(void)abortComposition;
-(void)addProactiveTriggers:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)addSupplementalCandidatesToResultSet:(id)arg0 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg0 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg0 granularity:(int)arg1 ;
-(void)cancelComposition;
-(void)candidateRejected:(id)arg0 ;
-(void)clearInput;
-(void)commitComposition;
-(void)completeComposition;
-(void)composeText:(id)arg0 ;
-(void)composeTextWith:(id)arg0 ;
-(void)dealloc;
-(void)deleteFromInputWithContext:(id)arg0 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg0 candidateRange:(struct _NSRange )arg1 candidateHandler:(id)arg2 ;
-(void)generateCandidatesWithKeyboardState:(id)arg0 candidateRange:(struct _NSRange )arg1 completionHandler:(id)arg2 ;
-(void)handlePerformBackgroundMaintenanceNotification;
-(void)incrementUsageTrackingKeysForDeleteFromInput;
-(void)insertDummyGeometryDataAtIndex:(NSUInteger)arg0 ;
-(void)insertDummyTouchDataAtIndex:(NSUInteger)arg0 ;
-(void)lastAcceptedCandidateCorrected;
-(void)logAllCandidates;
-(void)logCommittedCandidate:(id)arg0 partial:(BOOL)arg1 ;
-(void)logDocumentContext;
-(void)logInputString;
-(void)padGeometryForInput:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)restoreGeometryForInput:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)resume;
-(void)saveGeometryForInput:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)savePartialGeometryData;
-(void)saveTouchDataForEvent:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setLanguageModelAdaptationContext;
-(void)setOriginalInput:(id)arg0 ;
-(void)skipHitTestForTouchEvent:(id)arg0 keyboardState:(id)arg1 ;
-(void)storeLanguageModelDynamicDataIncludingCache;
-(void)suspend;
-(void)syncToKeyboardState:(id)arg0 from:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)tearDown;
-(void)textAccepted:(id)arg0 fromPredictiveInputBar:(BOOL)arg1 withInput:(id)arg2 ;
-(void)updateComposedText;
-(void)updateDocumentContext;
-(void)updateProactiveCandidatesForCandidateResultSet:(id)arg0 withInput:(id)arg1 ;
-(void)updateUsageStatisticsForCandidate:(id)arg0 isPartial:(BOOL)arg1 ;


@end


#endif