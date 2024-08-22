// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNTEXTURESPRITEKITSOURCE_H
#define SCNTEXTURESPRITEKITSOURCE_H

@class SKScene;


#import "SCNTextureOffscreenRenderingSource.h"

@interface SCNTextureSpriteKitSource : SCNTextureOffscreenRenderingSource {
    CGFloat _lastUpdate;
}


@property (retain, nonatomic) SKScene *scene; // ivar: _scene


-(CGFloat)__updateTextureWithSKScene:(id)arg0 engineContext:(struct __C3DEngineContext *)arg1 sampler:(struct __C3DTextureSampler *)arg2 ;
-(id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 status:(struct ? *)arg3 ;
-(struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 ;
-(void)__renderSKScene:(id)arg0 withSKSCNRenderer:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 viewport:(CGFloat)arg3 atTime;
-(void)cleanup:(struct __C3DRendererContext *)arg0 ;
-(void)dealloc;
-(void)renderWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 ;


@end


#endif