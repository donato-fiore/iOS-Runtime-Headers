// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWSINGLECAMERAPORTRAITSCENEMONITOR_H
#define BWSINGLECAMERAPORTRAITSCENEMONITOR_H

@class NSDictionary, NSString;
@protocol BWPortraitSceneMonitor;

#import <Foundation/Foundation.h>

#import "BWTrackedFace.h"

@interface BWSingleCameraPortraitSceneMonitor : NSObject <BWPortraitSceneMonitor>

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
    float _numFacesDetectedFiltered;
    BOOL _subjectTooCloseMonitoringEnabled;
    BOOL _subjectIsTooClose;
    float _subjectTooCloseFocusDistanceThreshold;
    float _subjectTooCloseFocusDistanceHysteresisLag;
    int _subjectTooCloseLastFocusPosition;
    BOOL _subjectTooFarMonitoringEnabled;
    BOOL _subjectTooFarDistanceThresholdReached;
    float _subjectTooFarFocusDistanceThreshold;
    float _subjectTooFarFocusDistanceHysteresisLag;
    int _subjectTooFarLastFocusPosition;
    BOOL _useAPSFocusDistance;
    BOOL _sceneTooDarkMonitoringEnabled;
    BOOL _sceneIsTooDark;
    int _lastSDOFEffectStatus;
    float _lastFocusDistance;
    BWTrackedFace *_currentlyTrackedFace;
    BOOL _enabled;
    int _stageFaceNumberOfFramesSinceLastFaceThreshold;
    BOOL _stageFaceDetected;
    BOOL _stageFaceHasBeenSeen;
    int _numberOfFramesSinceLastFace;
    int _stageMostRecentFacesCount;
    NSDictionary *_cinematicVideoFocusRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) float focusDistanceToMaxAllowedFocusDistanceRatio;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL portraitSceneMonitoringRequiresStageThresholds; // ivar: _portraitSceneMonitoringRequiresStageThresholds
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)resolveSDOFStatusWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 frameStatisticsByPortType:(id)arg1 sceneFlags:(NSUInteger)arg2 flashOrTorchWillBeActive:(BOOL)arg3 digitalFlashWillFire:(BOOL)arg4 effectStatus:(*int)arg5 stagePreviewStatus:(*int)arg6 ;
-(float)_focusDistanceFromAPSMetadata:(id)arg0 ;
-(float)_focusDistanceFromFacesAttachedToSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)initWithTuningParameters:(id)arg0 attachDebugFrameStatistics:(BOOL)arg1 ;
-(void)dealloc;
-(void)focusScanDidComplete;
-(void)setAutoFocusInProgress:(BOOL)arg0 focusLocked:(BOOL)arg1 oneShotFocusScanInProgress:(BOOL)arg2 ;
-(void)setSDOFBackgroundShiftSum:(float)arg0 invalidShiftRatio:(float)arg1 closeCanonicalDisparityAverage:(float)arg2 faceCanonicalDisparityAverages:(id)arg3 erodedForegroundRatio:(float)arg4 foregroundRatio:(float)arg5 occluded:(BOOL)arg6 faces:(id)arg7 ;


@end


#endif