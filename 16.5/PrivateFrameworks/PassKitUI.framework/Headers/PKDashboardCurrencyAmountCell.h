// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDCURRENCYAMOUNTCELL_H
#define PKDASHBOARDCURRENCYAMOUNTCELL_H

@class PKCurrencyAmount, UILabel, NSString;


#import "PKDashboardCollectionViewCell.h"

@interface PKDashboardCurrencyAmountCell : PKDashboardCollectionViewCell {
    PKCurrencyAmount *_currencyAmount;
    UILabel *_titleLabel;
    UILabel *_currencyLabel;
}


@property (copy, nonatomic) PKCurrencyAmount *amount; // ivar: _amount
@property (copy, nonatomic) NSString *detailString; // ivar: _detailString
@property (nonatomic) BOOL showsPositivePrefix; // ivar: _showsPositivePrefix
@property (copy, nonatomic) NSString *titleString; // ivar: _titleString


-(BOOL)_shouldUseStackedLayoutWithBounds:(struct CGRect )arg0 ;
-(id)defaultPrimaryColor;
-(id)defaultSecondaryColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateCurrencyLabel;
-(void)layoutSubviews;
-(void)resetFonts;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif