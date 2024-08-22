// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKCIRCLEGESTURERECOGNIZER_H
#define OKCIRCLEGESTURERECOGNIZER_H

@class UIGestureRecognizer, CAShapeLayer;



@interface OKCircleGestureRecognizer : UIGestureRecognizer {
    CGPoint _origin;
    CGFloat _lastAngle;
    CGFloat _angle;
    CAShapeLayer *_roundLayer;
    CAShapeLayer *_pointLayer;
    CAShapeLayer *_originLayer;
}


@property (readonly, nonatomic) CGFloat continuousProgress; // ivar: _continuousProgress
@property (readonly, nonatomic) CGFloat diffenceProgress; // ivar: _diffenceProgress


-(void)initDebugLayer:(struct CGPoint )arg0 ;
-(void)reset;
-(void)resetDebug;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateDebug:(struct CGPoint )arg0 angle:(CGFloat)arg1 ;


@end


#endif