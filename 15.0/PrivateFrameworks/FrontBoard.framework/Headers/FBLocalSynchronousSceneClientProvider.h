// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBLOCALSYNCHRONOUSSCENECLIENTPROVIDER_H
#define FBLOCALSYNCHRONOUSSCENECLIENTPROVIDER_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol FBSWorkspaceScenesSource, FBSceneClient, FBSSceneUpdater, FBSceneClientProviderInternal, FBSceneClientProvider, NSCopying;

#import <Foundation/Foundation.h>

#import "FBSceneClientProviderInvalidationAction.h"

@interface FBLocalSynchronousSceneClientProvider : NSObject <FBSWorkspaceScenesSource, FBSceneClient, FBSSceneUpdater, FBSceneClientProviderInternal, FBSceneClientProvider>

 {
    BOOL _workspaceInitialized;
    NSMutableArray *_pendingSceneCreatesBeforeFBSWorkspaceInitialization;
    FBSceneClientProviderInvalidationAction *_invalidationAction;
    NSMutableDictionary *_localSceneInfoByIdentifier;
    NSMutableDictionary *_hostsByIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_init;
-(id)callOutQueue;
-(id)endpoint;
-(id)fbsSceneWithIdentifier:(id)arg0 ;
-(id)hostProcess;
-(id)init;
-(id)registerHost:(id)arg0 settings:(id)arg1 initialClientSettings:(id)arg2 fromRemnant:(id)arg3 error:(*id)arg4 ;
-(id)sceneWithIdentifier:(id)arg0 ;
-(id)scenes;
-(void)_sendSceneCreateFBSWorkspaceDelegateForSceneInfo:(id)arg0 transitionContext:(id)arg1 ;
-(void)host:(id)arg0 didInvalidateWithTransitionContext:(id)arg1 completion:(id)arg2 ;
-(void)host:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)host:(id)arg0 didUpdateSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 completion:(id)arg4 ;
-(void)registerInvalidationAction:(id)arg0 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 ;
-(void)scene:(id)arg0 sendMessage:(id)arg1 withResponse:(id)arg2 ;
-(void)unregisterHost:(id)arg0 ;


@end


#endif