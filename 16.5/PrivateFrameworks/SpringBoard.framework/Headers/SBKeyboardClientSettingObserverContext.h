// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBKEYBOARDCLIENTSETTINGOBSERVERCONTEXT_H
#define SBKEYBOARDCLIENTSETTINGOBSERVERCONTEXT_H

@class FBScene, FBSSceneClientSettings, FBSSceneTransitionContext;

#import <Foundation/Foundation.h>


@interface SBKeyboardClientSettingObserverContext : NSObject {
    FBScene *_scene;
    FBSSceneClientSettings *_oldClientSettings;
    FBSSceneTransitionContext *_transition;
}






@end


#endif