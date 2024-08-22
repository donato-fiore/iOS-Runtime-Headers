// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPSIDECARMETAL_H
#define VCPSIDECARMETAL_H

@class NSDictionary;
@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCPSideCarMetal : NSObject {
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLComputePipelineState> *_transitionDetection;
    CF<__CVMetalTextureCache *> _textureCacheLuma;
    CF<__CVMetalTextureCache *> _textureCacheChroma;
    CF<__CVMetalTextureCache *> _textureCacheRGBALuma;
    CF<__CVMetalTextureCache *> _textureCacheRGBAChroma;
    NSDictionary *_readAttributes;
    NSDictionary *_writeAttributes;
    MetalBufferPool _packetPool;
    MetalBufferPool _blockDist;
    NSObject<OS_dispatch_queue> *_submissionQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    unsigned int _planeOffset;
    unsigned int _planeBytesPerRow;
}




-(id)cachedTexture:(struct __CVBuffer *)arg0 forPlane:(int)arg1 withAttributes:(id)arg2 ;
-(id)init;
-(id)rgbaUintTextureForChroma:(struct __CVBuffer *)arg0 withAttributes:(id)arg1 ;
-(id)rgbaUintTextureForLuma:(struct __CVBuffer *)arg0 withAttributes:(id)arg1 ;
-(id)rgbaUnormTextureForLuma:(struct __CVBuffer *)arg0 withAttributes:(id)arg1 ;
-(int)copyFromFrame:(struct __CVBuffer *)arg0 toTile:(struct __CVBuffer *)arg1 origin:(struct ? )arg2 size:(struct ? )arg3 withFence:(*void)arg4 ;
-(int)selectGPUForFrame:(struct __CVBuffer *)arg0 ;
-(struct future<CF<const __CFData *>> )createEncodePacket:(struct __CVBuffer *)arg0 forRegion:(struct ? )arg1 instance:(unsigned int)arg2 sequenceNumber:(unsigned int)arg3 frameIndex:(unsigned int)arg4 pts:(struct ? )arg5 duration:(struct ? )arg6 frameProperties:(struct __CFDictionary *)arg7 ;
-(struct future<unsigned long long> )temporalTransitionScore:(struct __CVBuffer *)arg0 previousFrame:(struct __CVBuffer *)arg1 forRegion:(struct ? )arg2 ;
-(void)setPacketLayout:(id)arg0 ;


@end


#endif