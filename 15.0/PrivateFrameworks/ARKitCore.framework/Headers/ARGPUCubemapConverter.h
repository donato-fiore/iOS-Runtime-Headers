// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARGPUCUBEMAPCONVERTER_H
#define ARGPUCUBEMAPCONVERTER_H

@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface ARGPUCubemapConverter : NSObject {
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLComputePipelineState> *_cubemapToLatLongPipelineState;
    id<MTLComputePipelineState> *_latLongToCubemapPipelineState;
    BOOL _gpuFamilyAtleast4;
}




-(id)cubemapTextureFromEquirectangularTexture:(id)arg0 rotation:(struct ? )arg1 size:(NSUInteger)arg2 ;
-(id)equirectangularTextureFromCubemapTexture:(id)arg0 rotation:(struct ? )arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 ;
-(id)init;


@end


#endif