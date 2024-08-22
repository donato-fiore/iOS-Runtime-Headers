// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XMATTINGRGBDFILTER_H
#define XMATTINGRGBDFILTER_H

@class NSArray;
@protocol MattingFilter, MTLDevice, MTLLibrary, MTLTexture, MTLComputePipelineState;

#import <Foundation/Foundation.h>

#import "XMattingBoxTensorFilter.h"

@interface XMattingRGBDFilter : NSObject <MattingFilter>

 {
    id<MTLDevice> *_device;
    id<MTLLibrary> *_library;
    id<MTLTexture> *_guideStack;
    id<MTLTexture> *_guideStackTexture2DView;
    id<MTLTexture> *_alphaStack;
    id<MTLTexture> *_alphaStackTexture2DView;
    id<MTLTexture> *_mean_I;
    id<MTLTexture> *_mean_alpha;
    NSArray *_var_I;
    NSArray *_coefficients;
    NSArray *_coefficientsTexture2DView;
    id<MTLTexture> *_constraints;
    id<MTLTexture> *_constraintsTexture2DView;
    id<MTLComputePipelineState> *_nearestNeighborDownsamplingKernel;
    id<MTLComputePipelineState> *_halfToAlphaBLKernel;
    id<MTLComputePipelineState> *_computeInverted4DGuideCovarianceMatrixKernel;
    id<MTLComputePipelineState> *_compute4DCoefficientsKernel;
    id<MTLComputePipelineState> *_applyDepthAwareCoefficientsKernel;
    id<MTLComputePipelineState> *_applyDepthAwareCoefficientsNoConstraintsKernel;
    id<MTLComputePipelineState> *_applyDepthAwareCoefficientsSamplingKernel;
    id<MTLComputePipelineState> *_applyDepthAwareCoefficientsSamplingNoConstraintsKernel;
    BOOL _supportsReadWriteTextures;
    id<MTLTexture> *_tmp_RGBA;
}


@property (retain) XMattingBoxTensorFilter *boxTensorFilter; // ivar: boxTensorFilter
@property (readonly) BOOL coefficientsComputed; // ivar: coefficientsComputed
@property ? config; // ivar: config
@property (readonly) BOOL stateComputed; // ivar: stateComputed


-(id)initWithDevice:(id)arg0 library:(id)arg1 ;
-(int)_compileShadersWithLibrary:(id)arg0 ;
-(int)allocateResources:(struct ? )arg0 ;
-(int)encodeApplyCoefficientsOn:(id)arg0 colorGuide:(id)arg1 disparityGuide:(id)arg2 constraints:(id)arg3 destinationAlphaTexture:(id)arg4 ;
-(int)encodeCoefficientsOn:(id)arg0 guideStack:(id)arg1 alphaStack:(id)arg2 mean_I:(id)arg3 var_I:(id)arg4 coefficients:(id)arg5 ;
-(int)encodeDisparityToAlphaOn:(id)arg0 disparityTexture:(id)arg1 destinationTexture:(id)arg2 ;
-(int)encodeNearestNeighborDownSamplingOn:(id)arg0 inputTexture:(id)arg1 outputTexture:(id)arg2 ;
-(int)encodeStateOn:(id)arg0 colorGuide:(id)arg1 disparityGuide:(id)arg2 initialSegmentation:(id)arg3 constraints:(id)arg4 ;
-(int)encodeStepOn:(id)arg0 ;
-(int)encodeUpsampleOn:(id)arg0 segmentation:(id)arg1 colorGuide:(id)arg2 disparityGuide:(id)arg3 outputMatte:(id)arg4 ;
-(void)dealloc;
-(void)encodePushOn:(id)arg0 textureArray:(id)arg1 texture:(id)arg2 ;
-(void)releaseResources;


@end


#endif