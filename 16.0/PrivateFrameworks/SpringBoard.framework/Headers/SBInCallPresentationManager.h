// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBINCALLPRESENTATIONMANAGER_H
#define SBINCALLPRESENTATIONMANAGER_H

@class NSMutableDictionary, NSMutableArray, NSMutableSet, NSString;
@protocol SBInCallPresentationSessionDelegate, SBInCallPresentationRequestServerDelegate, FBSceneManagerObserver, SBSceneManagerObserver, SBFBacklightEnvironmentSceneProviding, SBApplicationHosting, SBInCallPresentationManagerDelegate;

#import <Foundation/Foundation.h>

#import "SBApplicationController.h"
#import "SBInCallPresentationRequestServer.h"
#import "SBInCallBannerAuthority.h"
#import "SBExpanseBannerAuthority.h"
#import "SBInCallPresentationSession.h"
#import "SBHideSharePlayContentFromSharedScreenController.h"
#import "SBWindowSceneManager.h"

@interface SBInCallPresentationManager : NSObject <SBInCallPresentationSessionDelegate, SBInCallPresentationRequestServerDelegate, FBSceneManagerObserver, SBSceneManagerObserver, SBFBacklightEnvironmentSceneProviding, SBApplicationHosting>

 {
    SBApplicationController *_applicationController;
    SBInCallPresentationRequestServer *_presentationRequestServer;
    SBInCallBannerAuthority *_inCallBannerAuthority;
    SBExpanseBannerAuthority *_expanseBannerAuthority;
    NSMutableDictionary *_clientIdentifierToPresentationSession;
    NSMutableArray *_pendingInvalidationSessions;
    NSMutableSet *_bundleIdentifiersOfObservedApplications;
    NSMutableSet *_observedSceneManagers;
}


@property (readonly, nonatomic) SBInCallPresentationSession *_lastPresentationSession;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBInCallPresentationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disallowsLockHardwareButtonDoublePress;
@property (readonly, nonatomic) BOOL hasFullscreenActiveCallInSwitcher;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHideSharePlayContentFromSharedScreenController *hideSharePlayContentFromSharedScreenController; // ivar: _lazy_hideSharePlayContentFromSharedScreenController
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsHandlingDeviceLock;
@property (readonly, nonatomic) BOOL supportsHandlingUILockForWindowedAccessoryAttach; // ivar: _supportsHandlingUILockForWindowedAccessoryAttach
@property (readonly, nonatomic) SBWindowSceneManager *windowSceneManager; // ivar: _windowSceneManager


+(BOOL)isSpecializedAPISupported;
-(BOOL)_hasPendingDismissalOfSceneHandleWithPersistenceIdentifier:(id)arg0 ;
-(BOOL)_isManagingSceneOrSceneHandleWithPersistenceIdentifier:(id)arg0 ;
-(BOOL)canHandleOpenApplicationRequestForApplication:(id)arg0 ;
-(BOOL)canHostAnApp;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)hasOverrideAppSceneEntityForLaunchingApplication:(id)arg0 ;
-(BOOL)inCallClientPresentationSession:(id)arg0 canRestoreToPreviousEntity:(id)arg1 ;
-(BOOL)isHostingAnApp;
-(BOOL)supportsBecomingVisibleWhenUnlockingFromSource:(int)arg0 wakingDisplay:(BOOL)arg1 ;
-(NSInteger)inCallClientPresentationSessionInterfaceOrientationForBannerPresentation:(id)arg0 ;
-(NSInteger)inCallClientPresentationSessionInterfaceOrientationForTransientOverlayPresentation:(id)arg0 ;
-(id)_hostedPresentationSessions;
-(id)_newClientPresentationSessionWithSceneHandle:(id)arg0 ;
-(id)_sessionForSceneWithIdentifier:(id)arg0 ;
-(id)hostedAppSceneHandle;
-(id)hostedAppSceneHandles;
-(id)inCallClientPresentationSession:(id)arg0 acquireHideSharePlayContentFromClonedDisplaysAssertionForReason:(id)arg1 ;
-(id)initWithWindowSceneManager:(id)arg0 applicationController:(id)arg1 bannerManager:(id)arg2 ;
-(id)overrideAppSceneEntityForLaunchingApplication:(id)arg0 ;
-(id)scenesForBacklightSession;
-(struct UIEdgeInsets )inCallClientPresentationSessionResolvedPIPDodgingInsets:(id)arg0 ;
-(void)_applicationDidExit:(id)arg0 ;
-(void)_dismissAllPresentations;
-(void)_dismissAllPresentationsForApplication:(id)arg0 ;
-(void)_dismissClientWithIdentifier:(id)arg0 animated:(BOOL)arg1 analyticsSource:(id)arg2 reason:(id)arg3 completion:(id)arg4 ;
-(void)_runZombieChecksForScene:(id)arg0 ;
-(void)_runZombieChecksForSceneHandle:(id)arg0 ;
-(void)conformsToSBApplicationHosting;
-(void)ensureSwitcherInclusionForRestoringFromPIPForSceneWithPersistenceIdentifer:(id)arg0 completion:(id)arg1 ;
-(void)handleAccessoryAttachWithCompletion:(id)arg0 ;
-(void)handleDeviceLockFromSource:(int)arg0 ;
-(void)handleOpenApplicationRequest:(id)arg0 clientWorkspace:(id)arg1 actions:(id)arg2 origin:(id)arg3 options:(id)arg4 withResult:(id)arg5 ;
-(void)handlePresentationForActivityContinuationIdentifier:(id)arg0 ;
-(void)hostedAppWillRotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)inCallClientPresentationSession:(id)arg0 callConnectedStatusChangedForPresentableViewController:(id)arg1 ;
-(void)inCallClientPresentationSession:(id)arg0 handleDestroySceneActionWithReason:(NSInteger)arg1 analyticsSource:(id)arg2 completion:(id)arg3 ;
-(void)inCallClientPresentationSessionSceneWasDestroyed:(id)arg0 ;
-(void)inCallPresentationRequestServer:(id)arg0 clientWithIdentifier:(id)arg1 requestsPresentationWithConfiguration:(id)arg2 completion:(id)arg3 ;
-(void)inCallPresentationRequestServer:(id)arg0 clientWithIdentifierDidInvalidate:(id)arg1 ;
-(void)reactivateInCallForReason:(NSInteger)arg0 ;
-(void)sceneManager:(id)arg0 didAddExternalForegroundApplicationSceneHandle:(id)arg1 ;
-(void)sceneManager:(id)arg0 didAddScene:(id)arg1 ;
-(void)sceneManagerDidInvalidate:(id)arg0 ;


@end


#endif