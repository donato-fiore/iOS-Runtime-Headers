// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STOCKGRAPHVIEW_H
#define STOCKGRAPHVIEW_H

@class UIView, NSMutableArray, NSArray, UIView<StockGraphViewContainer>;
@protocol GraphRenderOperationDelegate;


#import "LineGraphView.h"
#import "VolumeGraphView.h"
#import "StockChartData.h"
#import "GraphRenderOperation.h"
#import "StockChartDisplayMode.h"

@interface StockGraphView : UIView <GraphRenderOperationDelegate>

 {
    LineGraphView *_lineView;
    VolumeGraphView *_volumeView;
    StockChartData *_chartData;
    int _valueIndex;
    int _valueCount;
    *CGPoint _points;
    *CGPoint _values;
    NSMutableArray *_linePointCounts;
    NSArray *_dottedLinePositions;
    NSArray *_dottedLinePositionsForStyleOnly;
    unsigned int _dataSize;
    unsigned int _dataCount;
    *? _volumeBars;
    unsigned int _volumeSize;
    unsigned int _volumeCount;
    CGFloat _volumeBarWidth;
    NSUInteger _maxVolume;
    GraphRenderOperation *_renderOperation;
}


@property (weak, nonatomic) UIView<StockGraphViewContainer> *chartViewDelegate; // ivar: _chartViewDelegate
@property (retain, nonatomic) StockChartDisplayMode *displayMode; // ivar: _displayMode
@property (nonatomic) UIEdgeInsets graphInsets; // ivar: _graphInsets
@property (readonly, nonatomic) BOOL isRendered; // ivar: _isRendered
@property (readonly, nonatomic) BOOL isRendering;


-(CGFloat)_timeAtPosition:(CGFloat)arg0 ;
-(NSUInteger)_normalizedAccumulatedVolumeInDataRange:(struct CGPoint )arg0 ;
-(float)_priceAtTime:(CGFloat)arg0 dataPosition:(*CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct ? )plottedPointNearestToPoint:(struct CGPoint *)arg0 ;
-(struct CGPoint )rightmostPlottedPoint;
-(struct CGRect )_lineViewFrameForBoundsSize:(struct CGSize )arg0 ;
-(struct CGRect )_trueGraphPointsRegion;
-(struct CGRect )_volumeViewFrameForBoundsSize:(struct CGSize )arg0 ;
-(struct CGRect )volumeBarRectNearestToPoint:(struct CGPoint )arg0 ;
-(void)_finishCurrentLine;
-(void)_layoutSubviews;
-(void)_processGraphDataForWidth:(CGFloat)arg0 ;
-(void)cancelRenderOperation;
-(void)clearData;
-(void)clearPaths;
-(void)dealloc;
-(void)graphRenderOperationDidFinish:(id)arg0 ;
-(void)loadStockChartData:(id)arg0 ;
-(void)readyForDisplayFromChartData;
-(void)recomputePathsAndRenderIfNeededForSize:(struct CGSize )arg0 ;
-(void)resizeSelectedLineClipViewWithLeftX:(CGFloat)arg0 rightX:(CGFloat)arg1 ;
-(void)resizeSelectedVolumeClipViewWithLeftX:(CGFloat)arg0 rightX:(CGFloat)arg1 ;
-(void)setDottedLinePositionsWithLabelInfo:(id)arg0 ;
-(void)setEvenlySpacedDottedLinePositionsWithCount:(NSUInteger)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setShowingSelectedLine:(BOOL)arg0 ;
-(void)setShowingSelectedVolumeRegion:(BOOL)arg0 ;


@end


#endif