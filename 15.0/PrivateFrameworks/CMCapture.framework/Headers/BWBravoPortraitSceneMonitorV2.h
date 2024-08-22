// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWBRAVOPORTRAITSCENEMONITORV2_H
#define BWBRAVOPORTRAITSCENEMONITORV2_H

@class NSArray, NSString;
@protocol BWPortraitSceneMonitor;

#import <Foundation/Foundation.h>


@interface BWBravoPortraitSceneMonitorV2 : NSObject <BWPortraitSceneMonitor>

 {
    int _numberOfFramesWithStableFocusThreshold;
    BOOL _oneShotFocusScanInProgress;
    BOOL _focusLocked;
    int _numFramesSinceFocusLocked;
    int _numFramesSinceFocusBecameStable;
    BOOL _focusHasBeenAttainedAfterStart;
    int _numFramesSinceFocusFirstAttainedStability;
    BOOL _focusIsStationaryBeyondThreshold;
    BOOL _subjectTooCloseMonitoringEnabled;
    BOOL _subjectTooCloseMonitoringForcingWideLens;
    float _subjectTooCloseFocusDistanceThreshold;
    float _subjectTooCloseHysteresis;
    BOOL _subjectIsTooClose;
    BOOL _subjectTooClosePreviousFrame;
    BOOL _subjectTooFarMonitoringEnabled;
    float _subjectTooFarFocusDistanceThreshold;
    float _subjectTooFarBackgroundShiftSumTooLowThreshold;
    BOOL _subjectTooFarDistanceThresholdReached;
    float _subjectTooFarDistanceThresholdHysteresis;
    BOOL _backgroundShiftSumTooLowThresholdReached;
    float _subjectTooFarBackGroundShiftSumIsTooLowHysteresis;
    float _jasperDistanceAtFocus;
    BOOL _subjectIsTooFarDigitalFlash;
    BOOL _subjectIsTooFarForStageDigitalFlash;
    float _subjectTooFarDigitalFlashThreshold;
    float _stageTooFarDigitalFlashThreshold;
    float _sceneTooDarkGainThresholdHard;
    float _jasperDistanceAtFocusSmoothingFactor;
    BOOL _subjectIsTooFar;
    BOOL _subjectIsTooFarForStage;
    BOOL _subjectIsTooFarForStageNoFaces;
    BOOL _deliveryOfShiftsHasStarted;
    float _backgroundShiftSumSmoothed;
    float _backgroundShiftSumSmoothingTrend;
    float _backgroundShiftSumSmoothingFactor;
    float _backgroundShiftSumSmoothingTrendUpdateFactor;
    float _invalidShiftRatioSmoothed;
    float _invalidShiftRatioSmoothingFactor;
    BOOL _sceneTooDarkMonitoringEnabled;
    float _sceneTooDarkGainThreshold;
    float _sceneTooDarkAEAverageAETargetFractionThreshold;
    float _sceneTooDarkAEAverageAETargetFractionThresholdHysteresisLag;
    BOOL _sceneIsTooDark;
    BOOL _stageFaceMonitoringEnabled;
    int _stageFaceNumberOfFramesSinceLastFace;
    BOOL _stageFaceHasBeenSeen;
    int _stageFaceNumberOfFramesSinceLastFaceThreshold;
    NSArray *_stageMostRecentFaces;
    BOOL _stageTooFarMonitoringEnabled;
    float _stageTooFarFocusDistanceThreshold;
    BOOL _stageTooFarDistanceThresholdReached;
    float _stageTooFarDistanceThresholdHysteresis;
    BOOL _stageBackgroundShiftSumTooLowThresholdReached;
    float _stageTooFarBackgroundShiftSumTooLowThreshold;
    float _stageTooFarBackGroundShiftSumIsTooLowHysteresis;
    BOOL _stageTooFarBackgroundShiftSumNoFacesIsTooLow;
    float _stageTooFarBackgroundShiftSumNoFacesThreshold;
    int _lastSDOFEffectStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) float focusDistanceToMaxAllowedFocusDistanceRatio;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL portraitSceneMonitoringRequiresStageThresholds; // ivar: _portraitSceneMonitoringRequiresStageThresholds
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)resolveSDOFStatusWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 frameStatisticsByPortType:(id)arg1 sceneFlags:(NSUInteger)arg2 flashOrTorchWillBeActive:(BOOL)arg3 digitalFlashWillFire:(BOOL)arg4 effectStatus:(*int)arg5 stagePreviewStatus:(*int)arg6 ;
-(id)initWithTuningParameters:(id)arg0 attachDebugFrameStatistics:(BOOL)arg1 ;
-(void)dealloc;
-(void)doubleExponentialSmoothing:(float)arg0 smoothValue:(*float)arg1 trendValue:(*float)arg2 dataFactor:(float)arg3 trendFactor:(float)arg4 ;
-(void)focusScanDidComplete;
-(void)setAutoFocusInProgress:(BOOL)arg0 focusLocked:(BOOL)arg1 oneShotFocusScanInProgress:(BOOL)arg2 ;
-(void)setSDOFBackgroundShiftSum:(float)arg0 invalidShiftRatio:(float)arg1 closeCanonicalDisparityAverage:(float)arg2 faceCanonicalDisparityAverages:(id)arg3 erodedForegroundRatio:(float)arg4 foregroundRatio:(float)arg5 occluded:(BOOL)arg6 faces:(id)arg7 ;


@end


#endif