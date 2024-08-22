// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCREDITBALANCECELL_H
#define PKCREDITBALANCECELL_H

@class UILabel;


#import "PKDashboardCollectionViewCell.h"
#import "PKDashboardCreditAccountItem.h"

@interface PKCreditBalanceCell : PKDashboardCollectionViewCell {
    BOOL _isCompactUI;
}


@property (retain, nonatomic) PKDashboardCreditAccountItem *item; // ivar: _item
@property (readonly, nonatomic) UILabel *labelAmount; // ivar: _labelAmount
@property (readonly, nonatomic) UILabel *labelBalance; // ivar: _labelBalance
@property (readonly, nonatomic) UILabel *labelCreditAvailable; // ivar: _labelCreditAvailable
@property (nonatomic) BOOL useAccssibilityLayout; // ivar: _useAccssibilityLayout


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_createSubviews;
-(void)layoutSubviews;


@end


#endif