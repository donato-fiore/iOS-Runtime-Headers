// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSPENDINGSUMMARYVIEW_H
#define PKSPENDINGSUMMARYVIEW_H

@class UIView, UILabel, UIImageView, PKSpendingSummary, UIImage;


#import "PKSpendingSummaryChartView.h"

@interface PKSpendingSummaryView : UIView {
    UILabel *_totalAmount;
    UILabel *_spendingLabel;
    UIImageView *_upOrDownImage;
    UILabel *_percentageLabel;
    PKSpendingSummaryChartView *_chartView;
    PKSpendingSummaryChartView *_chartViewToFadeOut;
    BOOL _isTemplateLayout;
    PKSpendingSummary *_summary;
}


@property (retain, nonatomic) UIImage *downImage; // ivar: _downImage
@property (retain, nonatomic) UIImage *upImage; // ivar: _upImage
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(BOOL)_needsLayoutWithSummary:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_createSubviews;
-(void)configureWithSummary:(id)arg0 presentationStyle:(NSUInteger)arg1 ;
-(void)layoutSubviews;


@end


#endif