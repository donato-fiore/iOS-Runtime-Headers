// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPSPILLMAPMETALSESSION_H
#define VCPSPILLMAPMETALSESSION_H

@class MPSImageBilinearScale, NSDictionary;
@protocol MTLDevice, MTLCommandQueue;

#import <Foundation/Foundation.h>


@interface VCPSpillmapMetalSession : NSObject {
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    MPSImageBilinearScale *_bilinearScale;
    CF<__CVPixelBufferPool *> _spillBufferPoolUnprotected;
    CF<__CVPixelBufferPool *> _spillBufferPoolScreenScrapingProtected;
    CF<__CVPixelBufferPool *> _spillBufferPoolHDCPType0;
    CF<__CVPixelBufferPool *> _spillBufferPoolHDCPType1;
    CF<__CFDictionary *> _spillmapBufferProperties;
    CF<__CVMetalTextureCache *> _textureCacheBGRA;
    CF<__CVMetalTextureCache *> _textureCacheSpillmap;
    NSDictionary *_readAttributes;
    NSDictionary *_readWriteAttributes;
}




-(?)calculateDrmSpillmapMetal:(?)arg0 emitSpillmapsetLayout;
-(id)init;
-(id)loadTexture:(struct __CVBuffer *)arg0 withAttributes:(id)arg1 forPlane:(unsigned int)arg2 withCache:(struct __CVMetalTextureCache *)arg3 withFormat:(NSUInteger)arg4 ;
-(int)configureGPU;
-(int)configureSession:(struct __IOSurface *)arg0 setWidth:(int)arg1 setHeight:(int)arg2 ;


@end


#endif