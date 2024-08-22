// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARGEOTRACKINGTECHNIQUE_H
#define ARGEOTRACKINGTECHNIQUE_H

@class GEOApplicationAuditToken, VLTraceRecorder, CLSimulationManager, NSArray, NSNumber;
@protocol ARGeoTrackingTechniqueProtocol, OS_dispatch_queue, ARTechniqueDelegate, ARTechniqueForwardingStrategy;


#import "ARTechnique.h"
#import "ARGeoTrackingTechniqueState.h"

@interface ARGeoTrackingTechnique : ARTechnique <ARGeoTrackingTechniqueProtocol>

 {
    os_unfair_lock_s _resultLock;
    NSObject<OS_dispatch_queue> *_visualLocalizationQueue;
    BOOL _deterministic;
    BOOL _useCoreLocationFusion;
    BOOL _useCoreMotionFusion;
    BOOL _useGradualCorrection;
    BOOL _useVLTraceRecorder;
    NSInteger _requestResultDataAtTimestampCallCount;
    os_unfair_lock_s _statusLock;
    GEOApplicationAuditToken *_auditToken;
    os_unfair_lock_s _resetLock;
    ARGeoTrackingTechniqueState *_state;
    CGFloat _maxHorizontalAccuracy;
}


@property BOOL VLPoseEstimationExecuting; // ivar: _VLPoseEstimationExecuting
@property (retain) VLTraceRecorder *VLTraceRecorder; // ivar: _VLTraceRecorder
@property CGFloat bonusLatency;
@property (weak) NSObject<ARTechniqueDelegate> *delegate;
@property (retain, nonatomic) CLSimulationManager *locationSimulationManager; // ivar: _locationSimulationManager
@property CGFloat posteriorVisualLocalizationCallInterval; // ivar: _posteriorVisualLocalizationCallInterval
@property NSUInteger powerUsage;
@property (retain) NSObject<ARTechniqueForwardingStrategy> *splitTechniqueFowardingStrategy;
@property (retain) NSArray *splitTechniques;
@property NSUInteger supportEnablementOptions; // ivar: _supportEnablementOptions
@property (readonly) NSNumber *traceKey;
@property CGFloat visualLocalizationCallInterval; // ivar: _visualLocalizationCallInterval
@property CGFloat visualLocalizationCallIntervalTimeThreshold; // ivar: _visualLocalizationCallIntervalTimeThreshold
@property BOOL visualLocalizationUpdatesRequested; // ivar: _visualLocalizationUpdatesRequested


+(BOOL)isCameraUp:(float)arg0 ;
+(BOOL)isSupported;
+(BOOL)isSupportedWithOptions:(NSUInteger)arg0 ;
+(BOOL)producesResultDataForAnchorOfClass:(Class)arg0 ;
+(CGFloat)getHeadingForEnuFromCam:(struct ? )arg0 ;
+(NSInteger)getFailureReasonFromVLError:(NSInteger)arg0 ;
-(BOOL)reconfigurableFrom:(id)arg0 ;
-(NSInteger)_getHighestPriorityFailureWithTechniqueStateObject:(id)arg0 ;
-(NSInteger)captureBehavior;
-(NSUInteger)requiredSensorDataTypes;
-(id)getLocationFromWorldPositionerror;
-(id)init;
-(id)initWithAuditToken:(id)arg0 ;
-(id)processData:(id)arg0 ;
-(id)resultDataClasses;
// -(void)_callVLWithHandle:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 deviceLocation:(id)arg2 heading:(struct ? )arg3 inputGravity:(struct ? )arg4 vioTransform:(struct ? )arg5 cameraIntrinsics:(CGFloat)arg6 radialDistortion:(CGFloat)arg7 exposureTargetOffset:(id)arg8 timestamp:(id)arg9 vlDeterminismSemaphore:(unk)arg10 completionHandler ;
-(void)_estimateEnuFromVioFromCLCM:(id)arg0 ;
-(void)_estimatePose:(id)arg0 pose:(id)arg1 ;
-(void)_logVioTransform:(struct ? )arg0 withTimestamp:(CGFloat)arg1 withSuffix:(char *)arg2 ;
-(void)_setTrackingState:(NSInteger)arg0 techniqueStateObject:(id)arg1 ;
-(void)_simulateReplayLocationUpdates:(id)arg0 ;
-(void)_updateVLStateData:(CGFloat)arg0 ;
-(void)dealloc;
-(void)prepare:(BOOL)arg0 ;
-(void)reconfigureFrom:(id)arg0 ;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;


@end


#endif