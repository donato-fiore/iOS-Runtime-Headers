// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSLOTTEMPLATETYPINGTEXTVIEW_H
#define WFSLOTTEMPLATETYPINGTEXTVIEW_H

@class UITextView, NSAttributedString, UITextPosition, NSString, UIFont, UIView, UITextRange, NSDictionary, UITextInputPasswordRules;
@protocol WFSlotTemplateTextEntry, WFSlotTemplateTypingTextViewDelegate, UITextInputDelegate, UITextInputTokenizer;



@interface WFSlotTemplateTypingTextView : UITextView <WFSlotTemplateTextEntry>



@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (nonatomic) BOOL clearsZeroWhenTyping; // ivar: _clearsZeroWhenTyping
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFSlotTemplateTypingTextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *emojiOverrideFont; // ivar: _emojiOverrideFont
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (readonly, nonatomic) UIFont *font;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (weak, nonatomic) NSObject<UITextInputDelegate> *inputDelegate;
@property (retain, nonatomic) UIView *inputView;
@property (readonly, nonatomic) id *insertDictationResultPlaceholder;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) _NSRange selectedRange;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) NSInteger selectionAffinity;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) UIView *textInputView;
@property (readonly, nonatomic) NSObject<UITextInputTokenizer> *tokenizer;


-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg0 ;
-(struct CGRect )accessibilityFrame;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)deleteBackward;
-(void)insertText:(id)arg0 ;
-(void)paste:(id)arg0 ;
-(void)wf_applyEmojiOverrideFont;
-(void)wf_replaceRange:(struct _NSRange )arg0 withAttributedText:(id)arg1 ;


@end


#endif