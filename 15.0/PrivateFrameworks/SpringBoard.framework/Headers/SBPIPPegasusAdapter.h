// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPPEGASUSADAPTER_H
#define SBPIPPEGASUSADAPTER_H

@class SBPIPController<SBPIPControllerAdapterContextProviding>, NSMutableSet, PGPictureInPictureController, BSAbsoluteMachTimer, NSString;
@protocol PGPictureInPictureControllerDelegate, SBPIPContainerViewControllerObserver, SBBannerManagerTransitionObserver, SBPIPControllerAdapter, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBPIPAnalytics.h"
#import "SBAppStatusBarSettingsAssertion.h"

@interface SBPIPPegasusAdapter : NSObject <PGPictureInPictureControllerDelegate, SBPIPContainerViewControllerObserver, SBBannerManagerTransitionObserver, SBPIPControllerAdapter>

 {
    SBPIPController<SBPIPControllerAdapterContextProviding> *_pipController;
    NSMutableSet *_presentedExpanseBanners;
    PGPictureInPictureController *_pegasusController;
    SBPIPAnalytics *_analyticsHelper;
    BSAbsoluteMachTimer *_pipDefaultContentSizeResetTimer;
    SBAppStatusBarSettingsAssertion *_appStatusBarSettingsAssertion;
    BOOL _isReducingResourcesUsage;
    id<BSInvalidatable> *_hideFaceTimePIPFromSharePlayScreenSharingAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isAutoPictureInPictureSupported;
+(BOOL)isSupported;
-(BOOL)_presentableIsDodgeableAndStatusBarSuppressing:(id)arg0 ;
-(BOOL)isPictureInPictureActiveForPIPController:(id)arg0 ;
-(BOOL)isPresentingPictureInPictureForPIPController:(id)arg0 applicationBundleIdentifier:(id)arg1 ;
-(BOOL)isStartingStoppingOrCancellingPictureInPictureForPIPController:(id)arg0 ;
-(BOOL)isStoppingOrCancellingPictureForPIPController:(id)arg0 applicationWithBundleIdentifier:(id)arg1 scenePersistenceIdentifier:(id)arg2 ;
-(BOOL)pictureInPictureController:(id)arg0 shouldAuthorizeBackgroundPIPForAppWithBundleIdentifier:(id)arg1 ;
-(BOOL)pictureInPictureController:(id)arg0 shouldDenyNewConnection:(id)arg1 ;
-(BOOL)pictureInPictureControllerCanBackgroundStartForFaceTimeVideoCall:(id)arg0 ;
-(BOOL)pipController:(id)arg0 willBeginPIPInterruptionForAssertion:(id)arg1 ;
-(BOOL)preventStashAssertionsForPIPController:(id)arg0 ;
-(BOOL)shouldStartPictureInPictureForPIPController:(id)arg0 applicationWithProcessIdentifierEnteringBackground:(int)arg1 scenePersistenceIdentifier:(id)arg2 ;
-(NSInteger)_reasonForAssertion:(id)arg0 ;
-(NSInteger)contentTypeForPIPController:(id)arg0 ;
-(NSInteger)tetheringModeForScenePersistenceIdentifier:(id)arg0 ;
-(id)init;
-(id)pipController:(id)arg0 morphAnimatorDataSourceForTargetProcessIdentifier:(int)arg1 scenePersistenceIdentifier:(id)arg2 gestureInitiated:(BOOL)arg3 ;
-(void)_actuallyUpdateBannerInsetsForExpanseWithSizeChanging:(BOOL)arg0 isFullScreen:(BOOL)arg1 ;
-(void)_bannerPresentableWillAnimateTransition:(id)arg0 isPresentation:(BOOL)arg1 isDismissal:(BOOL)arg2 isFullScreen:(BOOL)arg3 withTransitionCoordinator:(id)arg4 ;
-(void)_postEnsuredInSwitcher_pictureInPictureController:(id)arg0 didRequestStopForPictureInPictureViewController:(id)arg1 sourceSceneSessionIdentifier:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateAppStatusBarSettingsAssertion;
-(void)_updateBannerInsetsForExpanseWithSizeChanging:(BOOL)arg0 isFullScreen:(BOOL)arg1 ;
-(void)_updateHasIdleTimerBehaviors;
-(void)_updateHideFromClonedDisplaysAssertion;
-(void)bannerManager:(id)arg0 containerWillTransitionToSize:(struct CGSize )arg1 withTransitionCoordinator:(id)arg2 ;
-(void)bannerManager:(id)arg0 presentable:(id)arg1 willTransitionToSize:(struct CGSize )arg2 withTransitionCoordinator:(id)arg3 ;
-(void)bannerManager:(id)arg0 willDismissPresentable:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)bannerManager:(id)arg0 willPresentPresentable:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)containerViewControllerDidUpdatePrefersHiddenFromClonedDisplays:(id)arg0 ;
-(void)containerViewControllerStartReducingResourcesUsage:(id)arg0 ;
-(void)containerViewControllerStopReducingResourcesUsage:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pictureInPictureController:(id)arg0 didCreatePictureInPictureViewController:(id)arg1 ;
-(void)pictureInPictureController:(id)arg0 didHidePictureInPictureViewController:(id)arg1 ;
-(void)pictureInPictureController:(id)arg0 didRequestStopForPictureInPictureViewController:(id)arg1 sourceSceneSessionIdentifier:(id)arg2 animated:(BOOL)arg3 ;
-(void)pictureInPictureController:(id)arg0 willDestroyPictureInPictureViewController:(id)arg1 ;
-(void)pictureInPictureController:(id)arg0 willHidePictureInPictureViewController:(id)arg1 ;
-(void)pipController:(id)arg0 didCancelPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 scenePersistenceIdentifier:(id)arg2 ;
-(void)pipController:(id)arg0 didStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 scenePersistenceIdentifier:(id)arg2 animated:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)pipController:(id)arg0 willEndPIPInterruptionForAssertion:(id)arg1 ;
-(void)pipController:(id)arg0 willRestorePictureInPictureForTestForApplicationWithBundleIdentifier:(id)arg1 ;
-(void)pipController:(id)arg0 willStartPictureInPictureTestActionForApplicationWithBundleIdentifier:(id)arg1 ;
-(void)setPIPController:(id)arg0 ;


@end


#endif