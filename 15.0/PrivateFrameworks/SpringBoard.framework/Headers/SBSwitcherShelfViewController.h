// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSWITCHERSHELFVIEWCONTROLLER_H
#define SBSWITCHERSHELFVIEWCONTROLLER_H

@class SBFTouchPassThroughViewController, NSArray, NSString, NSSet;
@protocol SBSwitcherContentViewControllerDelegate, SBSwitcherContentViewControllerDataSource, SBShelfLiveContentOverlayCoordinatorDelegate, SBAssistantObserver, SBTransientUIIndirectPanToDismissParticipant, SBTransientUITapToDismissParticipant, SBAttentionAwarenessClientDelegate, SBLayoutStateTransitionObserver, SBSwitcherShelfViewControllerDelegate;


#import "SBMainSwitcherViewController.h"
#import "SBMainDisplaySceneManager.h"
#import "SBFluidSwitcherViewController.h"
#import "SBShelfLiveContentOverlayCoordinator.h"
#import "SBShelfRootSwitcherModifier.h"
#import "SBAttentionAwarenessClient.h"
#import "SBPortalView.h"
#import "SBSwitcherShelf.h"
#import "SBSwitcherShelfView.h"

@interface SBSwitcherShelfViewController : SBFTouchPassThroughViewController <SBSwitcherContentViewControllerDelegate, SBSwitcherContentViewControllerDataSource, SBShelfLiveContentOverlayCoordinatorDelegate, SBAssistantObserver, SBTransientUIIndirectPanToDismissParticipant, SBTransientUITapToDismissParticipant, SBAttentionAwarenessClientDelegate, SBLayoutStateTransitionObserver>

 {
    SBMainSwitcherViewController *_mainSwitcherViewController;
    SBMainDisplaySceneManager *_sceneManager;
    SBFluidSwitcherViewController *_contentViewController;
    SBShelfLiveContentOverlayCoordinator *_liveContentOverlayCoordinator;
    SBShelfRootSwitcherModifier *_rootModifier;
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
    CGSize _halfHalfSize;
    NSInteger _activePresentationAndDismissalAnimations;
}


@property (readonly, nonatomic) NSUInteger animationStyle; // ivar: _animationStyle
@property (readonly, copy, nonatomic) NSArray *appLayouts; // ivar: _appLayouts
@property (nonatomic) NSUInteger contentOptions; // ivar: _contentOptions
@property (nonatomic) NSInteger contentOrientation; // ivar: _contentOrientation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SBSwitcherShelfViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *focusedDisplayItems;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBPortalView *homeAffordancePortalView; // ivar: _homeAffordancePortalView
@property (copy, nonatomic) NSSet *ignoredDisplayItems; // ivar: _ignoredDisplayItems
@property (readonly, nonatomic) CGRect presentationTargetFrame; // ivar: _presentationTargetFrame
@property (readonly, nonatomic) BOOL presented; // ivar: _presented
@property (readonly, nonatomic, getter=isPresentingOrDismissing) BOOL presentingOrDismissing;
@property (readonly, nonatomic) SBSwitcherShelf *shelf; // ivar: _shelf
@property (readonly) Class superclass;
@property (retain, nonatomic) SBSwitcherShelfView *view;


-(BOOL)_dismissShelfIfNeededWithLocation:(struct CGPoint )arg0 window:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 shouldSkipNonAnimatedLayoutPassAfterTransition:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 supportsTitleItemsForAppLayout:(id)arg1 ;
-(BOOL)transientUIHandledTouch:(id)arg0 withSystemGestureRecognizer:(id)arg1 ;
-(CGFloat)itemCornerRadiusForAppLayout:(id)arg0 ;
-(CGFloat)itemScaleForAppLayout:(id)arg0 ;
-(NSInteger)sbActiveInterfaceOrientation;
-(NSInteger)switcherInterfaceOrientationForContentController:(id)arg0 ;
-(id)appLayoutsForSwitcherContentController:(id)arg0 ;
-(id)beginHidingAppLayout:(id)arg0 forReason:(id)arg1 ;
-(id)initWithShelf:(id)arg0 mainSwitcherViewController:(id)arg1 sceneManager:(id)arg2 delegate:(id)arg3 ;
-(id)shelfLiveContentOverlayCoordinator:(id)arg0 liveViewForAppLayout:(id)arg1 ;
-(id)shelfLiveContentOverlayCoordinatorAppLayouts:(id)arg0 ;
-(id)shelfLiveContentOverlayCoordinatorSnapshotCache:(id)arg0 ;
-(id)switcherContentController:(id)arg0 transitionEventForContext:(id)arg1 identifier:(id)arg2 phase:(NSUInteger)arg3 animated:(BOOL)arg4 ;
-(id)switcherContentController:(id)arg0 transitionEventForLayoutState:(id)arg1 identifier:(id)arg2 phase:(NSUInteger)arg3 animated:(BOOL)arg4 ;
-(struct CGRect )frameForCenterItemWithConfiguration:(NSInteger)arg0 interfaceOrientation:(NSInteger)arg1 ;
-(struct CGRect )frameForFloatingAppLayoutInInterfaceOrientation:(NSInteger)arg0 floatingConfiguration:(NSInteger)arg1 ;
-(struct CGRect )frameForItemWithRole:(NSInteger)arg0 inMainAppLayout:(id)arg1 interfaceOrientation:(NSInteger)arg2 ;
-(struct CGRect )itemFrameForAppLayout:(id)arg0 ;
-(void)_dockHeightWillChange:(id)arg0 ;
-(void)_rebuildCachedAppLayouts;
-(void)assistantWillAppear:(id)arg0 ;
-(void)client:(id)arg0 attentionLostTimeoutDidExpire:(CGFloat)arg1 forConfigurationGeneration:(NSUInteger)arg2 withAssociatedObject:(id)arg3 ;
-(void)clientDidResetForUserAttention:(id)arg0 ;
-(void)dealloc;
-(void)dismissShelfForAccessibilityTransition;
-(void)dismissShelfForShelfTransition;
-(void)dismissShelfWithTransitionSource:(NSInteger)arg0 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionWillEndWithTransitionContext:(id)arg1 ;
-(void)loadView;
-(void)performKeyboardShortcutAction:(NSInteger)arg0 ;
-(void)performTransitionWithContext:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)switcherContentController:(id)arg0 deletedDisplayItem:(id)arg1 inAppLayout:(id)arg2 forReason:(NSInteger)arg3 ;
-(void)switcherContentController:(id)arg0 performTransitionWithRequest:(id)arg1 gestureInitiated:(BOOL)arg2 ;
-(void)switcherContentController:(id)arg0 requestNewWindowForBundleIdentifier:(id)arg1 ;
-(void)transientUI:(id)arg0 wasIndirectPannedToDismissFromGestureRecognizer:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif