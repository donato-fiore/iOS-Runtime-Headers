// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DSCENERENDERCAMERAANDSCENETRANSFORMSETUP_H
#define TSCH3DSCENERENDERCAMERAANDSCENETRANSFORMSETUP_H



#import "TSCH3DSceneRenderSetup.h"

@interface TSCH3DSceneRenderCameraAndSceneTransformSetup : TSCH3DSceneRenderSetup



+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)setup;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setupPipeline:(id)arg0 fromCamera:(id)arg1 ;


@end


#endif