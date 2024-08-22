// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARDUALGUIDEDFILTER_H
#define ARDUALGUIDEDFILTER_H

@class MPSImageGuidedFilter;
@protocol MTLDevice, MTLLibrary, MTLComputePipelineState, MTLTexture;

#import <Foundation/Foundation.h>


@interface ARDualGuidedFilter : NSObject {
    id<MTLDevice> *_device;
    MPSImageGuidedFilter *_guidedFilter;
    id<MTLLibrary> *_mattingLibrary;
    id<MTLComputePipelineState> *_boxblurVPSO;
    id<MTLComputePipelineState> *_boxblurHPSO;
    id<MTLComputePipelineState> *_erodeVPSO;
    id<MTLComputePipelineState> *_erodeHPSO;
    id<MTLComputePipelineState> *_invertPSO;
    id<MTLComputePipelineState> *_smoothCoeficients;
    id<MTLComputePipelineState> *_getConfidence;
    id<MTLComputePipelineState> *_combineFGBGStencil;
    id<MTLTexture> *_overlayCoefficentsNonBlurredBG;
    id<MTLTexture> *_overlayCoefficentsNonBlurred;
    id<MTLTexture> *_overlayStencilDownsampled;
    id<MTLTexture> *_overlayStencilDownsampledBG;
    id<MTLTexture> *_smoothedCoefficientsTextureFG;
    id<MTLTexture> *_smoothedCoefficientsTextureBG;
    id<MTLTexture> *_erodeIntermediate;
    id<MTLTexture> *_blurIntermediate;
    id<MTLTexture> *_confidenceMap;
    id<MTLTexture> *_combinedFGBG;
    BOOL _usingSmoothing;
    BOOL _useSoftGuidedFilter;
    BOOL _enableDoubleMLResolutionMatting;
    unsigned int _width;
    unsigned int _height;
}


@property (nonatomic) CGFloat epsilon; // ivar: _epsilon
@property (nonatomic) NSUInteger erosionRadius; // ivar: _erodeRadius
@property (nonatomic) NSUInteger uncertaintyRadius; // ivar: _uncertaintyRadius


-(id)encodeBoxBlurToCommandBuffer:(id)arg0 input:(id)arg1 intermediate:(id)arg2 output:(id)arg3 ;
-(id)initWithDevice:(id)arg0 useSmoothing:(BOOL)arg1 ;
-(void)encodeDualCoefficients:(id)arg0 guide:(id)arg1 stencil:(id)arg2 coefficientsTextureFG:(id)arg3 coefficientsTextureBG:(id)arg4 ;
-(void)setupBuffersWithWidth:(unsigned int)arg0 andHeight:(unsigned int)arg1 ;


@end


#endif