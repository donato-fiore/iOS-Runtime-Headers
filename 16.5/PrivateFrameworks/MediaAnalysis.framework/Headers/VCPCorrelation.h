// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPCORRELATION_H
#define VCPCORRELATION_H

@protocol MTLDevice, MTLLibrary, MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface VCPCorrelation : NSObject {
    id<MTLDevice> *_device;
    id<MTLLibrary> *_mtlLibrary;
    id<MTLComputePipelineState> *_correlationKernel;
}




-(id)initWithDevice:(id)arg0 ;
-(int)configureGPU;
-(int)encodeToCommandBuffer:(id)arg0 firstInput:(id)arg1 secondInput:(id)arg2 correlation:(id)arg3 ;


@end


#endif