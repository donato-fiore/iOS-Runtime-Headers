// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDINPUTMANAGERWUBIXING_H
#define TIKEYBOARDINPUTMANAGERWUBIXING_H

@class TIKeyboardCandidate;
@protocol TIKeyboardInputManagerChineseCompletion;


#import "TIKeyboardInputManagerShapeBased.h"

@interface TIKeyboardInputManagerWubixing : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion>



@property (retain, nonatomic) TIKeyboardCandidate *autoConfirmationCandidate; // ivar: _autoConfirmationCandidate


+(Class)wordSearchClass;
-(BOOL)acceptAutocorrectionCommitsInline;
-(BOOL)isValidWubiInput:(id)arg0 ;
-(BOOL)supportsNumberKeySelection;
-(BOOL)usesPunctuationKeysForRowNavigation;
-(NSUInteger)initialSelectedIndex;
-(id)keyboardBehaviors;
-(id)sortingMethods;
-(int)inputMethodType;
-(unsigned int)inputIndex;
-(void)addInput:(id)arg0 withContext:(id)arg1 ;
-(void)notifyUpdateCandidates:(id)arg0 forOperation:(id)arg1 ;
-(void)updateMarkedText;


@end


#endif