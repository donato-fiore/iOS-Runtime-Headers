// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGECOORDINATORNODE_H
#define BWSTILLIMAGECOORDINATORNODE_H

@class NSDictionary, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol BWFigVideoCaptureStreamStillImageCaptureDelegate, BWStillImageProcessingStatusDelegate, OS_dispatch_queue, OS_dispatch_group, BWCompressedShotBuffer, BWStillImageCaptureStatusDelegate, BWStillImageProcessingSupportProvider;


#import "BWNode.h"
#import "BWFigVideoCaptureDevice.h"
#import "FigStateMachine.h"
#import "FigCaptureStillImageSettings.h"
#import "BWStillImageCaptureSettings.h"
#import "BWStillImageProcessingSettings.h"
#import "BWDeviceOrientationMonitor.h"

@interface BWStillImageCoordinatorNode : BWNode <BWFigVideoCaptureStreamStillImageCaptureDelegate, BWStillImageProcessingStatusDelegate>

 {
    BOOL _active;
    BWFigVideoCaptureDevice *_captureDevice;
    NSDictionary *_portTypeToInput;
    NSDictionary *_portTypeToOutput;
    NSDictionary *_portTypeToSensorRawInput;
    NSDictionary *_portTypeToSensorRawOutput;
    NSArray *_highResStillImageDimensions;
    int _stillImageCapturePipeliningMode;
    unsigned int _numberOfBurstCapturesInFlight;
    unsigned int _maxNumberOfBurstCapturesAllowedInFlight;
    NSMutableArray *_requestQueue;
    os_unfair_lock_s _requestQueueLock;
    int _captureRequestCount;
    int _prepareRequestCount;
    NSObject<OS_dispatch_queue> *_stillImageDispatchQueue;
    NSObject<OS_dispatch_group> *_stillImageDispatchGroup;
    NSObject<OS_dispatch_group> *_stillImageGraphStopDispatchGroup;
    FigStateMachine *_stateMachine;
    NSMutableDictionary *_receivedImagesOrErrorsForRequestByPortType;
    NSMutableDictionary *_receivedUltraHighResImagesOrErrorsForRequestByPortType;
    int _clientExpectedImagesOrErrorsForRequest;
    int _clientReceivedImagesOrErrorsForRequest;
    FigCaptureStillImageSettings *_currentRequestedStillImageCaptureSettings;
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
    int _inUseUltraHighResBufferCount;
    int _ultraHighResFrameCountExpansionFactor;
    BOOL _responsiveShutterEnabled;
    BOOL _fastCapturePrioritizationEnabled;
    id<BWCompressedShotBuffer> *_compressedShotBuffer;
    int _extraUncompressedShotBufferCapacityForThermalSystemPressureLevelSerious;
    int _extraUncompressedShotBufferCapacityForThermalSystemPressureLevelCritical;
    BOOL _shotBufferEnabled;
    int _allocatedShotBufferCapacity;
    int _defaultShotBufferCapacity;
    int _numberOfUltraHighResBufferIncludedInShotBuffer;
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
    BWDeviceOrientationMonitor *_deviceOrientationMonitor;
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
+(struct ? )worstCaseMaxBracketedCaptureBufferCountForPreparedSettings:(id)arg0 stillImageCaptureSettings:(id)arg1 captureDevice:(id)arg2 ;
+(void)initialize;
+(void)setCurrentAllocatedShotBufferCapacity:(int)arg0 ;
+(void)setMaxShotBufferCapacity:(int)arg0 ;
-(BOOL)fastCapturePrioritizationEnabled;
-(BOOL)responsiveShutterEnabled;
-(id)_initWithCaptureDevice:(id)arg0 inputPortTypes:(id)arg1 sensorRawInputPortTypes:(id)arg2 highResStillImageDimensions:(id)arg3 allStateTransitionsHandler:(id)arg4 ;
-(id)_stateMachine;
-(id)_stillImageDispatchQueue;
-(id)compressedShotBuffer;
-(id)initWithCaptureDevice:(id)arg0 inputPortTypes:(id)arg1 sensorRawInputPortTypes:(id)arg2 highResStillImageDimensions:(id)arg3 ;
-(id)inputForPortType:(id)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(id)outputForPortType:(id)arg0 ;
-(id)sensorRawInputForPortType:(id)arg0 ;
-(id)sensorRawOutputForPortType:(id)arg0 ;
-(int)_enqueueRequestWithSettings:(id)arg0 serviceRequestsIfNecessary:(BOOL)arg1 ;
-(int)beginStillImageMomentCaptureWithSettings:(id)arg0 ;
-(int)cancelStillImageMomentCaptureWithSettingsID:(NSInteger)arg0 ;
-(int)captureStillImageNowWithSettings:(id)arg0 ;
-(int)commitStillImageMomentCaptureWithSettings:(id)arg0 ;
-(int)initiateStillImageCaptureNowWithSettings:(id)arg0 ;
-(int)prepareStillImageCaptureNowWithSettings:(id)arg0 ;
-(int)stillImageCapturePipeliningMode;
-(unsigned int)maxNumberOfBurstCapturesAllowedInFlight;
-(void)_configureCurrentCaptureRequestStateForFigCaptureStillImageSettings;
-(void)_unpackNextRequest;
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
-(void)setCompressedShotBuffer:(id)arg0 ;
-(void)setFastCapturePrioritizationEnabled:(BOOL)arg0 ;
-(void)setMaxNumberOfBurstCapturesAllowedInFlight:(unsigned int)arg0 ;
-(void)setResponsiveShutterEnabled:(BOOL)arg0 ;
-(void)setStillImageCapturePipeliningMode:(int)arg0 ;
-(void)willStopGraph:(BOOL)arg0 ;


@end


#endif