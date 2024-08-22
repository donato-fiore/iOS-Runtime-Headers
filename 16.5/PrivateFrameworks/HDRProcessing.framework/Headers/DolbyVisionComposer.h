// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOLBYVISIONCOMPOSER_H
#define DOLBYVISIONCOMPOSER_H

@protocol MTLDeviceSPI, MTLLibrary, MTLTexture, MTLBuffer;

#import <Foundation/Foundation.h>

#import "ComposerShader.h"

@interface DolbyVisionComposer : NSObject {
    NSUInteger _frameIndex;
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_defaultLibrary;
    ComposerShader *_horizontalHalfLumaKernel;
    ComposerShader *_verticalHalfLumaKernel;
    ComposerShader *_verticalResampleKernel;
    ComposerShader *_horizontalResampleKernel;
    ComposerShader *_composeLumaKernel;
    ComposerShader *_composeChromaKernel;
    ComposerShader *_composeYUVKernel;
    ComposerShader *_sdr2cif10;
    ComposerShader *_packedDolbyIPT_ptv;
    ComposerShader *_packed422DolbyIPT_ptv;
    ComposerShader *_unpackedHDR10_ptv;
    ComposerShader *_packedHDR10_ptv;
    ComposerShader *_packed422HDR10_ptv;
    ComposerShader *_unpackedHLG_ptv;
    ComposerShader *_packedHLG_ptv;
    ComposerShader *_packed422HLG_ptv;
    ComposerShader *_packedHDR10toRGB;
    ComposerShader *_packed422HDR10toRGB;
    ComposerShader *_unpackedHDR10toRGB;
    ComposerShader *_packedHDR10toRGB_YUVTM;
    ComposerShader *_packed422HDR10toRGB_YUVTM;
    ComposerShader *_unpackedHDR10toRGB_YUVTM;
    ComposerShader *_packedHDR10_msr;
    ComposerShader *_packed422HDR10_msr;
    ComposerShader *_packedHLGtoRGB_YUVTM;
    ComposerShader *_packedHLGtoRGB_YUVTM_flip;
    ComposerShader *_packedHLGtoRGB_YUVTM_rotate;
    ComposerShader *_packed422HLGtoRGB_YUVTM;
    ComposerShader *_packed422HLGtoRGB_YUVTM_flip;
    ComposerShader *_packed422HLGtoRGB_YUVTM_rotate;
    ComposerShader *_unpackedHLG8toRGB_YUVTM;
    ComposerShader *_unpackedHLG10toRGB_YUVTM;
    ComposerShader *_packedHLG_msr;
    ComposerShader *_packed422HLG_msr;
    ComposerShader" _packedDolbyYUVtoRGB_YUVTM;
    ComposerShader *_packedDolbyYUVtoRGB_IPTTM_HLGOOTF;
    ComposerShader *_packedDolbyYUVtoRGB_IPTTM_YScale;
    ComposerShader" _packed422DolbyYUVtoRGB_YUVTM;
    ComposerShader *_packed422DolbyYUVtoRGB_IPTTM_HLGOOTF;
    ComposerShader *_packed422DolbyYUVtoRGB_IPTTM_YScale;
    ComposerShader" _packedDolbyIPTtoRGB_YUVTM;
    ComposerShader *_packedDolbyIPTtoRGB_IPTTM_HLGOOTF;
    ComposerShader *_packedDolbyIPTtoRGB_IPTTM_YScale;
    ComposerShader" _packed422DolbyIPTtoRGB_YUVTM;
    ComposerShader *_packed422DolbyIPTtoRGB_IPTTM_HLGOOTF;
    ComposerShader *_packed422DolbyIPTtoRGB_IPTTM_YScale;
    ComposerShader" _singleLayerIntegratedKernel;
    ComposerShader" _singleLayerIntegratedIPTKernel;
    ComposerShader *_singleLayerIntegratedIPTKernelMsr;
    ComposerShader" _singleLayerIntegratedKernelPlanar;
    ComposerShader" _singleLayerIntegratedIPTKernelPlanar;
    ComposerShader" _singleLayerIntegratedKernelPackedPlanar;
    ComposerShader" _singleLayerIntegratedKernelPackedPlanar_flip;
    ComposerShader" _singleLayerIntegratedKernelPackedPlanar_rotate;
    ComposerShader" _singleLayerIntegratedKernelPackedPlanar_msr;
    ComposerShader" _singleLayerIntegratedKernelPackedPlanarDM4;
    ComposerShader" _singleLayerIntegratedKernelPackedPlanarDM4_flip;
    ComposerShader" _singleLayerIntegratedKernelPackedPlanarDM4_rotate;
    ComposerShader" _singleLayerIntegratedKernelPackedPlanarDM4_msr;
    ComposerShader" _singleLayerIntegratedIPTKernelPackedPlanar;
    ComposerShader *_singleLayerIntegratedIPTKernelPackedPlanar_msr;
    ComposerShader" _yuvP422PackedPlanar;
    ComposerShader" _yuvP422PackedPlanar_msr;
    ComposerShader" _yuvP422PackedPlanar_flip;
    ComposerShader" _yuvP422PackedPlanar_rotate;
    ComposerShader" _yuvP422PackedPlanarDM4;
    ComposerShader" _yuvP422PackedPlanarDM4_flip;
    ComposerShader" _yuvP422PackedPlanarDM4_rotate;
    ComposerShader" _yuvP422PackedPlanarDM4_msr;
    ComposerShader" _iptP422PackedPlanar;
    ComposerShader *_iptP422PackedPlanar_msr;
    ComposerShader" _packedHDR10Cif10;
    ComposerShader" _packed422HDR10Cif10;
    ComposerShader" _packedHLGCif10;
    ComposerShader" _packed422HLGCif10;
    ComposerShader *_y416HLGw30r;
    ComposerShader *_RGhAHLGw30r;
    ComposerShader *_y416HDR10w30r;
    ComposerShader *_x444HDR10w30r;
    ComposerShader *_RGhAHDR10w30r;
    ComposerShader *_singleLayer16bit444Kernel;
    float _ambientHeadroomAdaptationLut;
    id<MTLTexture>" _polynomialTables;
    id<MTLTexture> *_currentPolynomialTable;
    id<MTLBuffer> *_dequantizelTable;
    id<MTLBuffer>" _configBuffers;
    id<MTLBuffer> *_config;
    id<MTLTexture> *_blTexture;
    id<MTLTexture> *_blTextureUV;
    id<MTLTexture> *_blSubsampledTempTexture;
    id<MTLTexture> *_blSubsampledTexture;
    id<MTLTexture> *_elTexture;
    id<MTLTexture> *_elTextureUV;
    id<MTLTexture>" _outputTexture;
    id<MTLTexture> *_outputTextureUV;
    id<MTLTexture> *_pq2LTable;
    unsigned int _pq2LTableSize;
    id<MTLTexture> *_hlg2LTable;
    unsigned int _hlg2LTableSize;
    id<MTLTexture> *_yuvScalingFactorTable;
    float _yuvScalingFactorTableBuffer;
    id<MTLTexture> *_scalingFactorTable;
    float _scalingFactorTableBuffer;
    id<MTLTexture> *_sat2FactorTable;
    float _sat2FactorTableBuffer;
    id<MTLTexture> *_lumaMixFactorTable;
    float _lumaMixFactorTableBuffer;
    id<MTLTexture> *_xferToLinear;
    unsigned int _l2PQTableSize;
    id<MTLTexture> *_dm4_tLutI;
    id<MTLTexture> *_dm4_tLutS;
    float _dm4_tLutIBuffer;
    float _dm4_tLutSBuffer;
    float _dm4_sLutIBuffer;
    float _dm4_sLutSBuffer;
    float _l2PQMidPoint;
    float _l2PQMaxPoint;
    BOOL _dumpPolynomialResult;
    unsigned int _srcFormat;
    unsigned int _dstFormat;
    unsigned int _inputPixelFormat;
    unsigned int _outputPixelFormat;
    NSUInteger _inputProtectionOptions;
    NSUInteger _outputProtectionOptions;
    BOOL _isPackedInputBuffer;
    float _cached_target_white;
    float _cached_target_black;
    float _cached_source_white;
    float _cached_source_black;
    NSUInteger _iosurface_ReadOnlyTextureAlignmentBytes;
    ? _prev;
}


@property BOOL bypassDisplayManagement; // ivar: _bypassDisplayManagement
@property BOOL preSubsampleLumaForMMR; // ivar: _preSubsampleLumaForMMR
@property BOOL yuvCombinedCompose; // ivar: _yuvCombinedCompose


-(?)createLUTFromDMConfig:(?)arg0 DM:(?)arg1 TCControlHDRControl;
-(?)dovi_createLUTFromDMConfig:(?)arg0 DM:(?)arg1 HDRControl:(?)arg2 TMParam:(?)arg3 EdrAdaptationParam:(?)arg4 AmbAdaptationParam:(?)arg5 HlgOOTFCombined:(?)arg6 HlgOOTFOnlyIsDoVi84;
-(?)dovi_tm_configChanged:(?)arg0 HDRControl:(?)arg1 DM:(?)arg2 EdrAdaptationParamAmbAdaptationParam;
-(?)dovi_tm_createLUTFromDMConfig:(?)arg0 HDRControl:(?)arg1 DM:(?)arg2 TMParam:(?)arg3 EdrAdaptationParam:(?)arg4 AmbAdaptationParam:(?)arg5 HlgOOTFCombined:(?)arg6 HlgOOTFOnlyIsDoVi84;
-(?)dovi_tm_reserveConfig:(?)arg0 HDRControl:(?)arg1 DM:(?)arg2 EdrAdaptationParamAmbAdaptationParam;
-(?)embeddedSetupEncoderForCommandBuffer:(?)arg0 DMData:(?)arg1 dmConfig:(?)arg2 isInput422:(?)arg3 hasThreeOutputPlane:(?)arg4 isSdrOnDolbyOrHDR10:(?)arg5 isHDR10OnHDR10TV:(?)arg6 isDolbyOnHDR10TV:(?)arg7 isHDR10OnDolby:(?)arg8 isHDR10OnPad:(?)arg9 isHLGOnPad:(?)arg10 isDoviOnPad:(?)arg11 isDoviOnLLDovi:(?)arg12 isHDR10OnLLDovi:(?)arg13 isHLGOnHDR10TV:(?)arg14 isHLGOnDolbyTV:(?)arg15 isHLGOnLLDovi:(?)arg16 isPtvMode:(?)arg17 orientation:(?)arg18 isDolby84:(?)arg19 dovi50toHDR10TVMode:(?)arg20 isDM4isGpuTmRefMode;
-(?)embeddedSetupToneMappingWithContent:(?)arg0 Output:(?)arg1 DM:(?)arg2 DMData:(?)arg3 tcControl:(?)arg4 hdrControl:(?)arg5 hdr10InfoFrame:(?)arg6 dmConfig:(?)arg7 hdr10OnPaduseYUVScalingTable;
-(?)encodeComposeChromaToCommandBufferwithMetaData;
-(?)encodeDualLayerToCommandBuffer:(?)arg0 BL:(?)arg1 EL:(?)arg2 Output:(?)arg3 MetaDatatcControl;
-(?)encodeSingleLayerToCommandBuffer:(?)arg0 BL:(?)arg1 Output:(?)arg2 ComposerData:(?)arg3 DM:(?)arg4 DMData:(?)arg5 tcControl:(?)arg6 hdrControlhdr10InfoFrame;
-(?)encodeToCommandBuffer:(?)arg0 BL:(?)arg1 EL:(?)arg2 Output:(?)arg3 ComposerData:(?)arg4 DM:(?)arg5 DMData:(?)arg6 tcControl:(?)arg7 hdrControlhdr10InfoFrame;
-(?)fillInScalingTable_YUVTM:(?)arg0 target_White:(?)arg1 target_Black:(?)arg2 source_White:(?)arg3 source_Black:(?)arg4 satBoostscalingFactor;
-(?)hdr10_createLUTFromDMConfig:(?)arg0 HDRControl:(?)arg1 TMParam:(?)arg2 EdrAdaptationParamAmbAdaptationParam;
-(?)hdr10_tm_configChanged:(?)arg0 HDRControl:(?)arg1 EdrAdaptationParamAmbAdaptationParam;
-(?)hdr10_tm_createLUTFromDMConfig:(?)arg0 EdrAdaptationParam:(?)arg1 AmbAdaptationParam:(?)arg2 dmConfigHDRControl;
-(?)hdr10_tm_reserveConfig:(?)arg0 HDRControl:(?)arg1 EdrAdaptationParamAmbAdaptationParam;
-(?)hlg_createLUTFromDMConfig:(?)arg0 DM:(?)arg1 HDRControl:(?)arg2 TMParam:(?)arg3 EdrAdaptationParam:(?)arg4 AmbAdaptationParamTMMode;
-(?)hlg_tm_configChanged:(?)arg0 HDRControl:(?)arg1 TMParam:(?)arg2 EdrAdaptationParamAmbAdaptationParam;
-(?)hlg_tm_createLUTFromDMConfig:(?)arg0 DM:(?)arg1 TMParam:(?)arg2 EdrAdaptationParam:(?)arg3 AmbAdaptationParamTMMode;
-(?)hlg_tm_reserveConfig:(?)arg0 HDRControl:(?)arg1 TMParam:(?)arg2 EdrAdaptationParamAmbAdaptationParam;
-(?)setupComposerKernelConfigurationfromMetaData;
-(?)setupInputBuffersWithMetadata;
-(?)setupInputTexturesWithBL:(?)arg0 EL:(?)arg1 OutputMetaData;
-(NSInteger)checkForContent:(unsigned int)arg0 contentReturn1:(*BOOL)arg1 contentReturn2:(*BOOL)arg2 contentReturn3:(*BOOL)arg3 forDisplay:(unsigned int)arg4 displayReturn1:(*BOOL)arg5 displayReturn2:(*BOOL)arg6 displayReturn3:(*BOOL)arg7 displayReturn4:(*BOOL)arg8 displayReturn5:(*BOOL)arg9 ;
-(NSInteger)checkInputFormats:(unsigned int)arg0 returnInput1:(*BOOL)arg1 returnInput2:(*BOOL)arg2 returnInput3:(*BOOL)arg3 returnInput4:(*BOOL)arg4 returnInput5:(*BOOL)arg5 outputFormat:(unsigned int)arg6 returnOutput1:(*BOOL)arg7 returnOutput2:(*BOOL)arg8 returnOutput3:(*BOOL)arg9 returnOutput4:(*BOOL)arg10 ;
-(NSInteger)setupOutputTexturesWithBuffer:(struct __IOSurface *)arg0 orientation:(int)arg1 ptvMode:(BOOL)arg2 ;
-(id)createNullShader;
-(id)createShaderWithName:(id)arg0 dolby84:(BOOL)arg1 forLLDovi:(BOOL)arg2 ;
-(id)getComputePipeLineStateForShader:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)createHLG2LTable;
-(void)createL2PQTable;
-(void)createPQ2LTable;
-(void)createScalingTable_YUVTM;
-(void)dovi_dm4_updateInterleavedLUT;
-(void)dovi_tm_updateLUT;
-(void)embeddedCreateKernels;
-(void)encodeComposeCombinedToCommandBuffer:(id)arg0 ;
-(void)encodeComposeLumaToCommandBuffer:(id)arg0 ;
-(void)encodeSubsampleLumaHorizontalToCommandBuffer:(id)arg0 ;
-(void)encodeSubsampleLumaVerticalToCommandBuffer:(id)arg0 ;
-(void)getTmLutInput:(NSUInteger)arg0 lutInput:(*float)arg1 ;
-(void)getTmLutInput_C:(NSUInteger)arg0 lutInput:(*float)arg1 ;
-(void)hdr10_tm_updateLUT;
-(void)hlg_tm_updateLUT;
-(void)initBuffers;
-(void)initDMConfigCache;
-(void)setupMetal;


@end


#endif