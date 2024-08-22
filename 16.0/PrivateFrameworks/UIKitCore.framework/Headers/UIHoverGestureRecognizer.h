// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIHOVERGESTURERECOGNIZER_H
#define UIHOVERGESTURERECOGNIZER_H



#import "UIGestureRecognizer.h"
#import "UIHoverEvent.h"
#import "UITouch.h"

@interface UIHoverGestureRecognizer : UIGestureRecognizer {
    UIHoverEvent *_currentHoverEvent;
    UITouch *_currentTouch;
}


@property (nonatomic, getter=_pausesWhilePanning, setter=_setPausesWhilePanning:) BOOL pausesWhilePanning; // ivar: _pausesWhilePanning
@property (readonly, nonatomic, getter=_previousTrackpadFingerDownCount) NSInteger previousTrackpadFingerDownCount; // ivar: _previousTrackpadFingerDownCount
@property (readonly, nonatomic, getter=_trackpadFingerDownCount) NSInteger trackpadFingerDownCount; // ivar: _trackpadFingerDownCount


-(BOOL)_affectedByGesture:(id)arg0 ;
-(BOOL)_paused;
-(BOOL)_shouldReceivePress:(id)arg0 ;
-(BOOL)_shouldReceiveTouch:(id)arg0 forEvent:(id)arg1 recognizerView:(id)arg2 ;
-(BOOL)_shouldReceiveTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)_wantsHoverEventsWhilePointerIsLocked;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)_hoverCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)_hoverEntered:(id)arg0 withEvent:(id)arg1 ;
-(void)_hoverExited:(id)arg0 withEvent:(id)arg1 ;
-(void)_hoverMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)_resetInternalState;
-(void)reset;
-(void)setAllowedTouchTypes:(id)arg0 ;


@end


#endif