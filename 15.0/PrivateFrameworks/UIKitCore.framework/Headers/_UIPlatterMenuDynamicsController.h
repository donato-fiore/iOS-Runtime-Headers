// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPLATTERMENUDYNAMICSCONTROLLER_H
#define _UIPLATTERMENUDYNAMICSCONTROLLER_H

@class NSString;
@protocol _UIPlatterMenuPanningTransformerDelegate, _UIPlatterMenuDynamicsControllerDelegate, UIDynamicItem;

#import <Foundation/Foundation.h>

#import "UIDynamicAnimator.h"
#import "UIView.h"
#import "UIAttachmentBehavior.h"
#import "_UIPlatterMenuSnapBehavior.h"
#import "UIDynamicItemBehavior.h"
#import "_UIDynamicItemObservingBehavior.h"
#import "_UIPlatterMenuPanningTransformer.h"
#import "UICollisionBehavior.h"
#import "_UIStatesFeedbackGenerator.h"

@interface _UIPlatterMenuDynamicsController : NSObject <_UIPlatterMenuPanningTransformerDelegate>



@property (retain, nonatomic) UIDynamicAnimator *animator; // ivar: _animator
@property (weak, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, nonatomic) CGVector currentTranslation;
@property (readonly, nonatomic) CGVector currentVelocity;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIPlatterMenuDynamicsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger didPresentCount; // ivar: _didPresentCount
@property (retain, nonatomic) UIAttachmentBehavior *gestureAttachmentBehavior; // ivar: _gestureAttachmentBehavior
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint initialTouchPoint; // ivar: _initialTouchPoint
@property (nonatomic) BOOL isCurrentlyUnderDirectManipulation; // ivar: _isCurrentlyUnderDirectManipulation
@property (nonatomic) BOOL leadingSwipeActionViewSelected; // ivar: _leadingSwipeActionViewSelected
@property (nonatomic) CGFloat leadingSwipeEdgeMultiplier; // ivar: _leadingSwipeEdgeMultiplier
@property (retain, nonatomic) _UIPlatterMenuSnapBehavior *menuDismissedSnapBehavior; // ivar: _menuDismissedSnapBehavior
@property (retain, nonatomic) UIDynamicItemBehavior *menuItemBehavior; // ivar: _menuItemBehavior
@property (retain, nonatomic) _UIPlatterMenuSnapBehavior *menuPresentedSnapBehavior; // ivar: _menuPresentedSnapBehavior
@property (retain, nonatomic) UIAttachmentBehavior *menuVerticalLockAttachment; // ivar: _menuVerticalLockAttachment
@property (weak, nonatomic) UIView *menuView; // ivar: _menuView
@property (retain, nonatomic) UIDynamicItemBehavior *noRotationBehavior; // ivar: _noRotationBehavior
@property (retain, nonatomic) _UIDynamicItemObservingBehavior *observingBehavior; // ivar: _observingBehavior
@property (retain, nonatomic) _UIPlatterMenuPanningTransformer *panningLockTransformer; // ivar: _panningLockTransformer
@property (weak, nonatomic) NSObject<UIDynamicItem> *platterItem; // ivar: _platterItem
@property (retain, nonatomic) UIDynamicItemBehavior *platterItemBehavior; // ivar: _platterItemBehavior
@property (retain, nonatomic) UIAttachmentBehavior *platterMenuAttachmentBehavior; // ivar: _platterMenuAttachmentBehavior
@property (retain, nonatomic) UICollisionBehavior *platterMenuCollisionBounds; // ivar: _platterMenuCollisionBounds
@property (retain, nonatomic) UIAttachmentBehavior *platterMenuSlidingAttachmentBehavior; // ivar: _platterMenuSlidingAttachmentBehavior
@property (retain, nonatomic) _UIPlatterMenuSnapBehavior *platterSnapBehavior; // ivar: _platterSnapBehavior
@property (weak, nonatomic) UIView *platterView; // ivar: _platterView
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *swipeFeedbackGenerator; // ivar: _swipeFeedbackGenerator
@property (nonatomic) BOOL trailingSwipeActionViewSelected; // ivar: _trailingSwipeActionViewSelected
@property (nonatomic) CGFloat trailingSwipeEdgeMultiplier; // ivar: _trailingSwipeEdgeMultiplier


-(BOOL)_isPlatterInYLockedPosition;
-(BOOL)hasBeenPresented;
-(BOOL)isDefaultAnimatorBehavior:(id)arg0 ;
-(BOOL)isMenuPresented;
-(BOOL)isMenuPresenting;
-(BOOL)isSelectingSwipeAction;
-(BOOL)platterPanned;
-(NSInteger)_stateForPosition:(struct CGPoint )arg0 offset:(struct CGVector )arg1 velocity:(struct CGVector )arg2 ;
-(id)initWithContainerView:(id)arg0 platterView:(id)arg1 menuView:(id)arg2 delegate:(id)arg3 ;
-(struct CGPoint )centerForCurrentPlatterPosition;
-(struct CGPoint )centerForMenuPresentedRelativeToCurrentPlatter;
-(struct CGPoint )menuCenter;
-(struct CGPoint )platterCenter;
-(struct CGVector )modifiedOffsetForPosition:(struct CGPoint )arg0 offset:(struct CGVector )arg1 touchPosition:(struct CGPoint )arg2 axisLock:(NSUInteger)arg3 ;
-(void)_activateFeedbackIfNeeded;
-(void)_animateToPlatterDismissedWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_animateToPlatterPresentedWithVelocity:(struct CGVector )arg0 ;
-(void)_beginInYLockedStatePresented;
-(void)_configureAnimator;
-(void)_configureFeedbackGenerator;
-(void)_deactivateFeedbackIfNeeded;
-(void)_fireConfirmFeedbackIfNeededForInitialSelectionState:(BOOL)arg0 finalSelectionState:(BOOL)arg1 ;
-(void)_positionSwipeActionViewsForCurrentPlatterViewPosition;
-(void)_updateSwipeEdgeMultipliersIfNeededForTouchPosition:(struct CGPoint )arg0 ;
-(void)addBehaviorIfNotPresent:(id)arg0 ;
-(void)beginTransitionWithAnimatorUsingBehaviors:(id)arg0 observedItems:(id)arg1 stateIfCompleted:(NSInteger)arg2 ;
-(void)dealloc;
-(void)didBeginPanningWithPoint:(struct CGPoint )arg0 ;
-(void)didEndPanningWithPoint:(struct CGPoint )arg0 ;
-(void)didPanWithPoint:(struct CGPoint )arg0 ;
-(void)lockIntoYAxis;
-(void)panningTransformer:(id)arg0 didBeginPanToTransformedPosition:(struct CGPoint )arg1 ;
-(void)panningTransformer:(id)arg0 didEndPanToTransformedPosition:(struct CGPoint )arg1 offsetFromPrevious:(struct CGVector )arg2 velocity:(struct CGVector )arg3 ;
-(void)panningTransformer:(id)arg0 didEnterTransitionNotchForTransformedPosition:(struct CGPoint )arg1 ;
-(void)panningTransformer:(id)arg0 didPanToTransformedPosition:(struct CGPoint )arg1 offsetFromPrevious:(struct CGVector )arg2 touchPosition:(struct CGPoint )arg3 velocity:(struct CGVector )arg4 didChangeAxis:(BOOL)arg5 axisLock:(NSUInteger)arg6 ;
-(void)performActionsAndEnterState:(NSInteger)arg0 ;
-(void)performActionsAndEnterState:(NSInteger)arg0 velocity:(struct CGVector )arg1 underDirectManipulation:(BOOL)arg2 ;
-(void)stopObservingBehavior;
-(void)toggleAnimatorDebugState;


@end


#endif