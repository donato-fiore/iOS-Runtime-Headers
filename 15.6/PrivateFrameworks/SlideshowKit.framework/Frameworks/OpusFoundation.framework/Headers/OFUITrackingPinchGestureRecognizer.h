// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OFUITRACKINGPINCHGESTURERECOGNIZER_H
#define OFUITRACKINGPINCHGESTURERECOGNIZER_H

@class UIPinchGestureRecognizer;



@interface OFUITrackingPinchGestureRecognizer : UIPinchGestureRecognizer {
    NSUInteger _leftTouchIndex;
    NSUInteger _rightTouchIndex;
    CGPoint _leftTouchLocation;
    CGPoint _rightTouchLocation;
    CGPoint _centerPoint;
    CGPoint _previousLeftLocation;
    CGPoint _previousRightLocation;
    CGFloat _originalWidth;
    CGFloat _originalAngle;
    NSInteger _magnifyState;
    NSInteger _rotateState;
    BOOL _startedPinchingOut;
    BOOL _startedPinchingIn;
}


@property CGFloat pinchAngle; // ivar: _pinchAngle
@property CGFloat pinchScale; // ivar: _pinchScale
@property CGFloat pinchWidth; // ivar: _pinchWidth
@property NSUInteger zoomMode; // ivar: _zoomMode


-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 mode:(NSUInteger)arg2 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)dealloc;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif