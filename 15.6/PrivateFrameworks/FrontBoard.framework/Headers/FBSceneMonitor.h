// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSCENEMONITOR_H
#define FBSCENEMONITOR_H

@class FBSSceneIdentityToken, NSMutableSet, FBSSceneClientSettingsDiffInspector, NSString, FBSSceneSettings;
@protocol FBSceneManagerInternalObserver, FBSceneObserver, FBSceneLayerManagerObserver, FBSceneMonitorDelegate;

#import <Foundation/Foundation.h>

#import "FBSceneManager.h"
#import "FBSceneMonitorBehaviors.h"
#import "FBScene.h"

@interface FBSceneMonitor : NSObject <FBSceneManagerInternalObserver, FBSceneObserver, FBSceneLayerManagerObserver>

 {
    FBSceneManager *_sceneManager;
    FBSSceneIdentityToken *_identityToken;
    NSMutableSet *_externalSceneIDs;
    NSMutableSet *_pairedExternalSceneIDs;
    FBSSceneClientSettingsDiffInspector *_diffInspector;
    FBSceneMonitorBehaviors *_delegateMonitorBehaviors;
    FBSceneMonitorBehaviors *_effectiveMonitorBehaviors;
    BOOL _invalidated;
    BOOL _isSynchronizing;
    BOOL _updateSettingsAfterSync;
    BOOL _updateExternalScenesAfterSync;
}


@property (copy, nonatomic) FBSceneMonitorBehaviors *behaviors; // ivar: _givenMonitorBehaviors
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FBSceneMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly, copy, nonatomic) NSString *sceneID; // ivar: _sceneID
@property (readonly, nonatomic) FBSSceneSettings *sceneSettings; // ivar: _sceneSettings
@property (readonly) Class superclass;


-(BOOL)isPairedWithExternalSceneID:(id)arg0 ;
-(id)_effectiveBehaviors;
-(id)_initWithSceneManager:(id)arg0 sceneID:(id)arg1 ;
-(id)initWithScene:(id)arg0 ;
-(id)initWithSceneID:(id)arg0 ;
-(void)_evaluateEffectiveMonitorBehaviors;
-(void)_setEffectiveMonitorBehaviors:(id)arg0 ;
-(void)_updateAllSceneStateIgnoringDelegate;
-(void)_updateExternalScenes:(BOOL)arg0 ;
-(void)_updateScenePairingState:(BOOL)arg0 ;
-(void)_updateSceneSettings:(BOOL)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)scene:(id)arg0 didApplyUpdateWithContext:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneLayerManagerDidUpdateLayers:(id)arg0 ;
-(void)sceneManager:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 willDestroyScene:(id)arg1 ;
-(void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg0 ;
-(void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg0 ;


@end


#endif