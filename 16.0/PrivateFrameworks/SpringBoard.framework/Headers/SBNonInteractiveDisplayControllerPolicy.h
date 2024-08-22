// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBNONINTERACTIVEDISPLAYCONTROLLERPOLICY_H
#define SBNONINTERACTIVEDISPLAYCONTROLLERPOLICY_H

@class FBSDisplayIdentity, CADisplay, FBSceneManager, FBSDisplayLayoutElement, FBScene, FBSDisplayConfiguration, NSString;
@protocol FBSceneObserver, SBSceneLayoutChildTransactionProviding, SBWorkspaceApplicationSceneTransitionContextDelegate, SBSceneHostingDisplayControllerPolicy, FBSDisplayLayoutPublishing, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBSceneHostingDisplayController.h"
#import "SBWindowScene.h"
#import "SBApplicationController.h"
#import "SBApplication.h"

@interface SBNonInteractiveDisplayControllerPolicy : NSObject <FBSceneObserver, SBSceneLayoutChildTransactionProviding, SBWorkspaceApplicationSceneTransitionContextDelegate, SBSceneHostingDisplayControllerPolicy>

 {
    SBSceneHostingDisplayController *_displayController;
    FBSDisplayIdentity *_displayIdentity;
    CADisplay *_caDisplay;
    FBSceneManager *_fbSceneManager;
    SBWindowScene *_monitoredWindowScene;
    SBApplicationController *_applicationController;
    id<FBSDisplayLayoutPublishing> *_layoutPublisher;
    FBSDisplayLayoutElement *_currentLayoutElement;
    id<BSInvalidatable> *_currentLayoutElementAssertion;
    NSUInteger _previouslyReceivedDeactivationReasons;
    SBApplication *_currentApplication;
    FBScene *_currentScene;
    FBSDisplayConfiguration *_lastPresentationUpdateDisplayConfiguration;
    FBScene *_lastPresentationUpdateScene;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)displayController:(id)arg0 shouldUpdatePresentationWithSceneManager:(id)arg1 displayConfiguration:(id)arg2 ;
-(BOOL)displayControllerShouldHaveControlOfDisplay:(id)arg0 ;
-(NSInteger)preferredOverscanCompensationForDisplayController:(id)arg0 ;
-(NSUInteger)displayAssertionDeactivationReasons:(id)arg0 ;
-(NSUInteger)displayAssertionPriorityLevel:(id)arg0 ;
-(NSUInteger)preferredPointScaleForDisplayController:(id)arg0 ;
-(id)_fetchOrCreateSceneForApplication:(id)arg0 monitoredDisplayScene:(id)arg1 fromSceneManager:(id)arg2 displayConfiguration:(id)arg3 deactivationReasons:(NSUInteger)arg4 ;
-(id)childTransactionsForTransitionRequest:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithFBSceneManager:(id)arg0 monitoredWindowScene:(id)arg1 applicationController:(id)arg2 ;
-(id)layoutStateForApplicationTransitionContext:(id)arg0 ;
-(id)powerLogEntryForDisplayConfiguration:(id)arg0 ;
-(id)preferredDisplayModeForDisplayController:(id)arg0 ;
-(id)previousLayoutStateForApplicationTransitionContext:(id)arg0 ;
-(struct CGRect )applicationTransitionContext:(id)arg0 frameForApplicationSceneEntity:(id)arg1 ;
-(void)connectToDisplayController:(id)arg0 displayConfiguration:(id)arg1 ;
-(void)dealloc;
-(void)displayController:(id)arg0 didBeginTransaction:(id)arg1 sceneManager:(id)arg2 displayConfiguration:(id)arg3 deactivationReasons:(NSUInteger)arg4 ;
-(void)displayController:(id)arg0 didGainControlOfDisplayWithSceneManager:(id)arg1 ;
-(void)displayController:(id)arg0 sceneManager:(id)arg1 didLoseControlOfDisplayWithDeactivationReasons:(NSUInteger)arg2 ;
-(void)displayController:(id)arg0 sceneManager:(id)arg1 didReceiveNewDeactivationReasons:(NSUInteger)arg2 ;
-(void)displayController:(id)arg0 updatePresentationWithSceneManager:(id)arg1 displayConfiguration:(id)arg2 completion:(id)arg3 ;
-(void)displayControllerDidDisconnect:(id)arg0 sceneManager:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;


@end


#endif