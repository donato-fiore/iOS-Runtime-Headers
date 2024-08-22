// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWACTIONCAMERASCENEMONITOR_H
#define BWACTIONCAMERASCENEMONITOR_H

@class NSDictionary, NSString;
@protocol BWPortraitSceneMonitor;

#import <Foundation/Foundation.h>


@interface BWActionCameraSceneMonitor : NSObject <BWPortraitSceneMonitor>

 {
    BOOL _oneShotFocusScanInProgress;
    BOOL _sceneTooDarkMonitoringEnabled;
    NSDictionary *_luxThresholdsByPortType;
    BOOL _sceneIsTooDark;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) float focusDistanceToMaxAllowedFocusDistanceRatio;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL portraitSceneMonitoringRequiresStageThresholds; // ivar: _portraitSceneMonitoringRequiresStageThresholds
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)resolveSDOFStatusWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 frameStatisticsByPortType:(id)arg1 sceneFlags:(NSUInteger)arg2 flashOrTorchWillBeActive:(BOOL)arg3 digitalFlashWillFire:(BOOL)arg4 effectStatus:(*int)arg5 stagePreviewStatus:(*int)arg6 ;
-(id)initWithTuningParametersByPortType:(id)arg0 videoStabilizationStrength:(int)arg1 bravoTelephotoEnabled:(BOOL)arg2 attachDebugFrameStatistics:(BOOL)arg3 ;
-(void)dealloc;
-(void)focusScanDidComplete;
-(void)setAutoFocusInProgress:(BOOL)arg0 focusLocked:(BOOL)arg1 oneShotFocusScanInProgress:(BOOL)arg2 ;
-(void)setSDOFBackgroundShiftSum:(float)arg0 invalidShiftRatio:(float)arg1 closeCanonicalDisparityAverage:(float)arg2 faceCanonicalDisparityAverages:(id)arg3 erodedForegroundRatio:(float)arg4 foregroundRatio:(float)arg5 occluded:(BOOL)arg6 faces:(id)arg7 ;


@end


#endif