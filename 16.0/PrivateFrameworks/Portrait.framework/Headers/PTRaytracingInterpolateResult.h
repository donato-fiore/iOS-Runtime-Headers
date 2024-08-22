// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTRAYTRACINGINTERPOLATERESULT_H
#define PTRAYTRACINGINTERPOLATERESULT_H

@protocol MTLDevice, MTLTexture;

#import <Foundation/Foundation.h>


@interface PTRaytracingInterpolateResult : NSObject {
    id<MTLComputePipelineState>" _interpolateRGBWeightSourceYUVDestYUV;
    id<MTLComputePipelineState>" _interpolateRGBWeightSourceYUVDestRGBA;
    id<MTLComputePipelineState>" _interpolateRGBWeightSourceRGBADestRGBA;
    id<MTLComputePipelineState>" _studioLightInterpolateRGBWeightSourceYUVDestYUV;
    id<MTLDevice> *_device;
    id<MTLTexture> *_precomputedGaussian;
    int _sizePrecomputedGaussian;
}




+(struct PTNoiseValues )calculateVarReadNoise:(id)arg0 ;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 useExportQualityNoise:(BOOL)arg3 ;
-(id)randomGaussNoise;
-(void)interpolateRGBWeightUsingSourceToDest:(id)arg0 renderRequest:(id)arg1 inRGBWeight:(id)arg2 ;
-(void)interpolateRGBWeightUsingSourceToDest:(id)arg0 renderRequest:(id)arg1 inRGBWeight:(id)arg2 inGainMap:(id)arg3 inColorCube:(id)arg4 ;
-(void)precomputeGaussianFromNumberOfSamples:(int)arg0 seed:(unsigned int)arg1 ;


@end


#endif