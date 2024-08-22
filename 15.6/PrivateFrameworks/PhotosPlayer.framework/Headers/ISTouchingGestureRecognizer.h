// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISTOUCHINGGESTURERECOGNIZER_H
#define ISTOUCHINGGESTURERECOGNIZER_H

@class UIGestureRecognizer;



@interface ISTouchingGestureRecognizer : UIGestureRecognizer

@property (nonatomic, setter=_setBeginRequestID:) NSUInteger _beginRequestID; // ivar: __beginRequestID
@property (nonatomic, setter=_setInitialPointInView:) CGPoint _initialPointInView; // ivar: __initialPointInView
@property (nonatomic, setter=_setTouchCount:) NSUInteger _touchCount; // ivar: __touchCount
@property (readonly, nonatomic) CGFloat distanceFromInitialPoint; // ivar: _distanceFromInitialPoint
@property (nonatomic) CGFloat maximumTouchMovement; // ivar: _maximumTouchMovement
@property (nonatomic) CGFloat minimumTouchDuration; // ivar: _minimumTouchDuration
@property (nonatomic) BOOL requireSingleTouch; // ivar: _requireSingleTouch


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_beginWithRequestID:(NSUInteger)arg0 ;
-(void)_decrementTouchesBy:(NSUInteger)arg0 ;
-(void)_incrementTouchesBy:(NSUInteger)arg0 ;
-(void)_updateDistanceFromInitialPoint;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)reset;
-(void)setEnabled:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif