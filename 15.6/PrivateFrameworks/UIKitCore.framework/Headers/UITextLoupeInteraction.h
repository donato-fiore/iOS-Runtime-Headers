// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITEXTLOUPEINTERACTION_H
#define UITEXTLOUPEINTERACTION_H

@protocol _UITextLoupeResponderProxyDelegate, UITextLoupeInteractionBehaviorDelegate;


#import "UITextInteraction.h"
#import "UIDelayedAction.h"
#import "UITextGestureTuning.h"
#import "UIResponder.h"
#import "_UITextLoupeResponderProxy.h"

@interface UITextLoupeInteraction : UITextInteraction <_UITextLoupeResponderProxyDelegate>

 {
    UIDelayedAction *_delayedLoupeAction;
    UIDelayedAction *_delayedSelectionAction;
    BOOL _hasPerformedInteraction;
    CGPoint _initialPointFromPreviousInteraction;
}


@property (retain, nonatomic) NSObject<UITextLoupeInteractionBehaviorDelegate> *behaviorDelegate; // ivar: _behaviorDelegate
@property (readonly, nonatomic) UITextGestureTuning *gestureTuning; // ivar: _gestureTuning
@property (nonatomic) NSInteger inheritedGranularity; // ivar: _inheritedGranularity
@property (readonly, nonatomic) UIResponder *responder;
@property (retain, nonatomic) _UITextLoupeResponderProxy *responderProxy; // ivar: _responderProxy
@property (nonatomic) BOOL shouldUseLineThreshold;
@property (nonatomic) BOOL strongerBiasAgainstUp;
@property (nonatomic) BOOL triggeredByLongPress; // ivar: _triggeredByLongPress


-(BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)arg0 forGestureRecognizer:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)interaction_gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)translationIsWithinAllowableMovement:(struct CGPoint )arg0 ;
-(id)initWithBehaviorDelegate:(id)arg0 ;
-(struct CGPoint )pointIfPlacedCarefully:(struct CGPoint )arg0 ;
-(struct CGPoint )touchAlignedPointForPoint:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 ;
-(void)_createGestureTuningIfNecessary;
-(void)_performGestureType:(NSInteger)arg0 state:(NSInteger)arg1 location:(struct CGPoint )arg2 locationOfFirstTouch:(struct CGPoint )arg3 forTouchType:(NSInteger)arg4 ;
-(void)_processGestureForCustomHighlighter:(id)arg0 ;
-(void)canBeginDragCursor:(id)arg0 ;
-(void)cancelDelayedLoupeActionIfNecessary;
-(void)delayedDisplayLoupe:(id)arg0 ;
-(void)delayedLoupeAction:(id)arg0 ;
-(void)delayedSelectionAction:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)finishSetup;
-(void)loupeGesture:(id)arg0 ;
// -(void)loupeGestureWithState:(NSInteger)arg0 location:(id)arg1 translation:(unk)arg2 velocity:(id)arg3 modifierFlags:(unk)arg4 shouldCancel:(id)arg5  ;
-(void)setupDelayedLoupeActionWithInitialPoint:(struct CGPoint )arg0 ;
-(void)setupGestureExclusionRequirements;
-(void)updateInitialPoint:(struct CGPoint )arg0 ;
-(void)updateOrCancelDelayedLoupeActionWithPoint:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 ;
-(void)updateVisibilityOffsetForGesture:(id)arg0 ;
-(void)willBeginExternalGesture;
-(void)willMoveToView:(id)arg0 ;


@end


#endif