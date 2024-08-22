// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFXSPATIALSCALINGEFFECTEFFECT_NAME_V1_H
#define _MFXSPATIALSCALINGEFFECTEFFECT_NAME_V1_H

@class MTLFXSpatialScaler, MTLRenderPassDescriptor, MTLTextureDescriptor, NSString;
@protocol MTLFXSpatialScalerSPI, MTLDeviceSPI, MTLRenderPipelineState, MTLComputePipelineState, MTLTexture, MTLFence;



@interface _MFXSpatialScalingEffectEFFECT_NAME_V1 : MTLFXSpatialScaler <MTLFXSpatialScalerSPI>

 {
    id<MTLDeviceSPI> *_device;
    BOOL _inputOutputNormalized;
    BOOL _inputLinear;
    id<MTLRenderPipelineState> *_mfxNormPerceptPSO;
    id<MTLRenderPipelineState> *_mfxUpscalePSO;
    id<MTLRenderPipelineState> *_mfxSharpenPSO;
    id<MTLComputePipelineState> *_mfxUpscaleKernel;
    id<MTLComputePipelineState> *_mfxSharpenKernel;
    MTLRenderPassDescriptor *_mfxPassDescriptor;
    id<MTLTexture> *_mfxNormPerceptTex;
    id<MTLTexture> *_mfxUpscaledTex;
    MTLTextureDescriptor *_texDesc;
    NSUInteger _inputFormat;
    NSUInteger _outputFormat;
    BOOL _inputSRGB;
    BOOL _outputSRGB;
    BOOL _use3DPipeline;
    NSUInteger _intermediatePixelFormat;
}


@property (readonly, nonatomic) NSInteger colorProcessingMode; // ivar: _colorProcessingMode
@property (retain, nonatomic) NSObject<MTLTexture> *colorTexture; // ivar: _inputTexture
@property (readonly, nonatomic) NSUInteger colorTextureFormat; // ivar: _colorTextureFormat
@property (readonly, nonatomic) NSUInteger colorTextureUsage; // ivar: _colorTextureUsage
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<MTLTexture> *debugTexture; // ivar: _debugTexture
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<MTLFence> *fence; // ivar: _fence
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger inputContentHeight; // ivar: _inputContentHeight
@property (nonatomic) NSUInteger inputContentWidth; // ivar: _inputContentWidth
@property (readonly, nonatomic) NSUInteger inputHeight; // ivar: _inputHeight
@property (readonly, nonatomic) NSUInteger inputWidth; // ivar: _inputWidth
@property (readonly, nonatomic) NSUInteger outputHeight; // ivar: _outputHeight
@property (retain, nonatomic) NSObject<MTLTexture> *outputTexture; // ivar: _outputTexture
@property (readonly, nonatomic) NSUInteger outputTextureFormat; // ivar: _outputTextureFormat
@property (readonly, nonatomic) NSUInteger outputTextureUsage; // ivar: _outputTextureUsage
@property (readonly, nonatomic) NSUInteger outputWidth; // ivar: _outputWidth
@property (readonly) Class superclass;


-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 ;
-(id)inputTexture;
-(void)encodeToCommandBuffer:(id)arg0 ;
-(void)encodeToCommandQueue:(id)arg0 ;
-(void)setInputTexture:(id)arg0 ;


@end


#endif