// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDRAGINTERACTIONCLICKPRESENTATIONDRIVER_H
#define _UIDRAGINTERACTIONCLICKPRESENTATIONDRIVER_H

@class UIDragInteractionDriver, NSSet;


#import "UIDelayedAction.h"

@interface _UIDragInteractionClickPresentationDriver : UIDragInteractionDriver {
    NSSet *_touches;
    id *_itemIterator;
    id *_sessionHandler;
    id *_liftCompletion;
    UIDelayedAction *_delayedLift;
}




-(BOOL)canBeginLiftAtLocation:(struct CGPoint )arg0 ;
-(BOOL)isLifted;
-(BOOL)isPreparingToDrag;
-(void)_performDelayedLift;
// -(void)beginDragWithTouches:(id)arg0 itemIterator:(id)arg1 beginningSessionHandler:(unk)arg2  ;
-(void)beginLiftAtLocation:(struct CGPoint )arg0 useDefaultLiftAnimation:(BOOL)arg1 delay:(CGFloat)arg2 completion:(id)arg3 ;
-(void)cancel;
-(void)didTransitionToBeginState;
-(void)didTransitionToInactiveState;
-(void)didTransitionToInflightState;


@end


#endif