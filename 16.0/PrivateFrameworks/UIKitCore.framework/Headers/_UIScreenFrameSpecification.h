// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISCREENFRAMESPECIFICATION_H
#define _UISCREENFRAMESPECIFICATION_H



#import "UIApplicationSceneSpecification.h"

@interface _UIScreenFrameSpecification : UIApplicationSceneSpecification



-(BOOL)isInternal;
-(BOOL)isUIKitManaged;
-(Class)lifecycleMonitorClass;
-(Class)sceneSubstrateClass;
-(Class)uiSceneMinimumClass;
-(id)baseSceneComponentClassDictionary;
-(id)connectionHandlers;
-(id)disconnectionHandlers;
-(id)uiSceneSessionRole;


@end


#endif