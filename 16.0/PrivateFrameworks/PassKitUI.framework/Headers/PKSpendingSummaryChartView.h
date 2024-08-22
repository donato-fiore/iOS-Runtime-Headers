// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSPENDINGSUMMARYCHARTVIEW_H
#define PKSPENDINGSUMMARYCHARTVIEW_H

@class UIView, NSMutableArray, UIFont, PKSpendingSummary, NSCalendar;



@interface PKSpendingSummaryChartView : UIView {
    NSMutableArray *_valueLabels;
    NSMutableArray *_legendLabels;
    NSMutableArray *_horizontalAxis;
    NSMutableArray *_bars;
    UIFont *_fontForLabels;
    UIFont *_fontForValues;
    PKSpendingSummary *_summary;
    CGFloat _chartMaxAmount;
    CGFloat _groupsMaxAmount;
    NSUInteger _axisCount;
    NSUInteger _presentationStyle;
    NSCalendar *_currentCalendar;
    BOOL _isCompactUI;
}


@property (nonatomic, getter=isBlurDisabled) BOOL blurDisabled; // ivar: _blurDisabled
@property (nonatomic) BOOL prioritizeLegendPlacement; // ivar: _prioritizeLegendPlacement
@property (nonatomic) BOOL showLegendGraph; // ivar: _showLegendGraph
@property (nonatomic) BOOL showLegendLabels; // ivar: _showLegendLabels
@property (nonatomic) BOOL showPlaceholders; // ivar: _showPlaceholders
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureBarView:(id)arg0 smallContext:(BOOL)arg1 ;
-(void)configureWithSummary:(id)arg0 presentationStyle:(NSUInteger)arg1 ;
-(void)layoutSubviews;


@end


#endif