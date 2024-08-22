// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPDOCKVIEW_H
#define PKPAYMENTSETUPDOCKVIEW_H

@class UIView, UITextView, NSString, ASCLockupView, OBPrivacyLinkController;


#import "PKContinuousButton.h"
#import "PKPaymentSetupFooterView.h"

@interface PKPaymentSetupDockView : UIView {
    PKContinuousButton *_continuousButton;
    UITextView *_buttonExplanationTextView;
    PKPaymentSetupFooterView *_footerView;
    BOOL _isBuddyiPad;
}


@property (retain, nonatomic) UIView *additionalLinkView; // ivar: _additionalLinkView
@property (retain, nonatomic) NSString *buttonExplanationText; // ivar: _buttonExplanationText
@property (readonly, nonatomic) UITextView *buttonExplanationTextView;
@property (readonly, nonatomic) NSInteger context; // ivar: _context
@property (retain, nonatomic) PKContinuousButton *continuousButton;
@property (retain, nonatomic) PKPaymentSetupFooterView *footerView;
@property (retain, nonatomic) ASCLockupView *lockUpView; // ivar: _lockUpView
@property (retain, nonatomic) OBPrivacyLinkController *privacyLink; // ivar: _privacyLink
@property (nonatomic) BOOL requiresAdditionalContinuousButtonPadding; // ivar: _requiresAdditionalContinuousButtonPadding


-(id)initWithFrame:(struct CGRect )arg0 context:(NSInteger)arg1 ;
-(struct CGSize )_sizeForButton:(id)arg0 constrainedToSize:(struct CGSize )arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setButtonsEnabled:(BOOL)arg0 ;


@end


#endif