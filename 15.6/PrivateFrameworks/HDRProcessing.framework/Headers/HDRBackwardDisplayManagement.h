// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDRBACKWARDDISPLAYMANAGEMENT_H
#define HDRBACKWARDDISPLAYMANAGEMENT_H

@class NSMutableData;
@protocol MTLDeviceSPI, MTLLibrary, MTLRenderPipelineState, MTLSamplerState, MTLTexture, MTLBuffer;

#import <Foundation/Foundation.h>


@interface HDRBackwardDisplayManagement : NSObject {
    NSUInteger _frameIndex;
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_defaultLibrary;
    id<MTLRenderPipelineState> *_BKDM_ARGB_Linear;
    id<MTLRenderPipelineState>" _BKDM_3Plane_2Pixel_PTV;
    id<MTLRenderPipelineState>" _BKDM_3Plane_1Pixel_PTV;
    id<MTLRenderPipelineState>" _BKDM_3Plane_2Pixel_UIBlending_PTV;
    id<MTLRenderPipelineState>" _BKDM_3Plane_1Pixel_UIBlending_PTV;
    id<MTLRenderPipelineState>" _BKDM_3Plane_2Pixel_Linear;
    id<MTLRenderPipelineState>" _BKDM_3Plane_1Pixel_Linear;
    id<MTLRenderPipelineState>" _BKDM_3Plane_1Pixel_Gamma;
    id<MTLRenderPipelineState>" _BKDM_3Plane_1Pixel_Gamma_Scaled;
    id<MTLRenderPipelineState>" _BKDM_3Plane_1Pixel_Gamma_Scaled_Inverse_HLGOOTF;
    id<MTLRenderPipelineState>" _BKDM_3Plane_1Pixel_Gamma_Scaled_Inverse_YScale;
    id<MTLRenderPipelineState>" _BKDM_3Plane_1Pixel_Video_Scaled;
    id<MTLRenderPipelineState>" _BKDM_3Plane_1Pixel_Video_Scaled_Inverse_HLGOOTF;
    id<MTLRenderPipelineState>" _BKDM_3Plane_1Pixel_Video_Scaled_Inverse_YScale;
    id<MTLRenderPipelineState>" _BKDM_3Plane_2Pixel_Gamma_Scaled;
    id<MTLRenderPipelineState>" _BKDM_3Plane_2Pixel_Video_Scaled;
    id<MTLRenderPipelineState>" _BKDM_SDRUIOnly_ShaderDegamma;
    id<MTLRenderPipelineState>" _BKDM_SDRUIOnly;
    id<MTLRenderPipelineState>" _BKDM_SDRVideoOnly;
    id<MTLRenderPipelineState>" _BKDM_SDRVideoUIBlending;
    id<MTLRenderPipelineState>" _BKDM_SDRUIBlending;
    id<MTLRenderPipelineState>" _colorfill1;
    id<MTLRenderPipelineState>" _colorfill2;
    id<MTLRenderPipelineState>" _fillUI1ForHDR;
    id<MTLRenderPipelineState>" _fillUI1SDR24;
    id<MTLRenderPipelineState>" _fillUI2ForHDR;
    id<MTLRenderPipelineState> *_metadataKernel;
    id<MTLRenderPipelineState> *_metadataKernel2Pixel;
    id<MTLSamplerState> *_inputSampler;
    id<MTLTexture> *_pq2LTable;
    id<MTLTexture> *_l2PQTable;
    id<MTLTexture> *_inverseScalingFactorTableTexture;
    id<MTLTexture>" _inverseScalingFactorTableTextures;
    NSMutableData *_inverseScalingTable;
    id<MTLTexture> *_sdrScalingFactorTableTexture;
    id<MTLTexture> *_yuvScalingFactorTableTexture;
    id<MTLTexture>" _yuvScalingFactorTableTextures;
    unsigned int _indexOfyuvScalingFactorTableTexture;
    NSMutableData *_sdrScalingTable;
    NSMutableData *_yuvScalingTable;
    float _cached_target_white;
    float _cached_target_black;
    float _cached_source_white;
    float _cached_source_black;
    BOOL _cached_scaling_factor;
    float _prev_SlopeScaled;
    float _prev_c1;
    float _prev_c2;
    float _prev_c3;
    id<MTLBuffer> *_uniformBuffer;
    id<MTLBuffer>" _uniformBuffers;
    id<MTLBuffer> *_vertsBuffer;
    id<MTLBuffer> *_vertsBuf;
    id<MTLBuffer>" _vertsBufs;
    int _num_Blend_Rects;
    int _num_Video_Rects;
    int _num_UI_Rects;
    int _num_ColorFill_Rects;
    ? _cachedFullRegion;
    ? _cachedVideoDstRegion;
    ? _cachedVideoSrcRegion;
    ? _cachedUIDstRegion;
    ? _cachedUISrcRegion;
    unsigned int _cached_videoInputFormat;
    unsigned int _cached_uiInputFormat;
    id<MTLBuffer> *_metadataVertexBuffer;
    int _metadataSpanCount;
    int _width;
    int _height;
    int _targetWidth;
    int _targetHeight;
    id<MTLTexture>" _metadataTexture;
    id<MTLTexture>"] _metadataTextures;
    id<MTLTexture>" _inputTexture;
    id<MTLTexture> *_outputTexture;
    id<MTLTexture> *_outputTextureMetadata;
    id<MTLTexture> *_intermediateTexture;
    id<MTLTexture> *_uiTexture;
    float _uiEDRFactor;
    float _inputScaleFactor;
    unsigned int _displayMaxBrightnessInNits;
    unsigned int _displayMaxBrightnessInNitsForSDR;
    float _displayMinBrightnessInNits;
    BOOL _hasDisplayBrightnessFromEDID;
    unsigned int _displayType;
    unsigned int _outputPackingColorFormat;
    unsigned int _inverseScalingTableIndex;
    BOOL _useAccessibilityMatrix;
    ? _cachedHDRMatrix;
    float _709toPanelPrimaryMatrix;
}




-(?)adjustMetaData:(?)arg0 HDRUIBlendinghasLetterbox;
-(?)attatchInfoFrametoOutputSurface;
-(?)encodeToCommandBuffer:(?)arg0 video:(?)arg1 videoSrcRegion:(?)arg2 videoDstRegion:(?)arg3 ui:(?)arg4 outputframeProperties;
-(?)encodeToCommandBuffer:(?)arg0 video:(?)arg1 videoSrcRegion:(?)arg2 videoDstRegion:(?)arg3 ui:(?)arg4 uiSrcRegion:(?)arg5 uiDstRegion:(?)arg6 backgroundColor:(?)arg7 outputframeProperties;
-(?)fillInverseScalingFactorTableFromDMConfig;
-(?)fillScalingTable_SDR2HDR:(?)arg0 target_Whitetarget_Black;
-(?)fillScalingTable_YUVTM:(?)arg0 targetwhite:(?)arg1 targetblack:(?)arg2 satBoost:(?)arg3 scalingFactorsdrOnly;
-(?)generateMetaAndConfig:(?)arg0 inputSurface:(?)arg1 outputSurface:(?)arg2 payLoaddmCfg;
-(?)packetizeMetadata:(?)arg0 length:(?)arg1 intoonSurface;
-(?)setAccessibilityMatrix;
-(?)updateConfigFromMetadata:(?)arg0 uiScaleFactor:(?)arg1 width:(?)arg2 background:(?)arg3 hdrVideoOnly:(?)arg4 hdr10TVsdrOnly;
-(?)updateVertices:(?)arg0 videoInput:(?)arg1 videoDstRegion:(?)arg2 videoSrcRegion:(?)arg3 uiInput:(?)arg4 uiDstRegion:(?)arg5 uiSrcRegion:(?)arg6 dstWidth:(?)arg7 dstHeight:(?)arg8 videoSrcWidth:(?)arg9 videoSrcHeight:(?)arg10 indexscale;
-(BOOL)inputIsSDRVideoFormat:(struct __IOSurface *)arg0 ;
-(BOOL)inputIsVideoOnly:(struct __IOSurface *)arg0 inputUI:(struct __IOSurface *)arg1 ;
-(NSInteger)EncodeToCommandBuffer:(id)arg0 inputSurface:(struct __IOSurface *)arg1 uiSurface:(struct __IOSurface *)arg2 outputSurface:(struct __IOSurface *)arg3 frameProperties:(id)arg4 ;
-(NSInteger)encodeToCommandBuffer:(id)arg0 inputSurface:(struct __IOSurface *)arg1 outputSurface:(struct __IOSurface *)arg2 frameProperties:(id)arg3 ;
-(NSInteger)encodeToCommandBuffer:(id)arg0 video:(struct __IOSurface *)arg1 ui:(struct __IOSurface *)arg2 output:(struct __IOSurface *)arg3 frameProperties:(id)arg4 ;
-(NSUInteger)getPixelFormatFromSurface:(struct __IOSurface *)arg0 DeGamma:(BOOL)arg1 forceUseOnePlane:(BOOL)arg2 default:(NSUInteger)arg3 ;
-(id)createRenderCommandEncoderWithCommandBuffer:(id)arg0 texture:(id)arg1 widthScale:(unsigned int)arg2 loadAction:(NSUInteger)arg3 ;
-(id)createRenderPipeLineWithVertexName:(id)arg0 fragmentName:(id)arg1 colorFormat:(NSUInteger)arg2 useCustomMatrix:(BOOL)arg3 p3CSC:(BOOL)arg4 applyYGamma:(BOOL)arg5 ;
-(id)initWithDevice:(id)arg0 displayProperties:(id)arg1 ;
-(int)getTVIndex:(BOOL)arg0 ;
-(int)pixelNumPerThreadFullScreen:(BOOL)arg0 videoInput:(struct __IOSurface *)arg1 UI:(struct __IOSurface *)arg2 Output:(struct __IOSurface *)arg3 widthScaling:(BOOL)arg4 ;
-(unsigned int)getPackagingColorFormatFromDictionary:(id)arg0 withDefaultValue:(unsigned int)arg1 ;
-(void)createBuffers;
-(void)createInverseScalingFactorTable;
-(void)createKernels;
-(void)createL2PQTable;
-(void)createMetadataTexture;
-(void)createMetadataVertexBuffer;
-(void)createPQ2LTable;
-(void)createSDRScalingFactorTable;
-(void)createSamplers;
-(void)createYUVScalingFactorTable;
-(void)drawMetaWithEncoder:(id)arg0 widthScale:(int)arg1 dmPayLoadLength:(int)arg2 ;
-(void)handleMetaInsertion:(BOOL)arg0 encoder:(id)arg1 widthScale:(int)arg2 payloadLength:(unsigned int)arg3 ;
-(void)initDisplayAttributes:(id)arg0 ;
-(void)initWithDevice:(id)arg0 ;
-(void)setupMetadataTextureWithOutput:(struct __IOSurface *)arg0 ;
-(void)setupMetal;
-(void)setupTexturesWithInput:(struct __IOSurface *)arg0 VideoSRGB:(BOOL)arg1 UI:(struct __IOSurface *)arg2 UISRGB:(BOOL)arg3 Output:(struct __IOSurface *)arg4 PixelPerThread:(int)arg5 ptvMode:(BOOL)arg6 ;
-(void)updateUniformUIScaleForVideo:(BOOL)arg0 forTV:(BOOL)arg1 videoPeakBrightnessInNits:(int)arg2 uiHWDegamma:(BOOL)arg3 ;


@end


#endif