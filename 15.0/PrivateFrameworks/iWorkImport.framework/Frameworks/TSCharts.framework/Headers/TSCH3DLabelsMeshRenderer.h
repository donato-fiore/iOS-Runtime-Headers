// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DLABELSMESHRENDERER_H
#define TSCH3DLABELSMESHRENDERER_H



#import "TSCH3DSceneRenderCacheObject.h"

@interface TSCH3DLabelsMeshRenderer : TSCH3DSceneRenderCacheObject



+(id)renderer;
-(void)allocateDynamicResourcesIntoArray:(id)arg0 ;
-(void)beginResources:(id)arg0 samples:(float)arg1 ;
-(void)submitResourcesWithProcessor:(id)arg0 ;


@end


#endif