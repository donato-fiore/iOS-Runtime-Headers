// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYBOARDINPUTMANAGERCHINESE_H
#define TIKEYBOARDINPUTMANAGERCHINESE_H

@class ja, TIWordSearch, NSString, TIMathSymbolPunctuationController, NSOperationQueue;


#import "CIMCandidateData.h"

@interface TIKeyboardInputManagerChinese : ja {
    TIWordSearch *_wordSearch;
}


@property (readonly) CIMCandidateData *candidateData; // ivar: _candidateData
@property (copy, nonatomic) NSString *currentKeyHint; // ivar: _currentKeyHint
@property BOOL duringDeleteFromInputWithContext; // ivar: _duringDeleteFromInputWithContext
@property (nonatomic) BOOL isAlphabeticPlane; // ivar: _isAlphabeticPlane
@property (nonatomic) BOOL isInCompletionMode; // ivar: _isInCompletionMode
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (readonly) TIMathSymbolPunctuationController *mathSymbolPunctuationController; // ivar: _mathSymbolPunctuationController
@property (copy, nonatomic) NSString *modeName; // ivar: _modeName
@property (readonly) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (copy, nonatomic) NSString *pairedPunctuationOpenQuote; // ivar: _pairedPunctuationOpenQuote
@property (copy, nonatomic) NSString *pairedPunctuationSelectedText; // ivar: _pairedPunctuationSelectedText
@property (readonly, nonatomic) NSUInteger predictionOptions;
@property (nonatomic) BOOL shouldLearnAcceptedCandidate; // ivar: _shouldLearnAcceptedCandidate


+(BOOL)shouldEnableHalfWidthPunctuationForDocumentContext:(id)arg0 composedText:(id)arg1 ;
+(Class)wordSearchClass;
+(id)GB18030CandidateFromString:(id)arg0 ;
+(id)pairedPunctuationDictionary;
+(id)punctuationPredictionsForString:(id)arg0 ;
+(id)unicodeCandidateFromString:(id)arg0 ;
-(*void)initImplementationWithMode:(id)arg0 andLanguage:(id)arg1 ;
-(*void)mecabraCandidateRefFromPointerValue:(id)arg0 ;
-(BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)arg0 ;
-(BOOL)handlePairedPunctuationInput:(id)arg0 context:(id)arg1 ;
-(BOOL)hasIdeographicCandidates;
-(BOOL)isFacemarkInput:(id)arg0 ;
-(BOOL)shouldEnableHalfWidthPunctuationForCurrentInputContext;
-(BOOL)shouldSearchCompletionForSubstrings;
-(BOOL)showingFacemarkCandidates;
-(BOOL)supportsPairedPunctutationInput;
-(BOOL)updateCompletionCandidatesIfAppropriate;
-(NSUInteger)initialSelectedIndex;
-(id)candidateResultSetFromCandidates:(id)arg0 proactiveTriggers:(id)arg1 ;
-(id)candidateResultSetUsedForCompletionQuery;
-(id)completionCandidateResultSetForKeyHint:(id)arg0 ;
-(id)deleteFromInput:(*NSUInteger)arg0 ;
-(id)didAcceptCandidate:(id)arg0 ;
-(id)firstCandidate;
-(id)generateCompletions;
-(id)groupedCandidatesFromCandidates:(id)arg0 usingSortingMethod:(id)arg1 ;
-(id)initWithConfig:(id)arg0 keyboardState:(id)arg1 ;
-(id)outputByConvertingDecimalPointForInput:(id)arg0 ;
-(id)replacementForDoubleSpace;
-(id)searchStringForMarkedText;
-(id)sortMethodsGroupsForCandidates:(id)arg0 ;
-(id)sortingMethods;
-(id)titleForSortingMethod:(id)arg0 ;
-(id)wordCharacters;
-(id)wordSearch;
-(void)acceptFirstCandidateWithContext:(id)arg0 ;
-(void)clearInput;
-(void)deleteFromInputWithContext:(id)arg0 ;
-(void)groupedCandidatesFromCandidates:(id)arg0 usingSortingMethod:(id)arg1 completion:(id)arg2 ;
-(void)inputLocationChanged;
-(void)loadFavoniusTypingModel;
-(void)resetCommitHistory;
-(void)setInput:(id)arg0 ;
-(void)setLearnsCorrection:(BOOL)arg0 ;
-(void)syncToKeyboardState:(id)arg0 from:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)syncToLayoutState:(id)arg0 ;
-(void)willExitCompletionMode;
-(void)wordSearchEngineDidFindPredictionCandidates:(id)arg0 ;


@end


#endif