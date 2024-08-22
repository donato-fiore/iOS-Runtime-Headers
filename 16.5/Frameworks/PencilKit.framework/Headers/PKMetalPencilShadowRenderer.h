// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMETALPENCILSHADOWRENDERER_H
#define PKMETALPENCILSHADOWRENDERER_H

@protocol MTLDevice, MTLLibrary, MTLTexture, MTLBuffer, MTLRenderPipelineState;

#import <Foundation/Foundation.h>


@interface PKMetalPencilShadowRenderer : NSObject {
    id<MTLDevice> *_device;
    id<MTLLibrary> *_library;
    id<MTLTexture> *_minBlurTexture;
    id<MTLTexture> *_maxBlurTexture;
    id<MTLBuffer> *_vertexBuffer;
    CGRect _vertexBufferBounds;
    NSUInteger _currentPixelFormat;
    id<MTLRenderPipelineState> *_currentPipelineState;
}




-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 library:(id)arg1 ;
-(struct CGRect )renderInto:(id)arg0 commandBuffer:(id)arg1 position:(struct CGPoint )arg2 azimuth:(CGFloat)arg3 altitude:(CGFloat)arg4 height:(CGFloat)arg5 alpha:(CGFloat)arg6 scale:(CGFloat)arg7 clearFramebuffer:(BOOL)arg8 grayscale:(CGFloat)arg9 ;
-(void)setupWithTexture:(id)arg0 minBlur:(CGFloat)arg1 maxBlur:(CGFloat)arg2 ;


@end


#endif