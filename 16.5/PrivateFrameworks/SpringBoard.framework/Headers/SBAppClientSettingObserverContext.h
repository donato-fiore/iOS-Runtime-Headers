// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPCLIENTSETTINGOBSERVERCONTEXT_H
#define SBAPPCLIENTSETTINGOBSERVERCONTEXT_H

@class UIApplicationSceneClientSettings, FBScene, UIApplicationSceneSettings, FBSSceneTransitionContext;

#import <Foundation/Foundation.h>

#import "SBApplication.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBAppClientSettingObserverContext : NSObject

@property (retain, nonatomic) SBApplication *app; // ivar: _app
@property (retain, nonatomic) UIApplicationSceneClientSettings *oldClientSettings; // ivar: _oldClientSettings
@property (retain, nonatomic) FBScene *scene; // ivar: _scene
@property (retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (retain, nonatomic) UIApplicationSceneSettings *settings; // ivar: _settings
@property (retain, nonatomic) FBSSceneTransitionContext *transition; // ivar: _transition
@property (retain, nonatomic) UIApplicationSceneClientSettings *updatedClientSettings; // ivar: _updatedClientSettings




@end


#endif