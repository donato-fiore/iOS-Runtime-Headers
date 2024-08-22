// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDINPUTMANAGERCANGJIE_H
#define TIKEYBOARDINPUTMANAGERCANGJIE_H



#import "TIKeyboardInputManagerShapeBased.h"

@interface TIKeyboardInputManagerCangjie : TIKeyboardInputManagerShapeBased

@property (nonatomic) BOOL suchengEnabled; // ivar: _suchengEnabled
@property (nonatomic) BOOL supportsEnglish; // ivar: _supportsEnglish


+(Class)wordSearchClass;
-(BOOL)firstCandidateIsEnglish;
-(BOOL)isPunctuationInput;
-(BOOL)selectedCandidateIsEnglish;
-(BOOL)supportsNumberKeySelection;
-(BOOL)updateCandidatesWithTIWordSearch:(id)arg0 predictionEnabled:(BOOL)arg1 ;
-(NSUInteger)cangjieInputType:(id)arg0 fromPopupVariant:(BOOL)arg1 ;
-(id)cangjieAlphabetSet;
-(id)cangjieSet;
-(id)deleteFromInput:(*NSUInteger)arg0 ;
-(id)formattedSearchString;
-(id)keyboardBehaviors;
-(id)nonstopPunctuationCharacters;
-(id)sortingMethods;
-(void)addInput:(id)arg0 withContext:(id)arg1 ;
-(void)notifyUpdateCandidates:(id)arg0 forOperation:(id)arg1 ;
-(void)syncToKeyboardState:(id)arg0 from:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)syncToLayoutState:(id)arg0 ;
-(void)syncWordSearch;
-(void)updateMarkedText;


@end


#endif