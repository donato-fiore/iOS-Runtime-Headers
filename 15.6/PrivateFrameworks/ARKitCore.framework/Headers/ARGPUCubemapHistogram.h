// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARGPUCUBEMAPHISTOGRAM_H
#define ARGPUCUBEMAPHISTOGRAM_H

@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface ARGPUCubemapHistogram : NSObject {
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLComputePipelineState> *_cubemapHistogramPipelineState;
    BOOL _gpuFamilyAtleast4;
}




-(id)init;
-(struct ARLabHistogram )colorHistogramForCubemap:(id)arg0 ;


@end


#endif