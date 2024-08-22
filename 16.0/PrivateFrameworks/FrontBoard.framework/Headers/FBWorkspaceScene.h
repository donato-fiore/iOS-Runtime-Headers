// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBWORKSPACESCENE_H
#define FBWORKSPACESCENE_H

@class FBSSceneDefinition, NSString, NSMutableArray, FBSSceneSettings, FBSSceneClientSettings, FBSSerialQueue, FBSSceneIdentity, FBSSceneSpecification;
@protocol FBSSceneHandle, FBSSceneAgentProxy, BSDescriptionProviding, FBSSceneHostAgent, BSInvalidatable, FBSceneHost;

#import <Foundation/Foundation.h>

#import "FBWorkspace.h"

@interface FBWorkspaceScene : NSObject <FBSSceneHandle, FBSSceneAgentProxy, BSDescriptionProviding>

 {
    os_unfair_lock_s _lock;
    FBSSceneDefinition *_definition;
    NSString *_logProem;
    id<FBSSceneHostAgent> *_hostAgent;
    NSMutableArray *_agentSessions;
    FBSSceneSettings *_lock_settings;
    FBSSceneClientSettings *_lock_clientSettings;
    NSMutableArray *_lock_sceneCreatedBlocks;
    unsigned char _lock_lifecycleState;
    NSUInteger _queue_inFlightUpdateEvents;
    NSUInteger _queue_inFlightLifecycleEvents;
    NSUInteger _queue_inFlightUpdateAllowsThrottling;
    NSUInteger _queue_inFlightUpdateDisallowsThrottling;
    NSUInteger _queue_inFlightExternallyManagedEvents;
    unsigned char _queue_assertionState;
    id<BSInvalidatable> *_queue_workspaceAssertion;
    char _queue_activityMode;
    BOOL _lock_sentSceneCreate;
    BOOL _fromRemnant;
    BOOL _lock_invalidated;
    FBSSerialQueue *_workspaceQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<FBSceneHost> *host; // ivar: _host
@property (readonly, copy, nonatomic) FBSSceneIdentity *identity; // ivar: _identity
@property (readonly, weak, nonatomic) FBWorkspace *parentWorkspace; // ivar: _workspace
@property (readonly, copy, nonatomic) FBSSceneSettings *settings;
@property (readonly, copy, nonatomic) FBSSceneSpecification *specification;
@property (readonly) Class superclass;


+(unsigned char)_sceneActionForLifecycleFromState:(unsigned char)arg0 toState:(unsigned char)arg1 ;
-(id)_workspaceQueue_createWatchdogForSceneAction:(unsigned char)arg0 transitionContext:(id)arg1 ;
-(id)callOutQueue;
-(id)clientProcess;
-(id)counterpartAgent;
-(id)definition;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)identifier;
-(id)initWithWorkspace:(id)arg0 host:(id)arg1 settings:(id)arg2 clientSettings:(id)arg3 fromRemnant:(BOOL)arg4 ;
-(id)openSessionWithName:(id)arg0 executionPolicy:(id)arg1 ;
-(id)parameters;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_workspaceQueue_cancelWatchdogTimer:(id)arg0 ;
-(void)_workspaceQueue_decrementInFlightUpdatesForAction:(unsigned char)arg0 allowThrottling:(BOOL)arg1 externallyManaged:(BOOL)arg2 ;
-(void)_workspaceQueue_incrementInFlightUpdatesForAction:(unsigned char)arg0 allowThrottling:(BOOL)arg1 externallyManaged:(BOOL)arg2 ;
-(void)_workspaceQueue_invalidate;
-(void)_workspaceQueue_invalidateSceneAgentWithEvent:(id)arg0 ;
-(void)_workspaceQueue_sendMessageToClient:(id)arg0 ;
-(void)_workspaceQueue_sendSceneCreateToClient:(id)arg0 parameters:(id)arg1 transitionContext:(id)arg2 completion:(id)arg3 ;
-(void)_workspaceQueue_sendSceneUpdateToClient:(id)arg0 settingsDiff:(id)arg1 transitionContext:(id)arg2 completion:(id)arg3 ;
-(void)_workspaceQueue_updateAssertion;
-(void)agent:(id)arg0 registerMessageHandler:(id)arg1 ;
-(void)agent:(id)arg0 sendMessage:(id)arg1 withResponse:(id)arg2 ;
-(void)closeSession:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif