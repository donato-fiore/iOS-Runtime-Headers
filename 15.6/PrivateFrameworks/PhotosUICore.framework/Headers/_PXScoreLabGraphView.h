// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXSCORELABGRAPHVIEW_H
#define _PXSCORELABGRAPHVIEW_H

@class UIView, NSArray, NSPredicate;
@protocol OS_dispatch_queue, _PXScoreLabGraphViewDelegate;



@interface _PXScoreLabGraphView : UIView {
    CGFloat _leftMargin;
    CGFloat _rightMargin;
    CGFloat _topMargin;
    CGFloat _bottomMargin;
    CGFloat _graphWidth;
    CGFloat _graphHeight;
    CGFloat _minXValue;
    CGFloat _maxXValue;
    CGFloat _minYValue;
    CGFloat _maxYValue;
    CGFloat _baseMinXValue;
    CGFloat _baseMaxXValue;
    CGFloat _baseMinYValue;
    CGFloat _baseMaxYValue;
    CGFloat _minXValueAtBeginningOfGesture;
    CGFloat _maxXValueAtBeginningOfGesture;
    CGFloat _minYValueAtBeginningOfGesture;
    CGFloat _maxYValueAtBeginningOfGesture;
    CGPoint _locationAtBeginningOfGesture;
    NSArray *_allXValues;
    NSArray *_allYValues;
    CGFloat _Ex;
    CGFloat _Ex2;
    CGFloat _Ey;
    CGFloat _Ey2;
    CGFloat _Exy;
    NSUInteger _numberOfIgnoredAssets;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (retain) NSPredicate *assetPredicate; // ivar: _assetPredicate
@property (weak) NSObject<_PXScoreLabGraphViewDelegate> *delegate; // ivar: _delegate
@property NSUInteger graphType; // ivar: _graphType
@property (copy) id *xScoreValueGetter; // ivar: _xScoreValueGetter
@property (copy) id *yScoreValueGetter; // ivar: _yScoreValueGetter


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)cancelGesture;
-(void)drawAxisInContext:(struct CGContext *)arg0 minXValue:(CGFloat)arg1 maxXValue:(CGFloat)arg2 minYValue:(CGFloat)arg3 maxYValue:(CGFloat)arg4 ;
-(void)drawCorrelationInContext:(struct CGContext *)arg0 ;
-(void)drawDistributionInContext:(struct CGContext *)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)drawTextPanelWithNumberOfAssets:(NSInteger)arg0 numberOfIgnoredAssets:(NSUInteger)arg1 rho:(CGFloat)arg2 inContext:(struct CGContext *)arg3 ;
-(void)drawXMean:(CGFloat)arg0 andStddev:(CGFloat)arg1 inContext:(struct CGContext *)arg2 ;
-(void)drawYMean:(CGFloat)arg0 andStddev:(CGFloat)arg1 inContext:(struct CGContext *)arg2 ;
-(void)enumerateAssetsUsingBlock:(id)arg0 ;
-(void)loadCorrelationData;
-(void)loadDistributionData;
-(void)panned:(id)arg0 ;
-(void)pinched:(id)arg0 ;
-(void)reloadData;
-(void)startGestureAtLocation:(struct CGPoint )arg0 ;
-(void)updateGestureWithLocation:(struct CGPoint )arg0 scale:(CGFloat)arg1 ;


@end


#endif