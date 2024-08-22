// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSCENEHOSTINGDISPLAYCONTROLLERPROVIDER_H
#define SBSCENEHOSTINGDISPLAYCONTROLLERPROVIDER_H

@class NSMutableDictionary, NSMutableSet, NSMapTable, FBWorkspaceEventQueue, NSString;
@protocol SBDisplayManagerObserver, FBSDisplayTransformer, SBDisplayWindowingModeResolverDelegate, SBDisplayControllerProviding, BSInvalidatable, SBWindowingModeResolverFactory, SBSceneHostingDisplayControllerPolicyFactory;

#import <Foundation/Foundation.h>

#import "SBDisplayTransformerRegistry.h"
#import "SBDisplayManager.h"

@interface SBSceneHostingDisplayControllerProvider : NSObject <SBDisplayManagerObserver, FBSDisplayTransformer, SBDisplayWindowingModeResolverDelegate, SBDisplayControllerProviding>

 {
    SBDisplayTransformerRegistry *_transformerRegistry;
    id<BSInvalidatable> *_transformerToken;
    SBDisplayManager *_displayManager;
    id<BSInvalidatable> *_displayManagerObserverToken;
    id<SBWindowingModeResolverFactory> *_resolverFactory;
    os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_capableRootDisplaysToResolverMap;
    NSMutableSet *_lock_derivedDisplaysAwaitingConnection;
    NSMapTable *_lock_rootDisplaysToControllerMap;
    id<SBSceneHostingDisplayControllerPolicyFactory> *_policyFactory;
    FBWorkspaceEventQueue *_workspaceEventQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)displayControllerInfoForConnectingDisplay:(id)arg0 configuration:(id)arg1 ;
-(id)initWithTransformerRegistry:(id)arg0 displayManager:(id)arg1 workspaceEventQueue:(id)arg2 displayModeResolverFactory:(id)arg3 policyFactory:(id)arg4 ;
-(id)transformDisplayConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)displayManager:(id)arg0 didConnectIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)displayManager:(id)arg0 didDisconnectIdentity:(id)arg1 ;
-(void)resolver:(id)arg0 rootDisplay:(id)arg1 didUpdateAvailability:(BOOL)arg2 ;


@end


#endif