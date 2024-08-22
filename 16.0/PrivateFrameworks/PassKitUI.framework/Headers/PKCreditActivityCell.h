// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCREDITACTIVITYCELL_H
#define PKCREDITACTIVITYCELL_H

@class UILabel, NSString, UIFont, UIColor;


#import "PKDashboardCollectionViewCell.h"
#import "PKSpendingSummaryChartView.h"
#import "PKDashboardCreditAccountItem.h"

@interface PKCreditActivityCell : PKDashboardCollectionViewCell {
    UILabel *_labelTitle;
    UILabel *_labelRewardsSummary;
    BOOL _isCompactUI;
}


@property (readonly, nonatomic) PKSpendingSummaryChartView *chartView; // ivar: _chartView
@property (retain, nonatomic) PKDashboardCreditAccountItem *item; // ivar: _item
@property (retain, nonatomic) NSString *rewardsSummary; // ivar: _rewardsSummary
@property (retain, nonatomic) UIFont *rewardsSummaryFont;
@property (retain, nonatomic) UIColor *rewardsSummaryTextColor;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) BOOL useAccssibilityLayout; // ivar: _useAccssibilityLayout


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_createSubviews;
-(void)layoutSubviews;


@end


#endif