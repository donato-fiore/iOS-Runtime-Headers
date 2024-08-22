// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DLABELSRENDERER_H
#define TSCH3DLABELSRENDERER_H


#import <Foundation/Foundation.h>

#import "TSCH3DResource.h"
#import "TSCH3DLabelsRendererTransforms.h"
#import "TSCH3DLabelResource.h"
#import "TSCH3DCamera.h"
#import "TSCH3DDataBufferResource.h"
#import "TSCH3DLabelsMeshRenderer.h"
#import "TSCH3DSceneRenderPipeline.h"
#import "TSCH3DLabelResources.h"

@interface TSCH3DLabelsRenderer : NSObject {
    TSCH3DResource *_labelQuad;
    TSCH3DResource *_labelTexcoordQuad;
    TSCH3DLabelsRendererTransforms *_transforms;
}


@property (retain, nonatomic) TSCH3DLabelResource *label; // ivar: _label
@property (readonly, nonatomic) TSCH3DCamera *labelCamera; // ivar: _labelCamera
@property (retain, nonatomic) TSCH3DDataBufferResource *mesh; // ivar: _mesh
@property (retain, nonatomic) TSCH3DLabelsMeshRenderer *meshRenderer; // ivar: _meshRenderer
@property (retain, nonatomic) TSCH3DSceneRenderPipeline *pipeline; // ivar: _pipeline
@property (readonly, nonatomic) LabelRenderInfo renderInfo; // ivar: _info
@property (retain, nonatomic) TSCH3DLabelResources *resources; // ivar: _resources
@property (nonatomic) BOOL useLabelBounds; // ivar: _useLabelBounds


+(id)renderCacheKey;
+(id)renderer;
-(*void)unitToWorld;
-(*void)worldToStage;
-(BOOL)beginResources:(id)arg0 expectedSize:(*void)arg1 ;
-(BOOL)cacheEnabled;
-(BOOL)hasCachedLabels;
-(BOOL)isCacheValid;
-(id)effects;
-(id)init;
-(id)p_renderCacheFromScene:(id)arg0 created:(*BOOL)arg1 createIfAbsent:(BOOL)arg2 ;
-(id)p_renderCacheID;
-(id)p_renderCacheKey;
-(void)dealloc;
-(void)delegateDidSubmitLabel;
-(void)endResources;
-(void)postrender:(id)arg0 ;
-(void)prepareCachedIndex:(*void)arg0 string:(id)arg1 alignmentPadding:(*void)arg2 width:(CGFloat)arg3 bitmapContextInfo:(id)arg4 ;
-(void)prerender:(id)arg0 ;
-(void)renderAtPosition:(*void)arg0 offset:(*void)arg1 alignment:(unsigned int)arg2 offset2D:(*void)arg3 rotation:(float)arg4 externalAttribute:(id)arg5 ;


@end


#endif