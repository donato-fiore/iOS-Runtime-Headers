// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNTEXTUREOFFSCREENRENDERINGSOURCE_H
#define SCNTEXTUREOFFSCREENRENDERINGSOURCE_H



#import "SCNTextureSource.h"

@interface SCNTextureOffscreenRenderingSource : SCNTextureSource {
    BOOL _usesIOSurface;
    CGSize _framebufferSize;
    *__C3DFramebuffer _framebuffer;
}




-(?)cleanup;
-(id)textureSize;
-(struct __C3DTexture *)__prepareFramebufferWithSize:(struct CGSize )arg0 withEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 needsStencil:(BOOL)arg3 ;
-(void)_bindFramebuffer:(struct __C3DEngineContext *)arg0 ;
-(void)_buildMipmaps:(struct __C3DEngineContext *)arg0 ;
-(void)_createFramebufferWithEngineContext:(struct __C3DEngineContext *)arg0 size:(struct CGSize )arg1 ;
-(void)_unbindFramebuffer:(struct __C3DEngineContext *)arg0 ;


@end


#endif