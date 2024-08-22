// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSROUNDPROGRESSVIEW_H
#define STSROUNDPROGRESSVIEW_H

@class UIView, CAShapeLayer, NSTimer, NSDate;


#import "STSProgressArcLayer.h"

@interface STSRoundProgressView : UIView {
    CAShapeLayer *_sliceLayer;
    CAShapeLayer *_circleLayer;
    CGPoint _pieCenter;
    CGFloat _pieRadius;
    NSTimer *_progressTimer;
    CGFloat _uiProgress;
    CGFloat _realProgress;
    CGFloat _increaseRate;
    NSDate *_prevUpdateTime;
}


@property (nonatomic, setter=_setContentsScale:) CGFloat _contentsScale; // ivar: __contentsScale
@property (retain, nonatomic, setter=_setProgressArcLayer:) STSProgressArcLayer *_progressArcLayer; // ivar: __progressArcLayer
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (readonly, nonatomic) NSInteger style; // ivar: _style


-(CGFloat)toRadian:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)_setupSubviews;
-(void)_updateSublayersContentsScale;
-(void)_updateUIProgress;
-(void)didMoveToWindow;
-(void)increaseUIProgress:(id)arg0 ;
-(void)layoutSubviews;
-(void)recalculateIncreaseProgress:(CGFloat)arg0 withTimeDiff:(CGFloat)arg1 ;
-(void)setInitialIncreaseRatePerFrame:(CGFloat)arg0 ;
-(void)setPieRadius:(CGFloat)arg0 ;
-(void)startProgressTimer;
-(void)stopProgressTimer;


@end


#endif