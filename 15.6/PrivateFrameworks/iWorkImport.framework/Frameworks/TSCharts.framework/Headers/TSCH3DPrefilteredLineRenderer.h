// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DPREFILTEREDLINERENDERER_H
#define TSCH3DPREFILTEREDLINERENDERER_H


#import <Foundation/Foundation.h>

#import "TSCH3DOrderedDictionary.h"
#import "TSCH3DSceneRenderPipeline.h"

@interface TSCH3DPrefilteredLineRenderer : NSObject {
    TSCH3DOrderedDictionary *_cacheObjects;
}


@property (readonly, nonatomic) tmat4x4<float> modelMatrix; // ivar: _modelMatrix
@property (readonly, nonatomic) tmat3x3<float> normalMatrix; // ivar: _normalMatrix
@property (readonly, nonatomic) tmat4x4<float> normalizedProjection; // ivar: _normalizedProjection
@property (readonly, nonatomic) TSCH3DSceneRenderPipeline *pipeline; // ivar: _pipeline
@property (readonly, nonatomic) tmat4x4<float> projection; // ivar: _projection
@property (readonly, nonatomic) box<glm::detail::tvec2<int>> viewport; // ivar: _viewport


+(id)renderCacheKey;
+(id)renderer;
-(BOOL)beginWithPipeline:(id)arg0 ;
-(BOOL)p_shouldRenderWithSetting:(id)arg0 returningCacheObject:(*id)arg1 ;
-(id)init;
-(id)p_renderCacheIDFromSetting:(id)arg0 ;
-(id)p_renderCacheKey;
-(void)dealloc;
-(void)endWithDidGenerateShaderEffectsBlock:(id)arg0 ;
-(void)p_setupShaderEffectsForSetting:(id)arg0 ;
-(void)renderLineBufferWithSetting:(id)arg0 vertices:(id)arg1 normals:(id)arg2 diffuseTexcoords:(id)arg3 ;
-(void)renderWithSetting:(id)arg0 fromVertex:(*void)arg1 toVertex:(*void)arg2 ;


@end


#endif