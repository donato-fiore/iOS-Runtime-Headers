// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GPUIMAGEUNDISTORTION_H
#define GPUIMAGEUNDISTORTION_H

@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState, MTLTexture, MTLLibrary;

#import <Foundation/Foundation.h>


@interface GPUImageUndistortion : NSObject {
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLComputePipelineState> *_pipelineState;
    id<MTLComputePipelineState> *_lutGenerationPipelineState;
    id<MTLTexture> *_lut;
    ? _fisheyeIntrinsics;
    ? _fisheyeRadialCoefficients;
    ? _rectilinearIntrinsics;
    id<MTLLibrary> *_library;
}




-(?)undistortFisheyeImage:(?)arg0 withFisheyeIntrinsics:(?)arg1 withFisheyeRadialCoefficients:(?)arg2 toRectilinearImagewithRectilinearIntrinsics;
-(id)init;


@end


#endif