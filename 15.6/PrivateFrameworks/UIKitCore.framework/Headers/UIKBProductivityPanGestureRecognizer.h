// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBPRODUCTIVITYPANGESTURERECOGNIZER_H
#define UIKBPRODUCTIVITYPANGESTURERECOGNIZER_H

@class NSMutableSet, NSMutableDictionary;


#import "UIPanGestureRecognizer.h"
#import "_UIGestureRecognizerTransformAnalyzer.h"

@interface UIKBProductivityPanGestureRecognizer : UIPanGestureRecognizer

@property (retain, nonatomic) NSMutableSet *activeTouches; // ivar: _activeTouches
@property (nonatomic) CGPoint beginPanCentroid; // ivar: _beginPanCentroid
@property (nonatomic) CGFloat beginPanTimestamp; // ivar: _beginPanTimestamp
@property (retain, nonatomic) NSMutableDictionary *beginTouchLocations; // ivar: _beginTouchLocations
@property (retain, nonatomic) NSMutableSet *shiftTouches; // ivar: _shiftTouches
@property (nonatomic) BOOL tooMuchSingleMovement; // ivar: _tooMuchSingleMovement
@property (retain, nonatomic) _UIGestureRecognizerTransformAnalyzer *transformAnalyzer; // ivar: _transformAnalyzer


+(id)productivityPanGestureRecognizerWithTarget:(id)arg0 action:(SEL)arg1 delegate:(id)arg2 ;
-(BOOL)isShiftOrMoreKeyForTouch:(id)arg0 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )centroidOfTouches:(id)arg0 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif