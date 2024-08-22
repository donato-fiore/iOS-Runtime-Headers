// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLYOFFERCREDITCARDVIEW_H
#define PKAPPLYOFFERCREDITCARDVIEW_H

@class UIView, UILabel, UIButton;



@interface PKApplyOfferCreditCardView : UIView {
    UIView *_dividerLeft;
    UIView *_dividerRight;
}


@property (retain, nonatomic) UILabel *aprForPurchaseLabel; // ivar: _aprForPurchaseLabel
@property (retain, nonatomic) UILabel *aprForPurchaseTitleLabel; // ivar: _aprForPurchaseTitleLabel
@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) UILabel *creditLimitLabel; // ivar: _creditLimitLabel
@property (retain, nonatomic) UILabel *creditLimitTitleLabel; // ivar: _creditLimitTitleLabel
@property (retain, nonatomic) UILabel *feeLabel; // ivar: _feeLabel
@property (retain, nonatomic) UILabel *feeTitleLabel; // ivar: _feeTitleLabel
@property (retain, nonatomic) UIButton *termsLinkButton; // ivar: _termsLinkButton


-(BOOL)showSchumerBox;
-(id)initWithTermsLinkAction:(id)arg0 actionTitle:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif