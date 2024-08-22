// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPREVIEWACTIONSCONTROLLER_H
#define _UIPREVIEWACTIONSCONTROLLER_H

@class NSArray, NSString;
@protocol _UIPlatterMenuDynamicsControllerDelegate, _UIPreviewActionsControllerDelegate;

#import <Foundation/Foundation.h>

#import "UIImageView.h"
#import "UIView.h"
#import "UIPreviewAction.h"
#import "_UIPreviewQuickActionView.h"
#import "_UIPlatterMenuDynamicsController.h"
#import "UIViewController.h"
#import "_UIPreviewActionSheetView.h"
#import "_UIStatesFeedbackGenerator.h"

@interface _UIPreviewActionsController : NSObject <_UIPlatterMenuDynamicsControllerDelegate>



@property (retain, nonatomic) UIImageView *affordanceImageView; // ivar: _affordanceImageView
@property (retain, nonatomic) UIView *affordanceView; // ivar: _affordanceView
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (copy, nonatomic) NSArray *currentPreviewActionItems; // ivar: _currentPreviewActionItems
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIPreviewActionsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect frameForActionView;
@property (nonatomic) BOOL hasBegun; // ivar: _hasBegun
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint lastPanningLocation; // ivar: _lastPanningLocation
@property (retain, nonatomic) UIPreviewAction *leadingPreviewAction; // ivar: _leadingPreviewAction
@property (retain, nonatomic) _UIPreviewQuickActionView *leadingPreviewActionView; // ivar: _leadingPreviewActionView
@property (retain, nonatomic) _UIPlatterMenuDynamicsController *platterDynamicsController; // ivar: _platterDynamicsController
@property (retain, nonatomic) UIView *platterView; // ivar: _platterView
@property (retain, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (retain, nonatomic) _UIPreviewActionSheetView *previewActionsView; // ivar: _previewActionsView
@property (readonly) Class superclass;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *swipeFeedbackGenerator; // ivar: _swipeFeedbackGenerator
@property (nonatomic) CGSize totalPanningTranslation; // ivar: _totalPanningTranslation
@property (retain, nonatomic) UIPreviewAction *trailingPreviewAction; // ivar: _trailingPreviewAction
@property (retain, nonatomic) _UIPreviewQuickActionView *trailingPreviewActionView; // ivar: _trailingPreviewActionView


+(id)actionsControllerWithContainerView:(id)arg0 platterView:(id)arg1 presentedViewController:(id)arg2 delegate:(id)arg3 ;
-(BOOL)_hasPreviewSwipeActions;
-(BOOL)_hasSelectedSwipeAction;
-(BOOL)_isSwipeActionVisible;
-(BOOL)_platterIsInInitialPositionMostly;
-(BOOL)_previewActionsSheetIsVisible;
-(BOOL)_shouldDismiss;
-(BOOL)platterPanned;
-(CGFloat)_platterOffsetDistance;
-(CGFloat)_quickActionSelectionOffset;
-(CGFloat)_quickActionsSelectionThresholdForPreviewMenuItemStyle:(NSInteger)arg0 ;
-(CGFloat)minimumSpacingBetweenPlatterAndMenu;
-(id)_makeAndAddToViewHierarchyPreviewActionSheetForMenuItems:(id)arg0 ;
-(id)initWithContainerView:(id)arg0 platterView:(id)arg1 presentedViewController:(id)arg2 delegate:(id)arg3 ;
-(id)leadingSwipeActionView;
-(id)trailingSwipeActionView;
-(struct CGPoint )_applyLayoutAdjustmentsForManagedViewWithPosition:(struct CGPoint )arg0 ;
-(struct CGPoint )_centerForMenuDismissedForActionSheet:(id)arg0 ;
-(struct CGPoint )_centerForMenuPresentedForActionSheet:(id)arg0 ;
-(struct CGPoint )_centerForPlatterWithMenuViewPresentedForActionSheet:(id)arg0 ;
-(struct CGPoint )centerForMenuDismissed;
-(struct CGPoint )centerForMenuPresented;
-(struct CGPoint )centerForPlatterWithMenuViewDismissed;
-(struct CGPoint )centerForPlatterWithMenuViewPresented;
-(struct CGPoint )initialCenterForLeadingSwipeActionView;
-(struct CGPoint )initialCenterForTrailingSwipeActionView;
-(struct CGRect )_initialPlatterFrame;
-(void)_actionsControllerCommonInit;
-(void)_activateFeedbackIfNeeded;
-(void)_configureFeedbackGenerator;
-(void)_configurePlatterDynamicsController;
-(void)_deactivateFeedbackIfNeeded;
-(void)_disablePlatterController;
-(void)_dismissForSelectedSwipeAction;
-(void)_dismissWithAction:(id)arg0 ;
-(void)_fireConfirmFeedbackIfNeededForInitialSelectionState:(BOOL)arg0 finalSelectionState:(BOOL)arg1 ;
-(void)_hideChromeAndSetAffordanceHidden:(BOOL)arg0 ;
-(void)_memoizePreviewActionViews;
-(void)_presentSubactionsForActionGroup:(id)arg0 ;
-(void)_setAffordanceAlpha:(CGFloat)arg0 withDuration:(CGFloat)arg1 hideOnCompletion:(BOOL)arg2 ;
-(void)_updateAffordanceIfNecessary;
-(void)_updateSwipeActionsState;
-(void)beginPanningAtLocation:(struct CGPoint )arg0 ;
-(void)dealloc;
-(void)dismissPreviewActionsWithCompletion:(id)arg0 ;
-(void)endPanningAtLocation:(struct CGPoint )arg0 ;
-(void)flashScrollAffordance;
-(void)platterMenuDynamicsController:(id)arg0 didMoveSwipeView:(id)arg1 toPosition:(struct CGPoint )arg2 ;
-(void)platterMenuDynamicsControllerDidDismissWithController:(id)arg0 ;
-(void)setLeadingSwipeActionViewSelected:(BOOL)arg0 ;
-(void)setTrailingSwipeActionViewSelected:(BOOL)arg0 ;
-(void)translationDidUpdateForPlatterMenuDynamicsController:(id)arg0 ;
-(void)updatePanningLocation:(struct CGPoint )arg0 ;


@end


#endif