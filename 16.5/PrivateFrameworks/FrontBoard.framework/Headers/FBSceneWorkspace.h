// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSCENEWORKSPACE_H
#define FBSCENEWORKSPACE_H

@class NSMutableOrderedSet, NSMutableDictionary, NSMapTable, NSMutableArray, FBSMutableSceneDefinition, NSString;
@protocol FBSceneCreating, FBSceneEventQueueDelegate, FBWorkspaceEventDispatcherTarget, FBSceneEventCoordinating, BSDescriptionProviding, BSInvalidatable, FBSceneWorkspaceDelegate;

#import <Foundation/Foundation.h>

#import "FBSceneManagerObserver.h"
#import "FBSceneEventQueue.h"

@interface FBSceneWorkspace : NSObject <FBSceneCreating, FBSceneEventQueueDelegate, FBWorkspaceEventDispatcherTarget, FBSceneEventCoordinating, BSDescriptionProviding>

 {
    id<BSInvalidatable> *_eventDispatcherTargetRegistration;
    FBSceneManagerObserver *_delegate;
    NSMutableOrderedSet *_observers;
    NSMutableDictionary *_allScenesByID;
    NSMapTable *_providerToScenesMap;
    FBSceneEventQueue *_eventQueue;
    NSMutableArray *_pendingIdleEvents;
    NSUInteger _synchronizationBlockDepth;
    FBSMutableSceneDefinition *_buildingDefinition;
    BOOL _invalidated;
    BOOL _supportsLegacy;
    BOOL _suppressConnectionHandshakes;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FBSceneWorkspaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *workspaceIdentifier;


+(id)workspaceWithIdentifier:(id)arg0 ;
-(id)allScenes;
-(id)createScene:(id)arg0 ;
-(id)createSceneFromRemnant:(id)arg0 withSettings:(id)arg1 transitionContext:(id)arg2 ;
-(id)createSceneWithDefinition:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)sceneIdentityTokenForIdentifier:(id)arg0 ;
-(id)sceneWithIdentifier:(id)arg0 ;
-(id)sceneWithIdentityToken:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)didReceiveHandshake:(id)arg0 ;
-(void)eventQueueDidDrain:(id)arg0 ;
-(void)eventQueueDidUnlock:(id)arg0 ;
-(void)invalidate;
-(void)scene:(id)arg0 deactivateAndInvalidate:(BOOL)arg1 withError:(id)arg2 block:(id)arg3 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)scene:(id)arg0 enumerateAndCalloutToObserversWithEventName:(id)arg1 block:(id)arg2 ;
-(void)scene:(id)arg0 handleUpdateToSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(id)arg3 ;
-(void)setClientIdentity:(id)arg0 ;
-(void)setSpecification:(id)arg0 ;


@end


#endif