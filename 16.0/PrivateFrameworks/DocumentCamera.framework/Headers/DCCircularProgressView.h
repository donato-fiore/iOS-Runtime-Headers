// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCCIRCULARPROGRESSVIEW_H
#define DCCIRCULARPROGRESSVIEW_H

@class UIView, CAShapeLayer, NSProgress;



@interface DCCircularProgressView : UIView

@property (retain, nonatomic) CAShapeLayer *circleLayer; // ivar: _circleLayer
@property (retain, nonatomic) NSProgress *observedProgress; // ivar: _observedProgress
@property (nonatomic) CGFloat progress; // ivar: _progress


-(struct CGPath *)newPathForProgress:(CGFloat)arg0 ;
-(void)awakeFromNib;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif