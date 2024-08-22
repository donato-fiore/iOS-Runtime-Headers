// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPCHARTVIEW_H
#define SPCHARTVIEW_H

@class UIView, NSMutableArray, UIFont;
@protocol StockGraphViewContainer, SPChartViewDelegate;


#import "StockGraphView.h"
#import "ChartLabelInfoManager.h"
#import "StockChartData.h"
#import "StockChartDisplayMode.h"
#import "Stock.h"

@interface SPChartView : UIView <StockGraphViewContainer>

 {
    NSInteger _selectedInterval;
    StockGraphView *_graph;
    NSMutableArray *_xAxisLabels;
    NSMutableArray *_yAxisLabels;
    ChartLabelInfoManager *_labelInfoManager;
}


@property (retain, nonatomic) StockChartData *chartData; // ivar: _chartData
@property (nonatomic) NSUInteger chartViewType; // ivar: _chartViewType
@property (nonatomic, getter=isCompactGraph) BOOL compactGraph; // ivar: _compactGraph
@property (readonly, nonatomic) StockChartDisplayMode *currentDisplayMode; // ivar: _currentDisplayMode
@property (weak, nonatomic) NSObject<SPChartViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIFont *labelFont;
@property (nonatomic) BOOL showsHorizontalLines; // ivar: _showsHorizontalLines
@property (retain, nonatomic) Stock *stock; // ivar: _stock


-(CGFloat)lineGraphBottomPadding;
-(CGFloat)widestYLabelWidthForMode:(id)arg0 ;
-(id)_smallCapsFontFrom:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStockChartDisplayMode:(id)arg0 ;
-(struct CGRect )graphViewFrameForMode:(id)arg0 ;
-(struct CGRect )lineGraphFrame;
-(void)_prepareXAxisLabelsAndPositions;
-(void)_prepareXAxisLabelsForLabelInfoArray:(id)arg0 ;
-(void)_prepareYAxisLabelsAndPositions;
-(void)_setDayLabelsWithInterval:(unsigned int)arg0 realTimePositions:(BOOL)arg1 ;
-(void)_setHourLabels;
-(void)_setMonthAndYearLabels;
-(void)clearData;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundGradient:(struct CGGradient *)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setYAxisLabelCount:(NSUInteger)arg0 ;
-(void)stockGraphViewReadyForDisplay:(id)arg0 ;


@end


#endif