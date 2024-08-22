// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTAUTHORIZATIONPASSWORDBUTTONVIEW_H
#define PKPAYMENTAUTHORIZATIONPASSWORDBUTTONVIEW_H

@class UIView, UIButton, NSMutableArray, NSLayoutConstraint;



@interface PKPaymentAuthorizationPasswordButtonView : UIView {
    UIView *_separatorView;
    UIButton *_passwordButton;
    NSMutableArray *_hiddenConstraints;
    NSLayoutConstraint *_buttonTopPaddingConstraint;
    NSLayoutConstraint *_buttonBottomPaddingConstraint;
    NSLayoutConstraint *_seperatorHeightConstraint;
}




-(id)initWithFrame:(struct CGRect )arg0 action:(id)arg1 ;
-(void)_setupConstraints;
-(void)setActionTitle:(id)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)updateConstraints;


@end


#endif