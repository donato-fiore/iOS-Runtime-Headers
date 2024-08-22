// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYBOARDINPUTMANAGERWUBI_H
#define TIKEYBOARDINPUTMANAGERWUBI_H

@class TIKeyboardCandidate;
@protocol TIKeyboardInputManagerChineseCompletion;


#import "TIKeyboardInputManagerShapeBased.h"

@interface TIKeyboardInputManagerWubi : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion>



@property (retain, nonatomic) TIKeyboardCandidate *autoConfirmationCandidate; // ivar: _autoConfirmationCandidate


+(Class)wordSearchClass;
-(BOOL)acceptInputString:(id)arg0 ;
-(BOOL)closeCandidateGenerationContextWithResults:(id)arg0 ;
-(BOOL)isWubi:(id)arg0 ;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(BOOL)supportsPairedPunctutationInput;
-(BOOL)updateCandidatesWithTIWordSearch:(id)arg0 predictionEnabled:(BOOL)arg1 ;
-(id)deleteFromInput:(*NSUInteger)arg0 ;
-(id)formattedSearchString;
-(id)inputsToReject;
-(int)inputMethodType;
-(void)addInput:(id)arg0 withContext:(id)arg1 ;
-(void)checkAutocorrectionDictionaries;
-(void)notifyUpdateCandidates:(id)arg0 forOperation:(id)arg1 ;
-(void)openCandidateGenerationContextWithCompletionHandler:(id)arg0 ;
-(void)setInSplitKeyboardMode:(BOOL)arg0 ;


@end


#endif