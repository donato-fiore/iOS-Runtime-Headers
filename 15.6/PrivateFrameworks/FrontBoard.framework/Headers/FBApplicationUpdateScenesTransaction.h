// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBAPPLICATIONUPDATESCENESTRANSACTION_H
#define FBAPPLICATIONUPDATESCENESTRANSACTION_H

@class FBSSceneClientIdentity, NSMutableArray, NSString;
@protocol FBApplicationProcessLaunchTransactionObserver, FBUpdateSceneTransactionObserver;


#import "FBSynchronizedTransactionGroup.h"
#import "FBApplicationProcessLaunchTransaction.h"
#import "FBApplicationProcess.h"

@interface FBApplicationUpdateScenesTransaction : FBSynchronizedTransactionGroup <FBApplicationProcessLaunchTransactionObserver, FBUpdateSceneTransactionObserver>

 {
    FBSSceneClientIdentity *_clientIdentity;
    FBApplicationProcessLaunchTransaction *_processLaunchTransaction;
    BOOL _processLaunched;
    NSMutableArray *_updateSceneTransactions;
    NSMutableArray *_pendingUpdateSceneBlocks;
}


@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FBApplicationProcess *process;
@property (readonly) Class superclass;
@property (nonatomic) BOOL waitsForSceneCommits; // ivar: _waitsForSceneCommits


-(BOOL)_canBeInterrupted;
-(BOOL)_shouldFailForChildTransaction:(id)arg0 ;
-(id)_customizedDescriptionProperties;
-(id)init;
-(id)initWithApplicationBundleID:(id)arg0 executionContextProvider:(id)arg1 ;
-(id)initWithClientIdentity:(id)arg0 executionContextProvider:(id)arg1 ;
-(id)initWithProcessIdentity:(id)arg0 executionContextProvider:(id)arg1 ;
-(void)_didComplete;
-(void)_didRemoveChildTransaction:(id)arg0 ;
-(void)_executeSceneUpdatesIfAppropriate;
-(void)_noteDidCommitUpdateForScene:(id)arg0 ;
-(void)_noteWillCommitUpdateForScene:(id)arg0 ;
-(void)_updateSceneWithIdentity:(id)arg0 parameters:(id)arg1 transitionContext:(id)arg2 ;
-(void)_willAddChildTransaction:(id)arg0 ;
-(void)_willFailWithReason:(id)arg0 ;
-(void)_willInterruptWithReason:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)transaction:(id)arg0 didLaunchProcess:(id)arg1 ;
-(void)transaction:(id)arg0 willLaunchProcess:(id)arg1 ;
-(void)updateSceneTransactionDidCommitUpdate:(id)arg0 ;
-(void)updateSceneTransactionDidCreateScene:(id)arg0 ;
-(void)updateSceneTransactionWillCommitUpdate:(id)arg0 ;
-(void)updateSceneTransactionWillUpdateScene:(id)arg0 ;
-(void)updateSceneWithIdentifier:(id)arg0 parameters:(id)arg1 transitionContext:(id)arg2 ;
-(void)updateSceneWithIdentity:(id)arg0 parameters:(id)arg1 transitionContext:(id)arg2 ;


@end


#endif