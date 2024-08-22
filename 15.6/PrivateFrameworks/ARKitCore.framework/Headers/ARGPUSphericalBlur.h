// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARGPUSPHERICALBLUR_H
#define ARGPUSPHERICALBLUR_H

@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface ARGPUSphericalBlur : NSObject {
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLComputePipelineState> *_cubemapBlurPipelineState;
    BOOL _gpuFamilyAtleast4;
}




-(id)blurCubemapTexture:(id)arg0 roughness:(id)arg1 rotation:(struct ? )arg2 ;
-(id)init;


@end


#endif