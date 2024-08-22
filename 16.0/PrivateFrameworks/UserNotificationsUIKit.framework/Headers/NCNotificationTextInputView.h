// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONTEXTINPUTVIEW_H
#define NCNOTIFICATIONTEXTINPUTVIEW_H

@class UIView, NCNotificationAction, UIButton, NSString, UIStackView, UIInputContextHistory, UIScribbleInteraction, UITextView;
@protocol UITextViewDelegate, UIScribbleInteractionDelegate, NCNotificationTextInputViewDelegate;



@interface NCNotificationTextInputView : UIView <UITextViewDelegate, UIScribbleInteractionDelegate>



@property (retain, nonatomic) NCNotificationAction *action; // ivar: _action
@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationTextInputViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIStackView *horizontalStack; // ivar: _horizontalStack
@property (retain, nonatomic) UIInputContextHistory *inputContextHistory; // ivar: _inputContextHistory
@property (retain, nonatomic) UIScribbleInteraction *scribbleInteraction; // ivar: _scribbleInteraction
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)resignFirstResponder;
-(CGFloat)_maximumTextViewHeight;
-(CGFloat)_pencilModeHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_buttonPressed:(id)arg0 ;
-(void)_updateForTextChange;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;
-(void)scribbleInteractionDidFinishWriting:(id)arg0 ;
-(void)setPlaceholder:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif