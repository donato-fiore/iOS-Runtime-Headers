// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPANORFLICKGESTURERECOGNIZER_H
#define _UIPANORFLICKGESTURERECOGNIZER_H

@protocol _UIPanOrFlickGestureRecognizerDelegate;


#import "UIPanGestureRecognizer.h"
#import "UIDelayedAction.h"

@interface _UIPanOrFlickGestureRecognizer : UIPanGestureRecognizer {
    NSUInteger _touchCount;
}


@property (nonatomic) CGFloat allowableMovement; // ivar: _allowableMovement
@property (nonatomic) NSUInteger allowedFlickDirections; // ivar: _allowedFlickDirections
@property (readonly, nonatomic) BOOL didLongPress; // ivar: _didLongPress
@property (retain, nonatomic) UIDelayedAction *elapsedAction; // ivar: _elapsedAction
@property (nonatomic) CGPoint initialCentroidLocation; // ivar: _initialCentroidLocation
@property (nonatomic) BOOL longPressOnly; // ivar: _longPressOnly
@property (nonatomic) CGFloat maximumFlickDuration; // ivar: _maximumFlickDuration
@property (nonatomic) CGFloat minimumFlickDistance; // ivar: _minimumFlickDistance
@property (nonatomic) CGFloat minimumPressDuration; // ivar: _minimumPressDuration
@property (readonly, nonatomic) NSObject<_UIPanOrFlickGestureRecognizerDelegate> *panOrFlickDelegate;
@property (readonly, nonatomic) NSUInteger recognizedFlickDirection;
@property (retain, nonatomic) UIDelayedAction *responsivenessAction; // ivar: _responsivenessAction
@property (nonatomic) CGFloat responsivenessDelay; // ivar: _responsivenessDelay
@property (nonatomic) CGFloat timestampBeforeGestureBegan; // ivar: _timestampBeforeGestureBegan
@property (nonatomic) CGFloat timestampOfLastEvent; // ivar: _timestampOfLastEvent


-(BOOL)_analyticsIsGestureHandled;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg0 ;
-(BOOL)isValidLongPress;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)clearTimer;
-(void)dealloc;
-(void)enoughTimeElapsed:(id)arg0 ;
-(void)reset;
-(void)responsivenessTimeElapsed:(id)arg0 ;
-(void)startTimer;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif