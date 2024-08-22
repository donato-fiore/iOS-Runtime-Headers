// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPDOCKVIEW_H
#define PKPAYMENTSETUPDOCKVIEW_H

@class UIView, UIColor, UITextView, NSString, ASCLockupView, OBPrivacyLinkController;


#import "PKContinuousButton.h"
#import "PKPaymentSetupFooterView.h"

@interface PKPaymentSetupDockView : UIView {
    PKContinuousButton *_continuousButton;
    UIColor *_continuousButtonTintColor;
    UITextView *_buttonExplanationTextView;
    PKPaymentSetupFooterView *_footerView;
    BOOL _isBuddyiPad;
}


@property (nonatomic) CGFloat additionalLinkBottomPadding; // ivar: _additionalLinkBottomPadding
@property (retain, nonatomic) UIView *additionalLinkView; // ivar: _additionalLinkView
@property (retain, nonatomic) NSString *buttonExplanationText; // ivar: _buttonExplanationText
@property (readonly, nonatomic) UITextView *buttonExplanationTextView;
@property (readonly, nonatomic) NSInteger context; // ivar: _context
@property (retain, nonatomic) PKContinuousButton *continuousButton;
@property (retain, nonatomic) UIColor *continuousButtonTinColor;
@property (retain, nonatomic) PKPaymentSetupFooterView *footerView;
@property (retain, nonatomic) ASCLockupView *lockUpView; // ivar: _lockUpView
@property (retain, nonatomic) OBPrivacyLinkController *privacyLink; // ivar: _privacyLink
@property (nonatomic) BOOL requiresAdditionalContinuousButtonPadding; // ivar: _requiresAdditionalContinuousButtonPadding


-(id)initWithFrame:(struct CGRect )arg0 context:(NSInteger)arg1 ;
-(struct CGSize )_sizeForButton:(id)arg0 constrainedToSize:(struct CGSize )arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)pk_applyAppearance:(id)arg0 ;
-(void)setButtonsEnabled:(BOOL)arg0 ;


@end


#endif