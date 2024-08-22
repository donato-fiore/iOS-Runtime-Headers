// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWBRAVOPORTRAITSCENEMONITOR_H
#define BWBRAVOPORTRAITSCENEMONITOR_H

@class NSArray, NSString;
@protocol BWPortraitSceneMonitor;

#import <Foundation/Foundation.h>


@interface BWBravoPortraitSceneMonitor : NSObject <BWPortraitSceneMonitor>

 {
    float _backgroundShiftSumFiltered;
    float _invalidShiftRatioFiltered;
    BOOL _oneShotFocusScanInProgress;
    BOOL _focusLocked;
    int _numFramesSinceFocusLocked;
    BOOL _focusStableAfterStartStreaming;
    BOOL _focusAdjusting;
    int _lastFocusingMethod;
    int _numFramesSinceFocusBecameStable;
    BOOL _aeStableAfterStartStreaming;
    int _numFramesSinceAEBecameStable;
    BOOL _useLensMakersFocusDistance;
    BOOL _subjectTooCloseMonitoringEnabled;
    BOOL _subjectIsTooClose;
    float _subjectTooCloseWideFocusDistanceThreshold;
    float _subjectTooCloseWideFocusDistanceHysteresisLag;
    int _subjectTooCloseLastWideFocusPosition;
    BOOL _subjectTooFarMonitoringEnabled;
    BOOL _subjectTooFarDistanceThresholdReached;
    float _subjectTooFarFocusDistanceThreshold;
    float _subjectTooFarFocusDistanceHysteresisLag;
    float _subjectTooFarFocusDistanceInfinityThreshold;
    BOOL _subjectTooFarUseTeleForFocusDistance;
    BOOL _subjectTooFarBackgroundShiftSumIsTooLow;
    int _subjectTooFarBackgroundShiftTooLowNumFrames;
    float _subjectTooFarBackgroundShiftSumTooLowThreshold;
    float _subjectTooFarBackgroundShiftSumTooLowHysteresisLag;
    float _subjectTooFarBackgroundShiftRollOffInvalidShiftRatioStart;
    float _subjectTooFarBackgroundShiftRollOffInvalidShiftRatioEnd;
    int _subjectTooFarLastTeleFocusPosition;
    BOOL _sceneTooDarkMonitoringEnabled;
    BOOL _sceneIsTooDark;
    BOOL _sceneTooDarkExposureThresholdReached;
    float _sceneTooDarkGainThreshold;
    float _sceneTooDarkGainHysteresisLag;
    float _sceneTooDarkInvalidShiftRatioThreshold;
    float _sceneTooDarkInvalidShiftRatioHysteresisLag;
    BOOL _stageFaceMonitoringEnabled;
    BOOL _stageFaceDetected;
    int _stageFaceNumberOfFramesSinceLastFace;
    BOOL _stageFaceHasBeenSeen;
    int _stageFaceNumberOfFramesSinceLastFaceThreshold;
    NSArray *_stageMostRecentFaces;
    float _stageTooFarFocusDistanceThreshold;
    BOOL _stageSubjectTooFarDistanceThresholdReached;
    int _stageTooFarBackgroundShiftTooLowNumFrames;
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
-(void)focusScanDidComplete;
-(void)setAutoFocusInProgress:(BOOL)arg0 focusLocked:(BOOL)arg1 oneShotFocusScanInProgress:(BOOL)arg2 ;
-(void)setSDOFBackgroundShiftSum:(float)arg0 invalidShiftRatio:(float)arg1 closeCanonicalDisparityAverage:(float)arg2 faceCanonicalDisparityAverages:(id)arg3 erodedForegroundRatio:(float)arg4 foregroundRatio:(float)arg5 occluded:(BOOL)arg6 faces:(id)arg7 ;


@end


#endif