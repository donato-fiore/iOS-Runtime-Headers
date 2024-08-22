// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNTEXTURESOURCE_H
#define SCNTEXTURESOURCE_H


#import <Foundation/Foundation.h>


@interface SCNTextureSource : NSObject {
    id *_mtlTextureCache;
    id *_glTextureCache;
    ? _size;
}




-(?)rendererContextForTextureSourceWithEngineContext;
-(BOOL)prefersGL3;
-(BOOL)shouldFlip;
-(BOOL)supportsMetal;
-(CGFloat)nextFrameTime;
-(id)MTLTextureCache;
-(id)glTextureCache;
-(id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 status:(struct ? *)arg3 ;
-(id)textureSize;
-(struct __C3DTexture *)_textureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 ;
-(struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 ;
-(void)cleanup:(struct __C3DRendererContext *)arg0 ;
-(void)dealloc;
-(void)renderWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 ;
-(void)setGlTextureCache:(id)arg0 ;
-(void)setMTLTextureCache:(id)arg0 ;
-(void)setSize;


@end


#endif