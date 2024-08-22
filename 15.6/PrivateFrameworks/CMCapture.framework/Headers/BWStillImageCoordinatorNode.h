// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWSTILLIMAGECOORDINATORNODE_H
#define BWSTILLIMAGECOORDINATORNODE_H

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol BWFigVideoCaptureStreamStillImageCaptureDelegate, BWStillImageProcessingStatusDelegate, OS_dispatch_queue, OS_dispatch_group, BWStillImageCaptureStatusDelegate, BWStillImageProcessingSupportProvider;


#import "BWNode.h"
#import "BWFigVideoCaptureDevice.h"
#import "FigStateMachine.h"
#import "FigCaptureStillImageSettings.h"
#import "BWStillImageCaptureSettings.h"
#import "BWStillImageProcessingSettings.h"

@interface BWStillImageCoordinatorNode : BWNode <BWFigVideoCaptureStreamStillImageCaptureDelegate, BWStillImageProcessingStatusDelegate>

 {
    BOOL _active;
    BWFigVideoCaptureDevice *_captureDevice;
    NSDictionary *_portTypeToInput;
    NSDictionary *_portTypeToOutput;
    int _stillImageCapturePipeliningMode;
    unsigned int _numberOfBurstCapturesInFlight;
    unsigned int _maxNumberOfBurstCapturesAllowedInFlight;
    BOOL _alwaysRequestsPreBracketedEV0;
    BOOL _usesHDRPreBracketFrameForErrorRecovery;
    BOOL _supportsCalibrationWithoutDepthForBravoConstituentPhoto;
    NSMutableArray *_requestQueue;
    os_unfair_lock_s _requestQueueLock;
    int _captureRequestCount;
    int _prepareRequestCount;
    NSObject<OS_dispatch_queue> *_stillImageDispatchQueue;
    NSObject<OS_dispatch_group> *_stillImageDispatchGroup;
    NSObject<OS_dispatch_group> *_stillImageGraphStopDispatchGroup;
    FigStateMachine *_stateMachine;
    NSMutableDictionary *_receivedImagesOrErrorsForRequestByPortType;
    int _clientExpectedImagesOrErrorsForRequest;
    int _clientReceivedImagesOrErrorsForRequest;
    FigCaptureStillImageSettings *_currentRequestedStillImageCaptureSettings;
    int _captureType;
    BWStillImageCaptureSettings *_currentResolvedStillImageCaptureSettings;
    BWStillImageProcessingSettings *_currentResolvedStillImageProcessingSettings;
    unsigned int _firedDelegateCallbackFlags;
    BOOL _isMomentCaptureCapturingBeforeCommitted;
    NSMutableArray *_momentCaptureUnfiredCallbacks;
    NSMutableArray *_momentCaptureBuffersByInputIndex;
    int _momentCaptureUncommittedStillImageCaptureError;
    NSInteger _momentCaptureUnfiredWillBeginCaptureBeforeResolvingSettingsCallbackSettingsID;
    NSInteger _momentCaptureLastComittedSettingsID;
    ? _streamingDisruptionEndPTS;
    BOOL _receivedQuadraHighResError;
    os_unfair_lock_s _bufferTrackingLock;
    int _inUseBufferCount;
    BOOL _responsiveShutterEnabled;
    BOOL _fastCapturePrioritizationEnabled;
    BOOL _shotBufferEnabled;
    int _allocatedShotBufferCapacity;
    NSObject<OS_dispatch_group> *_shotBufferWaitGroup;
    int _shotBufferWaitFreeBufferCount;
    BOOL _shotPacerEnabled;
    float _shotPacerMaxFPS;
    NSInteger _lastStillImageCaptureStartTime;
    NSInteger _lastStillImageCaptureCompleteTime;
    BOOL _dynamicShotQualityEnabled;
    int _minFullQualityShots;
    float _timeSinceLastCaptureEnterThreshold;
    float _timeSinceLastCaptureExitThreshold;
    int _numCapturesInShotSequence;
    BOOL _waitForTimeMachineEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSObject<BWStillImageCaptureStatusDelegate> *stillImageCaptureStatusDelegate; // ivar: _stillImageCaptureStatusDelegate
@property (nonatomic) NSObject<BWStillImageProcessingSupportProvider> *stillImageProcessingSupportProvider; // ivar: _stillImageProcessingSupportProvider
@property (readonly) Class superclass;


+(id)stringForStillImageCapturePipeliningMode:(int)arg0 ;
+(int)currentAllocatedShotBufferCapacity;
+(int)maxShotBufferCapacity;
+(int)worstCaseMaxBracketedCaptureBufferCountForPreparedSettings:(id)arg0 captureDevice:(id)arg1 ;
+(void)initialize;
+(void)setCurrentAllocatedShotBufferCapacity:(int)arg0 ;
+(void)setMaxShotBufferCapacity:(int)arg0 ;
-(BOOL)_waitUntilShotBufferHasFreeBufferCount:(int)arg0 timeout:(float)arg1 ;
-(BOOL)alwaysRequestsPreBracketedEV0;
-(BOOL)fastCapturePrioritizationEnabled;
-(BOOL)responsiveShutterEnabled;
-(BOOL)supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;
-(BOOL)usesHDRPreBracketFrameForErrorRecovery;
-(id)_clientBracketSettingsWithFrameStatisticsByPortType:(id)arg0 ;
-(id)_currentStillImageSettings;
-(id)_initWithCaptureDevice:(id)arg0 inputPortTypes:(id)arg1 allStateTransitionsHandler:(id)arg2 ;
-(id)_outputForInput:(id)arg0 ;
-(id)_resolvePhotoManifest;
-(id)_resolveProcessingSettings;
-(id)_stateMachine;
-(id)_stillImageDispatchQueue;
-(id)initWithCaptureDevice:(id)arg0 inputPortTypes:(id)arg1 ;
-(id)inputForPortType:(id)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(id)outputForPortType:(id)arg0 ;
-(int)_captureTypeForSettings:(id)arg0 frameStatisticsByPortType:(id)arg1 captureFlags:(*NSUInteger)arg2 ;
-(int)_enqueueRequestWithSettings:(id)arg0 serviceRequestsIfNecessary:(BOOL)arg1 ;
-(int)_expectedFrameCountForCurrentRequest;
-(int)_receivedFrameOrErrorCountForCurrentRequest;
-(int)beginStillImageMomentCaptureWithSettings:(id)arg0 ;
-(int)cancelStillImageMomentCaptureWithSettingsID:(NSInteger)arg0 ;
-(int)captureStillImageNowWithSettings:(id)arg0 ;
-(int)commitStillImageMomentCaptureWithSettings:(id)arg0 ;
-(int)initiateStillImageCaptureNowWithSettings:(id)arg0 ;
-(int)prepareStillImageCaptureNowWithSettings:(id)arg0 ;
-(int)stillImageCapturePipeliningMode;
-(unsigned int)maxNumberOfBurstCapturesAllowedInFlight;
-(void)_addAttachmentsToSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_attemptToCompleteRequest;
-(void)_beginCapture;
-(void)_beginInitiatingCapture;
-(void)_beginMomentCapture;
-(void)_beginPreparingCapture;
-(void)_beginResolvingCapture;
-(void)_beginUncommittedMomentCapture;
-(void)_bufferReleased;
-(void)_cancelMomentCapture;
-(void)_cancelMomentCaptureIfNeeded;
-(void)_commitMomentCapture;
-(void)_completeRequestWithStatus:(int)arg0 ;
-(void)_configureCurrentCaptureRequestStateForFigCaptureStillImageSettings;
-(void)_didCaptureStillImage;
-(void)_didResolveReferenceFrameBracketedCaptureSequenceNumber:(id)arg0 ;
-(void)_didResolveStillImagePTS:(struct ? )arg0 isPreBracketedEV0:(BOOL)arg1 ;
-(void)_didSelectNewReferenceFrameWithPTS:(struct ? )arg0 transform:(id)arg1 ;
-(void)_fireDelegateCallbackWithFlag:(unsigned int)arg0 ;
-(void)_fireDelegateCallbackWithInfo:(id)arg0 ;
-(void)_flushStillImageRequestWithError:(int)arg0 ;
-(void)_renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 attemptToCompleteRequest:(BOOL)arg2 ;
-(void)_serviceNextRequest;
-(void)_setupProcessing;
-(void)_setupStateMachineWithAllStateTransitionsHandler:(id)arg0 ;
-(void)_unpackNextRequest;
-(void)_updateAllocatedShotBufferCapacityWithBufferCount:(int)arg0 ;
-(void)_updateResponsiveShutterEnabled;
-(void)_updateSpeedOverQualityCaptureEnabled:(*BOOL)arg0 waitForTimeMachineToFill:(*BOOL)arg1 ;
-(void)_waitToMakePaceWithReferenceTime:(NSInteger)arg0 ;
-(void)captureStream:(id)arg0 didCapturePreBracketedEV0ImageWithPTS:(struct ? )arg1 ;
-(void)captureStream:(id)arg0 didCaptureReferenceFrameWithPTS:(struct ? )arg1 referenceFrameBracketedCaptureSequenceNumber:(id)arg2 ;
-(void)captureStream:(id)arg0 stillImageCaptureError:(int)arg1 ;
-(void)captureStreamDidCompleteStillImageCapture:(id)arg0 ;
-(void)captureStreamWillBeginStillImageCapture:(id)arg0 ;
-(void)captureStreamWillWaitForTimeMachineToFill:(id)arg0 ;
-(void)clientReceivedPayloadForSettings:(id)arg0 status:(int)arg1 clientIsMidStillImageGraph:(BOOL)arg2 ;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)node:(id)arg0 didSelectNewReferenceFrameWithPTS:(struct ? )arg1 transform:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setAlwaysRequestsPreBracketedEV0:(BOOL)arg0 ;
-(void)setFastCapturePrioritizationEnabled:(BOOL)arg0 ;
-(void)setMaxNumberOfBurstCapturesAllowedInFlight:(unsigned int)arg0 ;
-(void)setResponsiveShutterEnabled:(BOOL)arg0 ;
-(void)setStillImageCapturePipeliningMode:(int)arg0 ;
-(void)setSupportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto:(BOOL)arg0 ;
-(void)setUsesHDRPreBracketFrameForErrorRecovery:(BOOL)arg0 ;
-(void)willStopGraph:(BOOL)arg0 ;


@end


#endif