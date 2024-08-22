// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIINTERRUPTSCROLLDECELERATIONGESTURERECOGNIZER_H
#define _UIINTERRUPTSCROLLDECELERATIONGESTURERECOGNIZER_H

@class NSString;
@protocol _UIScrollEventRespondable, _UIHoverEventRespondable;


#import "UIGestureRecognizer.h"
#import "UIHoverEvent.h"

@interface _UIInterruptScrollDecelerationGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable, _UIHoverEventRespondable>

 {
    UIHoverEvent *_currentHoverEvent;
    NSInteger _previousTrackpadFingerDownCount;
    NSInteger _trackpadFingerDownCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_affectedByGesture:(id)arg0 ;
-(BOOL)_shouldReceivePress:(id)arg0 ;
-(BOOL)_shouldReceiveTouch:(id)arg0 forEvent:(id)arg1 recognizerView:(id)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_hoverCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)_hoverEntered:(id)arg0 withEvent:(id)arg1 ;
-(void)_hoverExited:(id)arg0 withEvent:(id)arg1 ;
-(void)_hoverMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)_scrollingChangedWithEvent:(id)arg0 ;
-(void)reset;


@end


#endif