// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSRHDRPROCESSING_H
#define MSRHDRPROCESSING_H


#import <Foundation/Foundation.h>


@interface MSRHDRProcessing : NSObject {
    ? _msrCU;
    BOOL _mmrEnable;
    BOOL _reshapeLUTCreated;
    NSUInteger _reshapeLUTSize;
    unsigned short _reshapeLUT;
    unsigned int _frameNumber;
    BOOL _dump;
    unsigned int _msrPlatform;
    MSRHDRContext _msrHC;
    ? _msrCC;
    ? _dm_config;
    ? _prev;
    ? _payload;
    ? _doviHDMIMetaData;
    unsigned int _payLoadLength;
    unsigned int _numOfPackets;
    float _max_fp16;
    float _scalingFactorTableBuffer;
    float _sat2FactorTableBuffer;
    float _lumaMixFactorTableBuffer;
    float _ambientHeadroomAdaptationLut;
    float _hScaleCoefficents;
    float _vScaleCoefficents;
    ? _degamma;
    unsigned int _tmMode;
    NSUInteger _tonemappingTableSize;
    ? _tonemapLUT;
    ? _regamma;
}




+(?)dolbyIOMFBMetadata:(?)arg0 withMinBrightnessmaxBrightness;
-(?)attachDoViMetadataPacketTo:(?)arg0 withDMData:(?)arg1 withDMConfig:(?)arg2 withHdrControlwithMSRHDRContext;
-(?)attachHDRMetaDataToOutputSurface:(?)arg0 withDMData:(?)arg1 withDMConfig:(?)arg2 withHdrControl:(?)arg3 withTcControl:(?)arg4 withMSRHDRContextwithInfoFrame;
-(?)attachInfoFrameTo:(?)arg0 withDMData:(?)arg1 withTcControlwithInfoFrame;
-(?)createLUTFromDMConfig:(?)arg0 DM:(?)arg1 TCControl:(?)arg2 HDRControlLLDoVi;
-(?)decideStageStatus:(?)arg0 MSRHDRContextDMData;
-(?)dovi_createLUTFromDMConfig:(?)arg0 DM:(?)arg1 HDRControl:(?)arg2 LLDoVi:(?)arg3 TMParam:(?)arg4 EdrAdaptationParam:(?)arg5 AmbAdaptationParam:(?)arg6 HlgOOTFCombined:(?)arg7 HlgOOTFOnly:(?)arg8 IsDoVi84IsInternalDisplay;
-(?)dovi_tm_configChanged:(?)arg0 HDRControl:(?)arg1 DM:(?)arg2 LLDoVi:(?)arg3 EdrAdaptationParamAmbAdaptationParam;
-(?)dovi_tm_createLUTFromDMConfig:(?)arg0 HDRControl:(?)arg1 DM:(?)arg2 LLDoVi:(?)arg3 TMParam:(?)arg4 EdrAdaptationParam:(?)arg5 AmbAdaptationParam:(?)arg6 HlgOOTFCombined:(?)arg7 HlgOOTFOnly:(?)arg8 IsDoVi84IsInternalDisplay;
-(?)dovi_tm_reserveConfig:(?)arg0 HDRControl:(?)arg1 DM:(?)arg2 LLDoVi:(?)arg3 EdrAdaptationParamAmbAdaptationParam;
-(?)dovi_tm_updateLUT:(?)arg0 ScalingFactorBuffer:(?)arg1 ScalingFactorBufferSize:(?)arg2 Sat2FactorBuffer:(?)arg3 Sat2FactorBufferSize:(?)arg4 dmConfigHlgOOTFCombined;
-(?)getColorConfigSignatureString:(?)arg0 length:(?)arg1 tcControlhdrControl;
-(?)handleDoViToHDR10TV:(?)arg0 TCControlDMData;
-(?)hdr10_createLUTFromDMConfig:(?)arg0 TCControl:(?)arg1 HDRControl:(?)arg2 TMParam:(?)arg3 EdrAdaptationParamAmbAdaptationParam;
-(?)hdr10_tm_configChanged:(?)arg0 HDRControl:(?)arg1 EdrAdaptationParamAmbAdaptationParam;
-(?)hdr10_tm_createLUTFromDMConfig:(?)arg0 EdrAdaptationParam:(?)arg1 AmbAdaptationParamdmConfig;
-(?)hdr10_tm_reserveConfig:(?)arg0 HDRControl:(?)arg1 EdrAdaptationParamAmbAdaptationParam;
-(?)hdr10_tm_updateLUT:(?)arg0 ScalingFactorBuffer:(?)arg1 ScalingFactorBufferSize:(?)arg2 LumaMixFactorBuffer:(?)arg3 LumaMixFactorBufferSize:(?)arg4 dmConfig:(?)arg5 TCControlHDRControl;
-(?)hlg_createLUTFromDMConfig:(?)arg0 DM:(?)arg1 HDRControl:(?)arg2 TMParam:(?)arg3 EdrAdaptationParam:(?)arg4 AmbAdaptationParamTMMode;
-(?)hlg_tm_configChanged:(?)arg0 HDRControl:(?)arg1 TMParam:(?)arg2 EdrAdaptationParamAmbAdaptationParam;
-(?)hlg_tm_createLUTFromDMConfig:(?)arg0 DM:(?)arg1 TMParam:(?)arg2 EdrAdaptationParam:(?)arg3 AmbAdaptationParamTMMode;
-(?)hlg_tm_reserveConfig:(?)arg0 HDRControl:(?)arg1 TMParam:(?)arg2 EdrAdaptationParamAmbAdaptationParam;
-(?)hlg_tm_updateLUT:(?)arg0 ScalingFactorBuffer:(?)arg1 ScalingFactorBufferSizedmConfig;
-(?)populateMSRColorConfig:(?)arg0 DMConfig:(?)arg1 DMData:(?)arg2 tcControl:(?)arg3 hdrControlMSRHDRContext;
-(?)populateMSRColorConfigHeader:(?)arg0 Enabled:(?)arg1 Prefix:(?)arg2 DMConfig:(?)arg3 DMData:(?)arg4 tcControl:(?)arg5 hdrControlMSRHDRContext;
-(?)populateMSRColorConfigStageB01_01:(?)arg0 Enabled:(?)arg1 Prefix:(?)arg2 DMConfig:(?)arg3 DMData:(?)arg4 tcControl:(?)arg5 hdrControlMSRHDRContext;
-(?)populateMSRColorConfigStageB01_02:(?)arg0 Enabled:(?)arg1 Prefix:(?)arg2 DMConfig:(?)arg3 DMData:(?)arg4 tcControl:(?)arg5 hdrControlMSRHDRContext;
-(?)populateMSRColorConfigStageB01_03:(?)arg0 Enabled:(?)arg1 Prefix:(?)arg2 DMConfig:(?)arg3 DMData:(?)arg4 tcControl:(?)arg5 hdrControlMSRHDRContext;
-(?)populateMSRColorConfigStageB01_04:(?)arg0 Enabled:(?)arg1 Prefix:(?)arg2 DMConfig:(?)arg3 DMData:(?)arg4 tcControl:(?)arg5 hdrControlMSRHDRContext;
-(?)populateMSRColorConfigStageB01_05:(?)arg0 Enabled:(?)arg1 Prefix:(?)arg2 DMConfig:(?)arg3 DMData:(?)arg4 tcControl:(?)arg5 hdrControlMSRHDRContext;
-(?)populateMSRColorConfigStageB01_06:(?)arg0 Enabled:(?)arg1 Prefix:(?)arg2 DMConfig:(?)arg3 DMData:(?)arg4 tcControl:(?)arg5 hdrControlMSRHDRContext;
-(?)populateMSRColorConfigStageB02:(?)arg0 Enabled:(?)arg1 Prefix:(?)arg2 DMConfig:(?)arg3 DMData:(?)arg4 tcControl:(?)arg5 hdrControlMSRHDRContext;
-(?)populateMSRColorConfigStageB03:(?)arg0 Enabled:(?)arg1 Prefix:(?)arg2 DMConfig:(?)arg3 DMData:(?)arg4 tcControl:(?)arg5 hdrControlMSRHDRContext;
-(?)populateMSRColorConfigStageB04_01:(?)arg0 Enabled:(?)arg1 Prefix:(?)arg2 DMConfig:(?)arg3 DMData:(?)arg4 tcControl:(?)arg5 hdrControlMSRHDRContext;
-(?)populateMSRColorConfigStageB04_02:(?)arg0 Enabled:(?)arg1 Prefix:(?)arg2 DMConfig:(?)arg3 DMData:(?)arg4 tcControl:(?)arg5 hdrControlMSRHDRContext;
-(?)populateMSRColorConfigStageB04_03:(?)arg0 Enabled:(?)arg1 Prefix:(?)arg2 DMConfig:(?)arg3 DMData:(?)arg4 tcControl:(?)arg5 hdrControlMSRHDRContext;
-(?)populateMSRColorConfigStageB04_04:(?)arg0 Enabled:(?)arg1 Prefix:(?)arg2 DMConfig:(?)arg3 DMData:(?)arg4 tcControl:(?)arg5 hdrControlMSRHDRContext;
-(?)populateMSRColorConfigStageB04_05:(?)arg0 Enabled:(?)arg1 Prefix:(?)arg2 DMConfig:(?)arg3 DMData:(?)arg4 tcControl:(?)arg5 hdrControlMSRHDRContext;
-(?)processFrameByMSRWithComposerData:(?)arg0 DM:(?)arg1 DMData:(?)arg2 tcControl:(?)arg3 hdrControl:(?)arg4 colorConfig:(?)arg5 hdr10InfoFrame:(?)arg6 layer0:(?)arg7 layer1:(?)arg8 outputframeNumebr;
-(?)processFrameByMSRWithComposerData:(?)arg0 DM:(?)arg1 DMData:(?)arg2 tcControl:(?)arg3 hdrControl:(?)arg4 hdr10InfoFrame:(?)arg5 layer0:(?)arg6 layer1:(?)arg7 output:(?)arg8 frameNumebrconfig;
-(?)runPostFrameDumpActions;
-(?)runPreFrameDumpActions:(?)arg0 tcControlhdrControl;
-(?)setSat2FactorTable:(?)arg0 TableSize:(?)arg1 DMConfigLLDoVi;
-(?)setupMSRHDRContext:(?)arg0 TCControl:(?)arg1 DMData:(?)arg2 inputoutput;
-(?)setupMSRMappingTableWithMetadata;
-(?)setupMSRToneMappingWithDmData:(?)arg0 tcControl:(?)arg1 hdrControl:(?)arg2 dmConfig:(?)arg3 DMhdr10InfoFrame;
-(BOOL)isMMREnabled;
-(id)init;
-(unsigned int)getMatrixScale2P:(*float)arg0 ;
-(unsigned int)getMatrixScale2P:(*float)arg0 OutputScale:(float)arg1 ;
-(unsigned int)polynomialTableScale;
-(unsigned int)setLms2RgbScale2P:(*float)arg0 OutputScale:(float)arg1 ;
-(void)checkNewFrameForDump;
-(void)createAdaptationLut;
-(void)createCustomScalingTables;
-(void)dealloc;
-(void)dumpMmrConfig;
-(void)initDMConfigCache;
-(void)printArray:(struct __sFILE *)arg0 Prefix:(char *)arg1 Array:(*void)arg2 Size:(NSUInteger)arg3 NumberPerLine:(NSUInteger)arg4 Format:(int)arg5 ;
-(void)setDegammaBuffer:(NSInteger)arg0 Buffer:(*float)arg1 TableSize:(NSUInteger)arg2 Type:(int)arg3 disableFixedMaxFP16Scaling:(BOOL)arg4 ;
-(void)setRegammaBuffer:(NSInteger)arg0 Buffer:(*float)arg1 TableSize:(NSUInteger)arg2 Type:(int)arg3 DPCParam:(struct _DpcParam *)arg4 ;
-(void)setupHardwareConfigUnit;
-(void)setupMSRColorConfig;
-(void)setupMSRPolynomialTableForHDR10;
-(void)setupMSRPolynomialTableForHDR10:(*unsigned short)arg0 TableLength:(unsigned int)arg1 ;
-(void)updateDegammaLUT:(struct MSRHDRContext *)arg0 AdditionalScaler:(float)arg1 ;
-(void)updateDegammaTable:(NSInteger)arg0 Table:(*float)arg1 TableSize:(NSUInteger)arg2 Type:(int)arg3 Scaler:(float)arg4 ;
-(void)updatePolynomialTables:(*unsigned short)arg0 TableSize:(NSUInteger)arg1 ;
-(void)updateRegammaLUT:(struct MSRHDRContext *)arg0 ;
-(void)updateRegammaTable:(NSInteger)arg0 Table:(*float)arg1 TableSize:(NSUInteger)arg2 ;


@end


#endif