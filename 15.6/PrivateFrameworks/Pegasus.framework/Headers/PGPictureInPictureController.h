// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPICTUREINPICTURECONTROLLER_H
#define PGPICTUREINPICTURECONTROLLER_H

@class NSMutableSet, NSXPCListener, NSSet, NSDictionary, NSString;
@protocol NSXPCListenerDelegate, PGPictureInPictureRemoteObjectDelegate, PGBackgroundPIPServiceDelegate, OS_dispatch_queue, PGPictureInPictureControllerDelegate, PGPictureInPictureAnalyticsDelegate;

#import <Foundation/Foundation.h>

#import "PGPictureInPictureRemoteObject.h"
#import "PGBackgroundPIPService.h"
#import "PGInterruptionAssistant.h"
#import "PGPictureInPictureApplication.h"

@interface PGPictureInPictureController : NSObject <NSXPCListenerDelegate, PGPictureInPictureRemoteObjectDelegate, PGBackgroundPIPServiceDelegate>

 {
    os_unfair_lock_s _lock;
    NSMutableSet *_lock_pictureInPictureRemoteObjects;
    NSMutableSet *_pictureInPictureRemoteObjectsSupportingActiveSessionCancellationOnStart;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    NSMutableSet *_activePictureInPictureRemoteObjects;
    PGPictureInPictureRemoteObject *_suspendedPictureInPictureRemoteObject;
    PGBackgroundPIPService *_backgroundPIPService;
    PGInterruptionAssistant *_interruptionAssistant;
    id<PGPictureInPictureControllerDelegate> *_delegate;
    PGPictureInPictureRemoteObject *_remoteObjectThatRequestedStop;
    ? _delegateRespondsTo;
}


@property (readonly, nonatomic) PGPictureInPictureApplication *activePictureInPictureApplication; // ivar: _activePictureInPictureApplication
@property (readonly, nonatomic) NSSet *activePictureInPictureApplications;
@property (readonly, nonatomic) NSDictionary *activeSceneSessionIdentifiersByApplication;
@property (weak, nonatomic) NSObject<PGPictureInPictureAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PGPictureInPictureControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isStartingStoppingOrCancellingPictureInPicture;
@property (readonly, nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive; // ivar: _pictureInPictureActive
@property (readonly, nonatomic) NSSet *pictureInPictureApplications; // ivar: _pictureInPictureApplications
@property (readonly) Class superclass;


+(BOOL)isPictureInPictureSupported;
-(BOOL)_hasActiveNonVideoCallRemoteObjectAuthorizedForBackgroundPIP;
-(BOOL)backgroundPIPService:(id)arg0 canAuthorizeBackgroundPIPForActivitySessionWithIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 ;
-(BOOL)isStoppingOrCancellingPictureInPictureForApplication:(id)arg0 sceneSessionPersistentIdentifier:(id)arg1 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)pictureInPictureInterruptionBeganWithReason:(NSInteger)arg0 attribution:(id)arg1 ;
-(BOOL)pictureInPictureRemoteObjectHasBackgroundPIPAuthorization:(id)arg0 ;
-(BOOL)pictureInPictureRemoteObjectShouldAcceptSetupRequest:(id)arg0 ;
-(BOOL)pictureInPictureRemoteObjectShouldCancelActivePictureInPictureOnStart:(id)arg0 ;
-(BOOL)pictureInPictureRemoteObjectShouldUpdateCancellationPolicyOnStart:(id)arg0 ;
-(BOOL)shouldStartPictureInPictureForApplicationEnteringBackground:(id)arg0 ;
-(BOOL)shouldStartPictureInPictureForApplicationEnteringBackground:(id)arg0 sceneSessionPersistentIdentifier:(id)arg1 ;
-(NSInteger)contentTypePictureInPictureApplication:(id)arg0 sceneSessionPersistentIdentifier:(id)arg1 ;
-(NSInteger)tetheringModeForSceneSessionPersistentIdentifier:(id)arg0 ;
-(id)_faceTimeVideoCallRemoteObject;
-(id)_pictureInPictureRemoteObjects;
// -(id)_remoteObjectForPictureInPictureApplication:(id)arg0 passingTest:(id)arg1 error:(unk)arg2  ;
-(id)_remoteObjectForPictureInPictureApplication:(id)arg0 sceneSessionPersistentIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)_remoteObjectForTestApplicationWithBundleIdentifier:(id)arg0 ;
-(id)_remoteObjectThatCanCancelPictureInPictureApplication:(id)arg0 sceneSessionPersistentIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)_remoteObjectThatCanEndTwoStageStopPictureInPictureApplication:(id)arg0 error:(*id)arg1 ;
-(id)_remoteObjectThatCanStopPictureInPictureApplication:(id)arg0 sceneSessionPersistentIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)_remoteObjectThatShouldStartPictureInPictureEnteringBackgroundForPictureInPictureApplication:(id)arg0 sceneSessionPersistentIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)_remoteObjectsForPictureInPictureApplication:(id)arg0 ;
-(id)existingPictureInPictureApplicationForBundleIdentifier:(id)arg0 ;
-(id)init;
-(id)pictureInPictureRemoteObjectInterruptionAssistant:(id)arg0 ;
-(id)suspendedPictureInPictureApplication;
-(struct CGRect )initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg0 ;
-(struct CGRect )initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg0 sceneSessionPersistentIdentifier:(id)arg1 ;
-(struct CGSize )preferredContentSizeForActivePictureInPictureWithApplication:(id)arg0 sceneSessionPersistentIdentifier:(id)arg1 ;
-(struct CGSize )preferredContentSizeForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg0 ;
-(struct CGSize )preferredContentSizeForInteractivelyEnteringBackgroundForApplication:(id)arg0 sceneSessionPersistentIdentifier:(id)arg1 ;
-(void)_addRemoteObject:(id)arg0 ;
-(void)_removeRemoteObject:(id)arg0 ;
-(void)_updateAllRemoteObjectsForPIPPossibleAndExemptAttributions;
-(void)activateBackgroundPIPAuthorizationService;
-(void)backgroundPIPService:(id)arg0 didGrantBackgroundPIPAuthorizationForActivitySessionWithIdentifier:(id)arg1 ;
-(void)backgroundPIPService:(id)arg0 didRevokeBackgroundPIPAuthorizationForActivitySessionWithIdentifier:(id)arg1 ;
-(void)beginTwoStageStopPictureInPictureForApplication:(id)arg0 withSceneSessionPersistentIdentifier:(id)arg1 animated:(BOOL)arg2 byRestoringUserInterfaceWithCompletionHandler:(id)arg3 ;
-(void)cancelPictureInPictureForApplication:(id)arg0 ;
-(void)cancelPictureInPictureForApplication:(id)arg0 sceneSessionPersistentIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)endTwoStageStopPictureInPictureForApplication:(id)arg0 withSceneSessionPersistentIdentifier:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)pictureInPictureInterruptionBegan;
-(void)pictureInPictureInterruptionBeganWithReason:(NSInteger)arg0 ;
-(void)pictureInPictureInterruptionEnded;
-(void)pictureInPictureInterruptionEndedWithReason:(NSInteger)arg0 ;
-(void)pictureInPictureInterruptionEndedWithReason:(NSInteger)arg0 attribution:(id)arg1 ;
-(void)pictureInPictureRemoteObject:(id)arg0 didCreatePictureInPictureViewController:(id)arg1 ;
-(void)pictureInPictureRemoteObject:(id)arg0 didHidePictureInPictureViewController:(id)arg1 ;
-(void)pictureInPictureRemoteObject:(id)arg0 didRequestPictureInPictureStopForViewController:(id)arg1 sourceSceneSessionIdentifier:(id)arg2 animated:(BOOL)arg3 ;
-(void)pictureInPictureRemoteObject:(id)arg0 didShowPictureInPictureViewController:(id)arg1 ;
-(void)pictureInPictureRemoteObject:(id)arg0 willDestroyPictureInPictureViewController:(id)arg1 ;
-(void)pictureInPictureRemoteObject:(id)arg0 willHidePictureInPictureViewController:(id)arg1 ;
-(void)pictureInPictureRemoteObject:(id)arg0 willShowPictureInPictureViewController:(id)arg1 ;
-(void)pictureInPictureRemoteObjectNeedsActivationAndInterruptionPolicyUpdate:(id)arg0 ;
-(void)restorePictureInPictureTestActionForApplicationWithBundleIdentifier:(id)arg0 ;
-(void)startMicroPIPIfPossibleForVideoCallWithScenePersistenceIdentifier:(id)arg0 ;
-(void)startPictureInPictureForApplicationEnteringBackground:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)startPictureInPictureForApplicationEnteringBackground:(id)arg0 sceneSessionPersistentIdentifier:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)startPictureInPictureResourcesUsageReductionForApplication:(id)arg0 requestingViewController:(id)arg1 ;
-(void)startPictureInPictureTestActionForApplicationWithBundleIdentifier:(id)arg0 ;
-(void)stopPictureInPictureForApplication:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)stopPictureInPictureForApplication:(id)arg0 sceneSessionPersistentIdentifier:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)stopPictureInPictureResourcesUsageReductionForApplication:(id)arg0 requestingViewController:(id)arg1 ;


@end


#endif