// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPK2DDETECTIONPOSTPROCESSGPU_H
#define ABPK2DDETECTIONPOSTPROCESSGPU_H

@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState, MTLBuffer, MTLLibrary;

#import <Foundation/Foundation.h>


@interface ABPK2DDetectionPostprocessGPU : NSObject {
    NSUInteger _nChannels;
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLComputePipelineState> *_pipelineStateInterpolate;
    id<MTLComputePipelineState> *_pipelineStateMaxFilter;
    id<MTLBuffer> *_input;
    id<MTLBuffer> *_intermediate;
    id<MTLBuffer> *_output;
    id<MTLLibrary> *_library;
}




-(*id)process:(*unsigned int)arg0 counter:(struct CGSize )arg1 shape;
-(id)init;
-(id)initWithNumberOfChannels:(NSUInteger)arg0 ;
-(void)_copyToInputAsFloat16:(*float)arg0 shape:(struct CGSize )arg1 ;
-(void)dealloc;


@end


#endif