// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACTPANOGPUDOWNSCALER_H
#define ACTPANOGPUDOWNSCALER_H

@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface ACTPanoGPUDownscaler : NSObject {
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_queue;
    id<MTLComputePipelineState> *_downsampleState;
}




-(id)init;
-(id)initWithContext:(id)arg0 ;
-(int)downsample:(struct __CVBuffer *)arg0 to:(struct __CVBuffer *)arg1 ;
-(void)dealloc;


@end


#endif