// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWAGGDDATAREPORTER_H
#define BWAGGDDATAREPORTER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BWAggdDataReporter : NSObject {
    NSObject<OS_dispatch_queue> *_aggdDispatchQueue;
    int _lastShutterLag;
}




+(id)sharedInstance;
+(void)initialize;
-(id)_aggdCameraStreamingTimeStringFromDeviceType:(int)arg0 devicePosition:(int)arg1 ;
-(id)_aggdGNRProcessingStatusStringFromProcessingStatus:(int)arg0 ;
-(id)_aggdPearlInfraredProjectorUptimeStringFromCurrent:(int)arg0 pattern:(int)arg1 applicationID:(id)arg2 ;
-(id)_aggdSDOFProcessingStatusStringFromProcessingStatus:(int)arg0 ;
-(id)_aggdStereoFusionProcessingStatusStringFromProcessingStatus:(int)arg0 ;
-(id)_aggdStereoFusionProcessingTypeStringForCaptureType:(int)arg0 isStereoFusionCapture:(BOOL)arg1 wideSubCaptureType:(int)arg2 teleSubCaptureType:(int)arg3 isOriginalImage:(BOOL)arg4 ;
-(id)_aggdStringForPrefix:(id)arg0 primaryCaptureType:(int)arg1 secondaryCaptureType:(int)arg2 captureFlags:(NSUInteger)arg3 sceneFlags:(NSUInteger)arg4 stillDuringVideo:(BOOL)arg5 frontCamera:(BOOL)arg6 ;
-(id)init;
-(int)lastShutterLag;
-(void)dealloc;
-(void)reportAPSOffsetEstimatorForPortType:(id)arg0 accelMotion:(float)arg1 gyroMotion:(float)arg2 inSessionOffset:(float)arg3 deltaOffsetFC:(float)arg4 deltaOffsetMI:(float)arg5 deltaOffsetFATP:(float)arg6 deltaOffsetLastSession:(float)arg7 errorHeadroomViolated:(BOOL)arg8 errorConvergenceFailed:(BOOL)arg9 errorMotionTooLarge:(BOOL)arg10 errorConfidenceTooLow:(BOOL)arg11 errorOffsetTooLarge:(BOOL)arg12 errorDeltaTooLarge:(BOOL)arg13 errorSaturated:(BOOL)arg14 errorCouldNotRun:(BOOL)arg15 successRun:(BOOL)arg16 startAPSVoltage:(int)arg17 modeGCOL:(BOOL)arg18 modeOL:(BOOL)arg19 ;
-(void)reportAPSSphereInteractionCalibrationForPosition:(int)arg0 residualErrorNeutral:(float)arg1 calibrationZHeightNeutral:(float)arg2 residualErrorMacro:(float)arg3 calibrationZHeightMacro:(float)arg4 calibrationStatus:(unsigned int)arg5 isValid:(BOOL)arg6 ;
-(void)reportAutoFocusCalibrationForPosition:(int)arg0 freqZ:(int)arg1 deltaFreqZ:(int)arg2 qZ:(int)arg3 deltaQZ:(int)arg4 gainZ:(int)arg5 calibrationStatus:(unsigned int)arg6 gelModelCoefficientD1:(*int)arg7 gelModelCoefficientD2:(*int)arg8 gelModelCoefficientP1:(*int)arg9 gelModelCoefficientP2:(*int)arg10 isValid:(BOOL)arg11 ;
-(void)reportAutoFocusPositionSensorCalibrationForPosition:(int)arg0 iStopZEstimate:(int)arg1 eSensorOutput:(short)arg2 wSensorOutput:(short)arg3 gravityZ:(int)arg4 calibrationStatus:(unsigned int)arg5 sensorTemp:(short)arg6 successfulInfinityEndStopDelta:(int)arg7 currentInfinityEndStopDelta:(int)arg8 previousInfinityEndStopDelta:(int)arg9 currentAngleDelta:(int)arg10 previousAngleDelta:(int)arg11 factoryCalibrationOffset:(*int)arg12 estimatedNeutralZ:(*int)arg13 deltaNeutralZFromNVM:(*int)arg14 estimatedSagZ:(*int)arg15 combinedSensorOutput:(*int)arg16 deltaSagFromNVM:(*int)arg17 isValid:(BOOL)arg18 dataWasRejectedByHistory:(BOOL)arg19 ;
-(void)reportAutoFocusPositionSensorMode:(int)arg0 portType:(id)arg1 ;
-(void)reportCalibrationStatisticsWithTime:(id)arg0 timeValue:(CGFloat)arg1 attemptsField:(id)arg2 attemptsValue:(NSInteger)arg3 successField:(id)arg4 successValue:(NSInteger)arg5 magneticFieldMagnitudeField:(id)arg6 magneticFieldMagnitudeValue:(CGFloat)arg7 ;
-(void)reportCameraAppCaptureForNonCameraAppLoggingWithFrontCamera:(BOOL)arg0 ;
-(void)reportCameraLaunchWithPrewarm:(int)arg0 reason:(id)arg1 ;
-(void)reportCameraLaunchWithoutPrewarm:(int)arg0 ;
-(void)reportCameraStreamingTimeInMilliseconds:(NSUInteger)arg0 deviceType:(int)arg1 devicePosition:(int)arg2 ;
-(void)reportCriticalFocusErrorOccurredForPortType:(id)arg0 ;
-(void)reportFaceCount:(unsigned int)arg0 frontCamera:(BOOL)arg1 ;
-(void)reportGNRSampleBufferProcessorProcessingStatus:(int)arg0 ;
-(void)reportISPCreateDuration:(int)arg0 ;
-(void)reportLockScreenCameraLaunchCancelledWithPrewarming:(BOOL)arg0 ispStreamingStarted:(BOOL)arg1 ;
-(void)reportLockScreenCameraLaunchCompletedWithPrewarming:(BOOL)arg0 restartedSessionDueToError:(int)arg1 ;
-(void)reportLuxLevel:(unsigned int)arg0 primaryCaptureType:(int)arg1 secondaryCaptureType:(int)arg2 captureFlags:(NSUInteger)arg3 sceneFlags:(NSUInteger)arg4 stillDuringVideo:(BOOL)arg5 frontCamera:(BOOL)arg6 ;
-(void)reportNonCameraAppCaptureWithPrimaryCaptureType:(int)arg0 secondaryCaptureType:(int)arg1 captureFlags:(NSUInteger)arg2 sceneFlags:(NSUInteger)arg3 stillDuringVideo:(BOOL)arg4 frontCamera:(BOOL)arg5 ;
-(void)reportPearlInfraredProjectorUptime:(NSUInteger)arg0 current:(int)arg1 pattern:(int)arg2 applicationID:(id)arg3 ;
-(void)reportSDOFSampleBufferProcessorProcessingStatus:(int)arg0 ;
-(void)reportSensorTemperature:(unsigned int)arg0 frontCamera:(BOOL)arg1 ;
-(void)reportShutterLag:(struct ? )arg0 primaryCaptureType:(int)arg1 secondaryCaptureType:(int)arg2 captureFlags:(NSUInteger)arg3 sceneFlags:(NSUInteger)arg4 stillDuringVideo:(BOOL)arg5 frontCamera:(BOOL)arg6 ;
-(void)reportSphereCalibrationForPosition:(int)arg0 freqX:(float)arg1 deltaFreqX:(float)arg2 qX:(float)arg3 deltaQX:(float)arg4 gainX:(float)arg5 freqY:(float)arg6 deltaFreqY:(float)arg7 qY:(float)arg8 deltaQY:(float)arg9 gainY:(float)arg10 calibrationStatus:(unsigned int)arg11 isValid:(BOOL)arg12 ;
-(void)reportSphereEndStopCalibrationForPosition:(int)arg0 oisPositiveX:(int)arg1 oisNegativeX:(int)arg2 oisPositiveY:(int)arg3 oisNegativeY:(int)arg4 maxPositiveXDriftFromNVM:(int)arg5 maxNegativeXDriftFromNVM:(int)arg6 maxPositiveYDriftFromNVM:(int)arg7 maxNegativeYDriftFromNVM:(int)arg8 sphereStrokeX:(int)arg9 sphereStrokeY:(int)arg10 calibrationStatus:(unsigned int)arg11 isValid:(BOOL)arg12 ;
-(void)reportSphereJitterDetectionsForPortType:(id)arg0 detectionAttemps:(int)arg1 successfulDetections:(int)arg2 ;
-(void)reportStereoFusionProcessingTypeForCaptureType:(int)arg0 isStereoFusionCapture:(BOOL)arg1 wideSubCaptureType:(int)arg2 teleSubCaptureType:(int)arg3 isOriginalImage:(BOOL)arg4 ;
-(void)reportStereoFusionSampleBufferProcessorProcessingStatus:(int)arg0 ;
-(void)reportStillImageAPSStatisticsForPortType:(id)arg0 logicalFocusPosition:(int)arg1 apsMotion:(float)arg2 sphereMotion:(float)arg3 accelMotion:(float)arg4 gyroMotion:(float)arg5 subjectDistance:(float)arg6 luxLevel:(int)arg7 ;
-(void)reportVideoRecordingAPSStatistics:(float)arg0 stdDataFromAPSForTele:(float)arg1 stdDataFromSphereForWide:(float)arg2 stdDataFromSphereForTele:(float)arg3 stdDataFromAccel:(float)arg4 stdDataFromGyro:(float)arg5 maxDataFromAPSForWide:(float)arg6 maxDataFromAPSForTele:(float)arg7 minDataFromAPSForWide:(float)arg8 minDataFromAPSForTele:(float)arg9 maxDataFromSphereForWide:(float)arg10 maxDataFromSphereForTele:(float)arg11 minDataFromSphereForWide:(float)arg12 minDataFromSphereForTele:(float)arg13 maxDataFromAccel:(float)arg14 minDataFromAccel:(float)arg15 maxDataFromGyro:(float)arg16 minDataFromGyro:(float)arg17 ;
-(void)reportZeroShutterLagFirmwareTimeMachineInitFailure;
-(void)reportZeroShutterLagInitSuccess;
-(void)reportZeroShutterLagMetadataInitFailureWithReasons:(unsigned int)arg0 ;
-(void)reportZeroShutterLagPreviewTimeMachineInitFailure;
-(void)reportZeroShutterLagReferenceFrameSelectionFailureForCaptureType:(int)arg0 ;
-(void)reportZeroShutterLagSphereInitFailure;
-(void)reportZeroShutterLagSuccess;
-(void)reportZoomFactor:(float)arg0 primaryCaptureType:(int)arg1 secondaryCaptureType:(int)arg2 captureFlags:(NSUInteger)arg3 sceneFlags:(NSUInteger)arg4 stillDuringVideo:(BOOL)arg5 frontCamera:(BOOL)arg6 ;


@end


#endif