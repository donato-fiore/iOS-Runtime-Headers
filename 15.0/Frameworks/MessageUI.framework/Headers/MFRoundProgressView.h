// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFROUNDPROGRESSVIEW_H
#define MFROUNDPROGRESSVIEW_H

@class UIView, CAShapeLayer, CADisplayLink;



@interface MFRoundProgressView : UIView {
    CGPoint _pieCenter;
    CGFloat _pieRadius;
    CGFloat _uiProgress;
    CGFloat _realProgress;
    CGFloat _increaseRate;
    UIView *_contentView;
    CAShapeLayer *_sliceLayer;
    CAShapeLayer *_circleLayer;
    CADisplayLink *_displayLink;
    CGFloat _prevUpdateTimeInterval;
}


@property (nonatomic) CGFloat progress; // ivar: _progress


-(CGFloat)toRadian:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_displayLinkDidFire:(id)arg0 ;
-(void)_startDisplayLink;
-(void)_stopDisplayLink;
-(void)_updateSubviews;
-(void)_updateUIProgress;
-(void)dealloc;
-(void)layoutSubviews;
-(void)recalculateIncreaseProgress:(CGFloat)arg0 withTimeDiff:(CGFloat)arg1 ;
-(void)setPieRadius:(CGFloat)arg0 ;


@end


#endif