// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIQUICKLOOKINTERNALSCENESPECIFICATION_H
#define UIQUICKLOOKINTERNALSCENESPECIFICATION_H



#import "UIApplicationSceneSpecification.h"

@interface UIQuickLookInternalSceneSpecification : UIApplicationSceneSpecification



-(BOOL)affectsAppLifecycleIfInternal;
-(BOOL)isInternal;
-(id)initialActionHandlers;
-(id)uiSceneSessionRole;


@end


#endif