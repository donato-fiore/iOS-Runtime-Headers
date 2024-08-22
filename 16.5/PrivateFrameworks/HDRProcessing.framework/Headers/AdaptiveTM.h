// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADAPTIVETM_H
#define ADAPTIVETM_H


#import <Foundation/Foundation.h>

#import "HistBasedToneMapping.h"

@interface AdaptiveTM : NSObject {
    HistBasedToneMapping *_histTM;
    unsigned int _frameNumber;
    float _displayAveragePixelThreshold;
    float _displaySustainedBrightnessInNits;
    float _constraintSlope;
    float _constraintIntercept;
    float _targetAveragePixelThreshold;
    CGFloat _targetMaxLinear;
    CGFloat _atmTargetMaxLinear;
    CGFloat _filteredTargetMaxLinear;
    *float _normHistHeight;
    *float _histBinCentroidInPQ;
    *float _histBinCentroidInLinear;
    CGFloat _uiLinear;
    NSUInteger _sumHist;
    *float _normHistHeightInLinear;
    *float _atmHistBinCentroidInLinear;
    *float _idxLinear;
    *float _histBinMapped;
    *unsigned int _histHeight;
    *float _histCenter;
    int _scalingFactorMode;
    float _avgPixelLevelTm;
    float _avgPixelLevel;
    float _avgPixelLevelRatio;
    float _avgPixelLevelRatioTm;
    float _apceFactor;
    unsigned int _atmFrames;
    int _prevAplRange;
    float _maxAvgPixelLevelRatioTm;
    float _minAvgPixelLevelRatioTm;
    float _averageAPLThreshold;
    float _averageDPL;
    float _averageTPL;
    *__sFILE _fpAplRatioDump;
    *__sFILE _fpAplTmDump;
    *__sFILE _fpAplRatioTmDump;
    *__sFILE _fpAplAtmDump;
    *__sFILE _fpAplRatioAtmDump;
}




-(?)adaptiveToneMappingAveragePixelLevel:(?)arg0 DM:(?)arg1 TCControl:(?)arg2 HDRControlLLDoVi;
-(?)adaptiveToneMappingManagement:(?)arg0 DMConfig:(?)arg1 DM:(?)arg2 TCControl:(?)arg3 HDRControl:(?)arg4 hdr10InfoFrame:(?)arg5 LLDoViframeNumber;
-(?)adaptiveToneMappingSearch:(?)arg0 DMConfig:(?)arg1 DM:(?)arg2 TCControl:(?)arg3 HDRControl:(?)arg4 hdr10InfoFrameLLDoVi;
-(?)adaptiveToneMappingTemporalProcess:(?)arg0 DMConfig:(?)arg1 DM:(?)arg2 TCControl:(?)arg3 HDRControlhdr10InfoFrame;
-(float)computeFrameAPLFromLinearHistData:(*float)arg0 histBinInLinear:(*float)arg1 ;
-(id)init:(id)arg0 ;
-(void)adaptiveToneMappingCalcStats;
-(void)adaptiveToneMappingConstraintParam;
-(void)adaptiveToneMappingLog;
-(void)dealloc;
-(void)getTargetAveragePixelThreshold:(float)arg0 ;


@end


#endif