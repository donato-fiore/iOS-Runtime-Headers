// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBALWAYSONLIVERENDERINGUISCENEASSERTIONMANAGER_H
#define SBALWAYSONLIVERENDERINGUISCENEASSERTIONMANAGER_H

@class UIScene;


#import "SBAlwaysOnLiveRenderingSceneAssertionManager.h"

@interface SBAlwaysOnLiveRenderingUISceneAssertionManager : SBAlwaysOnLiveRenderingSceneAssertionManager {
    UIScene *_scene;
}




-(id)assertionAttributes;
-(id)initWithScene:(id)arg0 ;


@end


#endif