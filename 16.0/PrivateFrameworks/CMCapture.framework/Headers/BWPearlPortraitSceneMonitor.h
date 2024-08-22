// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWPEARLPORTRAITSCENEMONITOR_H
#define BWPEARLPORTRAITSCENEMONITOR_H

@class NSString;
@protocol BWPortraitSceneMonitor;

#import <Foundation/Foundation.h>


@interface BWPearlPortraitSceneMonitor : NSObject <BWPortraitSceneMonitor>

 {
    int _numberOfFramesToWaitForAEAndLTMToStabilize;
    float _sdofDepthQualitySmoothingFactor;
    float _luxLevelSmoothingFactor;
    int _numberOfDisabledFramesInARow;
    int _numberOfFramesToStayEnabledThreshold;
    unsigned short _sdofTooBrightLuxLevelThreshold;
    unsigned short _sdofTooBrightMaxLuxLevelThreshold;
    float _sdofTooBrightDepthQualityMinThreshold;
    float _sdofDepthQualityKCount;
    float _sdofTooCloseDepthDistanceThreshold;
    float _sdofTooFarDepthDistanceThreshold;
    float _sdofTooBrightTooFarDepthDistanceThreshold;
    int _sdofNumberOfFramesSinceLastFaceThreshold;
    float _stageTooBrightDepthQualityThreshold;
    float _stageTooCloseDepthDistanceThreshold;
    float _stageTooFarDepthDistanceThreshold;
    float _stageBackgroundTooFarDepthQualityThreshold;
    unsigned short _stageBackgroundTooFarLuxLevelThreshold;
    int _stageFaceNumberOfFramesSinceLastFaceThreshold;
    BOOL _disablePreviewWhenTooBright;
    float _closeDepthDistanceAverage;
    float _sdofDepthQuality;
    float _sdofDepthQualityFiltered;
    float _stageDepthQuality;
    float _luxLevelFiltered;
    BOOL _aeStableAfterStartStreaming;
    int _sdofNumFramesSinceAEBecameStable;
    BOOL _depthSensorOccluded;
    BOOL _stageFaceDetected;
    int _numberOfFramesSinceLastFace;
    BOOL _stageFaceHasBeenSeen;
    int _stageMostRecentFacesCount;
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