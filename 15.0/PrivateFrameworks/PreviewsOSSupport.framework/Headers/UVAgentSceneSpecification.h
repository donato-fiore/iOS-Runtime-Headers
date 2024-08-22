// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UVAGENTSCENESPECIFICATION_H
#define UVAGENTSCENESPECIFICATION_H

@class UVPreviewSceneSpecification;



@interface UVAgentSceneSpecification : UVPreviewSceneSpecification



-(BOOL)affectsAppLifecycleIfInternal;
-(BOOL)isInternal;
-(BOOL)isUIKitManaged;
-(id)baseSceneComponentClassDictionary;
-(id)uiSceneSessionRole;


@end


#endif