// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVAFILTERGUIDED_H
#define CVAFILTERGUIDED_H

@class MPSImageBox, NSString;
@protocol MTLDeviceSPI, MTLLibrary, MTLPipelineLibrarySPI, MTLTexture, MTLSamplerState, MTLResourceGroupSPI, MTLComputePipelineState;


#import "ImageSaverRegistrator.h"
#import "CVAFilterBox.h"
#import "CVAFilterHybridResampling.h"
#import "CVAFilterInfimumConvolution.h"

@interface CVAFilterGuided : ImageSaverRegistrator {
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_library;
    id<MTLPipelineLibrarySPI> *_pipelineLibrary;
    CVAFilterBox *_boxFilter;
    CVAFilterHybridResampling *_hybridResampler;
    id<MTLTexture> *_gfSrcWithGuide;
    id<MTLTexture> *_gfMeanSrcWithGuide;
    id<MTLTexture> *_gfSrcGuide;
    id<MTLTexture> *_gfMeanSrcGuide;
    id<MTLTexture> *_gfRRRGRB;
    id<MTLTexture> *_gfGGGBBB;
    id<MTLTexture> *_gfMeanRRRGRB;
    id<MTLTexture> *_gfMeanGGGBBB;
    id<MTLTexture> *_gfTmp;
    id<MTLTexture> *_gfTmp2;
    id<MTLTexture> *_gfMeanWeight;
    id<MTLTexture> *_gfMeanNormalizationFactor;
    id<MTLTexture> *_convolutedCoeff;
    id<MTLTexture> *_upscaledCoeff;
    id<MTLTexture> *_inputAlphaDownsampled;
    id<MTLTexture> *_inputAlphaBlurred;
    id<MTLSamplerState> *_inputAlphaBlurredSampler;
    id<MTLTexture> *_gammaMatteTexture;
    id<MTLTexture> *_alphaTexture;
    id<MTLTexture> *_hybridUpscalingIntermediateTexture;
    id<MTLTexture> *_hybridUpscalingIntermediateR32Texture;
    id<MTLTexture> *_srcTexture;
    id<MTLTexture> *_lowResGammaMatte;
    id<MTLResourceGroupSPI> *_alphaPostprocessingTemporaryTexturesResourceGroup;
    id<MTLResourceGroupSPI> *_rg_inputAlphaDownsampled;
    id<MTLResourceGroupSPI> *_rg_inputAlphaBlurred;
    id<MTLComputePipelineState> *_guidedFilterApplyRGBAKernel;
    id<MTLComputePipelineState> *_guidedFilterInvertKernel;
    id<MTLComputePipelineState> *_guidedFilterMultiplyKernel;
    id<MTLComputePipelineState> *_guidedFilterEmbedGuideKernel;
    id<MTLComputePipelineState> *_guidedFilterPremultiplyKernel;
    id<MTLComputePipelineState> *_guidedFilterSecondOrderProductsKernel;
    id<MTLComputePipelineState> *_guidedFilterRegressionKernel;
    id<MTLComputePipelineState> *_postProcessAlphaKernel;
    CVAFilterInfimumConvolution *_infConvolution;
    MPSImageBox *_mpsBox;
    int _smallGuidedFilterKernelSize;
}


@property (readonly) NSString *label; // ivar: _label


-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 commandQueue:(id)arg3 textureSize:(struct ? )arg4 alphaSize:(struct ? )arg5 kernelSize:(int)arg6 infConvolutionDownsampling:(int)arg7 laplacianLimitingDownsampling:(int)arg8 laplacianLimitingBlurSize:(int)arg9 error:(*id)arg10 ;
-(void)encodeFilterApplyToBuffer:(id)arg0 coeff:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
-(void)encodeHybridUpSamplingToCommandBuffer:(id)arg0 source:(id)arg1 destination:(id)arg2 ;
-(void)encodePostProcessAlphaToCommandBuffer:(id)arg0 source:(id)arg1 destination:(id)arg2 alphaMaxLaplacian:(float)arg3 infConvOrientation:(float)arg4 infConvMajorRadius:(float)arg5 infConvMinorRadius:(float)arg6 gammaExponent:(float)arg7 enableInfConvolution:(BOOL)arg8 ;
-(void)encodeReconstructToCommandBuffer:(id)arg0 inGuidancePixelBuffer:(struct __CVBuffer *)arg1 inCoeffTexture:(id)arg2 outFilteredTexture:(id)arg3 ;
-(void)encodeRegressionToCommandBuffer:(id)arg0 inSourceTexture:(id)arg1 inGuidanceTexture:(id)arg2 inWeightTexture:(id)arg3 outCoeffTexture:(id)arg4 epsilon:(float)arg5 ;
-(void)initSourceTexture:(struct __CVBuffer *)arg0 ;


@end


#endif