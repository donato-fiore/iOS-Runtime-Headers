// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIKEYBOARDINPUTMANAGERSHAPEBASED_H
#define TIKEYBOARDINPUTMANAGERSHAPEBASED_H

@class NSString, NSMutableString;
@protocol TIKeyboardInputManagerChineseCompletion;


#import "TIKeyboardInputManagerChinese.h"

@interface TIKeyboardInputManagerShapeBased : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion>

 {
    BOOL _keepRemainingInput;
}


@property (nonatomic) BOOL previousActionWasAutoConfirmation; // ivar: _previousActionWasAutoConfirmation
@property (retain, nonatomic) NSString *remainingInput; // ivar: _remainingInput
@property (readonly, nonatomic) NSMutableString *searchString; // ivar: _searchString


-(BOOL)acceptInputString:(id)arg0 ;
-(BOOL)hasCandidates;
-(BOOL)isHardwareKeyboardAutocorrectionEnabled;
-(BOOL)shouldExtendPriorWord;
-(BOOL)shouldLookForCompletionCandidates;
-(BOOL)suppliesCompletions;
-(BOOL)supportsLearning;
-(BOOL)updateCandidatesWithTIWordSearch:(id)arg0 predictionEnabled:(BOOL)arg1 ;
-(BOOL)usesAutoDeleteWord;
-(BOOL)usesCandidateSelection;
-(NSUInteger)initialSelectedIndex;
-(id)candidateResultSet;
-(id)deleteFromInput:(*NSUInteger)arg0 ;
-(id)didAcceptCandidate:(id)arg0 ;
-(id)formattedSearchString;
-(id)keyboardBehaviors;
-(id)keyboardConfigurationLayoutTag;
-(id)markedTextWithAutoconvertedCandidates;
-(id)rawInputString;
-(id)sortingMethods;
-(unsigned int)inputCount;
-(unsigned int)inputIndex;
-(void)acceptInput;
-(void)cancelCandidatesThread;
-(void)clearInput;
-(void)inputLocationChanged;
-(void)loadDictionaries;
-(void)notifyUpdateCandidates:(id)arg0 forOperation:(id)arg1 ;
-(void)setInputIndex:(unsigned int)arg0 ;


@end


#endif