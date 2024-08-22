// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BFFPASSCODEINPUTVIEW_H
#define BFFPASSCODEINPUTVIEW_H

@class UIView, UIButton, UILabel;
@protocol BFFPasscodeInputViewDelegate;



@interface BFFPasscodeInputView : UIView

@property (weak, nonatomic) NSObject<BFFPasscodeInputViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *footerButton; // ivar: _footerButton
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (retain, nonatomic) UILabel *instructions; // ivar: _instructions
@property (retain, nonatomic) UIButton *instructionsLinkButton; // ivar: _instructionsLinkButton


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)resignFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)passcode;
-(id)passcodeDisplayView;
-(id)passcodeField;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutForBounds:(struct CGRect )arg0 ;
-(void)disable;
-(void)layoutSubviews;
-(void)setPasscode:(id)arg0 ;
-(void)shakePasscode;


@end


#endif