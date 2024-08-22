// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STOCKCHARTVIEW_H
#define STOCKCHARTVIEW_H

@class UIView, NSMutableArray, UILabel, NSMutableDictionary, NSArray, StocksViewController, NSString, NSError;
@protocol ChartUpdaterDelegate, ChartIntervalButtonRowDelegate, StockGraphViewContainer, StockUpdateObserver, StockChartViewDelegate;


#import "LoadingLabel.h"
#import "ChartUpdater.h"
#import "ChartIntervalButtonRow.h"
#import "DashedLineView.h"
#import "ChartTitleLabel.h"
#import "ChartHUDView.h"
#import "StockChartData.h"
#import "StockChartDisplayMode.h"
#import "Stock.h"

@interface StockChartView : UIView <ChartUpdaterDelegate, ChartIntervalButtonRowDelegate, StockGraphViewContainer, StockUpdateObserver>

 {
    LoadingLabel *_loadingLabel;
    ChartUpdater *_chartUpdater;
    ChartIntervalButtonRow *_intervalButtonRow;
    NSMutableArray *_axisViews;
    NSMutableArray *_xLabelViews;
    NSMutableArray *_yLabelViews;
    DashedLineView *_previousCloseLine;
    UILabel *_previousCloseLabel;
    ChartTitleLabel *_titleView;
    ChartHUDView *_HUDView;
    BOOL _animating;
    BOOL _layoutPending;
    UIView *_chartTopKeyline;
    UIView *_chartBottomKeyline;
    UIView *_xAxisKeyline;
    NSMutableArray *_displayModes;
    NSMutableDictionary *_graphViews;
}


@property (readonly, nonatomic) NSArray *alternateDisplayModes;
@property (retain, nonatomic) StockChartData *chartData; // ivar: _chartData
@property (weak, nonatomic) NSObject<StockChartViewDelegate> *chartViewDelegate; // ivar: _chartViewDelegate
@property (weak, nonatomic) StocksViewController *controller; // ivar: _controller
@property (retain, nonatomic) StockChartDisplayMode *currentDisplayMode; // ivar: _currentDisplayMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL drawsBottomLine; // ivar: _drawsBottomLine
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger preferredInterval; // ivar: _preferredInterval
@property (nonatomic) NSInteger selectedInterval; // ivar: _selectedInterval
@property (retain, nonatomic) Stock *stock; // ivar: _stock
@property (readonly) Class superclass;


+(struct CGGradient *)LineBackgroundGradient;
-(BOOL)hadError;
-(BOOL)isCurrentChart;
-(BOOL)isLandscape;
-(BOOL)isLoading;
-(BOOL)shouldShowLoadingStatus;
-(CGFloat)_evennessOfValue:(CGFloat)arg0 inRange:(CGFloat)arg1 ;
-(CGFloat)horizontalPadding;
-(CGFloat)lineGraphBottomPadding;
-(CGFloat)widestYLabelWidthForMode:(id)arg0 ;
-(NSInteger)maxSupportedIntervalFromDesiredInterval:(NSInteger)arg0 ;
-(id)HUDView;
-(id)chartUpdater;
-(id)currentGraphView;
-(id)graphViewForMode:(id)arg0 ;
-(id)initWithInitialDisplayMode:(id)arg0 preferredChartInterval:(NSInteger)arg1 stockChartViewDelegate:(id)arg2 ;
-(struct CGRect )graphViewFrameForMode:(id)arg0 ;
-(struct CGRect )lineGraphFrame;
-(void)_layoutAxesAndXLabels;
-(void)_layoutIntervalButtonRow;
-(void)_layoutSubviews;
-(void)_layoutTopLabelsHidden:(BOOL)arg0 ;
-(void)_layoutVolumeSeparatorLineForGraphRect:(struct CGRect )arg0 ;
-(void)_layoutYLabels;
-(void)_prepareXAxisLabelsAndPositions;
-(void)_prepareYAxisLabelsAndPositionsForDisplayMode:(id)arg0 ;
-(void)_setDayLabelsWithInterval:(unsigned int)arg0 realTimePositions:(BOOL)arg1 ;
-(void)_setHourLabels;
-(void)_setMonthAndYearLabels;
-(void)_setShowingLoadingStatus:(BOOL)arg0 ;
-(void)addDisplayMode:(id)arg0 ;
-(void)animateTransitionToDisplayMode:(id)arg0 ;
-(void)chartIntervalButtonRow:(id)arg0 didSelectChartInterval:(NSInteger)arg1 ;
-(void)chartUpdater:(id)arg0 didFailWithError:(id)arg1 ;
-(void)chartUpdater:(id)arg0 didReceiveStockChartData:(id)arg1 ;
-(void)clearData;
-(void)createYLabelsForMode:(id)arg0 ;
-(void)dealloc;
-(void)didTransitionToDisplayMode:(id)arg0 ;
-(void)enumerateGraphsAndDisplayModesUsingBlock:(id)arg0 ;
-(void)forceLayout;
-(void)hideLabelsAxesAndGraphs;
-(void)hideOtherGraphViews;
-(void)layoutGraphViews;
-(void)layoutIfNeeded;
-(void)layoutLoadingStatus;
-(void)layoutPreviousClose;
-(void)layoutSubviews;
-(void)prepareForTransitionToDisplayMode:(id)arg0 ;
-(void)reloadData;
-(void)reloadDataIfStale;
-(void)renderGraphDataIfNeeded;
-(void)renderGraphDataIfNeededForMode:(id)arg0 ;
-(void)resetLocale;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setLabelsAndAxesAlpha:(CGFloat)arg0 ;
-(void)setNeedsLayout;
-(void)setShowingHUD:(BOOL)arg0 ;
-(void)stockGraphViewReadyForDisplay:(id)arg0 ;
-(void)updateChartViewForSelectedInterval;
-(void)updateHUDView;


@end


#endif