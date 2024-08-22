// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSIMAGEGUIDEDFILTER_H
#define MPSIMAGEGUIDEDFILTER_H

@class MPSKernel;


#import "MPSImageBox.h"
#import "MPSImageLanczosScale.h"
#import "MPSImageBilinearScale.h"

@interface MPSImageGuidedFilter : MPSKernel {
    MPSImageBox *_boxFilter;
    MPSImageLanczosScale *_lanczosScaler;
    MPSImageBilinearScale *_bilinearScaler;
}


@property (nonatomic) float epsilon; // ivar: _epsilon
@property (readonly, nonatomic) NSUInteger kernelDiameter; // ivar: _kernelDiameter
@property (nonatomic) float reconstructOffset; // ivar: _reconstructOffset
@property (nonatomic) float reconstructScale; // ivar: _reconstructScale
@property (nonatomic) BOOL reconstructionCoefficientsSampleBicubic; // ivar: _reconstructionCoefficientsSampleBicubic
@property (nonatomic) BOOL rescaleCoefficients; // ivar: _rescaleCoefficients


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 kernelDiameter:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)encodeReconstructionInternalToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 guidanceTexture:(id)arg2 coefficientsTexture:(id)arg3 destinationTexture:(id)arg4 ;
-(void)encodeReconstructionInternalToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 guidanceTexture:(id)arg2 coefficientsTextureA:(id)arg3 coefficientsTextureB:(id)arg4 destinationTexture:(id)arg5 ;
-(void)encodeReconstructionToCommandBuffer:(id)arg0 guidanceTexture:(id)arg1 coefficientsTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(void)encodeReconstructionToCommandBuffer:(id)arg0 guidanceTexture:(id)arg1 coefficientsTextureA:(id)arg2 coefficientsTextureB:(id)arg3 destinationTexture:(id)arg4 ;
-(void)encodeReconstructionToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 guidanceTexture:(id)arg2 coefficientsTexture:(id)arg3 destinationTexture:(id)arg4 ;
-(void)encodeReconstructionToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 guidanceTexture:(id)arg2 coefficientsTextureA:(id)arg3 coefficientsTextureB:(id)arg4 destinationTexture:(id)arg5 ;
-(void)encodeRegressionInternalToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceTexture:(id)arg2 guidanceTexture:(id)arg3 weightsTexture:(id)arg4 destinationCoefficientsTexture:(id)arg5 ;
-(void)encodeRegressionInternalToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceTexture:(id)arg2 guidanceTexture:(id)arg3 weightsTexture:(id)arg4 destinationCoefficientsTextureA:(id)arg5 destinationCoefficientsTextureB:(id)arg6 ;
-(void)encodeRegressionToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 guidanceTexture:(id)arg2 weightsTexture:(id)arg3 destinationCoefficientsTexture:(id)arg4 ;
-(void)encodeRegressionToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 guidanceTexture:(id)arg2 weightsTexture:(id)arg3 destinationCoefficientsTextureA:(id)arg4 destinationCoefficientsTextureB:(id)arg5 ;
-(void)encodeRegressionToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceTexture:(id)arg2 guidanceTexture:(id)arg3 weightsTexture:(id)arg4 destinationCoefficientsTexture:(id)arg5 ;
-(void)encodeRegressionToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceTexture:(id)arg2 guidanceTexture:(id)arg3 weightsTexture:(id)arg4 destinationCoefficientsTextureA:(id)arg5 destinationCoefficientsTextureB:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initFilterInfoWithDevice:(id)arg0 ;


@end


#endif