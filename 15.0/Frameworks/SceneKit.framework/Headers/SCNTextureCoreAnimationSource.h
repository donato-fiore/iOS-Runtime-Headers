// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNTEXTURECOREANIMATIONSOURCE_H
#define SCNTEXTURECOREANIMATIONSOURCE_H

@class CALayer;


#import "SCNTextureOffscreenRenderingSource.h"

@interface SCNTextureCoreAnimationSource : SCNTextureOffscreenRenderingSource {
    CGFloat _lastUpdate;
    CGFloat _nextUpdateDate;
}


@property (retain, nonatomic) CALayer *layer; // ivar: _layer


-(?)cleanup;
-(BOOL)prefersGL3;
-(BOOL)requiresMainThreadUpdates;
-(BOOL)supportsMetal;
-(CGFloat)__renderLayer:(id)arg0 withCARenderer:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 viewport:(CGFloat)arg3 atTime:(BOOL)arg4 forceUpdate:(*BOOL)arg5 didUpdate;
-(CGFloat)__renderLayerUsingMetal:(id)arg0 withCARenderer:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 viewport:(CGFloat)arg3 atTime:(BOOL)arg4 forceUpdate:(*BOOL)arg5 didUpdate;
-(CGFloat)__updateTextureWithLayer:(id)arg0 texture:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 sampler:(struct __C3DTextureSampler *)arg3 ;
-(float)clearValue;
-(id)layerToFocusForRenderedLayer:(id)arg0 ;
-(id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 ;
-(struct __C3DTexture *)_textureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 ;
-(struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 ;
-(void)_resizeLayer:(id)arg0 toSize:(struct CGSize )arg1 updateLayer:(BOOL)arg2 updateTransform:(BOOL)arg3 caRenderer:(id)arg4 ;
-(void)dealloc;
-(void)renderWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 ;


@end


#endif