// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCREDITPAYMENTDUECELL_H
#define PKCREDITPAYMENTDUECELL_H

@class UILabel, UIFont, NSString, UIColor, UIImage;
@protocol PKCreditPaymentDueCellDelegate;


#import "PKDashboardCollectionViewCell.h"
#import "PKDashboardCreditAccountItem.h"
#import "PKContinuousButton.h"

@interface PKCreditPaymentDueCell : PKDashboardCollectionViewCell {
    BOOL _usingCircleButton;
    BOOL _isCompactUI;
    BOOL _isTemplateLayout;
    UILabel *_paymentDueLabel;
    UILabel *_dateLabel;
    UILabel *_detailLabel;
}


@property (copy, nonatomic) UIFont *dateLabelFont;
@property (copy, nonatomic) NSString *dateLabelText;
@property (copy, nonatomic) UIColor *dateLabelTextColor;
@property (weak, nonatomic) NSObject<PKCreditPaymentDueCellDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) UIFont *detailLabelFont;
@property (copy, nonatomic) NSString *detailLabelText;
@property (copy, nonatomic) UIColor *detailLabelTextColor;
@property (copy, nonatomic) NSString *fallbackButtonTitle; // ivar: _fallbackButtonTitle
@property (retain, nonatomic) PKDashboardCreditAccountItem *item; // ivar: _item
@property (readonly, nonatomic) PKContinuousButton *payButton; // ivar: _payButton
@property (copy, nonatomic) UIFont *payButtonFont; // ivar: _payButtonFont
@property (retain, nonatomic) UIImage *payButtonImage; // ivar: _payButtonImage
@property (copy, nonatomic) UIColor *payButtonTintColor; // ivar: _payButtonTintColor
@property (copy, nonatomic) UIColor *payButtonTitleColor; // ivar: _payButtonTitleColor
@property (copy, nonatomic) UIFont *paymentDueLabelFont;
@property (copy, nonatomic) NSString *paymentDueLabelText;
@property (copy, nonatomic) UIColor *paymentDueLabelTextColor;
@property (nonatomic) BOOL useAccssibilityLayout; // ivar: _useAccssibilityLayout


-(id)_payButtonWithCircleLayout:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buttonTapped:(id)arg0 ;
-(void)_updateButtonImage:(id)arg0 ;
-(void)createSubviews;
-(void)layoutSubviews;
-(void)setButtonTitle:(id)arg0 ;


@end


#endif