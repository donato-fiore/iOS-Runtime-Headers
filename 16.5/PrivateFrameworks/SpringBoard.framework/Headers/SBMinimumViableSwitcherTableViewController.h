// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMINIMUMVIABLESWITCHERTABLEVIEWCONTROLLER_H
#define SBMINIMUMVIABLESWITCHERTABLEVIEWCONTROLLER_H

@class UITableViewController, NSString, BSAnimationSettings;
@protocol SBSwitcherContentViewControlling, SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate;


#import "SBApplicationSceneView.h"
#import "SBBestAppSuggestion.h"

@interface SBMinimumViableSwitcherTableViewController : UITableViewController <SBSwitcherContentViewControlling>

 {
    SBApplicationSceneView *_temporaryAppView;
    SBApplicationSceneView *_temporarySideAppView;
}


@property (nonatomic, getter=isAsyncRenderingDisabled) BOOL asyncRenderingDisabled; // ivar: _asyncRenderingDisabled
@property (retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion; // ivar: _bestAppSuggestion
@property (readonly, nonatomic) BOOL canInterruptActiveTransition;
@property (nonatomic) NSInteger contentOrientation; // ivar: _contentOrientation
@property (weak, nonatomic) NSObject<SBSwitcherContentViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) BSAnimationSettings *defaultTransitionAnimationSettings;
@property (weak, nonatomic) NSObject<SBSwitcherContentViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isShowingModifierTimeline) BOOL showModifierTimeline;
@property (readonly) Class superclass;


-(BOOL)canPerformKeyboardShortcutAction:(NSInteger)arg0 forBundleIdentifier:(id)arg1 ;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)isStatusBarHiddenForAppLayout:(id)arg0 ;
-(BOOL)isUserInteractionEnabled;
-(BOOL)isWindowVisible;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BOOL)shouldAddAppLayoutToFront:(id)arg0 forTransitionWithContext:(id)arg1 transitionCompleted:(BOOL)arg2 ;
-(BOOL)shouldAnimateInsertionOfAppLayouts:(id)arg0 atIndexes:(id)arg1 ;
-(BOOL)shouldRubberbandFullScreenHomeGrabberView;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(CGFloat)contentAspectRatio;
-(CGFloat)minimumHomeScreenScale;
-(CGFloat)snapshotScaleForSceneHandle:(id)arg0 ;
-(CGFloat)switcherCardScale;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(char)activityModeForAppLayout:(id)arg0 ;
-(char)jetsamModeForAppLayout:(id)arg0 ;
-(id)_appLayouts;
-(id)_statusBarStyleRequestForDefaultStyle;
-(id)animationControllerForTransitionRequest:(id)arg0 ;
-(id)foregroundAppLayouts;
-(id)iconForAppLayout:(id)arg0 ;
-(id)leadingStatusBarStyleRequest;
-(id)liveContentOverlayForAppLayout:(id)arg0 ;
-(id)liveOverlayForSceneHandle:(id)arg0 ;
-(id)liveOverlayForSceneIdentityToken:(id)arg0 ;
-(id)liveScenesIdentityTokens;
-(id)overlaySceneHandle;
-(id)prepareOverlayForContentRotation;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(id)trailingStatusBarStyleRequest;
-(void)acquiredViewController:(id)arg0 forTransientOverlayAppLayout:(id)arg1 ;
-(void)clickReceivedForHomeGrabberView:(id)arg0 ;
-(void)failMultitaskingGesturesForReason:(id)arg0 ;
-(void)handleFluidSwitcherGestureManager:(id)arg0 didBeginGesture:(id)arg1 ;
-(void)handleFluidSwitcherGestureManager:(id)arg0 didEndGesture:(id)arg1 ;
-(void)handleFluidSwitcherGestureManager:(id)arg0 didUpdateGesture:(id)arg1 ;
-(void)invalidate;
-(void)noteAppLayoutsDidChange;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg0 ;
-(void)noteModelDidMutateForInsertionOfAppLayouts:(id)arg0 atIndexes:(id)arg1 willAnimate:(BOOL)arg2 ;
-(void)performAnimatedInsertionOfAppLayouts:(id)arg0 atIndexes:(id)arg1 completion:(id)arg2 ;
-(void)performKeyboardShortcutAction:(NSInteger)arg0 ;
-(void)performTransitionWithContext:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)prepareAnimatedInsertionOfAppLayouts:(id)arg0 atIndexes:(id)arg1 ;
-(void)relinquishTransientOverlayViewController:(id)arg0 ;
// -(void)removeLayoutRole:(NSInteger)arg0 inSpace:(id)arg1 mutationBlock:(id)arg2 reason:(unk)arg3  ;
-(void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(BOOL)arg0 ;
-(void)sceneLayoutTransitionWillStartWithTransitionContext:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tapReceivedForGrabberTongueAtEdge:(NSUInteger)arg0 ;
-(void)viewDidLoad;


@end


#endif