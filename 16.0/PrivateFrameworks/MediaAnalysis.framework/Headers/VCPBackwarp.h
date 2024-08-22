// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPBACKWARP_H
#define VCPBACKWARP_H

@protocol MTLComputePipelineState, MTLDevice, MTLLibrary;

#import <Foundation/Foundation.h>


@interface VCPBackwarp : NSObject {
    id<MTLComputePipelineState> *_backwarpKernel;
    id<MTLDevice> *_device;
    id<MTLLibrary> *_mtlLibrary;
}




-(id)initWithDevice:(id)arg0 ;
-(int)configureGPU;
-(int)encodeToCommandBuffer:(id)arg0 input:(id)arg1 output:(id)arg2 flow:(id)arg3 upscaledFlow:(id)arg4 ;


@end


#endif