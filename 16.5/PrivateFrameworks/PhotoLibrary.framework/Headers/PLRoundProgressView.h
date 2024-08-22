// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLROUNDPROGRESSVIEW_H
#define PLROUNDPROGRESSVIEW_H

@class UIView, NSTimer, NSDate, CAShapeLayer, CALayer, UIColor;


#import "PLProgressArcLayer.h"

@interface PLRoundProgressView : UIView {
    CGPoint _pieCenter;
    CGFloat _pieRadius;
    NSTimer *_progressTimer;
    CGFloat _uiProgress;
    CGFloat _realProgress;
    CGFloat _increaseRate;
    NSDate *_prevUpdateTime;
}


@property (retain, nonatomic, setter=_setCircleLayer:) CAShapeLayer *_circleLayer; // ivar: __circleLayer
@property (retain, nonatomic, setter=_setContentView:) UIView *_contentView; // ivar: __contentView
@property (nonatomic, setter=_setContentsScale:) CGFloat _contentsScale; // ivar: __contentsScale
@property (retain, nonatomic, setter=_setIrisGlyphLayer:) CALayer *_irisGlyphLayer; // ivar: __irisGlyphLayer
@property (retain, nonatomic, setter=_setProgressArcLayer:) PLProgressArcLayer *_progressArcLayer; // ivar: __progressArcLayer
@property (retain, nonatomic, setter=_setSliceLayer:) CAShapeLayer *_sliceLayer; // ivar: __sliceLayer
@property (nonatomic) BOOL allowFake25PercentProgress; // ivar: _allowFake25PercentProgress
@property (retain, nonatomic) UIColor *manualColor; // ivar: _manualColor
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (nonatomic) BOOL skipResetOnRelayout; // ivar: _skipResetOnRelayout
@property (readonly, nonatomic) NSInteger style; // ivar: _style


-(CGFloat)toRadian:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)_updateSublayersContentsScale;
-(void)_updateSubviews;
-(void)_updateUIProgress;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)increaseUIProgress:(id)arg0 ;
-(void)layoutSubviews;
-(void)recalculateIncreaseProgress:(CGFloat)arg0 withTimeDiff:(CGFloat)arg1 ;
-(void)setInitialIncreaseRatePerFrame:(CGFloat)arg0 ;
-(void)setPieRadius:(CGFloat)arg0 ;
-(void)startProgressTimer;
-(void)stopProgressTimer;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif