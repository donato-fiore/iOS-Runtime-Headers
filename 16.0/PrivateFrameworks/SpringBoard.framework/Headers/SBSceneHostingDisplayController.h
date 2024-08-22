// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSCENEHOSTINGDISPLAYCONTROLLER_H
#define SBSCENEHOSTINGDISPLAYCONTROLLER_H

@class FBSDisplayIdentity, FBWorkspaceEventQueue, NSMutableArray, BSAtomicSignal, _UIRootWindow, CADisplay, FBSDisplayConfiguration, NSString;
@protocol SBDisplayControlling, SBSceneHostingDisplayControllerPolicy, BSInvalidatable, OS_dispatch_queue, FBSDisplayLayoutPublishing;

#import <Foundation/Foundation.h>

#import "SBDisplayManager.h"
#import "SBSceneManager.h"
#import "SBDisplayAssertion.h"
#import "SBDisplayAssertionPreferences.h"

@interface SBSceneHostingDisplayController : NSObject <SBDisplayControlling>

 {
    FBSDisplayIdentity *_displayIdentity;
    SBDisplayManager *_displayManager;
    id<SBSceneHostingDisplayControllerPolicy> *_policy;
    id<BSInvalidatable> *_stateCaptureAssertion;
    FBWorkspaceEventQueue *_workspaceEventQueue;
    NSMutableArray *_pendingWork;
    BSAtomicSignal *_updateTransactionInvalidator;
    BOOL _hasEnqueuedPresentationUpdate;
    SBSceneManager *_sceneManager;
    BSAtomicSignal *_readyToTransformDisplaysSignal;
    BOOL _connectionCompleted;
    _UIRootWindow *_blankingWindow;
    SBDisplayAssertion *_displayAssertion;
    SBDisplayAssertionPreferences *_currentDisplayAssertionPreferences;
    NSUInteger _currentDeactivationReasons;
    CADisplay *_caDisplay;
    NSObject<OS_dispatch_queue> *_displayMutationQueue;
    id<FBSDisplayLayoutPublishing> *_layoutPublisher;
    FBSDisplayConfiguration *_currentConfiguration;
    FBSDisplayConfiguration *_presentedConfiguration;
    BSAtomicSignal *_presentationUpdateInvalidationSignal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_preferredPointScale;
-(id)_createBlankingWindowWithConfiguration:(id)arg0 ;
-(id)_createDisplayAssertionPreferences;
-(id)_createPresentationBinderWithConfiguration:(id)arg0 ;
-(id)_createUpdateTransactionWithLabel:(id)arg0 ;
-(id)_preferredModeForDisplay;
-(id)_preferredOverscanAdjustment;
-(id)createTransactionForTransitionRequest:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithWorkspaceEventQueue:(id)arg0 policy:(id)arg1 ;
-(id)layoutPublisher;
-(id)signpostDescription;
-(struct CGSize )_preferredLogicalScale;
-(void)_enqueueEvaluateAndApplyPresentationUpdate;
-(void)_ensureCADisplayUpToDate:(id)arg0 completion:(id)arg1 ;
-(void)_runRootTransaction:(id)arg0 withLabel:(id)arg1 completion:(id)arg2 ;
-(void)_runRootUpdateTransactionWithLabel:(id)arg0 completion:(id)arg1 ;
-(void)_sendBlankingWindowToFront:(BOOL)arg0 ;
-(void)_updateBlankingWindowIfNecessary;
-(void)_updateLayoutPublisherIfNecessary;
-(void)_updatePolicyForPresentation:(id)arg0 ;
-(void)_updatePresentationBinderIfNecessary;
-(void)connectToDisplayIdentity:(id)arg0 configuration:(id)arg1 displayManager:(id)arg2 sceneManager:(id)arg3 caDisplayQueue:(id)arg4 assertion:(id)arg5 ;
-(void)dealloc;
-(void)displayAssertion:(id)arg0 didLoseControlOfDisplayForDeactivationReasons:(NSUInteger)arg1 ;
-(void)displayAssertion:(id)arg0 didReceiveNewDeactivationReasons:(NSUInteger)arg1 ;
-(void)displayAssertionDidGainControlOfDisplay:(id)arg0 ;
-(void)displayIdentityDidDisconnect:(id)arg0 ;
-(void)displayIdentityDidUpdate:(id)arg0 configuration:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)requestUpdate:(NSUInteger)arg0 ;
-(void)transformDisplayConfiguration:(id)arg0 withBuilder:(id)arg1 ;


@end


#endif