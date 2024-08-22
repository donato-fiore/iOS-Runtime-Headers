// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXROUNDPROGRESSVIEW_H
#define PXROUNDPROGRESSVIEW_H

@class UIView, NSTimer, NSDate, CAShapeLayer, CALayer;


#import "PXProgressArcLayer.h"

@interface PXRoundProgressView : UIView {
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
@property (retain, nonatomic, setter=_setProgressArcLayer:) PXProgressArcLayer *_progressArcLayer; // ivar: __progressArcLayer
@property (retain, nonatomic, setter=_setSliceLayer:) CAShapeLayer *_sliceLayer; // ivar: __sliceLayer
@property (nonatomic) float progress; // ivar: _progress
@property (nonatomic) NSInteger style; // ivar: _style


+(CGFloat)toRadian:(CGFloat)arg0 ;
+(NSInteger)_sizeClassForSize:(struct CGSize )arg0 ;
+(struct CGSize )sizeForSizeClass:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)_recalculateIncreaseProgress:(CGFloat)arg0 withTimeDiff:(CGFloat)arg1 ;
-(void)_setPieRadius:(CGFloat)arg0 ;
-(void)_updateSublayersContentsScale;
-(void)_updateSubviews;
-(void)_updateUIProgress;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)increaseUIProgress:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)removeFromSuperview;
-(void)startProgressTimer;
-(void)stopProgressTimer;


@end


#endif