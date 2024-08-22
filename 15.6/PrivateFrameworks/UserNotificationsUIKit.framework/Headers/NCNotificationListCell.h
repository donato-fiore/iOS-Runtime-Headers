// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONLISTCELL_H
#define NCNOTIFICATIONLISTCELL_H

@class UIView, NSString, UIPanGestureRecognizer, UIViewFloatAnimatableProperty;
@protocol UIScrollViewDelegate, UIGestureRecognizerDelegate, NCNotificationViewControllerObserving, PLContentSizeCategoryAdjusting, MTMaterialGrouping, NCNotificationListCellDelegate;


#import "NCNotificationViewController.h"
#import "NCNotificationListCellActionButtonsView.h"

@interface NCNotificationListCell : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate, NCNotificationViewControllerObserving, PLContentSizeCategoryAdjusting, MTMaterialGrouping>



@property (nonatomic) NSUInteger actionsRevealState; // ivar: _actionsRevealState
@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (nonatomic, getter=isConfigured) BOOL configured; // ivar: _configured
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) NCNotificationViewController *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationListCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExecutingDefaultAction) BOOL executingDefaultAction; // ivar: _executingDefaultAction
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets insetMargins; // ivar: _insetMargins
@property (retain, nonatomic) UIView *leftActionButtonsClippingRevealView; // ivar: _leftActionButtonsClippingRevealView
@property (retain, nonatomic) NCNotificationListCellActionButtonsView *leftActionButtonsView; // ivar: _leftActionButtonsView
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (nonatomic) CGFloat panGestureStartingPosition; // ivar: _panGestureStartingPosition
@property (nonatomic, getter=isPerformingOrbHinting) BOOL performingOrbHinting; // ivar: _performingOrbHinting
@property (nonatomic, getter=isPerformingSwipeHinting) BOOL performingSwipeHinting; // ivar: _performingSwipeHinting
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (retain, nonatomic) UIView *rightActionButtonsClippingRevealView; // ivar: _rightActionButtonsClippingRevealView
@property (retain, nonatomic) NCNotificationListCellActionButtonsView *rightActionButtonsView; // ivar: _rightActionButtonsView
@property (copy, nonatomic) id *sideSwipeHintingHideAnimationBlock; // ivar: _sideSwipeHintingHideAnimationBlock
@property (nonatomic, getter=isSideSwipedWithoutTouch) BOOL sideSwipedWithoutTouch; // ivar: _sideSwipedWithoutTouch
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *targetPositionAnimatableProperty; // ivar: _targetPositionAnimatableProperty


-(BOOL)_disableRasterizeInAnimations;
-(BOOL)_shouldPerformClipping;
-(BOOL)_shouldSideSwipeTriggerAction;
-(BOOL)_shouldVerticallyStackActionButtons;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)notificationListCellShouldShowDefaultActionButton;
-(BOOL)notificationListCellShouldShowViewActionButton;
-(CGFloat)_actionButtonTriggerDistanceForView:(id)arg0 ;
-(CGFloat)_alphaForActionButtonsView:(id)arg0 revealPercentage:(CGFloat)arg1 ;
-(CGFloat)_updateActionRevealStateForTargetPosition:(CGFloat)arg0 currentPosition:(CGFloat)arg1 velocity:(CGFloat)arg2 ;
-(id)_cellActionButtonsView;
-(id)_notificationCellView;
-(id)_openActionButtonsView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)senderForCellActionWithIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureActionButtonViewsIfNecessary;
-(void)_configureActionButtonsView:(id)arg0 ;
-(void)_configureClippingIfNecessary;
-(void)_configureClippingRevealView:(id)arg0 ;
-(void)_configureClippingRevealViewsIfNecessary;
-(void)_executeClearAction;
-(void)_executeDefaultAction;
-(void)_handlePanGesture:(id)arg0 ;
-(void)_layoutContentView;
-(void)_performDefaultActionForLeft;
-(void)_performDefaultActionForRight;
-(void)_performSideSwipeHinting;
-(void)_performSideSwipeHintingHideAnimation;
-(void)_performSideSwipeHintingRevealAnimation;
-(void)_resetActionButtonViews;
-(void)_resetClipping;
-(void)_resetNotificationCellPositionAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_resetNotificationCellPositionForLongLookPresentationWithCompletion:(id)arg0 ;
-(void)_revealActionButtonsView:(id)arg0 usingNonInteractiveSpring:(BOOL)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_setNotificationCellPosition:(CGFloat)arg0 withVelocity:(CGFloat)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_setNotificationCellPosition:(CGFloat)arg0 withVelocity:(CGFloat)arg1 usingNonInteractiveSpring:(BOOL)arg2 animated:(BOOL)arg3 completion:(id)arg4 ;
-(void)_setupClipping;
-(void)_setupContentOffsetFloatAnimatableProperty;
-(void)_setupPanGestureRecognizer;
-(void)_updateActionButtonRevealPercentageForTargetPosition:(CGFloat)arg0 ;
-(void)_updateNotificationCellPosition:(CGFloat)arg0 ;
-(void)_updateRevealForActionButtonsClippingRevealView:(id)arg0 actionButtonsView:(id)arg1 forRevealPercentage:(CGFloat)arg2 actionButtonsViewNeedsClipping:(BOOL)arg3 ;
-(void)_updateRevealForLeftActionButtonsClippingRevealViewForRevealPercentage:(CGFloat)arg0 ;
-(void)_updateRevealForRightActionButtonsClippingRevealViewForRevealPercentage:(CGFloat)arg0 ;
-(void)_updateTargetPosition:(CGFloat)arg0 ;
-(void)cellClearButtonPressed:(id)arg0 ;
-(void)cellOpenButtonPressed:(id)arg0 ;
-(void)cellOptionsButtonPressed:(id)arg0 ;
-(void)cellSettingsButtonPressed:(id)arg0 ;
-(void)cellViewButtonPressed:(id)arg0 ;
-(void)dealloc;
-(void)hintSideSwipeForDefaultAction;
-(void)layoutSubviews;
-(void)notificationViewControllerDidEndUserInteraction:(id)arg0 ;
-(void)notificationViewControllerWillBeginUserInteraction:(id)arg0 ;
-(void)resetCellActionButtons;
-(void)resetCellScrollPositionAnimated:(BOOL)arg0 ;
-(void)revealCellActionWithIdentifier:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)updateCellForContentViewController:(id)arg0 ;


@end


#endif