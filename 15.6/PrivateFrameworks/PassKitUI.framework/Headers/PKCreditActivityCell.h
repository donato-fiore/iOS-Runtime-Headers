// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCREDITACTIVITYCELL_H
#define PKCREDITACTIVITYCELL_H

@class UILabel, NSString, UIFont;


#import "PKDashboardCollectionViewCell.h"
#import "PKSpendingSummaryChartView.h"
#import "PKDashboardCreditAccountItem.h"

@interface PKCreditActivityCell : PKDashboardCollectionViewCell {
    UILabel *_labelTitle;
    BOOL _isCompactUI;
}


@property (readonly, nonatomic) PKSpendingSummaryChartView *chartView; // ivar: _chartView
@property (retain, nonatomic) PKDashboardCreditAccountItem *item; // ivar: _item
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (nonatomic) BOOL useAccssibilityLayout; // ivar: _useAccssibilityLayout


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_createSubviews;
-(void)layoutSubviews;


@end


#endif