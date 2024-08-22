// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOLBYVISIONDM4_H
#define DOLBYVISIONDM4_H


#import <Foundation/Foundation.h>


@interface DolbyVisionDM4 : NSObject {
    float sMinPq;
    float sMaxPq;
    float tMinPq;
    float tMaxPq;
    float sCrushPq;
    float sMidPq;
    float sClipPq;
    float tMaxLinear;
    float sMinTm;
    float sMaxTm;
    float tMinTm;
    float tMaxTm;
    float sMinPqTm;
    float sMaxPqTm;
    float tMinPqTm;
    float tMaxPqTm;
    unsigned int dmAlgVerInCm;
    ? bt1886Param;
    ? pqOffset;
    ? trimData;
    ? trimData2;
    ? default2;
    ? valueAdj2;
    ? codeBias2;
    ? trimData8;
    ? default8;
    ? codeBias8;
    int powerAdj;
    int slopeAdj;
    int satGainAdj;
    int tMidContrastAdj;
    float SRGB2LMS;
    float TRGB2LMS;
    float LMS2ITP;
    float ITP2LMS;
    float RGB2LMS;
    float LMS2RGB;
    float YUV2RGB;
    float RGB2YUV;
    unsigned int Yuv2RgbOffset;
    unsigned int Rgb2YuvOffset;
    unsigned int inColorSpace;
    unsigned int outColorSpace;
    unsigned int outTransferFunction;
    unsigned int inputRange;
    unsigned int outputRange;
    float tCrushPq;
    float tMidPq;
    float tClipPq;
    float clipI;
    float clipSat;
    float clipIPred;
    float clipSatPred;
    float clipTmI;
    float clipSmI;
    float clipIPred2TmIRatio;
    float clipSatPred2SmISatRatio;
    float crushSlope;
    float midSlope;
    float clipSlope;
    float tms_change;
    float sms_change;
    float mLow;
    float bLow;
    float mHigh;
    float bHigh;
    float cLow;
    float cHigh;
    float ITPRedInSaturation;
    float ITPRedOutSaturation;
    NSUInteger tmLutSize;
    *float tmLutI;
    *float tmLutS;
    *float smLutI;
    *float smLutS;
}




-(?)BuildChromaXInfo:(?)arg0 TrimSetAct:(?)arg1 Luma:(?)arg2 Idxa:(?)arg3 IdxMax:(?)arg4 X2InterpDmMetaData;
-(?)BuildInterpInfo:(?)arg0 Xa:(?)arg1 Idxa:(?)arg2 TIdxMax:(?)arg3 X2Interp:(?)arg4 Alpha:(?)arg5 U16a:(?)arg6 U16L:(?)arg7 U16RDmMetaData;
-(?)BuildLumaXInfo:(?)arg0 TrimSetAct:(?)arg1 Luma:(?)arg2 Idxa:(?)arg3 IdxMax:(?)arg4 X2InterpDmMetaData;
-(?)DecodeL2L8:(?)arg0 CodeBias2:(?)arg1 TrimData8:(?)arg2 CodeBias8:(?)arg3 Default8:(?)arg4 UseDftLumaUseDftChroma;
-(?)SetL2L8L10:(?)arg0 TrimData8:(?)arg1 Default8:(?)arg2 UseDftLumaUseDftChroma;
-(?)applyL3;
-(?)createToneCurve:(?)arg0 srcMaxPQ:(?)arg1 tgtMinPQ:(?)arg2 tgtMaxPQ:(?)arg3 srcCrushPQ:(?)arg4 srcMidPQ:(?)arg5 srcClipPQ:(?)arg6 targetMaxLinearDM_MetaData;
-(?)debugDMMetaData2;
-(?)debugDMMetaData8;
-(?)debugTrimData2;
-(?)debugTrimData8;
-(?)hasDM4TonemapConfigChanged:(?)arg0 TonemapConfig:(?)arg1 EdrAdaptationParamAmbAdaptationParam;
-(?)initToneMapParams:(?)arg0 srcMaxPQ:(?)arg1 tgtMinPQ:(?)arg2 tgtMaxPQ:(?)arg3 srcCrushPQ:(?)arg4 srcMidPQ:(?)arg5 srcClipPQ:(?)arg6 targetMaxLinearDM_MetaData;
-(?)initTrimData;
-(?)updateDM4TonemapConfig:(?)arg0 DMConfig:(?)arg1 EdrAdaptationParamAmbAdaptationParam;
-(float)satMapI:(float)arg0 Adm:(float)arg1 ;
-(float)satMapS:(float)arg0 ;
-(float)toneMapI:(float)arg0 ;
-(float)toneMapInterpI:(float)arg0 ;
-(float)toneMapS:(float)arg0 ;
-(id)init:(NSUInteger)arg0 ;
-(void)DmProcess:(int)arg0 Height:(int)arg1 bufI:(*float)arg2 bufU:(*float)arg3 bufV:(*float)arg4 ;
-(void)InputMapping:(*float)arg0 pX1:(*float)arg1 pX2:(*float)arg2 ;
-(void)OutputMapping:(*float)arg0 pX1:(*float)arg1 pX2:(*float)arg2 ;
-(void)ToneMapping:(*float)arg0 pX1:(*float)arg1 pX2:(*float)arg2 pAdm:(*float)arg3 ;
-(void)ToneMappingInCtrl:(*float)arg0 pX1:(*float)arg1 pX2:(*float)arg2 pAdm:(*float)arg3 ;
-(void)calcToneMapParams;
-(void)createTmLuts:(*float)arg0 tLutS:(*float)arg1 sLutI:(*float)arg2 sLutS:(*float)arg3 tLutISize:(NSUInteger)arg4 tLutSSize:(NSUInteger)arg5 sLutISize:(NSUInteger)arg6 sLutSSize:(NSUInteger)arg7 ;
-(void)createTmLutsEx:(*float)arg0 tLutS:(*float)arg1 sLutI:(*float)arg2 sLutS:(*float)arg3 tLutISize:(NSUInteger)arg4 tLutSSize:(NSUInteger)arg5 sLutISize:(NSUInteger)arg6 sLutSSize:(NSUInteger)arg7 TmParam:(struct _DoViTMParam *)arg8 EdrAdaptationParam:(struct _EdrAdaptationParam *)arg9 AmbAdaptationParam:(struct _AmbAdaptationParam *)arg10 IsDoVi84:(BOOL)arg11 HlgOOTFCombined:(BOOL)arg12 ;
-(void)dealloc;
-(void)dumpConfigData:(struct __sFILE *)arg0 ;
-(void)dumpConfigDataToFile:(int)arg0 ;
-(void)initBt1886Param;
-(void)initColorSpace:(unsigned int)arg0 OutClrSpace:(unsigned int)arg1 OutTrfFunction:(unsigned int)arg2 ;
-(void)initDmAlgVerInCm:(unsigned int)arg0 ;
-(void)initToneMapMatrices:(*float)arg0 tgtRgb2Lms:(*float)arg1 ;
-(void)initToneMapMatrices:(unsigned int)arg0 outbits:(unsigned int)arg1 srcRgb2Lms:(*float)arg2 tgtRgb2Lms:(*float)arg3 ;
-(void)setPseudoTrimDataForHLG:(float)arg0 ;


@end


#endif