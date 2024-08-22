// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARWORLDTRACKINGTECHNIQUE_H
#define ARWORLDTRACKINGTECHNIQUE_H

@class NSHashTable, NSString, NSMutableSet, NSMutableArray, NSMutableDictionary;
@protocol ARSceneReconstructionDelegate, OS_dispatch_semaphore, MTLCommandQueue, MTLDevice, MTLFunction, OS_dispatch_queue;


#import "ARImageBasedTechnique.h"
#import "ARWorldTrackingErrorData.h"
#import "ARWorldTrackingPoseData.h"
#import "ARWorldTrackingOptions.h"
#import "ARSceneReconstructionHandler.h"
#import "ARTrackedRaycastPostProcessor.h"

@interface ARWorldTrackingTechnique : ARImageBasedTechnique <ARSceneReconstructionDelegate>

 {
    NSHashTable *_observers;
    NSObject<OS_dispatch_semaphore> *_observersSemaphore;
    map<long, double, std::less<long>, std::allocator<std::pair<const long, double>>> _lastErrorLogTimestamp;
    BOOL _useFixedIntrinsics;
    NSInteger _sessionHandleState;
    NSObject<OS_dispatch_semaphore> *_sessionHandleStateSemaphore;
    ARWorldTrackingErrorData *_errorData;
    ARWorldTrackingPoseData *_cachedPoseData;
    CGFloat _lastPoseMetaDataTimestamp;
    int _reinitializationAttempts;
    NSUInteger _numberOfCameraSwitches;
    NSUInteger _currentVIOMapSize;
    NSInteger _reinitializationAttemptsAtInitialization;
    CGFloat _lastRelocalizationTimestamp;
    CGFloat _lastQualityKeyframeTimestamp;
    int _previousKeyframeCount;
    CGFloat _lastPoseTrackingMapTimestamp;
    CGFloat _lastMajorRelocalizationTimestamp;
    CGFloat _originTimestamp;
    NSString *_lastCameraType;
    unsigned int _primaryCameraID;
    BOOL _relocalizingAfterSensorDataDrop;
    BOOL _didClearMap;
    NSObject<OS_dispatch_semaphore> *_resultSemaphore;
    CGFloat _minVergenceAngleCosine;
    CGFloat _resultLatency;
    BOOL _allowPoseGraphUpdates;
    PlaneDetectionConfiguration _surfaceDetectionParametrization;
    NSMutableSet *_anchorsReceived;
    NSMutableSet *_participantAnchors;
    BOOL _participantAnchorsEnabled;
    *__CVPixelBufferPool _depth16grayBufferPool;
    *__CVPixelBufferPool _confidence8BufferPool;
    *__CVPixelBufferPool _postProcessedDepthConfidencePool;
    NSMutableArray *_latestSpatialMappingData;
    os_unfair_lock_s _latestSpatialMappingDataLock;
    NSMutableDictionary *_meshChunksWaitingForSemantics;
    NSMutableDictionary *_meshChunkIdentifiersCurrentlyBeingProcessed;
    os_unfair_lock_s _volumeSamplingLock;
    id<MTLCommandQueue> *_spatialMappingCommandQueue;
    id<MTLDevice> *_sharedMetalDevice;
    *__CVPixelBufferPool _poolForSemanticsAnnotatedDepth;
    *__CVPixelBufferPool _poolForUncertaintyAnnotatedDepth;
    *__CVPixelBufferPool _poolForConfidenceAnnotatedDepth;
    *__CVPixelBufferPool _poolForUncertaintyMaskedSemanticsDepth;
    id<MTLFunction> *_annotateDepthDataKernelFunction;
    NSMutableDictionary *_spatialMappingResultDataWaitingForSemantics;
    NSObject<OS_dispatch_queue> *_spatialMappingObjectRefinementQueue;
    NSObject<OS_dispatch_queue> *_resultDataQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property ? extrinsicsToWideSensor; // ivar: _extrinsicsToWideSensor
@property BOOL hasQualityKeyframe; // ivar: _hasQualityKeyframe
@property (readonly) NSUInteger hash;
@property (retain) ARWorldTrackingOptions *mutableOptions; // ivar: _mutableOptions
@property (readonly, copy, nonatomic) ARWorldTrackingOptions *options;
@property (nonatomic) shared_ptr<PlaneDetectionSession> planeDetectionSession; // ivar: _planeDetectionSession
@property (nonatomic) *CV3DPosePredictionContext predictorHandle; // ivar: _predictorHandle
@property (nonatomic) shared_ptr<RaycastSession> raycastSession; // ivar: _raycastSession
@property (nonatomic) ? reconstructionFrameBundleToWorld; // ivar: _reconstructionFrameBundleToWorld
@property ? referenceOriginTransform; // ivar: _referenceOriginTransform
@property (readonly, nonatomic) ARSceneReconstructionHandler *sceneReconstructionHandler; // ivar: _sceneReconstructionHandler
@property (nonatomic) *CV3DSLAMSession slamSessionHandle; // ivar: _slamSessionHandle
@property (readonly) Class superclass;
@property NSUInteger techniqueIndex; // ivar: _techniqueIndex
@property (retain) ARTrackedRaycastPostProcessor *trackedRaycastPostProcessor; // ivar: _trackedRaycastPostProcessor
@property (readonly) NSUInteger vioSessionIdentifier; // ivar: _vioSessionIdentifier


+(BOOL)isSupported;
+(BOOL)producesResultDataForAnchorOfClass:(Class)arg0 ;
+(BOOL)supportsVideoResolution:(struct CGSize )arg0 forDeviceType:(id)arg1 ;
-(BOOL)deterministicMode;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMultiSessionMode;
-(BOOL)querySceneReconstructionOccupancyWithPoints:(id)arg0 callback:(id)arg1 ;
-(BOOL)reconfigurableFrom:(id)arg0 ;
-(CGFloat)requiredTimeInterval;
-(NSInteger)_initializeSLAMAndPredictorHandle;
-(NSInteger)_mappingStatusFromMapSize:(int)arg0 keyframeQuality:(int)arg1 isTrackingMap:(BOOL)arg2 timestamp:(CGFloat)arg3 ;
-(NSInteger)captureBehavior;
-(NSInteger)vioHandleState;
-(NSUInteger)requiredSensorDataTypes;
-(id)_featurePointDataFromSLAMState:(struct CV3DSLAMStateContext *)arg0 ;
-(id)_fullDescription;
-(id)getObservers;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(id)predictedResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;
-(id)processData:(id)arg0 ;
-(id)raycast:(id)arg0 ;
-(id)raycastResultFrom:(struct CV3DHitTestResult *)arg0 ;
-(id)resultDataClasses;
-(id)serializeSurfaceData;
-(id)serializeWorldMapWithReferenceOrigin:(struct ? )arg0 ;
-(id)trackedRaycast:(id)arg0 updateHandler:(id)arg1 ;
-(int)_updatePoseData:(id)arg0 forTimeStamp:(CGFloat)arg1 updateTrackingState:(BOOL)arg2 ;
-(int)extentCheckFromConfiguration;
-(unsigned int)_trackingCameraID:(struct CV3DSLAMStateContext *)arg0 ;
-(void)_configureMeshPlaneHarmonization;
-(void)_didFailWithError:(id)arg0 ;
-(void)_handleCV3DError:(struct __CFError *)arg0 withDescription:(id)arg1 failTechnique:(BOOL)arg2 ;
-(void)_handlePlaneDetectionCallback:(struct CV3DPlaneDetectionPlaneList *)arg0 ;
-(void)_handleRaycastResultCallback:(struct CV3DRaycastResultMap *)arg0 ;
-(void)_handleSLAMError:(id)arg0 ;
-(void)_initializeSurfaceDetection:(struct PlaneDetectionConfiguration *)arg0 ;
-(void)_pushWTResultDataForTimestamp:(CGFloat)arg0 ;
-(void)_reportCollaborationData:(id)arg0 type:(unsigned char)arg1 metadata:(*void)arg2 ;
-(void)_updateTrackingState:(id)arg0 slamState:(struct CV3DSLAMStateContext *)arg1 ;
-(void)_updateVIOLineDetectionPolicy;
-(void)addObserver:(id)arg0 ;
-(void)addReferenceAnchors:(id)arg0 ;
-(void)annotateDepth:(id)arg0 withSemantics:(id)arg1 toTargetSemanticsImage:(struct __CVBuffer *)arg2 targetConfidenceBuffer:(struct __CVBuffer *)arg3 targetUncertaintyBuffer:(struct __CVBuffer *)arg4 ;
-(void)annotateDepth:(id)arg0 withSemantics:(id)arg1 toTargetSemanticsImage:(struct __CVBuffer *)arg2 targetConfidenceBuffer:(struct __CVBuffer *)arg3 targetUncertaintyBuffer:(struct __CVBuffer *)arg4 useGpu:(BOOL)arg5 ;
-(void)clearMap;
-(void)dealloc;
-(void)didUpdateRaycastResult:(struct CV3DHitTestResults *)arg0 ;
-(void)invalidateAllRaycasts;
-(void)loadSurfaceData:(id)arg0 ;
-(void)mergeResultData:(id)arg0 intoData:(id)arg1 context:(id)arg2 ;
-(void)onMetadataCallback:(struct CV3DSLAMStateContext *)arg0 ;
-(void)prepare:(BOOL)arg0 ;
-(void)prepareResultData:(id)arg0 forContext:(id)arg1 ;
-(void)pushCollaborationData:(id)arg0 ;
-(void)pushToHitTestingDepth:(id)arg0 pose:(id)arg1 ;
-(void)pushToSceneUnderstandingDepth:(id)arg0 segmentation:(id)arg1 pose:(id)arg2 ;
-(void)pushToSceneUnderstandingSegmentation:(id)arg0 pose:(id)arg1 ;
-(void)reconfigureFrom:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removePlanesByUUIDs:(id)arg0 ;
-(void)removeReferenceAnchors:(id)arg0 ;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;
-(void)resetSceneReconstruction;
-(void)sceneReconstructionHandler:(id)arg0 didFailWithError:(id)arg1 ;
-(void)sceneReconstructionHandler:(id)arg0 didOutputMeshList:(struct CV3DReconMeshList *)arg1 withTimestamp:(CGFloat)arg2 ;
-(void)setupSceneReconstruction;
-(void)stopAllRaycasts;
-(void)stopRaycast:(id)arg0 ;
-(void)updateSurfaceDetectionConfiguration;


@end


#endif