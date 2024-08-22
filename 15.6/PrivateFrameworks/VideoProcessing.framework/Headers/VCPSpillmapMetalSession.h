// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPSPILLMAPMETALSESSION_H
#define VCPSPILLMAPMETALSESSION_H

@class MPSImageBilinearScale;
@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState, MTLTexture;

#import <Foundation/Foundation.h>


@interface VCPSpillmapMetalSession : NSObject {
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLComputePipelineState> *_colorspaceConversion;
    MPSImageBilinearScale *_bilinearScale;
    unsigned int _sourceFormat;
    NSUInteger _sourceWidth;
    NSUInteger _sourceHeight;
    NSUInteger _sourceProtectionOption;
    unsigned int _spillWidth;
    unsigned int _spillHeight;
    CF<__CFDictionary *> _spillBufferAttributes;
    CF<__CVMetalTextureCache *> _textureCacheLuma;
    CF<__CVMetalTextureCache *> _textureCacheChroma;
    id<MTLTexture> *_textureBGRA;
    id<MTLTexture> *_textureSpillmap;
}




-(?)createPixelBuffer;
-(id)init;
-(id)loadTexture:(struct __CVBuffer *)arg0 withAttributes:(id)arg1 forPlane:(unsigned int)arg2 ;
-(int)calculateDrmSpillmapMetal:(struct __CVBuffer *)arg0 ;
-(int)configureGPU;
-(int)configureTexturesAndAttributes:(struct __IOSurface *)arg0 Width:(int)arg1 Height:(int)arg2 ;
-(int)convertYuv420:(struct __CVBuffer *)arg0 withCommandBuffer:(id)arg1 ;
-(int)loadSurfaceInfo:(struct __IOSurface *)arg0 ;


@end


#endif