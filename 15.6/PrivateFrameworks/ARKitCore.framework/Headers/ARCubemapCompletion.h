// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARCUBEMAPCOMPLETION_H
#define ARCUBEMAPCOMPLETION_H

@protocol MTLTexture, MTLDevice, MTLCommandQueue, MTLComputePipelineState;

#import <Foundation/Foundation.h>

#import "ARGPUCubemapConverter.h"
#import "ARGPUSphericalBlur.h"

@interface ARCubemapCompletion : NSObject {
    *void _espresso_ctx;
    *void _espresso_plan;
    ? _espresso_net;
    ? _espresso_processing_params;
    BOOL _espressoInitialized;
    vector<unsigned char, std::allocator<unsigned char>> _randomNumbers;
    vImage_Buffer _vImageBuffer;
    ARGPUCubemapConverter *_cubemapConverter;
    ARGPUSphericalBlur *_sphericalBlur;
    id<MTLTexture> *_roughness;
    BOOL _outdoorScene;
    CGFloat _bias_exposure_threshold;
    int _bias_mask;
    float _r_avg;
    float _g_avg;
    float _b_avg;
    float _alpha_threshold;
    NSUInteger _gan_width;
    NSUInteger _gan_height;
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_queue;
    id<MTLComputePipelineState> *_combineBuffersToHDR;
    BOOL _use_model_pre_A11;
    vector<unsigned char, std::allocator<unsigned char>> _srgbToLogLUT_pre_A11;
    float _r_bias_pre_A11;
    float _g_bias_pre_A11;
    float _b_bias_pre_A11;
    int _bias_height_pre_A11;
}


@property (nonatomic) BOOL generateHDROutput; // ivar: _generateHDROutput


+(id)sharedInstance;
-(id)completeCubemap:(id)arg0 cameraExposure:(CGFloat)arg1 rotationWorldFromCube:(struct ? )arg2 ;
-(id)completeLatLongImage:(id)arg0 ;
-(id)generateSeamSmoothingTexture;
-(id)grayCubemapOfSize:(NSUInteger)arg0 ;
-(id)init;
-(id)toTexture:(struct ? )arg0 ;
-(struct vImage_Buffer )toVImageBuffer:(id)arg0 ;
-(unsigned char)srgbToLog:(unsigned char)arg0 ;
-(void)dealloc;


@end


#endif