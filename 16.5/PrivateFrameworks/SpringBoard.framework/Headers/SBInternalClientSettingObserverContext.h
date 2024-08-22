// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBINTERNALCLIENTSETTINGOBSERVERCONTEXT_H
#define SBINTERNALCLIENTSETTINGOBSERVERCONTEXT_H

@class FBScene, UIApplicationSceneClientSettings, FBSSceneTransitionContext;

#import <Foundation/Foundation.h>

#import "SBDeviceApplicationSceneHandle.h"

@interface SBInternalClientSettingObserverContext : NSObject {
    FBScene *_scene;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIApplicationSceneClientSettings *_oldClientSettings;
    UIApplicationSceneClientSettings *_updatedClientSettings;
    FBSSceneTransitionContext *_transition;
}






@end


#endif