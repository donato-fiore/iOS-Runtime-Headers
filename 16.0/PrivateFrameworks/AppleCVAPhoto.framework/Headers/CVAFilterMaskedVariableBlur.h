// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVAFILTERMASKEDVARIABLEBLUR_H
#define CVAFILTERMASKEDVARIABLEBLUR_H

@class MPSImageGaussianPyramid, NSString;
@protocol MTLDeviceSPI, MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface CVAFilterMaskedVariableBlur : NSObject {
    id<MTLDeviceSPI> *_device;
    MPSImageGaussianPyramid *_gaussianPyramid;
    id<MTLComputePipelineState> *_maskedVariableBlurKernel;
}


@property (readonly) NSString *label; // ivar: _label


+(void)prewarmGaussianPyramid:(id)arg0 device:(id)arg1 commandBuffer:(id)arg2 ;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 commandQueue:(id)arg3 kernelSize:(int)arg4 error:(*id)arg5 ;
-(void)encodeBlurPyramidInPlaceToCommandBuffer:(id)arg0 inoutTexture:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg0 source:(id)arg1 destination:(id)arg2 mask:(id)arg3 maxBlurRadius:(float)arg4 ;


@end


#endif