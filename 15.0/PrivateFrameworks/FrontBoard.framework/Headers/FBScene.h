// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSCENE_H
#define FBSCENE_H

@class NSMutableOrderedSet, FBSSceneClientSettings, NSString, FBSSceneDefinition, FBSSceneIdentityToken, FBSSceneParameters, FBSSceneSettings, FBSSceneSpecification;
@protocol FBSceneHost, BSDescriptionProviding, BSInvalidatable, FBSceneClient, FBSceneClientProviderInternal, FBSceneDelegate;

#import <Foundation/Foundation.h>

#import "FBSceneObserver.h"
#import "FBSceneRemnant.h"
#import "FBSceneWorkspace.h"
#import "FBSceneClientHandle.h"
#import "FBProcess.h"
#import "FBSceneLayerManager.h"

@interface FBScene : NSObject <FBSceneHost, BSDescriptionProviding>

 {
    os_unfair_lock_s _lock;
    FBSceneObserver *_delegateProxy;
    NSMutableOrderedSet *_lock_observerProxies;
    id<BSInvalidatable> *_stateCaptureAssertion;
    id<FBSceneClient> *_client;
    id<FBSceneClientProviderInternal> *_clientProvider;
    FBSceneRemnant *_remnant;
    NSUInteger _activationID;
    NSUInteger _lastForegroundingTransitionID;
    BOOL _contentStateIsChanging;
    BOOL _legacy;
    BOOL _invalidated;
    BOOL _everActivated;
    BOOL _inTransaction;
    FBSceneWorkspace *_workspace;
}


@property (readonly, nonatomic) NSUInteger _transactionID; // ivar: _transactionID
@property (readonly, nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) FBSceneClientHandle *clientHandle; // ivar: _clientHandle
@property (readonly, nonatomic) FBProcess *clientProcess; // ivar: _clientProcess
@property (readonly, nonatomic) FBSSceneClientSettings *clientSettings; // ivar: _clientSettings
@property (readonly, nonatomic) NSInteger contentState; // ivar: _contentState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) FBSSceneDefinition *definition; // ivar: _definition
@property (weak, nonatomic) NSObject<FBSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *group;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) FBSSceneIdentityToken *identityToken; // ivar: _identityToken
@property (readonly, nonatomic) FBSceneLayerManager *layerManager; // ivar: _layerManager
@property (readonly, copy, nonatomic) FBSSceneParameters *parameters;
@property (readonly, nonatomic) FBSSceneSettings *settings; // ivar: _settings
@property (readonly, copy, nonatomic) FBSSceneSpecification *specification;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, copy, nonatomic) NSString *workspaceIdentifier; // ivar: _workspaceIdentifier


-(NSInteger)currentInterfaceOrientation;
-(id)createSnapshot;
-(id)createSnapshotWithContext:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)display;
-(id)snapshotContext;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)uiClientSettings;
-(id)uiSettings;
-(void)activateWithTransitionContext:(id)arg0 ;
-(void)activateWithTransitionContext:(id)arg0 completion:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)client:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)client:(id)arg0 didUpdateClientSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 ;
-(void)configureParameters:(id)arg0 ;
-(void)deactivateWithTransitionContext:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)performUpdate:(id)arg0 ;
// -(void)performUpdate:(id)arg0 withCompletion:(unk)arg1  ;
-(void)removeObserver:(id)arg0 ;
-(void)sendActions:(id)arg0 ;
-(void)updateSettings:(id)arg0 withTransitionContext:(id)arg1 ;
-(void)updateSettings:(id)arg0 withTransitionContext:(id)arg1 completion:(id)arg2 ;
-(void)updateSettingsWithBlock:(id)arg0 ;
-(void)updateSettingsWithTransitionBlock:(id)arg0 ;
-(void)updateUISettingsWithBlock:(id)arg0 ;
-(void)updateUISettingsWithTransitionBlock:(id)arg0 ;


@end


#endif