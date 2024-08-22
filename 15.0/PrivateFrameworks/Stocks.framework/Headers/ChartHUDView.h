// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHARTHUDVIEW_H
#define CHARTHUDVIEW_H

@class UIView, UILabel, NSMutableSet;


#import "PricePopoverBar.h"
#import "StocksTapDragGestureRecognizer.h"
#import "StockChartView.h"
#import "StockGraphView.h"

@interface ChartHUDView : UIView {
    UILabel *_leftDateLabel;
    UILabel *_centeredLabel;
    UILabel *_rightDateLabel;
    NSInteger _interval;
    NSMutableSet *_inactiveTouchInfoSet;
    NSMutableSet *_touchInfoSet;
    BOOL _forceTouchUpdate;
    PricePopoverBar *_pricePopoverBar;
    StocksTapDragGestureRecognizer *_tapDragGesture;
}


@property (nonatomic) CGFloat barHeight; // ivar: _barHeight
@property (weak, nonatomic) StockChartView *chartView; // ivar: _chartView
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) StockGraphView *graphView; // ivar: _graphView
@property (nonatomic, getter=isOverlayHidden) BOOL overlayHidden; // ivar: _overlayHidden


+(id)_dateRangeSeparatorString;
+(id)monoSpacedFontWithFont:(id)arg0 ;
+(id)newHUDLabel;
+(id)stringForTimeIntervalSince1970:(CGFloat)arg0 withInterval:(NSInteger)arg1 isDouble:(BOOL)arg2 isLeft:(BOOL)arg3 ;
+(void)initializeDateFormattersIfNeededForInterval:(NSInteger)arg0 withTimeZone:(id)arg1 ;
-(BOOL)isTrackingTouches;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_showHUD;
-(void)layoutSubviews;
-(void)resetLocale;
-(void)resizeSelectedClipViewsIfNeeded;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setSelectedInterval:(NSInteger)arg0 timeZone:(id)arg1 ;
-(void)setShowingTracking:(BOOL)arg0 withTouchInfo:(id)arg1 animated:(BOOL)arg2 ;
-(void)tapDragGestureChanged:(id)arg0 ;


@end


#endif