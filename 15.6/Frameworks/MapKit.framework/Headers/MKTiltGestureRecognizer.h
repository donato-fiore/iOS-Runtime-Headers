// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKTILTGESTURERECOGNIZER_H
#define MKTILTGESTURERECOGNIZER_H

@class UIPanGestureRecognizer, UITouch;



@interface MKTiltGestureRecognizer : UIPanGestureRecognizer {
    UITouch *_touch1;
    UITouch *_touch2;
    CGPoint _initialTouch1Point;
    CGPoint _initialTouch2Point;
    CGFloat _initialDistance;
}




-(CGFloat)_distanceFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 ;
-(id)_activeTouchesForEvent:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif