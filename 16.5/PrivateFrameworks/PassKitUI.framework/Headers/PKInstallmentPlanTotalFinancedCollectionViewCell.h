// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINSTALLMENTPLANTOTALFINANCEDCOLLECTIONVIEWCELL_H
#define PKINSTALLMENTPLANTOTALFINANCEDCOLLECTIONVIEWCELL_H

@class UILabel, UIImageView, PKCurrencyAmount, NSString;


#import "PKDashboardCollectionViewCell.h"

@interface PKInstallmentPlanTotalFinancedCollectionViewCell : PKDashboardCollectionViewCell {
    UILabel *_titleLabel;
    UILabel *_amountLabel;
    UILabel *_subtitleLabel;
    UIImageView *_disclosureView;
    BOOL _isTemplateLayout;
}


@property (retain, nonatomic) PKCurrencyAmount *amount; // ivar: _amount
@property (copy, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif