// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVSEARCHBAR_H
#define _TVSEARCHBAR_H

@class UIView, UIActivityIndicatorView, NSString, UITextInputPasswordRules, UITextField;
@protocol UIKeyInput, _TVSearchBarDelegate;



@interface _TVSearchBar : UIView <UIKeyInput>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_TVSearchBarDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) UITextField *textField; // ivar: _textField


+(id)_listItemSelectedOverlayFillColor;
+(id)_listItemTextColor;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canBecomeFocused;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)keyCommands;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_insertSpace:(id)arg0 ;
-(void)_submit:(id)arg0 ;
-(void)deleteBackward;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)insertText:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif