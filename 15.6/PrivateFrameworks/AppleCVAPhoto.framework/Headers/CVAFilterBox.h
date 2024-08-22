// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVAFILTERBOX_H
#define CVAFILTERBOX_H

@class NSString;
@protocol MTLDeviceSPI, MTLLibrary, MTLPipelineLibrarySPI, MTLTexture, MTLResourceGroupSPI, MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface CVAFilterBox : NSObject {
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_library;
    id<MTLPipelineLibrarySPI> *_pipelineLibrary;
    ? _textureSize;
    id<MTLTexture> *_boxIntermediateTexture_rgba;
    id<MTLTexture> *_boxIntermediateTexture_r;
    id<MTLResourceGroupSPI> *_intermediateTextureResourceGroup;
    id<MTLComputePipelineState> *_box_float_pass_horiz_kernel;
    id<MTLComputePipelineState> *_box_float4_pass_horiz_kernel;
    id<MTLComputePipelineState> *_box_normValid_float_pass_vert_kernel;
    id<MTLComputePipelineState> *_box_norm_float_pass_vert_kernel;
    id<MTLComputePipelineState> *_box_float_pass_vert_kernel;
    id<MTLComputePipelineState> *_box_normValid_float4_pass_vert_kernel;
    id<MTLComputePipelineState> *_box_norm_float4_pass_vert_kernel;
    id<MTLComputePipelineState> *_box_float4_pass_vert_kernel;
}


@property (readonly) NSString *label; // ivar: _label


-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 textureSize:(struct ? )arg3 error:(*id)arg4 ;
-(void)encodeBoxHorizontalToCommandBuffer:(id)arg0 configBuffer:(struct BoxFilterConfig *)arg1 source:(id)arg2 destination:(id)arg3 ;
-(void)encodeBoxVerticalToCommandBuffer:(id)arg0 configBuffer:(struct BoxFilterConfig *)arg1 source:(id)arg2 destination:(id)arg3 normalize:(NSInteger)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 inTexture:(id)arg1 outTexture:(id)arg2 radius:(NSUInteger)arg3 normalize:(NSInteger)arg4 ;


@end


#endif