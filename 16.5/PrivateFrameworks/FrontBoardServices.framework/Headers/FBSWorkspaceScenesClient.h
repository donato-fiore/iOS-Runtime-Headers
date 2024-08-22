// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSWORKSPACESCENESCLIENT_H
#define FBSWORKSPACESCENESCLIENT_H

@class BSServiceConnection<BSServiceConnectionClient>, BSServiceConnectionEndpoint, NSMutableDictionary, NSHashTable, NSMutableArray, NSString;
@protocol FBSSceneUpdater, FBSWorkspaceScenesSource, FBSWorkspaceDelegate, OS_dispatch_queue, FBSWorkspaceServiceClientInterface, NSCopying;

#import <Foundation/Foundation.h>

#import "FBSWorkspace.h"
#import "FBSSerialQueue.h"

@interface FBSWorkspaceScenesClient : NSObject <FBSSceneUpdater, FBSWorkspaceScenesSource>

 {
    FBSWorkspace *_workspace;
    id<FBSWorkspaceDelegate> *_workspaceDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    FBSSerialQueue *_callOutQueue;
    BSServiceConnection<BSServiceConnectionClient> *_connection;
    BSServiceConnectionEndpoint *_endpoint;
    NSMutableDictionary *_scenesByIdentity;
    NSMutableDictionary *_clientSettingsByIdentity;
    NSHashTable *_reconnectingScenes;
    NSMutableArray *_pendedSendBlocks;
    id<FBSWorkspaceServiceClientInterface> *_handshakeLock_remoteTarget;
    NSMutableDictionary *_reportingLock_scenesByIdentity;
    os_unfair_lock_s _handshakeLock;
    os_unfair_lock_s _reportingLock;
    BOOL _activated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) Class superclass;


+(id)serviceQuality;
-(BOOL)canHaveAgent;
-(id)_queue_connectedSceneWithIdentity:(id)arg0 ;
-(id)_remoteTarget;
-(id)_reportedSceneWithIdentity:(id)arg0 ;
-(id)callOutQueue;
-(id)hostProcess;
-(id)init;
-(id)initWithEndpoint:(id)arg0 queue:(id)arg1 calloutQueue:(id)arg2 workspace:(id)arg3 ;
-(id)sceneWithIdentity:(id)arg0 ;
-(id)scenes;
-(void)_configureReceivedActions:(id)arg0 forScene:(id)arg1 ;
-(void)_queue_invalidateScene:(id)arg0 withTransitionContext:(id)arg1 completion:(id)arg2 ;
-(void)_queue_sendHandshake;
-(void)_queue_updateScene:(id)arg0 withSettings:(id)arg1 diff:(id)arg2 transitionContext:(id)arg3 completion:(id)arg4 ;
-(void)createSceneWithIdentity:(id)arg0 parameters:(id)arg1 transitionContext:(id)arg2 completion:(id)arg3 ;
-(void)queue_activate;
-(void)reconnectSceneWithIdentity:(id)arg0 parameters:(id)arg1 transitionContext:(id)arg2 completion:(id)arg3 ;
-(void)requestSceneWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 ;
-(void)scene:(id)arg0 sendMessage:(id)arg1 withResponse:(id)arg2 ;
-(void)sceneID:(id)arg0 destroyWithTransitionContext:(id)arg1 completion:(id)arg2 ;
-(void)sceneID:(id)arg0 sendActions:(id)arg1 ;
-(void)sceneID:(id)arg0 sendMessage:(id)arg1 completion:(id)arg2 ;
-(void)sceneID:(id)arg0 updateWithSettingsDiff:(id)arg1 transitionContext:(id)arg2 completion:(id)arg3 ;
-(void)sendActions:(id)arg0 completion:(id)arg1 ;
-(void)willTerminateWithTransitionContext:(id)arg0 ;


@end


#endif