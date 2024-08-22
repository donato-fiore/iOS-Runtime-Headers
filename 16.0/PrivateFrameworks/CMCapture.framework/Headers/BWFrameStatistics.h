// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWFRAMESTATISTICS_H
#define BWFRAMESTATISTICS_H

@class NSString, NSDictionary, NSArray, NSData;

#import <Foundation/Foundation.h>


@interface BWFrameStatistics : NSObject {
    NSString *_portType;
    NSDictionary *_aeStatistics;
    NSArray *_displayStrobeRGBEstimate;
    NSData *_colorCorrectionMatrix;
    *? _storage;
}


@property (readonly, nonatomic) unsigned int aeAverage;
@property (readonly, nonatomic) unsigned int aeFaceAverage;
@property (readonly, nonatomic) BOOL aeLimitsReached;
@property (readonly, nonatomic) BOOL aeLocked;
@property (readonly, nonatomic) BOOL aeStable;
@property (readonly, nonatomic) NSDictionary *aeStatistics;
@property (readonly, nonatomic) unsigned int aeTarget;
@property (readonly, nonatomic) BOOL afLocked;
@property (readonly, nonatomic) int afStationaryCount;
@property (readonly, nonatomic) int afStatus;
@property (readonly, nonatomic) unsigned int agc;
@property (readonly, nonatomic) unsigned short awbBGain;
@property (readonly, nonatomic) unsigned short awbComboBGain;
@property (readonly, nonatomic) unsigned short awbComboGGain;
@property (readonly, nonatomic) unsigned short awbComboRGain;
@property (readonly, nonatomic) unsigned short awbGGain;
@property (readonly, nonatomic) BOOL awbLocked;
@property (readonly, nonatomic) unsigned short awbRGain;
@property (readonly, nonatomic) unsigned short awbSkinBGain;
@property (readonly, nonatomic) unsigned short awbSkinGGain;
@property (readonly, nonatomic) unsigned short awbSkinRGain;
@property (readonly, nonatomic) unsigned int awbSpatialCCMMixingFactor;
@property (readonly, nonatomic) BOOL awbStable;
@property (readonly, nonatomic) float baseISO;
@property (readonly, nonatomic) unsigned int cct;
@property (readonly, nonatomic) NSData *colorCorrectionMatrix;
@property (readonly, nonatomic) unsigned int conversionGain;
@property (readonly, nonatomic) float currentFrameRate;
@property (readonly, nonatomic) NSArray *displayStrobeRGBEstimate;
@property (readonly, nonatomic) CGFloat eit;
@property (readonly, nonatomic) CGFloat exposureBias;
@property (readonly, nonatomic) CGRect finalCropRect;
@property (readonly, nonatomic) float focusDistance;
@property (readonly, nonatomic) int focusPosition;
@property (readonly, nonatomic) int focusPositionStep;
@property (readonly, nonatomic) int focusingMethod;
@property (readonly, nonatomic) float gain;
@property (readonly, nonatomic) BOOL hrEnabled;
@property (readonly, nonatomic) CGFloat integrationTime;
@property (readonly, nonatomic) unsigned int ispDGain;
@property (readonly, nonatomic) float ispDGainRangeExpansionFactor;
@property (readonly, nonatomic) float lensMakersFocusDistance;
@property (readonly, nonatomic) int logicalFocusLensPosition;
@property (readonly, nonatomic) int logicalFocusLensPositionStep;
@property (readonly, nonatomic) int ltmCurve;
@property (readonly, nonatomic) unsigned int luxLevel;
@property (readonly, nonatomic) float motionDataBiasErrorEstimate;
@property (readonly, nonatomic) unsigned int motionDataStatus;
@property (readonly, nonatomic) int motionFromAEMatrix;
@property (readonly, nonatomic) float normalizedSNR;
@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) ? pts;
@property (readonly, nonatomic) unsigned int readNoise_1x;
@property (readonly, nonatomic) unsigned int readNoise_8x;
@property (readonly, nonatomic) unsigned int sensorDGain;
@property (readonly, nonatomic) float sifrGain;


-(id)description;
-(struct ? *)frameStatisticsStorage;
-(void)_setAEStatistics:(id)arg0 ;
-(void)dealloc;


@end


#endif