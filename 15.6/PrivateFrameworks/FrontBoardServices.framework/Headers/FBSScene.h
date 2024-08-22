// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSSCENE_H
#define FBSSCENE_H

@class NSString, NSMutableArray, NSOrderedSet;
@protocol FBSSceneSnapshotRequestDelegate, FBSSceneHandle, FBSSceneAgentProxy, FBSSceneUpdaterDelegate, BSDescriptionProviding, FBSSceneClientAgent, FBSSceneUpdater, FBSSceneDelegate;

#import <Foundation/Foundation.h>

#import "FBSSerialQueue.h"
#import "FBSSceneDefinition.h"
#import "FBSSceneSettings.h"
#import "FBSSceneClientSettings.h"
#import "FBSSceneIdentityToken.h"
#import "FBSSceneSpecification.h"

@interface FBSScene : NSObject <FBSSceneSnapshotRequestDelegate, FBSSceneHandle, FBSSceneAgentProxy, FBSSceneUpdaterDelegate, BSDescriptionProviding>

 {
    FBSSerialQueue *_callOutQueue;
    NSString *_identifier;
    FBSSceneDefinition *_definition;
    BOOL _hasAgent;
    id<FBSSceneClientAgent> *_callOutQueue_agent;
    NSMutableArray *_callOutQueue_agentSessions;
    id *_callOutQueue_agentMessageHandler;
    BOOL _callOutQueue_agentInvalidateCalled;
    os_unfair_lock_s _lock;
    id<FBSSceneUpdater> *_lock_updater;
    FBSSceneSettings *_lock_settings;
    FBSSceneClientSettings *_lock_clientSettings;
    NSOrderedSet *_lock_layers;
    id<FBSSceneDelegate> *_lock_delegate;
    FBSSceneIdentityToken *_identityToken;
}


@property (readonly, copy, nonatomic) NSString *_groupID; // ivar: __groupID
@property (readonly, nonatomic) FBSSceneClientSettings *clientSettings;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FBSSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) FBSSceneIdentityToken *identityToken;
@property (readonly, nonatomic) FBSSceneSettings *settings;
@property (readonly, nonatomic) FBSSceneSpecification *specification;
@property (readonly) Class superclass;


+(BOOL)_canHaveAgent;
-(BOOL)_hasAgent;
-(BOOL)invalidateSnapshotWithContext:(id)arg0 ;
-(BOOL)performSnapshotWithContext:(id)arg0 ;
-(BOOL)snapshotRequest:(id)arg0 performWithContext:(id)arg1 ;
-(BOOL)snapshotRequestAllowSnapshot:(id)arg0 ;
-(id)_group;
-(id)_initWithUpdater:(id)arg0 sceneID:(id)arg1 groupID:(id)arg2 specification:(id)arg3 settings:(id)arg4 initialClientSettings:(id)arg5 ;
-(id)callOutQueue;
-(id)clientProcess;
-(id)contexts;
-(id)counterpartAgent;
-(id)definition;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)display;
-(id)fbsDisplay;
-(id)hostProcess;
-(id)init;
-(id)layers;
-(id)openSessionWithName:(id)arg0 executionPolicy:(id)arg1 ;
-(id)parameters;
-(id)snapshotRequest;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_callOutQueue_agent_didCreateWithTransitionContext:(id)arg0 completion:(id)arg1 ;
-(void)_callOutQueue_agent_willDestroyWithTransitionContext:(id)arg0 completion:(id)arg1 ;
-(void)_callOutQueue_invalidate;
-(void)_callOutQueue_invalidateAgent;
-(void)_calloutQueue_comsumeLock_updateClientSettings:(id)arg0 withTransitionContext:(id)arg1 ;
-(void)agent:(id)arg0 registerMessageHandler:(id)arg1 ;
-(void)agent:(id)arg0 sendMessage:(id)arg1 withResponse:(id)arg2 ;
-(void)attachContext:(id)arg0 ;
-(void)attachLayer:(id)arg0 ;
-(void)attachSceneContext:(id)arg0 ;
-(void)closeSession:(id)arg0 ;
-(void)detachContext:(id)arg0 ;
-(void)detachLayer:(id)arg0 ;
-(void)detachSceneContext:(id)arg0 ;
-(void)sendActions:(id)arg0 ;
-(void)updateClientSettings:(id)arg0 withTransitionContext:(id)arg1 ;
-(void)updateClientSettingsWithBlock:(id)arg0 ;
-(void)updateClientSettingsWithTransitionBlock:(id)arg0 ;
-(void)updater:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)updater:(id)arg0 didReceiveMessage:(id)arg1 withResponse:(id)arg2 ;
-(void)updater:(id)arg0 didUpdateSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 completion:(id)arg4 ;


@end


#endif