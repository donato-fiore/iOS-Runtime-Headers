// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDRAGRECOGNIZER_H
#define UIDRAGRECOGNIZER_H



#import "UIGestureRecognizer.h"
#import "UIDelayedAction.h"
#import "UITouch.h"

@interface UIDragRecognizer : UIGestureRecognizer {
    UIDelayedAction *_tooSlow;
}


@property (nonatomic) CGFloat angle; // ivar: _angle
@property (nonatomic) BOOL canBeginDrag; // ivar: _canBeginDrag
@property (nonatomic) SEL checkCanBeginDrag; // ivar: _checkCanBeginDrag
@property (retain, nonatomic) UIDelayedAction *ignoreTouch; // ivar: ignoreTouch
@property (nonatomic) CGFloat maximumDeviation; // ivar: _maximumDeviation
@property (nonatomic) CGFloat minimumDistance; // ivar: _minimumDistance
@property (nonatomic) CGFloat quietPeriod; // ivar: _quietPeriod
@property (nonatomic) BOOL restrictsToAngle; // ivar: _restrictsToAngle
@property (nonatomic) CGFloat startAngle; // ivar: _startAngle
@property (nonatomic) CGPoint startPosition; // ivar: _startPosition
@property (retain, nonatomic) UITouch *touch; // ivar: _touch


+(BOOL)_shouldDefaultToTouches;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_resetGestureRecognizer;
-(void)clearIgnoreTouch;
-(void)clearTimer;
-(void)dealloc;
-(void)tooSlow:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif