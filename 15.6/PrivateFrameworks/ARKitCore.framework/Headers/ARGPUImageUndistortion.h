// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARGPUIMAGEUNDISTORTION_H
#define ARGPUIMAGEUNDISTORTION_H

@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState, MTLTexture;

#import <Foundation/Foundation.h>


@interface ARGPUImageUndistortion : NSObject {
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLComputePipelineState> *_yuvPipelineState;
    id<MTLComputePipelineState> *_rgbPipelineState;
    id<MTLComputePipelineState> *_lutGenerationPipelineState;
    id<MTLTexture> *_lut;
    ? _fisheyeIntrinsics;
    ? _fisheyeRadialCoefficients;
    ? _rectilinearIntrinsics;
}




-(?)undistortFisheyeImage:(?)arg0 withFisheyeIntrinsics:(?)arg1 withFisheyeRadialCoefficients:(?)arg2 toRectilinearImagewithRectilinearIntrinsics;
-(BOOL)undistortFisheyeTexture:(id)arg0 withFisheyeIntrinsics:(struct ? )arg1 withFisheyeRadialCoefficients:(id)arg2 toRectilinearImage:(struct ? )arg3 withRectilinearIntrinsics;
-(id)init;


@end


#endif