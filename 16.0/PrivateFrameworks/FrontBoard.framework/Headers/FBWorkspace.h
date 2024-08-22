// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBWORKSPACE_H
#define FBWORKSPACE_H

@class BSServiceConnection<BSServiceConnectionHost>, NSMutableArray, NSMutableDictionary, FBSSerialQueue, NSMutableSet, RBSAssertion, BSCompoundAssertion, BSAuditToken, NSString;
@protocol FBSceneClient, FBSceneClientProviderInternal, FBSceneClientProvider, FBWorkspaceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FBProcess.h"
#import "FBWorkspaceEventDispatcherSource.h"

@interface FBWorkspace : NSObject <FBSceneClient, FBSceneClientProviderInternal, FBSceneClientProvider>

 {
    id<FBWorkspaceDelegate> *_weak_delegate;
    FBProcess *_weak_process;
    FBWorkspaceEventDispatcherSource *_lock_eventDispatcherSource;
    BSServiceConnection<BSServiceConnectionHost> *_lock_connection;
    NSMutableArray *_lock_waitForConnectBlocks;
    NSMutableDictionary *_lock_identityToSceneMap;
    NSMutableDictionary *_lock_identityToRemnantsMap;
    NSMutableArray *_lock_pendedRequests;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    FBSSerialQueue *_workspaceQueue;
    NSMutableSet *_lock_invalidationActions;
    RBSAssertion *_lock_lifeAssertion;
    RBSAssertion *_lock_connectAssertion;
    RBSAssertion *_lock_afterlifeAssertion;
    NSInteger _lock_activeInterruptionPolicy;
    unsigned char _lock_activeAssertionState;
    BSCompoundAssertion *_compoundAssertion;
    RBSAssertion *_workspaceServiceInjector;
    BOOL _shouldInjectEndpoint;
    BOOL _lock_didReceiveHandshake;
    BOOL _lock_invalidated;
}


@property (readonly, nonatomic) BSAuditToken *auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FBWorkspaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) FBProcess *process;
@property (readonly) Class superclass;
@property (nonatomic, setter=test_setRejectAllSceneClients:) BOOL test_rejectAllSceneClients; // ivar: _test_rejectAllSceneClients


-(id)_acquireAssertionForReason:(id)arg0 withState:(unsigned char)arg1 ;
-(id)_sceneForHost:(id)arg0 ;
-(id)_sceneForIdentity:(id)arg0 ;
-(id)_unregisterSceneForHost:(id)arg0 ;
-(id)init;
-(id)registerHost:(id)arg0 settings:(id)arg1 initialClientSettings:(id)arg2 fromRemnant:(id)arg3 error:(*id)arg4 ;
-(void)_lock_enqueueConnectBlock:(id)arg0 ;
-(void)_lock_fireInvalidationAction;
-(void)_resolveSceneLifecycleStateAndInterruptionPolicy;
-(void)_terminateWithReason:(id)arg0 ;
-(void)_updateProcessAssertionState;
-(void)dealloc;
-(void)handshakeWithRemnants:(id)arg0 ;
-(void)host:(id)arg0 didInvalidateWithTransitionContext:(id)arg1 completion:(id)arg2 ;
-(void)host:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)host:(id)arg0 didUpdateSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 completion:(id)arg4 ;
-(void)registerInvalidationAction:(id)arg0 ;
-(void)requestSceneWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)sceneID:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)sceneID:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)sceneID:(id)arg0 sendMessage:(id)arg1 withResponse:(id)arg2 ;
-(void)sendActions:(id)arg0 ;
-(void)unregisterHost:(id)arg0 ;


@end


#endif