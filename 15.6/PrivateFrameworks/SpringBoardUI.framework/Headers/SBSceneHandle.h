// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSCENEHANDLE_H
#define SBSCENEHANDLE_H

@class NSHashTable, NSMapTable, NSString, FBSSceneDefinition, FBSDisplayIdentity, FBScene, FBSceneMonitor;
@protocol FBSceneMonitorDelegate, FBSceneObserver, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBSceneHandle : NSObject <FBSceneMonitorDelegate, FBSceneObserver, BSDescriptionProviding>

 {
    NSHashTable *_observers;
    NSMapTable *_observersToObserverBehaviors;
    NSHashTable *_actionConsumers;
}


@property (readonly, nonatomic, getter=isContentReady) BOOL contentReady;
@property (readonly, nonatomic) NSInteger contentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=_definition) FBSSceneDefinition *definition; // ivar: _definition
@property (readonly, copy) NSString *description;
@property (retain, nonatomic, setter=_setDisplayIdentity:) FBSDisplayIdentity *displayIdentity; // ivar: _displayIdentity
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_manuallyControlsLifecycle, setter=_setManuallyControlsLifecycle:) BOOL manuallyControlsLifecycle; // ivar: _manuallyControlsLifecycle
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, copy, nonatomic) NSString *sceneIdentifier;
@property (readonly, nonatomic) FBScene *sceneIfExists; // ivar: _scene
@property (retain, nonatomic, getter=_sceneMonitor, setter=_setSceneMonitor:) FBSceneMonitor *sceneMonitor; // ivar: _sceneMonitor
@property (readonly) Class superclass;


-(BOOL)_handleSceneAction:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPairedWithExternalSceneWithIdentifier:(id)arg0 ;
-(id)_createMonitor;
-(id)_initWithDefinition:(id)arg0 displayIdentity:(id)arg1 ;
-(id)_initWithDefinition:(id)arg0 scene:(id)arg1 displayIdentity:(id)arg2 ;
-(id)_initWithScene:(id)arg0 displayIdentity:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_commonInit;
-(void)_didCreateScene:(id)arg0 ;
-(void)_didDestroyScene:(id)arg0 ;
-(void)_didUpdateClientSettingsWithDiff:(id)arg0 transitionContext:(id)arg1 ;
-(void)_didUpdateContentState:(NSInteger)arg0 ;
-(void)_didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg0 ;
-(void)_didUpdateSettingsWithDiff:(id)arg0 previousSettings:(id)arg1 ;
-(void)_enumerateObserversWithBlock:(id)arg0 ;
-(void)_noteSceneCreated:(id)arg0 ;
-(void)_noteSceneDestroyed:(id)arg0 ;
-(void)addActionConsumer:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeActionConsumer:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneMonitor:(id)arg0 pairingStatusDidChangeForExternalSceneIDs:(id)arg1 ;
-(void)sceneMonitor:(id)arg0 sceneClientSettingsDidChangeWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)sceneMonitor:(id)arg0 sceneSettingsDidChangeWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(void)sceneMonitor:(id)arg0 sceneWasCreated:(id)arg1 ;
-(void)sceneMonitor:(id)arg0 sceneWasDestroyed:(id)arg1 ;


@end


#endif