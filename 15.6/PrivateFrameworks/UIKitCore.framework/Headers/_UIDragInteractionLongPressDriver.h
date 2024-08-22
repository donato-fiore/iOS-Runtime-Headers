// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDRAGINTERACTIONLONGPRESSDRIVER_H
#define _UIDRAGINTERACTIONLONGPRESSDRIVER_H

@class UIDragInteractionDriver, NSString;
@protocol UIGestureRecognizerDelegate;


#import "UIDelayedAction.h"
#import "_UIDragLiftGestureRecognizer.h"
#import "_UIRelationshipGestureRecognizer.h"

@interface _UIDragInteractionLongPressDriver : UIDragInteractionDriver <UIGestureRecognizerDelegate>

 {
    UIDelayedAction *_gateTimer;
    UIDelayedAction *_cancellationTimer;
}


@property (readonly, nonatomic) NSUInteger behavior; // ivar: _behavior
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _UIDragLiftGestureRecognizer *gestureRecognizerForDragInitiation; // ivar: _gestureRecognizerForDragInitiation
@property (readonly, nonatomic) _UIRelationshipGestureRecognizer *gestureRecognizerForExclusionRelationship; // ivar: _gestureRecognizerForExclusionRelationship
@property (readonly, nonatomic) _UIRelationshipGestureRecognizer *gestureRecognizerForFailureRelationship; // ivar: _gestureRecognizerForFailureRelationship
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_wantsTimeDelayedFailureRequirementGate;
-(BOOL)canExcludeCompetingGestureRecognizer:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)hasExceededAllowableMovement;
-(BOOL)hasMoveHysteresisBeenReached;
-(BOOL)isGestureRecognizerForDragInitiation:(id)arg0 ;
-(BOOL)shouldDelayCompetingGestureRecognizer:(id)arg0 ;
-(CGFloat)translationInWindow;
-(id)init;
-(id)initWithBehavior:(NSUInteger)arg0 ;
-(void)_dragInitiationGestureStateChanged:(id)arg0 ;
-(void)_gateCompetingGestureRecognizers;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_updateLiftMoveHysteresisInDragInitiationGesture;
-(void)attachToView:(id)arg0 ;
-(void)detachFromView:(id)arg0 ;
-(void)didTransitionToBeginState;
-(void)didTransitionToCancelState;
-(void)didTransitionToDeferred;
-(void)didTransitionToInactiveState;
-(void)didTransitionToInflightState;
-(void)didTransitionToPreparing;
-(void)invalidateCancellationTimer;
-(void)invalidateCompetingGestureRecognizerGateTimer;
-(void)openCompetingGestureRecognizerGateCancelingGestures:(id)arg0 ;
-(void)openGateCancelingAddItemsGestures;
-(void)reset;
-(void)setAllowedTouchTypes:(id)arg0 ;
-(void)setAutomaticallyAddsFailureRelationships:(BOOL)arg0 ;
-(void)setLiftDelay:(CGFloat)arg0 ;
-(void)setLiftMoveHysteresis:(CGFloat)arg0 ;


@end


#endif