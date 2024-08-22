// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICLICKPRESENTATIONINTERACTION_H
#define _UICLICKPRESENTATIONINTERACTION_H

@class NSArray, NSString;
@protocol _UIClickInteractionDriverDelegate, UIInteraction_Internal, UIGestureRecognizerDelegate, _UIDragInteractionPresentationDelegate, UIInteraction, _UIClickInteractionDriving, _UIClickPresentationInteractionDelegate, _UIClickPresentationAssisting;

#import <Foundation/Foundation.h>

#import "_UIRelationshipGestureRecognizer.h"
#import "_UIGravityWellEffectKey.h"
#import "UIDragInteraction.h"
#import "_UIClickPresentationFeedbackGenerator.h"
#import "UIGestureRecognizer.h"
#import "_UIClickPresentation.h"
#import "UITargetedPreview.h"
#import "UIView.h"

@interface _UIClickPresentationInteraction : NSObject <_UIClickInteractionDriverDelegate, UIInteraction_Internal, UIGestureRecognizerDelegate, _UIDragInteractionPresentationDelegate, UIInteraction>

 {
    NSUInteger _currentState;
    ? _delegateImplements;
    NSInteger _statsPresentation;
    BOOL _activatedFeedbackGeneratorForClick;
    BOOL _unableToClick;
    _UIRelationshipGestureRecognizer *_gestureRecognizerForBeginningDragRelationships;
    _UIGravityWellEffectKey *_activeEffectKey;
}


@property (readonly, nonatomic) NSUInteger activatedDriverStyle;
@property (retain, nonatomic) NSObject<_UIClickInteractionDriving> *activeDriver; // ivar: _activeDriver
@property (retain, nonatomic) NSArray *allDrivers; // ivar: _allDrivers
@property (nonatomic) BOOL allowSimultaneousRecognition; // ivar: _allowSimultaneousRecognition
@property (weak, nonatomic) UIDragInteraction *associatedDragInteraction; // ivar: _associatedDragInteraction
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *debugIdentifier; // ivar: _debugIdentifier
@property (readonly, weak, nonatomic) NSObject<_UIClickPresentationInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UIRelationshipGestureRecognizer *exclusionRelationshipGestureRecognizer; // ivar: _exclusionRelationshipGestureRecognizer
@property (retain, nonatomic) _UIRelationshipGestureRecognizer *failureRelationshipGestureRecognizer; // ivar: _failureRelationshipGestureRecognizer
@property (retain, nonatomic) _UIClickPresentationFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizerForBeginningDragRelationships;
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizerForExclusionRelationship;
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizerForFailureRelationship;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint initialLocation; // ivar: _initialLocation
@property (readonly, nonatomic) NSUInteger inputPrecision;
@property (retain, nonatomic) UIDragInteraction *latentAssociatedDragInteraction; // ivar: _latentAssociatedDragInteraction
@property (retain, nonatomic) NSArray *overrideDrivers; // ivar: _overrideDrivers
@property (retain, nonatomic) _UIClickPresentation *pendingPresentation; // ivar: _pendingPresentation
@property (retain, nonatomic) NSObject<_UIClickPresentationAssisting> *presentationAssistant; // ivar: _presentationAssistant
@property (copy, nonatomic) NSString *presentationTypeDebugString; // ivar: _presentationTypeDebugString
@property (readonly, nonatomic) UITargetedPreview *primaryEffectPreview;
@property (readonly, nonatomic, getter=_reachedForceThreshold) BOOL reachedForceThreshold;
@property (readonly, nonatomic) NSArray *secondaryEffectPreviews;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


+(void)_setDefaultDriverClasses:(id)arg0 forIdiom:(NSInteger)arg1 ;
-(BOOL)_canPerformPresentation;
-(BOOL)_isActive;
-(BOOL)_isControlledByCC;
-(BOOL)_supportsRapidRestart;
-(BOOL)beginDragIfPossibleWithTouch:(id)arg0 ;
-(BOOL)clickDriver:(id)arg0 shouldBeDelayedByGestureRecognizer:(id)arg1 ;
-(BOOL)clickDriver:(id)arg0 shouldDelayGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)_activeEffect;
-(id)_candidateInteractionsForAssociation;
-(id)_clickDragDriver;
-(id)_clickDriverTouch;
-(id)_dragInteractionPresentation:(id)arg0 previewForCancellingItem:(id)arg1 defaultPreview:(id)arg2 proposedPreview:(id)arg3 ;
-(id)initWithDelegate:(id)arg0 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)_associateWithActiveDragInteraction;
-(void)_attemptDragLiftAtLocation:(struct CGPoint )arg0 useDefaultLiftAnimation:(BOOL)arg1 ;
-(void)_cancelAllDrivers;
// -(void)_cancelWithReason:(NSUInteger)arg0 alongsideActions:(id)arg1 completion:(unk)arg2  ;
-(void)_delegate_interactionEndedWithContext:(struct InteractionEndingContext *)arg0 ;
-(void)_dragInteractionPresentation:(id)arg0 item:(id)arg1 willAnimateCancelWithAnimator:(id)arg2 ;
-(void)_dragInteractionPresentation:(id)arg0 sessionDidEnd:(id)arg1 withoutBeginning:(BOOL)arg2 ;
-(void)_driverClickedDown;
-(void)_driverClickedUp;
-(void)_driverEnded;
-(void)_endInteractionEffectIfNeeded;
-(void)_endInteractionWithContext:(struct InteractionEndingContext *)arg0 ;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_performPresentation;
-(void)_prepareInteractionEffect;
-(void)_refreshAllDrivers;
-(void)_transitionedFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 ;
-(void)_viewTraitCollectionDidChange:(id)arg0 ;
-(void)beginPanInteraction;
-(void)cancelInteraction;
-(void)clickDriver:(id)arg0 didPerformEvent:(NSUInteger)arg1 ;
-(void)clickDriver:(id)arg0 didUpdateHighlightProgress:(CGFloat)arg1 ;
-(void)clickDriver:(id)arg0 shouldBegin:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToView:(id)arg0 ;
-(void)endPanInteraction;
-(void)present;
-(void)willMoveToView:(id)arg0 ;


@end


#endif