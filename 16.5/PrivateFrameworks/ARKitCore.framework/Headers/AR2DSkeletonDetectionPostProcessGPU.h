// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AR2DSKELETONDETECTIONPOSTPROCESSGPU_H
#define AR2DSKELETONDETECTIONPOSTPROCESSGPU_H

@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState, MTLBuffer;

#import <Foundation/Foundation.h>


@interface AR2DSkeletonDetectionPostProcessGPU : NSObject {
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLComputePipelineState> *_pipelineStateInterpolate;
    id<MTLComputePipelineState> *_pipelineStateMaxFilter;
    id<MTLBuffer> *_input;
    id<MTLBuffer> *_intermediate;
    id<MTLBuffer> *_output;
}




-(*id)process:(*unsigned int)arg0 counter:(struct CGSize )arg1 shape;
-(id)init;
-(void)dealloc;


@end


#endif