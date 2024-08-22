// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCENELAYOUTWORKSPACETRANSACTION_H
#define SBSCENELAYOUTWORKSPACETRANSACTION_H

@class FBDisplayLayoutTransition, FBSynchronizedTransactionGroup, NSMutableSet, NSSet, NSString;
@protocol FBSynchronizedTransactionGroupDelegate, FBApplicationUpdateScenesTransactionObserver, FBSynchronizedTransaction, SBSceneLayoutWorkspaceTransactionDelegate, FBSynchronizedTransactionDelegate;


#import "SBWorkspaceTransaction.h"
#import "SBSceneLayoutSynchronizeTransitionTransaction.h"
#import "SBSceneBackgroundedStatusAssertion.h"
#import "SBWorkspaceTransitionRequest.h"
#import "SBWorkspaceApplicationSceneTransitionContext.h"

@interface SBSceneLayoutWorkspaceTransaction : SBWorkspaceTransaction <FBSynchronizedTransactionGroupDelegate, FBApplicationUpdateScenesTransactionObserver, FBSynchronizedTransaction>

 {
    FBDisplayLayoutTransition *_fbLayoutTransition;
    BOOL _transitionFailed;
    BOOL _delegateTransitionComplete;
    BOOL _performSceneUpdates;
    BOOL _waitForSceneUpdates;
    BOOL _waitingForSynchronizedCommit;
    SBSceneLayoutSynchronizeTransitionTransaction *_synchronizePrepareTransitionTransaction;
    SBSceneLayoutSynchronizeTransitionTransaction *_synchronizeSendActivationResultTransaction;
    SBSceneLayoutSynchronizeTransitionTransaction *_synchronizeBeginTransitionTransaction;
    SBSceneLayoutSynchronizeTransitionTransaction *_synchronizeAddSlavesTransaction;
    FBSynchronizedTransactionGroup *_sceneUpdateTransactionGroup;
    SBSceneBackgroundedStatusAssertion *_scenesBackgroundedStatusAssertion;
    NSMutableSet *_scenesToBackground;
    SBWorkspaceTransitionRequest *_interruptingTransitionRequest;
}


@property (readonly, nonatomic) NSSet *backgroundingApplicationSceneEntities; // ivar: _backgroundingAppSceneEntities
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSceneLayoutWorkspaceTransactionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *foregroundingApplicationSceneEntities; // ivar: _foregroundingAppSceneEntities
@property (readonly, nonatomic) NSSet *fromApplicationSceneEntities; // ivar: _fromAppSceneEntities
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSSet *sceneUpdateTransactions; // ivar: _updateTransactions
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<FBSynchronizedTransactionDelegate> *synchronizationDelegate; // ivar: _synchronizationDelegate
@property (readonly, nonatomic) NSSet *toApplicationSceneEntities;
@property (readonly, nonatomic) SBWorkspaceApplicationSceneTransitionContext *transitionContext; // ivar: _transitionContext
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning; // ivar: _isTransitioning


-(BOOL)_canBeInterrupted;
-(BOOL)_overrideInterfaceOrientationForOrientationMismatch:(*NSInteger)arg0 ;
-(BOOL)_sceneEntities:(id)arg0 hasEntityRepresentingSceneID:(id)arg1 ;
-(BOOL)canInterruptForTransitionRequest:(id)arg0 ;
-(BOOL)isReadyForSynchronizedCommit;
-(BOOL)synchronizedTransactionGroup:(id)arg0 shouldFailForSynchronizedTransaction:(id)arg1 ;
-(NSInteger)_orientationForFollowOnRotationIfNeeded;
-(id)initWithTransitionRequest:(id)arg0 ;
-(id)sceneManager;
-(void)_begin;
-(void)_beginLayoutTransition;
-(void)_captureAppsForTransition;
-(void)_childTransactionDidComplete:(id)arg0 ;
-(void)_completeTransition;
-(void)_didComplete;
-(void)_evaluateTransitionCompletion;
-(void)_mainDisplayUpdateAggregateDictionaryForLayoutRoleWithApplication:(id)arg0 ;
-(void)_performTransition;
-(void)_prepareLayoutTransition;
-(void)_prepareScenesForSceneUpdates;
-(void)_prepareScenesForTransition;
-(void)_sendActivationResultWithError:(id)arg0 ;
-(void)_updateAggregateDictionary;
-(void)_updateKeyboardContextMaskStyles:(BOOL)arg0 ;
-(void)_updateScenesForTransitionCompletion;
-(void)_willBegin;
-(void)_willFailWithReason:(id)arg0 ;
-(void)_willInterruptWithReason:(id)arg0 ;
-(void)dealloc;
-(void)performSynchronizedCommit;
-(void)synchronizedTransaction:(id)arg0 didCommitSynchronizedTransactions:(id)arg1 ;
-(void)synchronizedTransaction:(id)arg0 willCommitSynchronizedTransactions:(id)arg1 ;
-(void)synchronizedTransactionReadyToCommit:(id)arg0 ;
-(void)transaction:(id)arg0 didCommitSceneUpdate:(id)arg1 ;
-(void)transaction:(id)arg0 didCreateScene:(id)arg1 ;
-(void)transaction:(id)arg0 didLaunchProcess:(id)arg1 ;
-(void)transaction:(id)arg0 willCommitSceneUpdate:(id)arg1 ;
-(void)transaction:(id)arg0 willLaunchProcess:(id)arg1 ;
-(void)transaction:(id)arg0 willUpdateScene:(id)arg1 ;


@end


#endif