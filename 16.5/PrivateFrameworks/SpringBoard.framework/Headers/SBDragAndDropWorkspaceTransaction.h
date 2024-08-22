// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDRAGANDDROPWORKSPACETRANSACTION_H
#define SBDRAGANDDROPWORKSPACETRANSACTION_H

@class CADisplayLink, NSMutableSet, UIView, NSUUID, NSString;
@protocol SBWorkspaceApplicationSceneTransitionContextDelegate, SBSceneLayoutWorkspaceTransactionObserver, UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, SBDragAndDropWorkspaceTransactionDelegate, SBAppPlatterDragSourceViewProviding, BSInvalidatable;


#import "SBMainWorkspaceTransaction.h"
#import "SBSwitcherController.h"
#import "SBFluidSwitcherViewController.h"
#import "SBSceneManager.h"
#import "SBMainDisplayLayoutState.h"
#import "SBApplicationDropSession.h"
#import "SBDeviceApplicationSceneHandle.h"
#import "SBMainWorkspaceTransitionRequest.h"
#import "SBToAppsWorkspaceTransaction.h"
#import "SBSwitcherDropRegionContext.h"
#import "SBLayoutElement.h"
#import "SBApplicationSceneUpdateTransaction.h"
#import "SBAppPlatterDragPreview.h"
#import "SBTouchHistory.h"
#import "SBMedusaSettings.h"
#import "SBSwitcherChamoisSettings.h"
#import "SBFluidSwitcherGesture.h"

@interface SBDragAndDropWorkspaceTransaction : SBMainWorkspaceTransaction <SBWorkspaceApplicationSceneTransitionContextDelegate, SBSceneLayoutWorkspaceTransactionObserver, UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private>

 {
    SBSwitcherController *_switcherController;
    SBFluidSwitcherViewController *_switcherContentController;
    SBSceneManager *_sceneManager;
    id<SBDragAndDropWorkspaceTransactionDelegate> *_delegate;
    SBMainDisplayLayoutState *_initialLayoutState;
    SBMainDisplayLayoutState *_currentLayoutState;
    SBMainDisplayLayoutState *_finalLayoutState;
    SBApplicationDropSession *_dropSession;
    NSUInteger _sessionState;
    SBDeviceApplicationSceneHandle *_draggingApplicationSceneHandle;
    BOOL _beganTrackingDropSession;
    SBMainWorkspaceTransitionRequest *_dropTransitionRequest;
    SBToAppsWorkspaceTransaction *_currentWorkspaceTransaction;
    NSInteger _currentDropAction;
    SBSwitcherDropRegionContext *_currentSwitcherDropRegionContext;
    SBMainDisplayLayoutState *_currentDropActionProposedLayoutState;
    BOOL _performedDrop;
    BOOL _dropAnimationCompleted;
    BOOL _layoutStateTransitionCompleted;
    BOOL _dragExitedDropZone;
    CGSize _cachedSizeForFloatingApplication;
    SBLayoutElement *_layoutElementForWindowDrag;
    BOOL _windowDragEnteredPlatterZone;
    BOOL _windowLiftAnimationCompleted;
    SBApplicationSceneUpdateTransaction *_sceneUpdateTransactionForWindowDrag;
    CADisplayLink *_displayLinkForWindowDrag;
    NSInteger _windowDragPauseCounter;
    NSMutableSet *_pendingSceneUpdatesTransactions;
    SBAppPlatterDragPreview *_activePlatterPreview;
    id<SBAppPlatterDragSourceViewProviding> *_activeSourceViewProvider;
    NSUInteger _numberOfAttemptsRequestingVisibleItems;
    UIView *_contentDragPreview;
    NSInteger _animatingPlatterPreview;
    id<BSInvalidatable> *_deferOrientationUpdatesForDragAndDropAssertion;
    SBTouchHistory *_touchHistory;
    SBMedusaSettings *_medusaSettings;
    SBSwitcherChamoisSettings *_chamoisSettings;
    NSUUID *_gestureID;
    SBFluidSwitcherGesture *_dragAndDropGesture;
    id<BSInvalidatable> *_stateCaptureInvalidatable;
    BOOL _draggingExistingItemFromActiveLayoutState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldTrackLocationOfDropSession:(id)arg0 forSwitcherController:(id)arg1 isCurrentlyTracking:(BOOL)arg2 ;
+(BOOL)isDragOverFullscreenRegionAtLocation:(struct CGPoint )arg0 inBounds:(struct CGRect )arg1 ;
+(BOOL)shouldTrackLocationOfDropSession:(id)arg0 forSwitcherController:(id)arg1 ;
+(CGFloat)prototypeSettingsContentDraggingCommandeerInsetForUniversalControl;
+(CGFloat)prototypeSettingsContentDraggingCommandeerWidth;
+(CGFloat)prototypeSettingsContentDraggingFloatingActivationWidth;
+(CGFloat)prototypeSettingsContentDraggingSideActivationWidth;
+(CGFloat)prototypeSettingsSideActivationGutterSize;
+(CGFloat)prototypeSettingsWindowTearOffDraggingFloatingActivationWidth;
+(CGFloat)prototypeSettingsWindowTearOffDraggingSideActivationWidth;
+(NSUInteger)screenEdgeForDragOverSideGutterRegionsAtLocation:(struct CGPoint )arg0 inBounds:(struct CGRect )arg1 totalContentDragGutterWidth:(CGFloat)arg2 screenInsets:(struct UIEdgeInsets )arg3 ;
+(struct CGRect )sourceSceneInterfaceOrientedBoundsForDropSession:(id)arg0 switcherController:(id)arg1 ;
+(struct CGSize )prototypeSettingsFullscreenActivationRegionSize;
+(struct UIEdgeInsets )_screenInsetsForUIDragDropSession:(id)arg0 ;
-(BOOL)_canBeInterrupted;
-(BOOL)_handleSessionDidUpdate:(id)arg0 ;
-(BOOL)_shouldFailLayoutStateTransitionForWindowDrag;
-(BOOL)_showResizeUI;
-(BOOL)canInterruptForTransitionRequest:(id)arg0 ;
-(BOOL)matchesApplicationDropSession:(id)arg0 ;
-(BOOL)matchesUIDragDropSession:(id)arg0 ;
-(CGFloat)_platterScale;
-(CGFloat)_platterScaleForSwitcherDropContext:(id)arg0 ;
-(CGFloat)_platterSourceViewScaleForSetDropAction:(NSInteger)arg0 setDown:(BOOL)arg1 ;
-(NSInteger)_layoutRoleForDropAction:(NSInteger)arg0 ;
-(id)_cornerRadiusConfigurationForDropAction:(NSInteger)arg0 proposedDropLayoutState:(id)arg1 setDown:(BOOL)arg2 mode:(NSUInteger)arg3 ;
-(id)_cornerRadiusForSwitcherDragContext:(id)arg0 setDown:(BOOL)arg1 sourceViewScale:(CGFloat)arg2 ;
-(id)_createPlatterPreviewForApplication:(id)arg0 withSourceView:(id)arg1 dropSession:(id)arg2 ;
-(id)_currentGestureEventForGesture:(id)arg0 ;
-(id)_dragInteraction:(id)arg0 customSpringAnimationBehaviorForCancellingItem:(id)arg1 ;
-(id)_dragPreviewForDroppingItem:(id)arg0 withDefault:(id)arg1 ;
-(id)_dropInteraction:(id)arg0 customSpringAnimationBehaviorForDroppingItem:(id)arg1 ;
-(id)_transitionRequestForDropAction:(NSInteger)arg0 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForCancellingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)dropInteraction:(id)arg0 previewForDroppingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)initWithTransitionRequest:(id)arg0 switcherController:(id)arg1 dropSession:(id)arg2 delegate:(id)arg3 ;
-(id)layoutStateForApplicationTransitionContext:(id)arg0 ;
-(id)previousLayoutStateForApplicationTransitionContext:(id)arg0 ;
-(id)resizeUIAnimationFactory;
-(struct CGRect )_platterFrameInSwitcherView;
-(struct CGRect )applicationTransitionContext:(id)arg0 frameForApplicationSceneEntity:(id)arg1 ;
-(struct CGSize )_platterSizeForDropAction:(NSInteger)arg0 proposedDropLayoutState:(id)arg1 setDown:(BOOL)arg2 ;
-(struct CGSize )_platterSizeForSwitcherDropContext:(id)arg0 setDown:(BOOL)arg1 ;
-(struct CGSize )_sizeForFloatingApplication;
-(void)_addChildWorkspaceTransaction:(id)arg0 ;
-(void)_begin;
-(void)_childTransactionDidComplete:(id)arg0 ;
-(void)_cleanUpAndCompleteTransactionIfNecessary;
-(void)_commitRecencyModelUpdateForDropContext:(id)arg0 ;
-(void)_configurePlatterPreview:(id)arg0 forSceneHandle:(id)arg1 completion:(id)arg2 ;
-(void)_didComplete;
-(void)_didInterruptWithReason:(id)arg0 ;
-(void)_displayLinkDidUpdate:(id)arg0 ;
-(void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg0 ;
-(void)_endDragAndDropFluidGesture;
-(void)_getPlatterDiffuseShadowParameters:(struct SBDragPreviewShadowParameters *)arg0 rimShadowParameters:(struct SBDragPreviewShadowParameters *)arg1 diffuseFilters:(*id)arg2 rimFilters:(*id)arg3 forDropAction:(NSInteger)arg4 setDown:(BOOL)arg5 mode:(NSUInteger)arg6 userInterfaceStyle:(NSInteger)arg7 ;
-(void)_handleSessionDidEnd:(id)arg0 ;
-(void)_handleSessionDidPerformDrop:(id)arg0 ;
-(void)_handleWillAnimateDropWithAnimator:(id)arg0 ;
-(void)_interruptForDragExitedDropZoneIfNecessary;
-(void)_noteSwitcherDropAnimationCompletedWithContext:(id)arg0 ;
-(void)_runFinalLayoutStateTransaction;
-(void)_setupPlatterPreviewForContentDrag;
-(void)_uncommandeerContentDrag;
-(void)_updateActiveSourceViewProviderWithDragState:(NSUInteger)arg0 ;
-(void)_updateAnchorPointForPlatterPreview:(id)arg0 dragPreview:(id)arg1 withSourceViewBounds:(struct CGRect )arg2 location:(struct CGPoint )arg3 ;
-(void)_updateCurrentDropActionForSession:(id)arg0 ;
-(void)_updateCurrentDropActionProposedLayoutState;
-(void)_updateForWindowDragForSession:(id)arg0 ;
-(void)_updatePlatterPreviewForSetDown:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updatePlatterPreviewWithUpdatedSourceView;
-(void)_updatePlatterViewBlurForDropCompletion;
-(void)_willInterruptForTransitionRequest:(id)arg0 ;
-(void)_willInterruptWithReason:(id)arg0 ;
-(void)blurReadinessDidChange;
-(void)dealloc;
-(void)dragInteraction:(id)arg0 item:(id)arg1 willAnimateCancelWithAnimator:(id)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 didEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 sessionDidMove:(id)arg1 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dragInteraction:(id)arg0 willAnimateLiftWithAnimator:(id)arg1 session:(id)arg2 ;
-(void)dropInteraction:(id)arg0 concludeDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 item:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidExit:(id)arg1 ;
-(void)transaction:(id)arg0 didCommitSceneUpdate:(id)arg1 ;


@end


#endif