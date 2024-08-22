// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUISTOCKSCARDSECTIONVIEW_H
#define SEARCHUISTOCKSCARDSECTIONVIEW_H

@class NSMutableArray, StockChartData, ChartUpdater, NUIContainerBoxView, NSString, StockChartDisplayMode, TLKLabel, NUIContainerStackView, StockGraphView, UIView;
@protocol ChartUpdaterDelegate, NUIContainerViewDelegate;


#import "SearchUICardSectionView.h"
#import "SearchUIDashedLineView.h"
#import "SearchUIStockGraphSectionRowModel.h"

@interface SearchUIStocksCardSectionView : SearchUICardSectionView <ChartUpdaterDelegate, NUIContainerViewDelegate>



@property (retain) NSMutableArray *axisViews; // ivar: _axisViews
@property (retain) StockChartData *chartData; // ivar: _chartData
@property (retain) ChartUpdater *chartUpdater; // ivar: _chartUpdater
@property (retain) NUIContainerBoxView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) StockChartDisplayMode *displayMode; // ivar: _displayMode
@property (nonatomic) int graphColor; // ivar: _graphColor
@property (readonly) NSUInteger hash;
@property (retain) TLKLabel *highLabel; // ivar: _highLabel
@property (retain) TLKLabel *lowLabel; // ivar: _lowLabel
@property (retain) SearchUIDashedLineView *previousCloseLine; // ivar: _previousCloseLine
@property (retain) SearchUIStockGraphSectionRowModel *rowModel;
@property (retain) NUIContainerStackView *stackView; // ivar: _stackView
@property (retain) StockGraphView *stockGraphView; // ivar: _stockGraphView
@property (readonly) Class superclass;
@property (retain) UIView *xAxisKeyline; // ivar: _xAxisKeyline
@property (retain) NSMutableArray *xLabelViews; // ivar: _xLabelViews


-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(id)setupContentView;
-(struct CGRect )containerView:(id)arg0 layoutFrameForArrangedSubview:(id)arg1 withProposedFrame:(struct CGRect )arg2 ;
-(struct CGRect )lineGraphFrame;
-(struct CGSize )containerView:(id)arg0 systemLayoutSizeFittingSize:(struct CGSize )arg1 forArrangedSubview:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)chartUpdater:(id)arg0 didFailWithError:(id)arg1 ;
-(void)chartUpdater:(id)arg0 didReceiveStockChartData:(id)arg1 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg0 ;
-(void)layoutAxesAndXLabels;
-(void)layoutPriceLabels;
-(void)setHourLabels;
-(void)tlk_updateForAppearance:(id)arg0 ;


@end


#endif