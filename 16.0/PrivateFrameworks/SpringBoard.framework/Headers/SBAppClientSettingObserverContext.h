// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPCLIENTSETTINGOBSERVERCONTEXT_H
#define SBAPPCLIENTSETTINGOBSERVERCONTEXT_H

@class FBScene, UIApplicationSceneSettings, UIApplicationSceneClientSettings, FBSSceneTransitionContext;

#import <Foundation/Foundation.h>

#import "SBApplication.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBAppClientSettingObserverContext : NSObject {
    FBScene *_scene;
    SBApplication *_app;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIApplicationSceneSettings *_settings;
    UIApplicationSceneClientSettings *_oldClientSettings;
    UIApplicationSceneClientSettings *_updatedClientSettings;
    FBSSceneTransitionContext *_transition;
}






@end


#endif