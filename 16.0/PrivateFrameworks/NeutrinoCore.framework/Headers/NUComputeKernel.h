// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUCOMPUTEKERNEL_H
#define NUCOMPUTEKERNEL_H

@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface NUComputeKernel : NSObject

@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device


+(id)pipelineStateForFunctionWithName:(id)arg0 constants:(id)arg1 key:(id)arg2 device:(id)arg3 error:(*id)arg4 ;
+(id)pipelineStateForFunctionWithName:(id)arg0 device:(id)arg1 error:(*id)arg2 ;
+(struct ? )gridSizeForThreadGroupSize:(struct ? )arg0 imageSize:(struct ? )arg1 ;
+(struct ? )groupSizeForImageSize:(struct ? )arg0 pipelineState:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeToCommandBuffer:(id)arg0 destinationTexture:(id)arg1 ;


@end


#endif