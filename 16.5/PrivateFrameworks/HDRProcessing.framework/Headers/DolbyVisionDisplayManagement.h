// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOLBYVISIONDISPLAYMANAGEMENT_H
#define DOLBYVISIONDISPLAYMANAGEMENT_H

@protocol MTLDeviceSPI, MTLLibrary, MTLBuffer, MTLTexture;

#import <Foundation/Foundation.h>

#import "DMShader.h"
#import "DolbyVisionDM4.h"
#import "AdaptiveTM.h"
#import "HistBasedToneMapping.h"

@interface DolbyVisionDisplayManagement : NSObject {
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_defaultLibrary;
    DMShader *_displayManagementKernel;
    id<MTLBuffer> *_config;
    id<MTLTexture> *_inputYTexture;
    id<MTLTexture> *_inputUVTexture;
    id<MTLTexture> *_outputTexture;
    NSUInteger _inputProtectionOptions;
    NSUInteger _outputProtectionOptions;
    int _inputDmVersion;
    DolbyVisionDM4 *_dm40;
    AdaptiveTM *_adaptiveTM;
    HistBasedToneMapping *_histBasedToneMapping;
}




-(?)dovi84_getScalingFactor:(?)arg0 tableSize:(?)arg1 config:(?)arg2 tmParam:(?)arg3 edrAdaptationParam:(?)arg4 ambAdaptationParamhlgOOTFCombined;
-(?)dovi84_getScalingFactorForPT:(?)arg0 tableSize:(?)arg1 config:(?)arg2 tmParam:(?)arg3 edrAdaptationParam:(?)arg4 ambAdaptationParamhlgOOTFCombined;
-(?)dovi_computeDM4Tables:(?)arg0 config:(?)arg1 edrAdaptationParam:(?)arg2 ambAdaptationParam:(?)arg3 tLutI:(?)arg4 tLutS:(?)arg5 sLutI:(?)arg6 sLutS:(?)arg7 tLutISize:(?)arg8 tLutSSize:(?)arg9 sLutISize:(?)arg10 sLutSSize:(?)arg11 IsDoVi84HlgOOTFCombined;
-(?)dovi_setSat2FactorTable:(?)arg0 tableSize:(?)arg1 config:(?)arg2 llDoviapplyDoVi84SatAdjustment;
-(?)dovi_setScalingFactorTable:(?)arg0 lutInput:(?)arg1 tableSize:(?)arg2 config:(?)arg3 hdrCtrl:(?)arg4 tmParam:(?)arg5 edrAdaptationParam:(?)arg6 ambAdaptationParam:(?)arg7 hlgOOTFCombined:(?)arg8 hlgOOTFOnlyisDoVi84;
-(?)enableMSRandIOSTuning;
-(?)encodeToCommandBuffer:(?)arg0 Input:(?)arg1 Output:(?)arg2 MetaData:(?)arg3 tcControlhdrControl;
-(?)encodeToCommandBuffer:(?)arg0 Input:(?)arg1 OutputMetaData;
-(?)getSat2Parameters;
-(?)getToneCurves:(?)arg0 tcCtrl:(?)arg1 tmData:(?)arg2 srcMinPQ:(?)arg3 srcMaxPQ:(?)arg4 tgtMinPQ:(?)arg5 tgtMaxPQ:(?)arg6 srcDiagSize:(?)arg7 dstDiagSize:(?)arg8 EDRFactor:(?)arg9 ambient:(?)arg10 nominalPQ:(?)arg11 useLCDPanel:(?)arg12 referenceDisplay:(?)arg13 slopeScaled:(?)arg14 c1:(?)arg15 c2:(?)arg16 c3:(?)arg17 BrightAdjBySat2DM_MetaData;
-(?)getToneCurves:(?)arg0 tcCtrltmData;
-(?)getToneCurvesDM31;
-(?)initToneCurveParams:(?)arg0 srcMinPQ:(?)arg1 srcMaxPQ:(?)arg2 tgtMinPQ:(?)arg3 tgtMaxPQ:(?)arg4 srcCrushPQ:(?)arg5 srcMidPQ:(?)arg6 srcClipPQ:(?)arg7 srcDiagSize:(?)arg8 dstDiagSize:(?)arg9 EDRFactor:(?)arg10 ambient:(?)arg11 nominalPQ:(?)arg12 useLCDPanel:(?)arg13 noPCC:(?)arg14 referenceDisplay:(?)arg15 passThroughTM:(?)arg16 slopeScaled:(?)arg17 c1:(?)arg18 c2:(?)arg19 c3BrightAdjBySat2;
-(?)setConvertConfig:(?)arg0 tcCtrl:(?)arg1 hdrCtrl:(?)arg2 auxDatatmData;
-(?)setDisplayManagementConfigFromDictionary:(?)arg0 hdrCtrl:(?)arg1 tcCtrlinfoFrame;
-(?)setDisplayManagementConfigFromMetaData:(?)arg0 config:(?)arg1 hdrCtrltcCtrl;
-(?)setDisplayManagementToneMappingConfigFromDictionary:(?)arg0 hdrCtrl:(?)arg1 tcCtrlinfoFrame;
-(?)setDisplayManagementToneMappingConfigFromMetaData:(?)arg0 config:(?)arg1 tcCtrl:(?)arg2 hdrCtrl:(?)arg3 auxDatadpcParam;
-(?)setupDoViDmVersion:(?)arg0 tmDatahdrCtrl;
-(id)getAdaptiveTM;
-(id)getComputePipeLineStateForShader:(id)arg0 ;
-(id)getDolbyVisionDM4;
-(id)getHistBasedToneMapping;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithTmLutSize:(int)arg0 ;
-(void)releaseResources;
-(void)setInputDmVersion:(int)arg0 ;
-(void)setupMetal;
-(void)setupTexturesWithInput:(struct __IOSurface *)arg0 Output:(struct __IOSurface *)arg1 ;


@end


#endif