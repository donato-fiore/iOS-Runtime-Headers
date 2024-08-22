// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTINTERACTIONSELECTABLEINPUTDELEGATE_H
#define UITEXTINTERACTIONSELECTABLEINPUTDELEGATE_H

@class UIResponder<UITextInput>, NSString, NSDictionary;
@protocol UITextInput, UITextInputDelegate, UITextInputTokenizer;


#import "UIResponder.h"
#import "UITextPosition.h"
#import "UITextRange.h"
#import "UITextInputPasswordRules.h"
#import "UIView.h"

@interface UITextInteractionSelectableInputDelegate : UIResponder <UITextInput>

 {
    UIResponder<UITextInput> *_textInput;
}


@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<UITextInputDelegate> *inputDelegate;
@property (readonly, nonatomic) id *insertDictationResultPlaceholder;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) NSInteger selectionAffinity;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) UIResponder<UITextInput> *textInput;
@property (readonly, nonatomic) UIView *textInputView;
@property (readonly, nonatomic) NSObject<UITextInputTokenizer> *tokenizer;


+(id)selectableInputDelegateWithTextInput:(id)arg0 ;
-(NSInteger)baseWritingDirectionForPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(NSInteger)comparePosition:(id)arg0 toPosition:(id)arg1 ;
-(NSInteger)offsetFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(id)_moveDown:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveLeft:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveRight:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveToEndOfDocument:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveToEndOfLine:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveToEndOfParagraph:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveToEndOfWord:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveToStartOfDocument:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveToStartOfLine:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveToStartOfParagraph:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveToStartOfWord:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveUp:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)characterRangeAtPoint:(struct CGPoint )arg0 ;
-(id)characterRangeByExtendingPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 withinRange:(id)arg1 ;
-(id)nextResponder;
-(id)positionFromPosition:(id)arg0 inDirection:(NSInteger)arg1 offset:(NSInteger)arg2 ;
-(id)positionFromPosition:(id)arg0 offset:(NSInteger)arg1 ;
-(id)positionWithinRange:(id)arg0 farthestInDirection:(NSInteger)arg1 ;
-(id)selectionRectsForRange:(id)arg0 ;
-(id)textInRange:(id)arg0 ;
-(id)textRangeFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGRect )firstRectForRange:(id)arg0 ;
-(void)_deleteBackwardAndNotify:(BOOL)arg0 ;
-(void)_deleteForwardAndNotify:(BOOL)arg0 ;
-(void)_moveCurrentSelection:(int)arg0 ;
-(void)_setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)_unmarkText;
-(void)deleteBackward;
-(void)insertText:(id)arg0 ;
-(void)replaceRange:(id)arg0 withText:(id)arg1 ;
-(void)setBaseWritingDirection:(NSInteger)arg0 forRange:(id)arg1 ;
-(void)setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)unmarkText;
-(void)updateSelectionRects;


@end


#endif