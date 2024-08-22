// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYVIEWCONTROLLERVIEWMODELTRANSITIONSCOORDINATOR_H
#define PXSTORYVIEWCONTROLLERVIEWMODELTRANSITIONSCOORDINATOR_H

@class UIImpactFeedbackGenerator, UIViewController;


#import "PXStoryController.h"
#import "PXNumberAnimator.h"
#import "PXStoryViewControllerTransition.h"
#import "PXRegionOfInterest.h"
#import "PXStoryViewModeTransition.h"
#import "PXStoryViewModel.h"

@interface PXStoryViewControllerViewModelTransitionsCoordinator : PXStoryController

@property (retain, nonatomic) UIImpactFeedbackGenerator *dismissalFeedbackGenerator; // ivar: _dismissalFeedbackGenerator
@property (readonly, nonatomic) PXNumberAnimator *dismissalPreviewFraction; // ivar: _dismissalPreviewFraction
@property (retain, nonatomic) PXStoryViewControllerTransition *dismissalTransition; // ivar: _dismissalTransition
@property (retain, nonatomic) PXRegionOfInterest *fullsizeContentBoundingBox; // ivar: _fullsizeContentBoundingBox
@property (nonatomic) BOOL isDismisallTriggered; // ivar: _isDismisallTriggered
@property (nonatomic) BOOL isDismissalPreviewFractionInitialized; // ivar: _isDismissalPreviewFractionInitialized
@property (nonatomic) BOOL isFinishingDismissal; // ivar: _isFinishingDismissal
@property (nonatomic) BOOL isPreparedForDismissal; // ivar: _isPreparedForDismissal
@property (nonatomic) BOOL shouldFinish; // ivar: _shouldFinish
@property (readonly, weak, nonatomic) UIViewController *viewController; // ivar: _viewController
@property (retain, nonatomic) PXStoryViewModeTransition *viewModeTransition; // ivar: _viewModeTransition
@property (nonatomic) CGFloat viewModeTransitionStartTime; // ivar: _viewModeTransitionStartTime
@property (readonly, weak, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(id)initWithObservableModel:(id)arg0 ;
-(id)initWithViewModel:(id)arg0 viewController:(id)arg1 ;
-(void)_dismissalTransition:(id)arg0 didEnd:(BOOL)arg1 ;
-(void)_endDismissal:(BOOL)arg0 ;
-(void)_forceDismissViewController;
-(void)_handleViewModeTransitionStartDelay;
-(void)_invalidateDesiredDismissalState;
-(void)_invalidateFractionCompleted;
-(void)_invalidateFullsizeContentBoundingBox;
-(void)_invalidateShouldFinish;
-(void)_invalidateSummaryItemPlacementOverride;
-(void)_invalidateSwipeDownDismissalPreview;
-(void)_invalidateSwipeDownTriggeringDismissal;
-(void)_invalidateViewControllerDismissalTargetPlacement;
-(void)_invalidateViewModeTransition;
-(void)_tryDismissingViewController;
-(void)_updateDesiredDismissalState;
-(void)_updateFractionCompleted;
-(void)_updateFullsizeContentBoundingBox;
-(void)_updateShouldFinish;
-(void)_updateSummaryItemPlacementOverride;
-(void)_updateSwipeDownDismissalPreview;
-(void)_updateSwipeDownTriggeringDismissal;
-(void)_updateViewControllerDismissalTargetPlacement;
-(void)_updateViewModeTransition;
-(void)configureUpdater:(id)arg0 ;
-(void)handleModelChange:(NSUInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif