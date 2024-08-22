// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICONTEXTMENUINTERACTION_H
#define UICONTEXTMENUINTERACTION_H

@class NSArray, NSMutableDictionary, NSString;
@protocol _UIClickPresentationInteractionDelegateInternal, _UIContextMenuPresentationControllerDelegate, _UIContextMenuPresentationAnimationDelegate, UIDeferredMenuElementDelegate, _UIVisualStyleStylable, _UIWindowSceneActivator_Internal, UIInteraction, UIContextMenuInteractionDelegate;

#import <Foundation/Foundation.h>

#import "UIGestureRecognizer.h"
#import "_UIContextMenuPresentation.h"
#import "_UIContextMenuAnimator.h"
#import "UIContextMenuConfiguration.h"
#import "_UIClickPresentationInteraction.h"
#import "UIView.h"
#import "_UIWindowSceneActivationAnimator.h"

@interface UIContextMenuInteraction : NSObject <_UIClickPresentationInteractionDelegateInternal, _UIContextMenuPresentationControllerDelegate, _UIContextMenuPresentationAnimationDelegate, UIDeferredMenuElementDelegate, _UIVisualStyleStylable, _UIWindowSceneActivator_Internal, UIInteraction>

 {
    ? _delegateImplements;
}


@property (readonly, nonatomic) UIGestureRecognizer *_gestureRecognizerForBeginningDragRelationships;
@property (readonly, nonatomic) BOOL _hasActivePresentationInteraction;
@property (readonly, nonatomic) BOOL _hasVisibleMenu;
@property (readonly, nonatomic) NSUInteger _inputPrecision;
@property (nonatomic, setter=_setPassthroughInteractionTouchEatingDisabledForSearchSuggestions:) BOOL _passthroughInteractionTouchEatingDisabledForSearchSuggestions; // ivar: __passthroughInteractionTouchEatingDisabledForSearchSuggestions
@property (copy, nonatomic, setter=_setPassthroughViews:) NSArray *_passthroughViews; // ivar: __passthroughViews
@property (nonatomic) BOOL _useSenderAsResponderSender; // ivar: __useSenderAsResponderSender
@property (nonatomic) BOOL allowSimultaneousRecognition;
@property (retain, nonatomic) NSMutableDictionary *configurationsByIdentifier; // ivar: _configurationsByIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<UIContextMenuInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizerForFailureRelationships;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger menuAppearance;
@property (retain, nonatomic) _UIContextMenuPresentation *outgoingPresentation; // ivar: _outgoingPresentation
@property (retain, nonatomic) _UIContextMenuAnimator *pendingCommitAnimator; // ivar: _pendingCommitAnimator
@property (retain, nonatomic) UIContextMenuConfiguration *pendingConfiguration; // ivar: _pendingConfiguration
@property (readonly, nonatomic) _UIClickPresentationInteraction *presentationInteraction; // ivar: _presentationInteraction
@property (retain, nonatomic) NSMutableDictionary *presentationsByIdentifier; // ivar: _presentationsByIdentifier
@property (readonly, nonatomic, getter=_reachedForceThreshold) BOOL reachedForceThreshold;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view
@property (retain, nonatomic) _UIWindowSceneActivationAnimator *windowSceneActivationAnimator; // ivar: _windowSceneActivationAnimator


+(id)visualStyleRegistryIdentity;
+(void)_setDefaultDriverClasses:(id)arg0 forIdiom:(NSInteger)arg1 ;
-(BOOL)_clickPresentationInteraction:(id)arg0 shouldBeDelayedByGestureRecognizer:(id)arg1 ;
-(BOOL)_clickPresentationInteractionShouldAllowDragAfterDismiss:(id)arg0 ;
-(BOOL)_clickPresentationInteractionShouldAllowRapidRestart:(id)arg0 ;
-(BOOL)_delegate_failedToBeginForSecondaryClickAtLocation:(struct CGPoint )arg0 ;
-(BOOL)_shouldKeepInputViewVisibleForStyle:(id)arg0 ;
-(NSUInteger)_actualLayoutForPreferredLayout:(NSUInteger)arg0 withConfiguration:(id)arg1 ;
-(NSUInteger)_currentActivationMode;
-(NSUInteger)activationStyleForClickPresentationInteraction:(id)arg0 ;
-(id)_clickPresentationInteraction:(id)arg0 interactionEffectForTargetedPreview:(id)arg1 ;
-(id)_clickPresentationInteraction:(id)arg0 liveDragPreviewForPresentation:(id)arg1 dragItem:(id)arg2 ;
-(id)_clickPresentationInteraction:(id)arg0 previewForCancellingDragItem:(id)arg1 ;
-(id)_contextMenuPresentationController:(id)arg0 willDisplayMenu:(id)arg1 ;
-(id)_delegate_configurationForMenuAtLocation:(struct CGPoint )arg0 ;
-(id)_delegate_contextMenuInteractionWillDisplayForConfiguration:(id)arg0 ;
-(id)_delegate_contextMenuInteractionWillEndForConfiguration:(id)arg0 presentation:(id)arg1 ;
-(id)_delegate_getAccessoryViewsForConfiguration:(id)arg0 ;
-(id)_delegate_previewForDismissingForConfiguration:(id)arg0 clientReturnedPreview:(*BOOL)arg1 ;
-(id)_delegate_previewForHighlightingForConfiguration:(id)arg0 ;
-(id)_fulfilledConfigurationForConfiguration:(id)arg0 appearance:(NSInteger)arg1 atLocation:(struct CGPoint )arg2 ;
-(id)_liveDragPreviewForConfiguration:(id)arg0 dragItem:(id)arg1 ;
-(id)_menuPreparedForDisplayWithMenu:(id)arg0 firstResponder:(id)arg1 ;
-(id)_proxySender;
-(id)_secondaryPreviewsForClickPresentationInteraction:(id)arg0 ;
-(id)_suggestedMenuForConfiguration:(id)arg0 atLocation:(struct CGPoint )arg1 inCoordinateSpace:(id)arg2 ;
-(id)_targetedPreviewForWindowSceneActivationWithConfiguration:(id)arg0 menuPresentation:(id)arg1 isFromMenu:(*BOOL)arg2 ;
-(id)animator:(id)arg0 previewForSecondaryItem:(id)arg1 dismissingWithStyle:(NSUInteger)arg2 ;
-(id)clickPresentationInteraction:(id)arg0 presentationForPresentingViewController:(id)arg1 ;
-(id)clickPresentationInteraction:(id)arg0 previewForHighlightingAtLocation:(struct CGPoint )arg1 ;
-(id)gestureRecognizerForExclusionRelationships;
-(id)initWithDelegate:(id)arg0 ;
-(id)targetedPreviewForAnimator:(id)arg0 dismissingWithStyle:(NSUInteger)arg1 clientReturnedPreview:(*BOOL)arg2 ;
-(struct ? )_testing_metdataForMenuElements:(id)arg0 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)_clickPresentationInteraction:(id)arg0 dragSessionDidEndForItems:(id)arg1 ;
-(void)_clickPresentationInteraction:(id)arg0 item:(id)arg1 willAnimateDragCancelWithAnimator:(id)arg2 ;
-(void)_clickPresentationInteraction:(id)arg0 shouldBegin:(id)arg1 ;
-(void)_clickPresentationInteraction:(id)arg0 shouldPresentWithCompletion:(id)arg1 ;
-(void)_clickPresentationInteractionEnded:(id)arg0 forPresentation:(id)arg1 reason:(NSUInteger)arg2 ;
-(void)_contextMenuPresentationController:(id)arg0 beginDragWithTouch:(id)arg1 ;
-(void)_contextMenuPresentationController:(id)arg0 didSelectMenuLeaf:(id)arg1 ;
-(void)_contextMenuPresentationControllerDidBeginPanInteraction:(id)arg0 allowSwipeToDismiss:(*BOOL)arg1 ;
-(void)_contextMenuPresentationControllerDidEndPanInteraction:(id)arg0 ;
-(void)_contextMenuPresentationControllerDidTapPreview:(id)arg0 ;
// -(void)_contextMenuPresentationControllerWantsToBeDismissed:(id)arg0 withReason:(NSUInteger)arg1 alongsideActions:(id)arg2 completion:(unk)arg3  ;
-(void)_delegate_tappedPreviewForConfiguration:(id)arg0 withAnimator:(id)arg1 ;
-(void)_dragMorphDidCompleteForConfiguration:(id)arg0 ;
-(void)_interactionShouldBeginAtPlatformPoint:(struct CGPoint )arg0 completion:(id)arg1 ;
-(void)_performCleanupForConfigurationWithIdentifier:(id)arg0 ;
-(void)_prepareSceneActivationConfiguration:(id)arg0 ;
-(void)_presentMenuAtLocation:(struct CGPoint )arg0 ;
-(void)_presentMenuAtPlatformPoint:(struct CGPoint )arg0 ;
-(void)_requestSceneActivationWithConfiguration:(id)arg0 animated:(BOOL)arg1 sender:(id)arg2 errorHandler:(id)arg3 ;
-(void)_retargetDismissingMenuWithIdentifier:(id)arg0 toPreview:(id)arg1 force:(BOOL)arg2 ;
-(void)_viewTraitCollectionDidChange:(id)arg0 ;
-(void)_willBeginWithConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)deferredMenuElementWasFulfilled:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)dismissMenu;
-(void)setDrivers:(id)arg0 ;
-(void)updateVisibleMenuWithBlock:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif