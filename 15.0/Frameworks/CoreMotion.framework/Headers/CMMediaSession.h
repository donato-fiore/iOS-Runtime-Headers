// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMMEDIASESSION_H
#define CMMEDIASESSION_H

@class NSOperationQueue, NSUserDefaults, NSString;
@protocol CMDistributedSensingDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CMMotionActivityManager.h"

@interface CMMediaSession : NSObject <CMDistributedSensingDelegate>

 {
    unique_ptr<CMHeadTrackingService, std::default_delete<CMHeadTrackingService>> _headTrackingService;
    *Dispatcher _deviceMotionDispatcher;
    *Dispatcher _accessoryDeviceMotionDispatcher;
    *Dispatcher _accessoryDeviceMotionConfigDispatcher;
    *Dispatcher _accessoryDeviceMotionInEarStatusDispatcher;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id *_clientHandler;
    int _clientMode;
    NSUInteger _predictionIntervalMicroseconds;
    int _scheme;
    CMOQuaternion _q_bf;
    BOOL _disable2IMU;
    CGFloat _lidAngle;
    UnTimesyncedAuxSampleHelper _unsyncedAuxHelper;
    unique_ptr<CMMediaSessionAnalyticsTracker, std::default_delete<CMMediaSessionAnalyticsTracker>> _analyticsTracker;
    int _previousBTZState;
    CGFloat _lastInBTZTime;
    int _previousMotionActivityType;
    CGFloat _lastAccessoryDMTime;
    int _previousTracking1IMU;
    BOOL _previousCTState;
    BOOL _previousCTBodyTurnState;
    BOOL _previousHeadTurnState;
    CGFloat _lastExitCTTime;
    float _lastAngleBetweenCurrentBoresightToDefault;
    BOOL _previousTrackingEnabled;
    CGFloat _lastDistractedViewingStartTime;
    CGFloat _lastDistractedViewingEndTime;
    BOOL _previousSrcMoving;
    BOOL _previousAuxMoving;
    BOOL _previousSteadyStatePedestrian;
    BOOL _previousKeepBoresightCentered;
    int _lastTrackingDisableRoute;
    AudioAccessorySample _lastAudioAccessorySample;
    NSUInteger _lastAccessoryTimestamp;
    NSUInteger _lastSourceTimestampMicroSeconds;
    NSUInteger _lastStateTimestamp;
    BOOL _trackingEstimatesStagnated;
    BOOL _logForReplay;
    CGFloat _printPoseTimer;
    BOOL _enableJBLThreshold;
    BOOL _verboseLogging;
    CGFloat _accessorySampleTimer;
    int _accessorySamplesPerSecond;
    CMMotionActivityManager *_activityManager;
    NSOperationQueue *_activityQueue;
    unique_ptr<CLSettings, std::default_delete<CLSettings>> _motionSettings;
    NSUserDefaults *_motionDefaults;
    CGFloat _minQuiescentPeriodForBTZ;
    int _notify50HzPoseDecimator;
    CGFloat _sessionStartTime;
    CGFloat _firstAccessoryDMTime;
    CGFloat _firstValidPoseTime;
    CGFloat _lastTimesyncLostTime;
    unique_ptr<CMSpatialLogger, std::default_delete<CMSpatialLogger>> _logger;
    int _inEarStatus;
    BOOL _inEarStatusGatingEnabled;
    int _jitterBufferLevelNotificationToken;
    NSObject<OS_dispatch_source> *_jitterBufferLevelInitialUpdateTimer;
    unsigned short _jitterBufferLevel;
    unsigned short _jitterBufferLevelThreshold;
    BOOL _sitStandDetectorEnabled;
    BOOL _userSettingFwdPredictorEnabled;
}


@property unsigned int accessoryIMUSampleRate; // ivar: _accessoryIMUSampleRate
@property BOOL alwaysNotify50HzPose; // ivar: _alwaysNotify50HzPose
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property CMOQuaternion headsetOrientationOverride; // ivar: _headsetOrientationOverride
@property BOOL overrideDefaultHeadsetOrientation; // ivar: _overrideDefaultHeadsetOrientation
@property float prevAmbienceBedRoll; // ivar: _prevAmbienceBedRoll
@property BOOL returnDefaultPose; // ivar: _returnDefaultPose
@property BOOL returnRandomPose; // ivar: _returnRandomPose
@property (readonly) Class superclass;
@property unsigned int totalAccessoryIMUSamples; // ivar: _totalAccessoryIMUSamples
@property unsigned int totalFacePoseAnchorSamples; // ivar: _totalFacePoseAnchorSamples
@property unsigned int totalSourceIMUSamples; // ivar: _totalSourceIMUSamples


+(BOOL)_isAvailable;
-(BOOL)_start;
-(BOOL)_startPoseUpdatesToQueue:(id)arg0 andHandler:(id)arg1 ;
-(NSUInteger)_getAuxSampleTimestamp:(*void)arg0 currentTime:(CGFloat)arg1 ;
-(id)_initWithOptions:(id)arg0 ;
-(id)init;
-(int)_createPoseFromListenerOrientation:(struct ListenerOrientation *)arg0 Pose:(*id)arg1 ;
-(int)_currentAudioListenerOrientation:(*id)arg0 ;
-(struct AudioAccessorySample )_getLastAudioAccessorySample;
-(void)_disableLoggingForReplay;
-(void)_enableLoggingForReplayWithFilenamePrefix:(id)arg0 filePath:(id)arg1 ;
-(void)_feedAccessoryConfig:(*void)arg0 ;
-(void)_feedAccessoryDeviceMotion:(*void)arg0 ;
-(void)_feedAccessoryInEarStatus:(*int)arg0 ;
-(void)_feedAdaptiveLatencyJitterBufferLevel;
-(void)_feedFacePose:(id)arg0 rotationMatrix:(id)arg1 timestamp:(CGFloat)arg2 error:(struct ? *)arg3 ;
-(void)_feedLidAngle:(CGFloat)arg0 ;
-(void)_feedPoseAnchor:(struct Sample *)arg0 facePoseError:(struct ? *)arg1 ;
-(void)_feedPredictorEstimates;
-(void)_feedSourceDeviceIMU:(struct Sample *)arg0 ;
-(void)_logEvent:(id)arg0 ;
-(void)_notifyClientHandler;
-(void)_reset;
-(void)_setConvergenceRateForBTZ:(float)arg0 ;
-(void)_setFixedTransforms:(struct CMOQuaternion *)arg0 ;
-(void)_startDefaultsPreferenceUpdater;
-(void)_startHeadTracking;
-(void)_startJitterBufferLevelMonitor;
-(void)_startJitterBufferLevelRetryTimer;
-(void)_stop;
-(void)_stopDefaultsPreferenceUpdater;
-(void)_stopHeadTracking;
-(void)_stopJitterBufferLevelMonitor;
-(void)_stopJitterBufferLevelRetryTimer;
-(void)_triggerUserInteractedWithDeviceEvent;
-(void)_updateMinQuiescentPeriodForBTZ;
-(void)_updateUseFwdPredictionUserSettings;
-(void)_updateUserSettings;
-(void)dealloc;
-(void)feedPoseAnchorWithAttitude:(struct ? )arg0 position:(struct CMVector<float, 3> )arg1 timestampUs:(NSUInteger)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif