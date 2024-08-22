// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARSESSION_H
#define ARSESSION_H

@class NSHashTable, CMMotionManager, NSDate, NSArray, NSPointerArray, NSString, NSMutableDictionary, NSUUID;
@protocol ARSensorDelegate, ARTechniqueDelegate, ARWorldTrackingTechniqueObserver, OS_dispatch_semaphore, OS_dispatch_queue, ARReplaySensorProtocol, ARSessionDelegate;

#import <Foundation/Foundation.h>

#import "ARTechnique.h"
#import "ARWorldTrackingTechnique.h"
#import "AREnvironmentTexturingTechnique.h"
#import "ARRecordingTechniquePublic.h"
#import "ARFrame.h"
#import "ARFrameContextHandler.h"
#import "ARRenderSyncScheduler.h"
#import "ARImageSensor.h"
#import "ARRemoteLocationSensor.h"
#import "ARTrackedRaycastPostProcessor.h"
#import "ARBKSAccelerometer.h"
#import "ARVideoFormat.h"
#import "ARImageData.h"
#import "ARDepthPointCloudCoalescer.h"
#import "ARConfiguration.h"
#import "ARRemoteGeoTrackingTechnique.h"
#import "ARDeviceOrientationData.h"
#import "ARLocationData.h"
#import "ARSessionMetrics.h"
#import "ARParentTechnique.h"
#import "ARQATracer.h"

@interface ARSession : NSObject <ARSensorDelegate, ARTechniqueDelegate, ARWorldTrackingTechniqueObserver>

 {
    ARTechnique *_renderingTechnique;
    ARWorldTrackingTechnique *_worldTrackingTechnique;
    AREnvironmentTexturingTechnique *_environmentTexturingTechnique;
    BOOL _techniquesWantPredictedPoseForWideCam;
    os_unfair_lock_s _geoAnchorToAltitudeLock;
    BOOL _forceEnvironmentTexturingToManualMode;
    ARRecordingTechniquePublic *_recordingTechnique;
    BOOL _configuredForWorldTracking;
    BOOL _vioFusionEnabled;
    BOOL _renderPersonBoundingBoxesIntoCapturedImage;
    NSObject<OS_dispatch_semaphore> *_lastPredictedFrameSemaphore;
    ? _lastPredictedFrameTransform;
    ARFrame *_lastProcessedFrame;
    NSObject<OS_dispatch_semaphore> *_lastProcessedFrameSemaphore;
    ARFrameContextHandler *_frameContextHandler;
    NSObject<OS_dispatch_semaphore> *_frameContextHandlerSemaphore;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSHashTable *_observers;
    NSObject<OS_dispatch_semaphore> *_observersSemaphore;
    id *_thermalStateObserver;
    NSInteger _thermalState;
    int _peakPowerPressureToken;
    unsigned int _peakPowerPressureLevel;
    CMMotionManager *_motionManger;
    CGFloat _defaultRelocalizationDuration;
    NSDate *_relocalizationTimeoutDate;
    BOOL _relocalizationRequested;
    CGFloat _currentTrackingStartingTimestamp;
    NSInteger _featurePointAccumulationCount;
    ARRenderSyncScheduler *_resultRequestScheduler;
    ARRenderSyncScheduler *_secondaryResultRequestScheduler;
    NSObject<OS_dispatch_queue> *_prepareTechniquesQueue;
    ARImageSensor *_imageSensor;
    ARRemoteLocationSensor *_locationSensor;
    id<ARReplaySensorProtocol> *_replaySensor;
    NSArray *resultDatasOfSecondaryFrameContexts;
    NSObject<OS_dispatch_semaphore> *_resultDataOfSecondaryFrameContextsSemaphore;
    ARTrackedRaycastPostProcessor *_trackedRaycastPostProcessor;
    ARBKSAccelerometer *_bksAccelerometer;
    ARVideoFormat *_primaryVideoFormat;
    ARImageData *_latestUltraWideImageData;
    ARDepthPointCloudCoalescer *_depthPointCloudCoalescer;
    os_unfair_lock_s _coalescerReplacementLock;
    NSPointerArray *_weakPixelBuffers;
    id *_pendingHiResFrameCaptureCompletionBlock;
    NSObject<OS_dispatch_semaphore> *_pendingHiResFrameCaptureSemaphore;
    BOOL _isHiResFrameCaptureInProgress;
    os_unfair_lock_s _worldMapSurfaceDataLock;
}


@property (retain, nonatomic) NSArray *availableSensors; // ivar: _availableSensors
@property (readonly, copy, nonatomic) ARConfiguration *configuration;
@property (retain) ARConfiguration *configurationInternal; // ivar: _configurationInternal
@property (readonly, copy, nonatomic) ARFrame *currentFrame;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARSessionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *geoAnchorToAltitude; // ivar: _geoAnchorToAltitude
@property (retain, nonatomic) ARRemoteGeoTrackingTechnique *geoTrackingTechnique; // ivar: _geoTrackingTechnique
@property (readonly) NSUInteger hash;
@property (retain) NSUUID *identifier; // ivar: _identifier
@property (retain) ARDeviceOrientationData *latestDeviceOrientationData; // ivar: _latestDeviceOrientationData
@property (retain) ARLocationData *latestLocationData; // ivar: _latestLocationData
@property (readonly, nonatomic) ARSessionMetrics *metrics; // ivar: _metrics
@property (nonatomic) NSUInteger pausedSensors; // ivar: _pausedSensors
@property NSUInteger powerUsage; // ivar: _powerUsage
@property BOOL relocalizing; // ivar: _relocalizing
@property (nonatomic) NSUInteger runningSensors; // ivar: _runningSensors
@property (retain) ARParentTechnique *secondaryTechnique; // ivar: _dontUseDirectlySecondaryTechnique
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (retain) ARParentTechnique *technique; // ivar: _dontUseDirectlyTechnique
@property (retain, nonatomic) ARQATracer *tracer; // ivar: _tracer


+(BOOL)_supportsConfiguration:(id)arg0 ;
+(id)_applySessionOverrides:(id)arg0 outError:(*id)arg1 ;
+(id)_fullDescription;
+(id)_runningSessions;
+(void)forceEnvironmentTexturingTechniqueToManualMode:(id)arg0 ;
+(void)initialize;
+(void)setRenderType:(NSUInteger)arg0 ;
-(BOOL)_exposeInternalDepthData;
-(BOOL)_shouldSkipAnchorCreationForData:(id)arg0 ;
-(BOOL)_shouldUpdateLocationSensorForFusion;
-(BOOL)is6DofFaceTracking;
-(BOOL)isPrimaryImageData:(id)arg0 ;
-(BOOL)isUserFaceTracking;
-(BOOL)querySceneReconstructionOccupancyWithPoints:(id)arg0 callback:(id)arg1 ;
-(BOOL)wantsPredictedAnchorTracking;
-(id)_frameContextByConsumingPendingChanges;
-(id)_fullDescription;
-(id)_getGeoAnchorAltitude:(id)arg0 ;
-(id)_getObservers;
-(id)_imageSensorForConfiguration:(id)arg0 existingSensor:(id)arg1 ;
-(id)_prepareTechniquesQueue;
-(id)adPipelineParameters;
-(id)annotateAnchorToRaycastResults:(id)arg0 ;
-(id)frameWithCameraImage;
-(id)init;
-(id)raycast:(id)arg0 ;
-(id)replaySensor;
-(id)trackedRaycast:(id)arg0 updateHandler:(id)arg1 ;
-(struct ? )_cameraTransformForResultData:(id)arg0 previousFrame:(id)arg1 ;
-(struct ? )originTransform;
-(struct ? )predictedDeviceTransformAtTimestamp:(CGFloat)arg0 ;
-(void)_addObserver:(id)arg0 ;
-(void)_changePowerUsage:(NSUInteger)arg0 ;
-(void)_changePowerUsage:(NSUInteger)arg0 forced:(BOOL)arg1 ;
-(void)_configureSensorsForRecording;
-(void)_endInterruption;
-(void)_interruptSession;
-(void)_lookupAltitudeAtCoordinate:(struct CLLocationCoordinate2D )arg0 completionHandler:(id)arg1 ;
-(void)_lookupAltitudeForAnchor:(id)arg0 ;
-(void)_pauseWaitingForOutstandingCallbacks:(BOOL)arg0 ;
-(void)_removeGeoAnchorAltitude:(id)arg0 ;
-(void)_removeObserver:(id)arg0 ;
-(void)_replaceOrAddSensor:(id)arg0 ;
-(void)_saveGraphFileInFileName:(*id)arg0 ;
-(void)_sessionCameraDidChangeTrackingState:(id)arg0 ;
-(void)_sessionDidAddAnchors:(id)arg0 ;
-(void)_sessionDidCaptureHighResolutionFrame:(id)arg0 error:(id)arg1 ;
-(void)_sessionDidChangeGeoTrackingStatus:(id)arg0 ;
-(void)_sessionDidFailWithError:(id)arg0 ;
-(void)_sessionDidOutputAudioData:(id)arg0 ;
-(void)_sessionDidOutputCollaborationData:(id)arg0 ;
-(void)_sessionDidRemoveAnchors:(id)arg0 ;
-(void)_sessionDidUpdateAnchors:(id)arg0 ;
-(void)_sessionDidUpdateExternalAnchors:(id)arg0 ;
-(void)_sessionDidUpdateFrame:(id)arg0 ;
-(void)_sessionDidUpdateSpatialMappingPointClouds:(id)arg0 ;
-(void)_sessionRequestedRunWithConfiguration:(id)arg0 options:(NSUInteger)arg1 ;
-(void)_sessionShouldAttemptRelocalization;
-(void)_sessionWillRunWithConfiguration:(id)arg0 ;
-(void)_setGeoAnchorAltitude:(id)arg0 pair:(id)arg1 ;
-(void)_setPrimaryTechnique:(id)arg0 ;
-(void)_setPrimaryTechnique:(id)arg0 secondaryTechnique:(id)arg1 ;
-(void)_startSensorsWithRequiredDataTypes:(NSUInteger)arg0 optionalDataTypes:(NSUInteger)arg1 ;
-(void)_stopAllSensorsWaitingForOutstandingCallbacks:(BOOL)arg0 ;
-(void)_stopSensorsWithDataTypes:(NSUInteger)arg0 keepingDataTypes:(NSUInteger)arg1 ;
-(void)_updateAnchorsForFrame:(id)arg0 resultDatas:(id)arg1 context:(id)arg2 addedAnchors:(id)arg3 updatedAnchors:(id)arg4 removedAnchors:(id)arg5 externalAnchors:(id)arg6 ;
-(void)_updateFeaturePointsForFrame:(id)arg0 previousFrame:(id)arg1 trackingStateChanged:(BOOL)arg2 context:(id)arg3 ;
-(void)_updateOriginTransformForFrame:(id)arg0 previousFrame:(id)arg1 modifiers:(NSUInteger)arg2 context:(id)arg3 ;
-(void)_updatePowerPressureLevelWithToken:(int)arg0 ;
-(void)_updatePowerUsage;
-(void)_updatePowerUsageForced:(BOOL)arg0 ;
-(void)_updateSensorsWithConfiguration:(id)arg0 ;
-(void)_updateSessionStateWithConfiguration:(id)arg0 options:(NSUInteger)arg1 ;
-(void)_updateSessionWithConfiguration:(id)arg0 options:(NSUInteger)arg1 ;
-(void)_updateThermalState:(id)arg0 ;
-(void)addAnchor:(id)arg0 ;
-(void)captureHighResolutionFrameWithCompletion:(id)arg0 ;
-(void)captureHighResolutionFrameWithPhotoSettings:(id)arg0 completion:(id)arg1 ;
// -(void)createReferenceObjectWithTransform:(struct ? )arg0 center:(id)arg1 extent:(unk)arg2 completionHandler ;
-(void)dealloc;
-(void)forceEnvironmentTexturingToManualMode:(BOOL)arg0 ;
-(void)getCurrentWorldMapWithCompletionHandler:(id)arg0 ;
// -(void)getGeoLocationForPoint:(id)arg0 completionHandler:(unk)arg1  ;
-(void)pause;
-(void)removeAnchor:(id)arg0 ;
-(void)runWithConfiguration:(id)arg0 ;
-(void)runWithConfiguration:(id)arg0 options:(NSUInteger)arg1 ;
-(void)sensor:(id)arg0 didFailWithError:(id)arg1 ;
-(void)sensor:(id)arg0 didOutputSensorData:(id)arg1 ;
-(void)sensorDidPause:(id)arg0 ;
-(void)sensorDidRestart:(id)arg0 ;
-(void)setOriginTransform:(struct ? )arg0 ;
-(void)setWorldOrigin:(struct ? )arg0 ;
-(void)setupResultRequestSyncScheduler:(id)arg0 forTechnique:(id)arg1 ;
-(void)setupSessionForTechniques:(id)arg0 ;
-(void)technique:(id)arg0 didChangeState:(NSInteger)arg1 ;
-(void)technique:(id)arg0 didFailWithError:(id)arg1 ;
-(void)technique:(id)arg0 didOutputCollaborationData:(id)arg1 ;
-(void)technique:(id)arg0 didOutputResultData:(id)arg1 timestamp:(CGFloat)arg2 context:(id)arg3 ;
-(void)updateWithCollaborationData:(id)arg0 ;


@end


#endif