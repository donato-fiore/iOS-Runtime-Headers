// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCUIMODULARCONTROLCENTEROVERLAYVIEWCONTROLLER_H
#define CCUIMODULARCONTROLCENTEROVERLAYVIEWCONTROLLER_H

@class MTMaterialView, UIView, UIStatusBar_Modern, UIPanGestureRecognizer, UITapGestureRecognizer, NSHashTable, FBSDisplayLayoutMonitor, NSUUID, NSString, UIStatusBar, UIScrollView;
@protocol CCUIPPTSignpostListener, UIGestureRecognizerDelegate, CCUIScrollViewDelegate, CCUIStatusLabelViewControllerDelegate, CCUIOverlayViewProvider, CCUIOverlayMetricsProvider, CCUIStatusBarDelegate, CCUIOverlayPresentationProvider, CCUIModularControlCenterOverlayViewControllerDelegate, CCUIHostStatusBarStyleProvider;


#import "CCUIModularControlCenterViewController.h"
#import "CCUIAnimationRunner.h"
#import "CCUIHeaderPocketView.h"
#import "CCUIScrollView.h"
#import "CCUIFlickGestureRecognizer.h"
#import "CCUIOverlayTransitionState.h"
#import "CCUIStatusBarStyleSnapshot.h"
#import "CCUIModuleCollectionView.h"
#import "CCUIStatusLabelViewController.h"
#import "CCUISensorActivityDataProvider.h"

@interface CCUIModularControlCenterOverlayViewController : CCUIModularControlCenterViewController <CCUIPPTSignpostListener, UIGestureRecognizerDelegate, CCUIScrollViewDelegate, CCUIStatusLabelViewControllerDelegate, CCUIOverlayViewProvider, CCUIOverlayMetricsProvider, CCUIStatusBarDelegate>

 {
    id<CCUIOverlayPresentationProvider> *_presentationProvider;
    CCUIAnimationRunner *_primaryAnimationRunner;
    CCUIAnimationRunner *_secondaryAnimationRunner;
    MTMaterialView *_backgroundView;
    CCUIHeaderPocketView *_headerPocketView;
    CCUIScrollView *_scrollView;
    UIView *_containerView;
    UIStatusBar_Modern *_compactLeadingStatusBar;
    BOOL _presentationPanGestureActive;
    UIPanGestureRecognizer *_headerPocketViewDismissalPanGesture;
    UITapGestureRecognizer *_headerPocketViewDismissalTapGesture;
    CCUIFlickGestureRecognizer *_collectionViewDismissalFlickGesture;
    UIPanGestureRecognizer *_collectionViewDismissalPanGesture;
    UITapGestureRecognizer *_collectionViewDismissalTapGesture;
    UIPanGestureRecognizer *_collectionViewScrollPanGesture;
    NSHashTable *_blockingGestureRecognizers;
    CCUIOverlayTransitionState *_previousTransitionState;
    CCUIStatusBarStyleSnapshot *_hostStatusBarStyleSnapshot;
    FBSDisplayLayoutMonitor *_layoutMonitor;
    BOOL _showHotPocket;
}


@property (copy, nonatomic) NSUUID *currentTransitionUUID; // ivar: _currentTransitionUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CCUIModularControlCenterOverlayViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CCUIHostStatusBarStyleProvider> *hostStatusBarStyleProvider; // ivar: _hostStatusBarStyleProvider
@property (readonly, nonatomic) CGRect overlayBackgroundFrame;
@property (readonly, nonatomic) MTMaterialView *overlayBackgroundView;
@property (readonly, nonatomic) CGRect overlayContainerFrame;
@property (readonly, nonatomic) UIView *overlayContainerView;
@property (readonly, nonatomic) CCUIHeaderPocketView *overlayHeaderView;
@property (readonly, nonatomic) NSInteger overlayInterfaceOrientation;
@property (readonly, nonatomic) UIStatusBar *overlayLeadingStatusBar;
@property (readonly, nonatomic) CCUIModuleCollectionView *overlayModuleCollectionView;
@property (readonly, nonatomic) CGFloat overlayReachabilityHeight;
@property (readonly, nonatomic) UIScrollView *overlayScrollView;
@property (readonly, copy, nonatomic) CCUIStatusBarStyleSnapshot *overlayStatusBarStyle;
@property (readonly, nonatomic) CCUIStatusLabelViewController *overlayStatusLabelViewController;
@property (nonatomic) NSUInteger presentationState; // ivar: _presentationState
@property (nonatomic, getter=isReachabilityActive) BOOL reachabilityActive; // ivar: _reachabilityActive
@property (retain, nonatomic) CCUISensorActivityDataProvider *sensorActivityDataProvider; // ivar: _sensorActivityDataProvider
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger transitionState; // ivar: _transitionState


+(id)_blocksBySignpost;
+(id)_controlCenterBringupEventStream;
+(id)_controlCenterDismissEventStream;
+(id)_controlCenterDismissOrbActionsEventStream;
+(id)_presentationProviderForDevice;
+(void)_addBlockForSignpost:(NSUInteger)arg0 block:(id)arg1 ;
+(void)_executeAndCleanupBlocksForAllSignposts;
+(void)_executeBlocksForSignpost:(NSUInteger)arg0 ;
+(void)_playEventStream:(id)arg0 withCompletion:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_dismissalFlickGestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)_dismissalFlickGestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)_dismissalFlickGestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)_dismissalPanGestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)_dismissalTapGestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)_forceModuleEnabled:(id)arg0 ;
-(BOOL)_gestureRecognizerIsActive:(id)arg0 ;
-(BOOL)_scrollPanGestureRecognizerCanBeginForGestureVelocity:(struct CGPoint )arg0 ;
-(BOOL)_scrollPanGestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)_scrollViewCanAcceptDownwardsPan;
-(BOOL)_scrollViewIsScrollable;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)runTest:(id)arg0 options:(id)arg1 delegate:(id)arg2 ;
-(BOOL)scrollView:(id)arg0 gestureRecognizerShouldBegin:(id)arg1 ;
-(NSUInteger)__supportedInterfaceOrientations;
-(NSUInteger)_fetchModuleEnabledState:(id)arg0 ;
-(NSUInteger)preferredScreenEdgesDeferringSystemGestures;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_beginDismissalAnimated:(BOOL)arg0 interactive:(BOOL)arg1 ;
-(id)_beginPresentationAnimated:(BOOL)arg0 interactive:(BOOL)arg1 ;
-(id)_controlCenterShowOrbActionsEventStream:(id)arg0 ;
-(id)_initWithSystemAgent:(id)arg0 presentationProvider:(id)arg1 ;
-(id)_moduleCollectionViewContainerView;
-(id)_statusLabelViewContainerView;
-(id)compactTrailingStyleRequestForStatusBar:(id)arg0 ;
-(id)contentModuleContext:(id)arg0 requestsSensorActivityDataForActiveSensorType:(NSUInteger)arg1 ;
-(id)initWithSystemAgent:(id)arg0 ;
-(struct CGPoint )_centerPointOfModuleWithIdentifier:(id)arg0 ;
-(struct CGRect )compactAvoidanceFrameForStatusBar:(id)arg0 ;
-(struct UIEdgeInsets )overlayAdditionalEdgeInsets;
-(void)_cancelDismissalPanGestures;
-(void)_disableModule:(id)arg0 ;
-(void)_dismissalPanGestureRecognizerBegan:(id)arg0 ;
-(void)_dismissalPanGestureRecognizerCancelled:(id)arg0 ;
-(void)_dismissalPanGestureRecognizerChanged:(id)arg0 ;
-(void)_dismissalPanGestureRecognizerEnded:(id)arg0 ;
-(void)_dismissalPanGestureRecognizerFailed:(id)arg0 ;
-(void)_endDismissalWithUUID:(id)arg0 animated:(BOOL)arg1 ;
-(void)_endPresentationWithUUID:(id)arg0 ;
-(void)_handleDismissalFlickGestureRecognizer:(id)arg0 ;
-(void)_handleDismissalPanGestureRecognizer:(id)arg0 ;
-(void)_handleDismissalTapGestureRecognizer:(id)arg0 ;
-(void)_reparentAndBecomeActive;
-(void)_replaceBackgroundViewContentsWithSnapshotIfNecessary:(BOOL)arg0 ;
-(void)_setupPanGestureFailureRequirements;
-(void)_updateChevronStateForTransitionState:(id)arg0 ;
-(void)_updateHotPocket:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateHotPocketAnimated:(BOOL)arg0 ;
-(void)_updatePresentationForTransitionState:(id)arg0 withCompletionHander:(id)arg1 ;
-(void)_updatePresentationForTransitionType:(NSUInteger)arg0 translation:(struct CGPoint )arg1 interactive:(BOOL)arg2 ;
-(void)_updateSensorActivityStatusForHeaderPocketView;
-(void)_willDismissView;
-(void)_willPresentView;
-(void)beginPresentationWithLocation:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 velocity:(struct CGPoint )arg2 ;
-(void)cancelPresentationWithLocation:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 velocity:(struct CGPoint )arg2 ;
-(void)didReceiveSignpost:(NSUInteger)arg0 ;
-(void)dismissAnimated:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)dismissControlCenterForContentModuleContext:(id)arg0 ;
-(void)endPresentationWithLocation:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 velocity:(struct CGPoint )arg2 ;
-(void)moduleCollectionViewController:(id)arg0 didAddModuleContainerViewController:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg0 willCloseExpandedModule:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg0 willDismissViewController:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg0 willOpenExpandedModule:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg0 willPresentViewController:(id)arg1 ;
-(void)moduleCollectionViewControllerDidUpdateModules:(id)arg0 ;
-(void)moduleInstancesChangedForModuleInstanceManager:(id)arg0 ;
-(void)moduleInstancesLayoutChangedForModuleInstanceManager:(id)arg0 ;
-(void)presentAnimated:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)reachabilityAnimationDidEnd;
-(void)runTest:(id)arg0 subtests:(id)arg1 eventStream:(id)arg2 completionHandler:(id)arg3 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setOverlayStatusBarHidden:(BOOL)arg0 ;
-(void)statusLabelViewControllerDidFinishStatusUpdates:(id)arg0 ;
-(void)statusLabelViewControllerWillBeginStatusUpdates:(id)arg0 ;
-(void)updatePresentationWithLocation:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 velocity:(struct CGPoint )arg2 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif