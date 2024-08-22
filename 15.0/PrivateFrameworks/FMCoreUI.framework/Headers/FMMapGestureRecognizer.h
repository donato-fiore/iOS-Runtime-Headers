// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMMAPGESTURERECOGNIZER_H
#define FMMAPGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSTimer, NSMutableArray, UITouch;
@protocol FMMapGestureRecognizerDelegate;



@interface FMMapGestureRecognizer : UIGestureRecognizer

@property (retain, nonatomic) NSTimer *doubleTapTimer; // ivar: _doubleTapTimer
@property (nonatomic) CGPoint initialTouchLocation; // ivar: _initialTouchLocation
@property (nonatomic) BOOL isRTLOrientation; // ivar: _isRTLOrientation
@property (nonatomic) BOOL isSwipeEnabled; // ivar: _isSwipeEnabled
@property (nonatomic) BOOL isSwipingFromTheEdge; // ivar: _isSwipingFromTheEdge
@property (nonatomic) BOOL isSwipingGestureEnded; // ivar: _isSwipingGestureEnded
@property (nonatomic) BOOL isTrackingTouches; // ivar: _isTrackingTouches
@property (nonatomic) CGPoint lastTouchPoint; // ivar: _lastTouchPoint
@property (retain, nonatomic) NSMutableArray *otherGestures; // ivar: _otherGestures
@property (retain, nonatomic) UITouch *previousTouch; // ivar: _previousTouch
@property (nonatomic) CGFloat swipeThreshold; // ivar: _swipeThreshold
@property (weak, nonatomic) NSObject<FMMapGestureRecognizerDelegate> *touchDelegate; // ivar: _touchDelegate
@property (nonatomic) int touchRadius; // ivar: _touchRadius
@property (nonatomic) CGFloat velocity; // ivar: _velocity


-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(CGFloat)distanceBetweenPointA:(struct CGPoint )arg0 andPointB:(struct CGPoint )arg1 ;
-(id)init;
-(void)dealloc;
-(void)finishSwipeGesture:(CGFloat)arg0 ;
-(void)invalidateGesture;
-(void)mapTappedTimer;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif