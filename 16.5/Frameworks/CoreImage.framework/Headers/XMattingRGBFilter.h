// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XMATTINGRGBFILTER_H
#define XMATTINGRGBFILTER_H

@class NSArray;
@protocol MattingFilter, MTLDevice, MTLLibrary, MTLTexture, MTLComputePipelineState;

#import <Foundation/Foundation.h>

#import "XMattingBoxTensorFilter.h"

@interface XMattingRGBFilter : NSObject <MattingFilter>

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
    id<MTLTexture> *_coefficients;
    id<MTLTexture> *_coefficientsTexture2DView;
    id<MTLTexture> *_constraints;
    id<MTLTexture> *_constraintsTexture2DView;
    id<MTLComputePipelineState> *_nearestNeighborDownsamplingKernel;
    id<MTLComputePipelineState> *_computeInverted3DGuideCovarianceMatrixKernel;
    id<MTLComputePipelineState> *_compute3DCoefficientsKernel;
    id<MTLComputePipelineState> *_applyCoefficientsKernel;
    id<MTLComputePipelineState> *_applyCoefficientsSamplingKernel;
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
-(int)encodeStateOn:(id)arg0 colorGuide:(id)arg1 disparityGuide:(id)arg2 initialSegmentation:(id)arg3 constraints:(id)arg4 ;
-(int)encodeStepOn:(id)arg0 ;
-(int)encodeUpsampleOn:(id)arg0 segmentation:(id)arg1 colorGuide:(id)arg2 disparityGuide:(id)arg3 outputMatte:(id)arg4 ;
-(void)dealloc;
-(void)encodeNearestNeighborDownSamplingOn:(id)arg0 inputTexture:(id)arg1 outputTexture:(id)arg2 ;
-(void)releaseResources;


@end


#endif