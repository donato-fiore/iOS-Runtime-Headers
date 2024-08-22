// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKBROWSERSWITCHERVIEWCONTROLLER_H
#define CKBROWSERSWITCHERVIEWCONTROLLER_H

@class UIViewController, UIViewPropertyAnimator, IMBalloonPlugin, UIView, UIViewController<CKBrowserViewControllerProtocol>, NSString, NSMutableDictionary, NSDate, UILongPressGestureRecognizer;
@protocol UIGestureRecognizerDelegate, CKBrowserTransitionCoordinatorDelegate, CKAppGrabberViewDelegate, _UIBackdropViewGraphicsQualityChangeDelegate, CKBrowserSwitcherViewControllerDelegate><CKBrowserTransitionCoordinatorDelegate;


#import "CKImmediatePanGestureRecognizer.h"
#import "CKBrowserSwitcherCell.h"
#import "CKAppGrabberView.h"
#import "CKBrowserTransitionCoordinator.h"

@interface CKBrowserSwitcherViewController : UIViewController <UIGestureRecognizerDelegate, CKBrowserTransitionCoordinatorDelegate, CKAppGrabberViewDelegate, _UIBackdropViewGraphicsQualityChangeDelegate>

 {
    CKImmediatePanGestureRecognizer *_expandGestureTracker;
    UIViewPropertyAnimator *_expandPropertyAnimator;
    BOOL _isDoingExpandInteraction;
    BOOL _expandInteractionDidMove;
    BOOL _expandGestureStartedOnGrabber;
    CGFloat _expandGestureTranslationOffset;
}


@property (nonatomic) BOOL allowFooterLabelUpdates; // ivar: _allowFooterLabelUpdates
@property (nonatomic) BOOL allowPluginLaunchNotifications; // ivar: _allowPluginLaunchNotifications
@property (retain, nonatomic) IMBalloonPlugin *balloonPlugin; // ivar: _balloonPlugin
@property (retain, nonatomic) UIView *browserContainer; // ivar: _browserContainer
@property (nonatomic) BOOL browserIsCollapsingFromFullscreen; // ivar: _browserIsCollapsingFromFullscreen
@property (nonatomic) BOOL browserIsLoadingCompact; // ivar: _browserIsLoadingCompact
@property (nonatomic, getter=isBrowserReadyForUserInteraction) BOOL browserViewReadyForUserInteraction; // ivar: _browserViewReadyForUserInteraction
@property (retain, nonatomic) CKBrowserSwitcherCell *cell; // ivar: _cell
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *currentViewController; // ivar: _currentViewController
@property (retain, nonatomic) IMBalloonPlugin *currentVisiblePlugin; // ivar: _currentVisiblePlugin
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKBrowserSwitcherViewControllerDelegate><CKBrowserTransitionCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDragging) BOOL dragging; // ivar: _dragging
@property (retain, nonatomic) CKAppGrabberView *grabberView; // ivar: _grabberView
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInDragAndDrop) BOOL inDragAndDrop; // ivar: _inDragAndDrop
@property (nonatomic) BOOL insertedViaCollapse; // ivar: _insertedViaCollapse
@property (nonatomic) BOOL interactiveExpandStarted; // ivar: _interactiveExpandStarted
@property (retain, nonatomic) NSMutableDictionary *livePluginIdentifierToTimestampMap; // ivar: _livePluginIdentifierToTimestampMap
@property (copy, nonatomic) id *performAfterFirstLayoutBlock; // ivar: _performAfterFirstLayoutBlock
@property (retain, nonatomic) UIView *shadowView; // ivar: _shadowView
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDate *timeOfLastScrollingDecelerationEnded; // ivar: _timeOfLastScrollingDecelerationEnded
@property (retain, nonatomic) UILongPressGestureRecognizer *touchTracker; // ivar: _touchTracker
@property (retain, nonatomic) CKBrowserTransitionCoordinator *transitionCoordinator; // ivar: _transitionCoordinator
@property (nonatomic, getter=isTransitioningExpandedState) BOOL transitioningExpandedState; // ivar: _transitioningExpandedState
@property (nonatomic, getter=isTransitioningFromSnapshotToLiveView) BOOL transitioningFromSnapshotToLiveView; // ivar: _transitioningFromSnapshotToLiveView
@property (nonatomic) BOOL viewHasLaidOutSubviews; // ivar: _viewHasLaidOutSubviews


-(BOOL)_currentPluginIsJellyfish;
-(BOOL)_hasLandscapeGutters;
-(BOOL)_pluginHasLiveBrowserViewInSwitcher:(id)arg0 ;
-(BOOL)_switchToVisiblePluginWithIdentifier:(id)arg0 ;
-(BOOL)browserTransitionCoordinatorShouldDismissOnDragSuccess:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isBrowserSwitcherFirstLaunch;
-(BOOL)shouldAlwaysShowAppTitle;
-(BOOL)shouldAutorotate;
-(CGFloat)_rubberBandOffsetWithoutDecorationForOffset:(CGFloat)arg0 maxOffset:(CGFloat)arg1 minOffset:(CGFloat)arg2 range:(CGFloat)arg3 outside:(*BOOL)arg4 ;
-(CGFloat)browserTransitionCoordinatorCollapsedContentHeight:(id)arg0 ;
-(CGFloat)restingContainerViewOriginY;
-(NSUInteger)supportedInterfaceOrientations;
-(id)activeBrowserView;
-(id)appGrabberForBrowserTransitionCoordinator:(id)arg0 ;
-(id)appIconOverride;
-(id)appTitleOverride;
-(id)backdropView:(id)arg0 willChangeToGraphicsQuality:(NSInteger)arg1 ;
-(id)initWithConversation:(id)arg0 sendDelegate:(id)arg1 presentingViewController:(id)arg2 ;
-(id)traitCollection;
-(id)transitionsPresentationViewController;
-(struct CGRect )cachedCompactFrameInWindowCoordsForBrowserTransitionCoordinator:(id)arg0 ;
-(struct CGRect )restingGrabberFrame;
-(struct CGSize )_browserSize;
-(struct CGSize )browserTransitionCoordinator:(id)arg0 preferredSizeForBrowser:(id)arg1 ;
-(void)_handleRemoteViewControllerConnectionInterrupted:(id)arg0 ;
-(void)_handleVisibleSwitcherPluginsChanged:(id)arg0 ;
-(void)_insertCurrentBrowserAndRemoveOldBrowsersIfNeeded;
-(void)_loadBrowserForBalloonPlugin:(id)arg0 datasource:(id)arg1 ;
-(void)_performAfterFirstLayout:(id)arg0 ;
-(void)_removeBrowserFromViewHierarchy:(id)arg0 ;
-(void)_removeBrowserWithPluginIdentifierFromViewHierarchy:(id)arg0 ;
-(void)_snapshotCurrentViewController;
-(void)_transitionSnapshotViewToBrowserView;
-(void)_transitionSnapshotViewToBrowserViewAfterViewDidPrepareForDisplay:(id)arg0 ;
-(void)_updateActiveBrowserAlphaStateOnInsertForCurrentController:(id)arg0 currentView:(id)arg1 ;
-(void)_updateActiveBrowserTimestampForCurrentBalloonPlugin;
-(void)_updateBrowserViewPositionForPluginAndInsertIfNecessary:(id)arg0 ;
-(void)_updateCurrentBrowserSnapshotIfPossible;
-(void)_updateVisibleBrowserView;
-(void)animateInCompactWithCompletion:(id)arg0 ;
-(void)animateOutCompactWithCompletion:(id)arg0 ;
-(void)appGrabberViewCloseButtonTapped:(id)arg0 ;
-(void)backdropView:(id)arg0 didChangeToGraphicsQuality:(NSInteger)arg1 ;
-(void)browserTransitionCoordinator:(id)arg0 browserWillBecomeInactive:(id)arg1 ;
-(void)browserTransitionCoordinator:(id)arg0 didSwitchToPlugin:(id)arg1 ;
-(void)browserTransitionCoordinator:(id)arg0 didTransitionFromOrientation:(NSInteger)arg1 toOrientation:(NSInteger)arg2 ;
-(void)browserTransitionCoordinator:(id)arg0 expandedStateDidChange:(BOOL)arg1 withReason:(NSInteger)arg2 ;
-(void)browserTransitionCoordinator:(id)arg0 hasUpdatedLastTouchDate:(id)arg1 ;
-(void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg0 withReason:(NSInteger)arg1 ;
-(void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg0 withReason:(NSInteger)arg1 ;
-(void)browserTransitionCoordinatorWantsPresentationOfAppManager:(id)arg0 ;
-(void)browserTransitionCoordinatorWantsPresentationOfAppStore:(id)arg0 ;
-(void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg0 withReason:(NSInteger)arg1 ;
-(void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg0 withReason:(NSInteger)arg1 ;
-(void)cleanupExpandAnimatorState;
-(void)dealloc;
-(void)dismissBrowserFullscreenAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)dragManagerDidEndDragging:(id)arg0 ;
-(void)dragManagerDidStartDrag:(id)arg0 ;
-(void)dragManagerWillStartDrag:(id)arg0 ;
-(void)expandGestureTouchMoved:(id)arg0 ;
-(void)handleExpandButton:(id)arg0 ;
-(void)layoutMarginsDidChange;
-(void)loadView;
-(void)reinsertAppGrabberViewForBrowserTransitionCoordinator:(id)arg0 ;
-(void)reverseAndCleanupExpandAnimator;
-(void)saveSnapshotForCurrentBrowserViewControllerIfPossible;
-(void)setupPausedExpandAnimatorIfNeeded;
-(void)showBrowserFullscreenForPlugin:(id)arg0 datasource:(id)arg1 ;
-(void)showBrowserFullscreenModalForPlugin:(id)arg0 datasource:(id)arg1 ;
-(void)showBrowserInSwitcherForPlugin:(id)arg0 datasource:(id)arg1 reloadData:(BOOL)arg2 ;
-(void)showPlugin:(id)arg0 ;
-(void)stopExpandAnimatorAndCleanupState;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitionToCollapsed;
-(void)transitionToFullscreen;
-(void)unloadRemoteViewControllers;
-(void)updateGrabberTitleAndIconForPlugin:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif