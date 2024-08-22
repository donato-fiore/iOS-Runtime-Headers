// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICONTEXTMENUPRESENTATIONANIMATION_H
#define _UICONTEXTMENUPRESENTATIONANIMATION_H

@class NSString, NSArray;
@protocol _UIClickPresentationTransition, _UIContextMenuPresentationAnimationDelegate;

#import <Foundation/Foundation.h>

#import "_UIContextMenuAnimator.h"
#import "UIViewFloatAnimatableProperty.h"
#import "UIViewPropertyAnimator.h"
#import "_UIContextMenuLayoutArbiterOutput.h"
#import "_UIContextMenuPresentationController.h"
#import "_UIContextMenuReparentingContainerView.h"
#import "_UIPortalView.h"
#import "UITargetedPreview.h"

@interface _UIContextMenuPresentationAnimation : NSObject <_UIClickPresentationTransition>



@property (copy, nonatomic) id *accessoryAnimationBlock; // ivar: _accessoryAnimationBlock
@property (retain, nonatomic) _UIContextMenuAnimator *alongsideAnimator; // ivar: _alongsideAnimator
@property (retain, nonatomic) UIViewFloatAnimatableProperty *animationProgress; // ivar: _animationProgress
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIContextMenuPresentationAnimationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger dismissalStyle; // ivar: _dismissalStyle
@property (retain, nonatomic) _UIContextMenuLayoutArbiterOutput *expandedLayout; // ivar: _expandedLayout
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDismissTransition; // ivar: _isDismissTransition
@property (retain, nonatomic) NSArray *preferredBackgroundEffects; // ivar: _preferredBackgroundEffects
@property (nonatomic) UIEdgeInsets preferredBackgroundInsets; // ivar: _preferredBackgroundInsets
@property (weak, nonatomic) _UIContextMenuPresentationController *presentationController; // ivar: _presentationController
@property (nonatomic) BOOL previewOverlapsMenu; // ivar: _previewOverlapsMenu
@property (copy, nonatomic) id *reparentingAnimationBlock; // ivar: _reparentingAnimationBlock
@property (retain, nonatomic) _UIContextMenuReparentingContainerView *reparentingContainerView; // ivar: _reparentingContainerView
@property (retain, nonatomic) _UIPortalView *reparentingPortalView; // ivar: _reparentingPortalView
@property (nonatomic) BOOL reparentsInDestinationContainer; // ivar: _reparentsInDestinationContainer
@property (copy, nonatomic) UITargetedPreview *sourcePreview; // ivar: _sourcePreview
@property (readonly) Class superclass;
@property (retain, nonatomic) UITargetedPreview *trackedPreviewForReparenting; // ivar: _trackedPreviewForReparenting


-(BOOL)_isDismissingToDrag;
-(BOOL)_shouldAnimateBackgroundEffects;
-(id)_backgroundView;
-(id)_containerView;
-(id)_menuView;
-(id)_platterTransitionView;
-(id)_platterView;
-(id)_targetedPreviewForDismissalAnimation;
-(id)initWithPresentationController:(id)arg0 asDismissal:(BOOL)arg1 ;
-(void)_actuallyPerformTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)_anchorTransitionViewToTargetedPreview:(id)arg0 ;
-(void)_installAccessories;
-(void)_performAlongsideAnimations;
-(void)_performReduceMotionAppearanceTransition;
-(void)_performReduceMotionDisappearanceTransition;
-(void)_prepareAnimatablePropertyBasedAnimations;
-(void)_prepareReparentingAnimationWithDismissalTarget:(id)arg0 ;
-(void)_presentation_applyBackgroundEffectWithProgress:(CGFloat)arg0 ;
-(void)_setBackgroundVisible:(BOOL)arg0 ;
-(void)_updateAccessoryAttachment:(id)arg0 ;
-(void)animateForDragSetDown;
-(void)performTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)prepareTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)transitionDidEnd:(BOOL)arg0 ;


@end


#endif