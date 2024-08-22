// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCSESSIONPARTICIPANTLOCAL_H
#define VCSESSIONPARTICIPANTLOCAL_H

@class NSMutableSet, NSMutableDictionary, NSSet, NSString, NSArray, NSDictionary;
@protocol VCVideoSink, VCVideoCaptureClient, VCMomentTransportDelegate, VCIDSStreamIDGenerator, VCSessionParticipantLocalVideoStreamDelegate;


#import "VCSessionParticipant.h"
#import "VCSessionUplinkBandwidthAllocator.h"
#import "VCVideoRule.h"
#import "VCAudioPowerSpectrumSource.h"
#import "VCSystemAudioCaptureSession.h"
#import "VCMoments.h"

@interface VCSessionParticipantLocal : VCSessionParticipant <VCVideoSink, VCVideoCaptureClient, VCMomentTransportDelegate, VCIDSStreamIDGenerator, VCSessionParticipantLocalVideoStreamDelegate>

 {
    VCSessionUplinkBandwidthAllocator *_uplinkBandwidthAllocator;
    unsigned int _currentUplinkTargetBitrate;
    unsigned int _lastSentAudioSampleTime;
    CGFloat _lastSentAudioHostTime;
    _opaque_pthread_rwlock_t _audioTimestampRWLock;
    unsigned char _lastAudioPriority;
    unsigned char _lastVideoPriority;
    uint8_t _videoPriority;
    BOOL _videoPriorityEnabled;
    BOOL _shouldResize;
    BOOL _enableRedundancy;
    BOOL _isVCMediaQueueScheduled;
    NSMutableSet *_localPublishedStreams;
    float _averageSilenceAudioPower;
    unsigned char _audioPriorityRampUp;
    unsigned char _audioPriorityDecaySlow;
    unsigned char _audioPriorityDecayFast;
    float _audioVoiceDetectionSensitivity;
    float _audioSilencePowerAverageMultiplier;
    unsigned char _forcedAudioPriorityValue;
    CGFloat _forcedAudioPriorityLastUpdateTime;
    BOOL _forcedAudioPriorityEnabled;
    VCVideoRule *_videoRule;
    BOOL _speechDetected;
    *opaqueVCVoiceDetector _voiceDetector;
    CGFloat _fecRatio;
    VCAudioPowerSpectrumSource *_powerSpectrumSource;
    int _currentVideoCaptureFrameRate;
    int _maxSupportedMultiwayCameraFrameRate;
    NSInteger _maxSupportedMultiwayVideoResolution;
    unsigned char _presentationState;
    int _videoCaptureSource;
    BOOL _forceMinBitrate;
    unsigned int _minBitrate;
    NSMutableDictionary *_streamInputIDToCaptureSourceIDMap;
    VCSystemAudioCaptureSession *_systemAudioCaptureSession;
    BOOL _isMixingSystemAudio;
    CGFloat _spatialAudioDisabledLastUpdateTime;
    NSMutableSet *_generatedStreamIDs;
    NSMutableSet *_generatedSSRCs;
    CGFloat _initTime;
}


@property (readonly, nonatomic) *__CFString activeStreamKeys;
@property (readonly, nonatomic) NSSet *audioPayloadTypes; // ivar: _audioPayloadTypes
@property (readonly, nonatomic) unsigned short connectionStatsStreamID; // ivar: _connectionStatsStreamID
@property (readonly, nonatomic) unsigned int currentUplinkTotalBitrate;
@property (nonatomic) int currentVideoCaptureFrameRate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableVADFiltering; // ivar: _enableVADFiltering
@property (nonatomic) BOOL encryptionInfoReceived; // ivar: _encryptionInfoReceived
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRemoteOnPeace; // ivar: _isRemoteOnPeace
@property (readonly, nonatomic) VCMoments *moments; // ivar: _moments
@property (readonly, nonatomic) _VCSessionParticipantLocalOneToOneSettings oneToOneSettings; // ivar: _oneToOneSettings
@property (copy, nonatomic) NSArray *peerSubscribedStreams; // ivar: _peerSubscribedStreams
@property (readonly, nonatomic) NSDictionary *streamGroupStateDictionary;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int uplinkBitrateCapCell; // ivar: _uplinkBitrateCapCell
@property (nonatomic) unsigned int uplinkBitrateCapWifi; // ivar: _uplinkBitrateCapWifi
@property (readonly, nonatomic) NSSet *videoPayloadTypes; // ivar: _videoPayloadTypes


+(BOOL)negotiatorCipherSuite:(*unsigned int)arg0 fromMediaStreamConfig:(id)arg1 ;
-(BOOL)applyCachedMediaStreams:(id)arg0 toMultiwayConfig:(id)arg1 ;
-(BOOL)applyCachedMediaStreamsWithStreamConfigurations:(id)arg0 mediaNegotiatorConfig:(id)arg1 ;
-(BOOL)applyCachedStreamGroupMediaStreams:(id)arg0 toMultiwayConfig:(id)arg1 ;
-(BOOL)checkSubscribedStreamsConsistency:(id)arg0 ;
-(BOOL)completeStreamSetup:(id)arg0 ;
-(BOOL)configureAudioIOWithDeviceRole:(int)arg0 operatingMode:(int)arg1 ;
-(BOOL)configureWithOneToOneParticipantConfig:(id)arg0 shouldConfigureGFTStreams:(BOOL)arg1 ;
-(BOOL)containsStreamWithSSRC:(unsigned int)arg0 ;
-(BOOL)createParticipantInfo;
-(BOOL)enableRedundancy:(BOOL)arg0 ;
-(BOOL)initializeMediaNegotiator;
-(BOOL)initializeStreamGroupsForLocalConfig:(id)arg0 ;
-(BOOL)isHighPriorityAudioWithPower:(float)arg0 voiceActive:(BOOL)arg1 ;
-(BOOL)isOneToOneModeEnabled;
-(BOOL)isStreamGroupActive:(id)arg0 ;
-(BOOL)onVideoFrame:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? )arg1 attribute:(struct ? )arg2 ;
-(BOOL)reconfigureOneToOneAudioStream:(id)arg0 error:(*id)arg1 ;
-(BOOL)setState:(unsigned int)arg0 ;
-(BOOL)setupAudioStreamGroupWithStreamConfigs:(id)arg0 negotiatorConfig:(id)arg1 streamGroupConfiguration:(id)arg2 ;
-(BOOL)setupAudioStreamsWithStreamConfiguration:(id)arg0 streamGroupConfiguration:(id)arg1 ;
-(BOOL)setupAudioStreamsWithStreamConfigurations:(id)arg0 mediaNegotiatorConfig:(id)arg1 streamGroupConfiguration:(id)arg2 ;
-(BOOL)setupCameraStreamGroupWithStreamConfigs:(id)arg0 negotiatorConfig:(id)arg1 streamGroupConfiguration:(id)arg2 ;
-(BOOL)setupOneToOneRedundancyControllers;
-(BOOL)setupOneToOneVideoStreamWithConfig:(id)arg0 ;
-(BOOL)setupScreenStreamWithConfiguration:(id)arg0 idsDestination:(id)arg1 ;
-(BOOL)setupStreamGroupMediaSync;
-(BOOL)setupStreamGroupWithStreamGroupConfig:(id)arg0 negotiatorConfig:(id)arg1 ;
-(BOOL)setupStreamGroupsWithConfig:(id)arg0 negotiatorConfig:(id)arg1 ;
-(BOOL)setupStreamInputsWithConfig:(id)arg0 ;
-(BOOL)setupVideoMediaStreamsWithStreamGroupConfiguration:(id)arg0 streamGroupConfig:(id)arg1 streamGroupID:(unsigned int)arg2 mediaType:(unsigned int)arg3 ;
-(BOOL)setupVideoStreamsWithStreamConfiguration:(id)arg0 streamGroupConfiguration:(id)arg1 ;
-(BOOL)setupVideoStreamsWithStreamConfigurations:(id)arg0 mediaNegotiatorConfig:(id)arg1 streamGroupConfiguration:(id)arg2 ;
-(BOOL)shouldSendMedia;
-(NSInteger)maxCaptureResolution;
-(id)applyVideoEnabledSetting:(BOOL)arg0 ;
-(id)audioRuleCollectionWithAudioStreamConfig:(id)arg0 ;
-(id)clientCaptureRule;
-(id)featureListString:(id)arg0 removingPayload:(int)arg1 andPayload:(int)arg2 ;
-(id)getAudioDumpName;
-(id)initWithConfig:(id)arg0 delegate:(id)arg1 ;
-(id)multiwayAudioStreamNegotiatorConfigForStreamConfig:(id)arg0 ;
-(id)multiwayVideoStreamConfigs;
-(id)multiwayVideoStreamNegotiatorConfigForStreamConfig:(id)arg0 isSubstream:(BOOL)arg1 ;
-(id)newAudioSendGroupConfigWithStreamGroupID:(unsigned int)arg0 streamGroupConfiguration:(id)arg1 ;
-(id)newAudioStreamOneToOneConfiguration;
-(id)newAudioStreamSendGroupWithConfig:(id)arg0 streamGroupID:(unsigned int)arg1 ;
-(id)newMediaNegotiatorAudioConfiguration;
-(id)newScreenStreamOneToOneConfiguration;
-(id)newStreamGroupNegotiationConfigForStreamGroup:(id)arg0 ;
-(id)newStreamInfoWithAudioStreamWithConfiguration:(id)arg0 idsDestination:(id)arg1 isStreamGroup:(BOOL)arg2 streamGroupID:(unsigned int)arg3 ;
-(id)newStreamInfoWithAudioStreamWithConfiguration:(id)arg0 streamToken:(NSInteger)arg1 isStreamGroup:(BOOL)arg2 streamGroupID:(unsigned int)arg3 ;
-(id)newStreamInfoWithVideoStreamWithConfiguration:(id)arg0 idsDestination:(id)arg1 groupID:(unsigned int)arg2 ;
-(id)newStreamInfoWithVideoStreamWithConfiguration:(id)arg0 streamGroupID:(unsigned int)arg1 ;
-(id)newVideoSendGroupConfigWithStreamGroupID:(unsigned int)arg0 streamGroupConfiguration:(id)arg1 ;
-(id)newVideoStreamOneToOneConfiguration;
-(id)newVideoStreamWithConfig:(id)arg0 groupID:(unsigned int)arg1 ;
-(id)processCachedParticipantData:(id)arg0 ;
-(id)setupStreamRTP:(id)arg0 ;
-(id)supportedAudioRules;
-(int)captureSourceIDFromStreamGroupConfig:(id)arg0 ;
-(int)maxCaptureCameraFrameRate;
-(int)negotiateOneToOne:(id)arg0 ;
-(struct CGSize )captureEncodingSize;
-(struct opaqueCMFormatDescription *)getAudioFormatDescriptionForStreamGroupID:(unsigned int)arg0 ;
-(struct opaqueCMFormatDescription *)getCaptionsFormatDescription;
-(struct tagVCNetworkStreamIdentifiers )generateSSRC:(BOOL)arg0 streamID:(BOOL)arg1 repairStreamID:(BOOL)arg2 ;
-(unsigned int)calculateUplinkTotalBitrateForMediaStreams:(id)arg0 ;
-(unsigned int)generateSSRC;
-(unsigned int)mediaStreamGroupStateToAVCStreamGroupState:(unsigned int)arg0 ;
-(unsigned int)streamGroupStateForStreamGroup:(id)arg0 ;
-(unsigned short)generateIDSStreamID;
-(void)addCallInfoBlobToParticipantInfo:(id)arg0 ;
-(void)applyOneToOneAudioRedundancyPercentage:(unsigned int)arg0 ;
-(void)applyOneToOneVideoRedundancyPercentage:(unsigned int)arg0 ;
-(void)applyScreenEnabledSetting:(BOOL)arg0 ;
-(void)avConferencePreviewError:(id)arg0 ;
-(void)cameraAvailabilityDidChange:(BOOL)arg0 ;
-(void)captureSourceCenterStageEnabledDidChange:(BOOL)arg0 ;
-(void)captureSourcePortraitBlurEnabledDidChange:(BOOL)arg0 ;
-(void)captureSourcePositionDidChange:(BOOL)arg0 ;
-(void)cleanupStreamInputs;
-(void)collectAudioChannelMetrics:(struct ? *)arg0 ;
-(void)collectVideoChannelMetrics:(struct ? *)arg0 ;
-(void)createOpaqueData;
-(void)dealloc;
-(void)deregisterForVideoCapture;
// -(void)didReceiveCustomReportPacket:(struct tagRTCPPACKET *)arg0 arrivalNTPTime:(unk)arg1  ;
// -(void)didReceiveReportPacket:(struct tagRTCPPACKET *)arg0 arrivalNTPTime:(unk)arg1  ;
-(void)dispatchedHandleActiveConnectionChangeForMultiway:(id)arg0 ;
-(void)dispatchedHandleActiveConnectionChangeForOneToOneMode:(id)arg0 ;
-(void)dispatchedUpdateOneToOneMediaStreamsWithTargetBitrate:(unsigned int)arg0 rateChangeCounter:(unsigned int)arg1 ;
-(void)dispatchedUpdateUplinkTargetBitrateForStreamGroups;
-(void)frameRateIsBeingThrottled:(int)arg0 thermalLevelDidChange:(BOOL)arg1 powerLevelDidChange:(BOOL)arg2 ;
-(void)generateKeyFrameWithStreamID:(id)arg0 firType:(int)arg1 ;
-(void)handleActiveConnectionChange:(id)arg0 ;
-(void)initializeMultiwayAudioStreamGroup:(id)arg0 forLocalConfig:(id)arg1 ;
-(void)initializeMultiwayVideoStreamGroup:(id)arg0 forLocalConfig:(id)arg1 ;
-(void)logRemoteParticipantInfo:(id)arg0 ;
-(void)moments:(id)arg0 shouldProcessRequest:(id)arg1 recipientID:(id)arg2 ;
-(void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)redundancyController:(id)arg0 redundancyIntervalDidChange:(CGFloat)arg1 ;
-(void)redundancyController:(id)arg0 redundancyPercentageDidChange:(unsigned int)arg1 ;
-(void)redundancyController:(id)arg0 redundancyVectorDidChange:(struct ? )arg1 ;
-(void)registerForVideoCapture:(int)arg0 ;
-(void)remoteScreenAttributesDidChange:(id)arg0 ;
-(void)setCellularUniqueTag:(unsigned int)arg0 ;
-(void)setMediaSuggestion:(struct VCRateControlMediaSuggestion *)arg0 ;
-(void)setMuted:(BOOL)arg0 ;
-(void)setOneToOneModeEnabled:(BOOL)arg0 ;
-(void)setupEncodingModeWithVideoStreamConfig:(id)arg0 ;
-(void)setupOneToOneAudioRedundancyController;
-(void)setupOneToOneEncryptionInfoWithConfiguration:(id)arg0 ;
-(void)setupOneToOneVideoRedundancyController;
-(void)setupSystemAudioCapture;
-(void)sourceFrameRateDidChange:(unsigned int)arg0 ;
-(void)start;
-(void)startSystemAudioCapture;
-(void)startVoiceActivityDetection;
-(void)stop;
-(void)stopAudioIOCompletion;
-(void)stopSystemAudioCapture;
-(void)stopVideoCaptureClient;
-(void)stopVoiceActivityDetection;
-(void)streamGroup:(id)arg0 didSuspendStreams:(BOOL)arg1 ;
-(void)streamGroupNegotiationVideoConfigForStreamGroup:(id)arg0 streamConfig:(id)arg1 mediaConfig:(id)arg2 ;
-(void)thermalLevelDidChange:(int)arg0 ;
-(void)updateActiveVoiceOnly;
-(void)updateAudioPriorityWithSampleBuffer:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)updateAudioSpectrumState;
-(void)updateBandwithAllocationTable:(id)arg0 mediaType:(unsigned int)arg1 streamGroupID:(unsigned int)arg2 encoderGroupID:(unsigned int)arg3 minNetworkBitrate:(unsigned int)arg4 maxNetworkBitrate:(unsigned int)arg5 ;
-(void)updateCameraStreamGroupStateForVideoPaused:(*unsigned int)arg0 ;
-(void)updateMediaSettingsWithConfig:(id)arg0 ;
-(void)updateMomentsCapabillities:(unsigned int)arg0 imageType:(int)arg1 videoCodec:(int)arg2 ;
-(void)updatePayloadTypesWithAudioConfigs:(id)arg0 ;
-(void)updatePayloadTypesWithVideoConfigs:(id)arg0 ;
-(void)updateSupportedAudioRules:(id)arg0 ;
-(void)updateTargetBitrateBasedOnCurrentOneToOneSettings;
-(void)updateTargetBitrateOneToOne:(unsigned int)arg0 rateChangeCounter:(unsigned int)arg1 ;
-(void)updateUplinkTargetBitrate:(unsigned int)arg0 ;
-(void)updateUplinkTargetBitrateForStreamGroups;
-(void)updateVideoOneToOneBitrate;
-(void)updateVideoPaused:(BOOL)arg0 ;
-(void)updateWindowState:(int)arg0 isLocal:(BOOL)arg1 windowRect:(struct CGRect )arg2 ;


@end


#endif