// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXFIRSTRESPONDERVALUECHANGEMANAGER_H
#define AXFIRSTRESPONDERVALUECHANGEMANAGER_H


#import <Foundation/Foundation.h>


@interface AXFirstResponderValueChangeManager : NSObject



+(id)sharedInstance;
-(id)_handleApostropheIfNeeded:(id)arg0 ;
-(id)_outputValueChangeForNewValue:(id)arg0 oldValue:(id)arg1 isFirstResponderValid:(BOOL)arg2 selectedTextRange:(struct _NSRange )arg3 oldSelectedTextRange:(struct _NSRange )arg4 shouldEchoDeletion:(BOOL)arg5 optionalValueChangeType:(NSUInteger)arg6 derivedValueChangeType:(*NSUInteger)arg7 didHitBorder:(*BOOL)arg8 isBreakSpaceCharacter:(*BOOL)arg9 isSingleInsert:(BOOL)arg10 selectionDeleted:(BOOL)arg11 feedbackType:(NSUInteger)arg12 textOperationOccurred:(*BOOL)arg13 lastKeyboardKeyPress:(CGFloat)arg14 isSingleCharacterInsertOrDelete:(*BOOL)arg15 singleInsertDeleteAttString:(*id)arg16 singleInsertDeleteString:(*id)arg17 isSingleCharacterUpdate:(*BOOL)arg18 wordRangeToFindMisspelled:(struct _NSRange *)arg19 pasteOperationSucceeded:(*BOOL)arg20 shouldOutputSingleCharactersOnly:(BOOL)arg21 clientType:(NSInteger)arg22 ;
-(id)outputValueChangeForNewValue:(id)arg0 oldValue:(id)arg1 isFirstResponderValid:(BOOL)arg2 selectedTextRange:(struct _NSRange )arg3 oldSelectedTextRange:(struct _NSRange )arg4 shouldEchoDeletion:(BOOL)arg5 optionalValueChangeType:(NSUInteger)arg6 derivedValueChangeType:(*NSUInteger)arg7 didHitBorder:(*BOOL)arg8 isBreakSpaceCharacter:(*BOOL)arg9 isSingleInsert:(BOOL)arg10 selectionDeleted:(BOOL)arg11 feedbackType:(NSUInteger)arg12 textOperationOccurred:(*BOOL)arg13 lastKeyboardKeyPress:(CGFloat)arg14 isSingleCharacterInsertOrDelete:(*BOOL)arg15 singleInsertDeleteAttString:(*id)arg16 singleInsertDeleteString:(*id)arg17 isSingleCharacterUpdate:(*BOOL)arg18 wordRangeToFindMisspelled:(struct _NSRange *)arg19 pasteOperationSucceeded:(*BOOL)arg20 clientType:(NSInteger)arg21 ;
-(id)outputValueChangeForNewValue:(id)arg0 oldValue:(id)arg1 selectedTextRange:(struct _NSRange )arg2 oldSelectedTextRange:(struct _NSRange )arg3 shouldEchoDeletion:(BOOL)arg4 isSingleInsert:(BOOL)arg5 feedbackType:(NSUInteger)arg6 lastKeyboardKeyPress:(CGFloat)arg7 ;
-(id)outputValueChangeForNewValue:(id)arg0 oldValue:(id)arg1 selectedTextRange:(struct _NSRange )arg2 shouldEchoDeletion:(BOOL)arg3 isSingleInsert:(BOOL)arg4 feedbackType:(NSUInteger)arg5 lastKeyboardKeyPress:(CGFloat)arg6 ;
-(id)outputValueChangeForNewValue:(id)arg0 oldValue:(id)arg1 selectedTextRange:(struct _NSRange )arg2 shouldEchoDeletion:(BOOL)arg3 isSingleInsert:(BOOL)arg4 feedbackType:(NSUInteger)arg5 lastKeyboardKeyPress:(CGFloat)arg6 shouldOutputSingleCharactersOnly:(BOOL)arg7 ;
-(id)wordBreakSet;
-(void)_handleAttributedApostropheIfNeeded:(id)arg0 ;


@end


#endif