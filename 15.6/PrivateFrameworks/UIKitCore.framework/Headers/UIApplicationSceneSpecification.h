// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIAPPLICATIONSCENESPECIFICATION_H
#define UIAPPLICATIONSCENESPECIFICATION_H

@class FBSSceneSpecification;



@interface UIApplicationSceneSpecification : FBSSceneSpecification



-(BOOL)affectsAppLifecycleIfInternal;
-(BOOL)affectsScreenOrientation;
-(BOOL)isInternal;
-(BOOL)isUIKitManaged;
-(Class)clientAgentClass;
-(Class)clientSettingsClass;
-(Class)hostAgentClass;
-(Class)lifecycleMonitorClass;
-(Class)sceneSubstrateClass;
-(Class)settingsClass;
-(Class)transitionContextClass;
-(Class)uiSceneMinimumClass;
-(id)baseSceneComponentClassDictionary;
-(id)connectionHandlers;
-(id)coreSceneComponentClassDictionary;
-(id)disconnectionHandlers;
-(id)finalActionHandlers;
-(id)initialActionHandlers;
-(id)initialSettingsDiffActions;
-(id)uiSceneSessionRole;


@end


#endif