// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFULLSCREENSWITCHERLIVECONTENTOVERLAYCOORDINATOR_H
#define SBFULLSCREENSWITCHERLIVECONTENTOVERLAYCOORDINATOR_H

@class NSMutableDictionary, NSString, NSMutableArray;
@protocol SBFullScreenSwitcherSceneLiveContentOverlayDelegate, SBSwitcherLiveContentOverlayCoordinating, SBSwitcherLiveContentOverlayCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "SBWindowScene.h"
#import "SBSceneManager.h"

@interface SBFullScreenSwitcherLiveContentOverlayCoordinator : NSObject <SBFullScreenSwitcherSceneLiveContentOverlayDelegate, SBSwitcherLiveContentOverlayCoordinating>



@property (retain, nonatomic) NSMutableDictionary *appLayoutToLiveContentOverlayContext; // ivar: _appLayoutToLiveContentOverlayContext
@property (copy, nonatomic) NSString *bundleIDForTargetOfKeyboardShortcuts; // ivar: _bundleIDForTargetOfKeyboardShortcuts
@property (nonatomic) NSInteger containerOrientation; // ivar: _containerOrientation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSwitcherLiveContentOverlayCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *keyboardFocusSceneID; // ivar: _keyboardFocusSceneID
@property (nonatomic, getter=areLiveContentOverlayUpdatesSuspended) BOOL liveContentOverlayUpdatesSuspended; // ivar: _liveContentOverlayUpdatesSuspended
@property (readonly, weak, nonatomic, getter=_sbWindowScene) SBWindowScene *sbWindowScene; // ivar: _sbWindowScene
@property (copy, nonatomic) NSString *sceneIDForTargetOfKeyboardShortcuts; // ivar: _sceneIDForTargetOfKeyboardShortcuts
@property (retain, nonatomic) SBSceneManager *sceneManager; // ivar: _sceneManager
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *visibleAlwaysLiveAppLayouts; // ivar: _visibleAlwaysLiveAppLayouts


-(BOOL)_canTransitionToOverlayType:(NSInteger)arg0 forAppLayout:(id)arg1 ;
-(BOOL)_layoutStateContainsElementBlockedForScreenTimeExpiration:(id)arg0 ;
-(BOOL)_shouldAnimateAddingLiveContentOverlayForTransitionContext:(id)arg0 leafAppLayout:(id)arg1 ;
-(BOOL)performSwitcherKeyboardShortcutAction:(NSInteger)arg0 ;
-(BOOL)wantsEdgeProtectForHomeGestureForAppLayout:(id)arg0 ;
-(BOOL)wantsHomeAffordanceAutoHideForAppLayout:(id)arg0 ;
-(NSInteger)_existingOverlayTypeForAppLayout:(id)arg0 ;
-(id)_newLiveContentOverlayForApplicationContext:(id)arg0 layoutRole:(NSInteger)arg1 ;
-(id)appLayoutForKeyboardFocusedScene;
-(id)initWithWindowScene:(id)arg0 ;
-(id)liveAppLayoutsMatchingKeyboardFocusedApp:(BOOL)arg0 foundAtIndex:(*NSInteger)arg1 ;
-(void)_addOverlay:(id)arg0 forAppLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)_configureLiveContentOverlayView:(id)arg0 forTransitionContext:(id)arg1 layoutRole:(NSInteger)arg2 ;
-(void)_removeOverlayForAppLayout:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateAlwaysLiveSceneContentOverlays;
-(void)_updateFullScreenDisplayLayoutElementsForActiveAppLayouts:(id)arg0 ;
-(void)appLayoutDidBecomeHidden:(id)arg0 ;
-(void)appLayoutWillBecomeVisible:(id)arg0 ;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 ;
-(void)fullScreenSwitcherSceneLiveContentOverlay:(id)arg0 tappedStatusBar:(id)arg1 tapActionType:(NSInteger)arg2 ;
-(void)invalidate;
-(void)itemContainerForAppLayout:(id)arg0 willBeReusedForAppLayout:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionWillEndWithTransitionContext:(id)arg1 ;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg0 ;
-(void)willRotateFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 alongsideContainerView:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif