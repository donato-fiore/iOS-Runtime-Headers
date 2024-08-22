// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONLISTCELL_H
#define NCNOTIFICATIONLISTCELL_H

@class UIView, PLSwipeInteraction, UIColor, UIViewController<NCNotificationListDimmable>, NSString;
@protocol PLSwipeInteractionDelegate, MTMaterialGrouping, NCNotificationListDimmable, NCNotificationListCellActionHandling, NCNotificationListCellActionProviding;


#import "NCNotificationViewController.h"

@interface NCNotificationListCell : UIView <PLSwipeInteractionDelegate, MTMaterialGrouping, NCNotificationListDimmable>

 {
    PLSwipeInteraction *_swipeInteraction;
}


@property (weak, nonatomic) NSObject<NCNotificationListCellActionHandling> *actionHandler; // ivar: _actionHandler
@property (weak, nonatomic) NSObject<NCNotificationListCellActionProviding> *actionProvider; // ivar: _actionProvider
@property (retain, nonatomic) UIColor *backgroundTintColor; // ivar: _backgroundTintColor
@property (nonatomic, getter=isContentUserInteractionEnabled) BOOL contentUserInteractionEnabled;
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) UIViewController<NCNotificationListDimmable> *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (nonatomic) NSInteger materialRecipe; // ivar: _materialRecipe
@property (readonly, nonatomic) NCNotificationViewController *notificationViewController;
@property (nonatomic, getter=isSideSwipedWithoutTouch) BOOL sideSwipedWithoutTouch; // ivar: _sideSwipedWithoutTouch
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor


-(BOOL)_disableRasterizeInAnimations;
-(BOOL)_shouldPerformClipping;
-(BOOL)shouldContinuePresentingActionButtonsForSwipeInteraction:(id)arg0 ;
-(BOOL)shouldVerticallyStackButtonsForSwipeInteraction:(id)arg0 ;
-(BOOL)swipeInteraction:(id)arg0 shouldRevealActionsFromLayoutLocation:(NSUInteger)arg1 ;
-(CGFloat)buttonsCornerRadiusForSwipeInteraction:(id)arg0 ;
-(NSInteger)buttonsRecipeForSwipeInteraction:(id)arg0 ;
-(id)buttonsTextColorForSwipeInteraction:(id)arg0 ;
-(id)buttonsTintColorForSwipeInteraction:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)senderForActionWithIdentifier:(id)arg0 ;
-(id)swipeInteraction:(id)arg0 actionsToRevealFromLayoutLocation:(NSUInteger)arg1 ;
-(id)viewToMoveForSwipeInteraction:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureClippingIfNecessary;
-(void)_layoutContentView;
-(void)_resetClipping;
-(void)_setupClipping;
-(void)configureStackDimmingForTransform:(struct CGAffineTransform )arg0 ;
-(void)hideActionButtonsAnimated:(BOOL)arg0 fastAnimation:(BOOL)arg1 completion:(id)arg2 ;
-(void)hintSideSwipeForDefaultAction;
-(void)layoutSubviews;
-(void)revealSupplementaryActionsWithCompletion:(id)arg0 ;
-(void)swipeInteraction:(id)arg0 didMoveToNewXPosition:(CGFloat)arg1 ;
-(void)swipeInteractionDidBeginHidingActions:(id)arg0 ;
-(void)swipeInteractionDidBeginRevealingActions:(id)arg0 ;
-(void)swipeInteractionDidSignificantUserInteraction:(id)arg0 ;


@end


#endif