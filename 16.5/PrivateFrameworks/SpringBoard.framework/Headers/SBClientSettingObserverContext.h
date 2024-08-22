// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCLIENTSETTINGOBSERVERCONTEXT_H
#define SBCLIENTSETTINGOBSERVERCONTEXT_H

@class FBScene, FBSSceneClientSettings, FBSSceneTransitionContext;

#import <Foundation/Foundation.h>

#import "SBDeviceApplicationSceneHandle.h"

@interface SBClientSettingObserverContext : NSObject {
    FBScene *_scene;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    FBSSceneClientSettings *_oldClientSettings;
    FBSSceneTransitionContext *_transition;
}






@end


#endif