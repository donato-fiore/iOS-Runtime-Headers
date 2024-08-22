// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBPRODUCTIVITYPINCHGESTURERECOGNIZER_H
#define UIKBPRODUCTIVITYPINCHGESTURERECOGNIZER_H

@class NSMutableArray, NSMutableDictionary;


#import "UIGestureRecognizer.h"

@interface UIKBProductivityPinchGestureRecognizer : UIGestureRecognizer {
    BOOL _recognized;
    CGAffineTransform _transform;
    id *_transformAnalyzer;
    BOOL _hasFailedOnOtherDominantMotion;
    NSUInteger _numberOfTouchesRequired;
    BOOL _multitouchTimerEnabled;
}


@property (retain, nonatomic) NSMutableArray *activeTouches; // ivar: _activeTouches
@property (nonatomic) CGFloat allowableElapsedTimeForAllRequiredTouches; // ivar: _allowableElapsedTimeForAllRequiredTouches
@property (readonly, nonatomic) CGFloat avgTouchesToCentroidDistance; // ivar: _avgTouchesToCentroidDistance
@property (nonatomic) CGFloat beforeReductionTimeInterval; // ivar: _beforeReductionTimeInterval
@property (nonatomic) CGPoint beginCentroid; // ivar: _beginCentroid
@property (nonatomic) CGFloat beginPerimeter; // ivar: _beginPerimeter
@property (nonatomic) CGFloat beginPinchTimestamp; // ivar: _beginPinchTimestamp
@property (retain, nonatomic) NSMutableDictionary *beginTouchLocations; // ivar: _beginTouchLocations
@property (readonly, nonatomic) NSInteger pinchDirection; // ivar: _pinchDirection
@property (nonatomic) BOOL tooMuchSingleMovement; // ivar: _tooMuchSingleMovement


+(id)productivityPinchGestureRecognizerWithTarget:(id)arg0 action:(SEL)arg1 delegate:(id)arg2 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg0 ;
-(BOOL)sufficientMotionInDirection:(NSInteger)arg0 withLocation:(struct CGPoint )arg1 withScale:(CGFloat)arg2 withAngle:(CGFloat)arg3 ;
-(CGFloat)avgDistanceToCentroid:(id)arg0 ;
-(CGFloat)perimeterOfTouches:(id)arg0 ;
-(CGFloat)scale;
-(NSInteger)pinchDirectionWithCurrentTime:(CGFloat)arg0 perimeter:(CGFloat)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )centroidOfTouches:(id)arg0 ;
-(void)_updateTransformAnalyzerWeights;
-(void)clearMultitouchTimer;
-(void)multitouchExpired:(id)arg0 ;
-(void)reset;
-(void)startMultitouchTimer:(CGFloat)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif