// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDEVICEAPPLICATIONREMOTETRANSIENTOVERLAYVIEWPROVIDER_H
#define SBDEVICEAPPLICATIONREMOTETRANSIENTOVERLAYVIEWPROVIDER_H

@class NSMutableArray, NSMapTable, NSString;
@protocol SBTransientOverlayViewControllerDelegate;


#import "SBDeviceApplicationSceneOverlayViewProvider.h"
#import "SBDeviceApplicationRemoteTransientOverlayContainerViewController.h"

@interface SBDeviceApplicationRemoteTransientOverlayViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBTransientOverlayViewControllerDelegate>

 {
    NSMutableArray *_activePresentationContexts;
    SBDeviceApplicationRemoteTransientOverlayContainerViewController *_containerVC;
    NSMapTable *_keyboardFocusRedirectionsByRemoteVC;
    BOOL _needsDeactivationWithNoActiveTransientOverlays;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)defaultShouldAutorotateForTransientOverlayViewController:(id)arg0 ;
-(BOOL)isKeyboardVisibleForSpringBoardForTransientOverlayViewController:(id)arg0 ;
-(BOOL)isPresentingTransientOverlay:(id)arg0 ;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldFollowSceneOrientation;
-(NSInteger)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(id)arg0 ;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_realOverlayViewController;
-(id)initWithSceneHandle:(id)arg0 delegate:(id)arg1 ;
-(void)_activateIfPossible;
-(void)_deactivateIfPossible;
-(void)_dismissRemoteOverlayVC:(id)arg0 ;
-(void)_handleAppSwitcherWillPresent:(id)arg0 ;
-(void)_handleCoverSheetDidPresent:(id)arg0 ;
-(void)dealloc;
-(void)dismissRemoteTransientOverlayViewController:(id)arg0 ;
-(void)noteDisplayModeChange:(NSInteger)arg0 ;
-(void)presentRemoteTransientOverlayViewController:(id)arg0 presentationRequest:(id)arg1 ;
-(void)transientOverlayViewControllerDidEndRotation:(id)arg0 ;
-(void)transientOverlayViewControllerDidUpdatePresentationPrefersStatusBarHidden:(id)arg0 ;
-(void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(id)arg0 ;
-(void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(id)arg0 ;
-(void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(id)arg0 ;
-(void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(id)arg0 ;
-(void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(id)arg0 ;
-(void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(id)arg0 ;
-(void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(id)arg0 ;
-(void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(id)arg0 ;
-(void)transientOverlayViewControllerNeedsWindowHitTestingUpdate:(id)arg0 ;
-(void)transientOverlayViewControllerWillBeginRotation:(id)arg0 toInterfaceOrientation:(NSInteger)arg1 ;


@end


#endif