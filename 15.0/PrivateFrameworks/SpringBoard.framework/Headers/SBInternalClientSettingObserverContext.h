// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBINTERNALCLIENTSETTINGOBSERVERCONTEXT_H
#define SBINTERNALCLIENTSETTINGOBSERVERCONTEXT_H

@class UIApplicationSceneClientSettings, FBScene, FBSSceneTransitionContext;

#import <Foundation/Foundation.h>

#import "SBDeviceApplicationSceneHandle.h"

@interface SBInternalClientSettingObserverContext : NSObject

@property (retain, nonatomic) UIApplicationSceneClientSettings *oldClientSettings; // ivar: _oldClientSettings
@property (retain, nonatomic) FBScene *scene; // ivar: _scene
@property (retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (retain, nonatomic) FBSSceneTransitionContext *transition; // ivar: _transition
@property (retain, nonatomic) UIApplicationSceneClientSettings *updatedClientSettings; // ivar: _updatedClientSettings




@end


#endif