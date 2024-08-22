// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEOCONFERENCE_H
#define VIDEOCONFERENCE_H

@class NSArray, NSMutableArray, NSDictionary, NSString, NSMutableDictionary;
@protocol VCCallSessionDelegate, VCVideoSink, VCVideoCaptureClient, GKNATObserverDelegate, VCAudioIOSource, VCAudioIOSink, VCAudioIODelegate, VCAudioPowerLevelMonitorDelegate, VCMomentTransportDelegate, VideoConferenceChannelQualityDelegate, OS_dispatch_queue, VideoConferenceDelegate, VideoConferenceSpeakingDelegate;


#import "VCObject.h"
#import "VCAudioIO.h"
#import "VideoConferenceManager.h"
#import "VCAudioPowerSpectrumSource.h"
#import "VCImageQueue.h"
#import "CameraConferenceSynchronizer.h"
#import "VCCallSession.h"
#import "VCAudioPowerLevelMonitor.h"
#import "GKNATObserver.h"
#import "VCVideoRule.h"
#import "VCMoments.h"

@interface VideoConference : VCObject <VCCallSessionDelegate, VCVideoSink, VCVideoCaptureClient, GKNATObserverDelegate, VCAudioIOSource, VCAudioIOSink, VCAudioIODelegate, VCAudioPowerLevelMonitorDelegate, VCMomentTransportDelegate>

 {
    int _clientPid;
    id *delegate;
    id *_captionsDelegate;
    VCAudioIO *_audioIO;
    *opaqueVCAudioBufferList _sourceBuffer;
    *opaqueVCAudioBufferList _sinkBuffer;
    *opaqueVCAudioBufferList _sinkBufferMix;
    VideoConferenceManager *manager;
    _opaque_pthread_rwlock_t stateLock;
    NSArray *_sessionArray;
    NSMutableArray *_startedSessions;
    BOOL outputMeteringEnabled;
    BOOL inputMeteringEnabled;
    BOOL inputFrequencyMeteringEnabled;
    BOOL outputFrequencyMeteringEnabled;
    *opaqueVCFFTMeter _inputFFTMeter;
    *opaqueVCFFTMeter _outputFFTMeter;
    float outputMeterLevel;
    float inputMeterLevel;
    VCAudioPowerSpectrumSource *_inputAudioPowerSpectrumSource;
    VCAudioPowerSpectrumSource *_outputAudioPowerSpectrumSource;
    BOOL microphoneMuted;
    VCImageQueue *frontQueue;
    VCImageQueue *backQueue;
    VCImageQueue *screenQueue;
    VCImageQueue *currentQueue;
    char * currentFacing;
    int remoteFrameWidth;
    int remoteFrameHeight;
    CameraConferenceSynchronizer *synchronizer;
    CGFloat dAudioHostTime;
    _opaque_pthread_mutex_t xRemoteLayer;
    _opaque_pthread_mutex_t xAudioTS;
    unsigned int dwAudioTS;
    BOOL forceNoICE;
    VCCallSession *currentFocusSession;
    BOOL hasMic;
    float conferenceVolume;
    NSArray *mutedPeers;
    NSArray *connectedPeers;
    unsigned char speakingArray;
    NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
    float longTerm;
    float shortTerm;
    BOOL isTalking;
    unsigned int talkTime;
    ? recvRTPTimeStamp;
    BOOL useRateControl;
    unsigned char requestedCameraType;
    NSDictionary *natTypeDictionary;
    _opaque_pthread_mutex_t natMutex;
    unsigned int lastSentAudioSampleTime;
    VCAudioPowerLevelMonitor *_remoteAudioPowerLevelMonitor;
    GKNATObserver *natObserver;
    unsigned int mostRecentStartedCall;
    BOOL _isWarmedUp;
    BOOL bweOperatingModeInitialized;
    BOOL useNewBWEMode;
    BOOL useActiveProbingSenderLog;
    BOOL useFakeLargeFrameMode;
    BOOL shouldResumeAudio;
    BOOL shouldResumeVideo;
    int currentCamera;
    unsigned int timeStampUpdateCounter;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    int conferenceOperatingMode;
    *void _spatialMetadataEntry;
    unsigned int _audioChannelIndex;
    *void _spatialMetadata;
}


@property (nonatomic) int chatMode; // ivar: chatMode
@property (readonly, nonatomic) VCVideoRule *conferenceCaptureRule; // ivar: conferenceCaptureRule
@property float conferenceVolume;
@property (copy, nonatomic) NSString *currentFocus; // ivar: currentFocus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<VideoConferenceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) int deviceRole; // ivar: _deviceRole
@property BOOL disableVAD; // ivar: disableVAD
@property int downstreamBandwidth; // ivar: downstreamBandwidth
@property (getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property BOOL hasMic;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger inputAudioPowerSpectrumToken; // ivar: _inputAudioPowerSpectrumToken
@property (nonatomic, getter=isInputFrequencyMeteringEnabled) BOOL inputFrequencyMeteringEnabled;
@property (readonly, nonatomic) float inputMeterLevel;
@property (nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property (nonatomic) BOOL isFocus; // ivar: isFocus
@property (nonatomic) BOOL isGKVoiceChat; // ivar: isGKVoiceChat
@property (nonatomic) BOOL isUsingSuppression; // ivar: isUsingSuppression
@property BOOL isValid; // ivar: isValid
@property unsigned int lastActiveCall; // ivar: lastActiveCall
@property (readonly) int localFrameHeight; // ivar: localFrameHeight
@property (readonly) int localFrameWidth; // ivar: localFrameWidth
@property (nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;
@property (readonly, nonatomic) NSInteger outputAudioPowerSpectrumToken; // ivar: _outputAudioPowerSpectrumToken
@property (nonatomic, getter=isOutputFrequencyMeteringEnabled) BOOL outputFrequencyMeteringEnabled;
@property (readonly, nonatomic) float outputMeterLevel;
@property (nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property (nonatomic) int packetsPerBundle; // ivar: packetsPerBundle
@property (nonatomic) unsigned int preferredCodec; // ivar: preferredCodec
@property NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
@property (nonatomic) BOOL requiresWifi; // ivar: requiresWifi
@property (retain, nonatomic) NSMutableDictionary *sessionDict; // ivar: _sessionDict
@property (nonatomic) BOOL shouldPrioritizeParticipantIDForSIPInvite; // ivar: shouldPrioritizeParticipantIDForSIPInvite
@property BOOL shouldTimeoutPackets; // ivar: shouldTimeoutPackets
@property NSObject<VideoConferenceSpeakingDelegate> *speakingDelegate; // ivar: speakingDelegate
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property unsigned int talkingPeersLimit; // ivar: talkingPeersLimit
@property (nonatomic) unsigned int transportType; // ivar: _transportType
@property int upstreamBandwidth; // ivar: upstreamBandwidth
@property (nonatomic) BOOL useCompressedConnectionData; // ivar: useCompressedConnectionData
@property (nonatomic) BOOL useViceroyBlobFormat; // ivar: useViceroyBlobFormat
@property (readonly, nonatomic) VCMoments *vcMoments; // ivar: _vcMoments


-(BOOL)canProcessAudio;
-(BOOL)conferenceMatchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 ;
-(BOOL)deregisterForVideoFramesWithDeviceRole:(int)arg0 ;
-(BOOL)getIsAudioPaused:(*BOOL)arg0 callID:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)getIsVideoPaused:(*BOOL)arg0 callID:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)hasSessionWaitingForSIPInvite;
-(BOOL)initiateResolutionChangeToWidth:(int)arg0 height:(int)arg1 rate:(int)arg2 ;
-(BOOL)matchesCallID:(unsigned int)arg0 ;
-(BOOL)matchesOpenSessionForParticipantID:(id)arg0 ;
-(BOOL)matchesParticipantID:(id)arg0 ;
-(BOOL)onVideoFrame:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? )arg1 attribute:(struct ? )arg2 ;
-(BOOL)recvSamplesForSession:(id)arg0 sampleBuffer:(struct opaqueVCAudioBufferList *)arg1 ;
-(BOOL)registerForVideoFramesWithDeviceRole:(int)arg0 captureRule:(id)arg1 isUnpausing:(BOOL)arg2 ;
-(BOOL)session:(id)arg0 didStopVideoIO:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)session:(id)arg0 receivedRemoteFrame:(struct __CVBuffer *)arg1 atTime:(struct ? )arg2 withScreenAttributes:(id)arg3 videoAttributes:(id)arg4 isFirstFrame:(BOOL)arg5 isVideoPaused:(BOOL)arg6 ;
-(BOOL)session:(id)arg0 startVideoReceive:(*id)arg1 ;
-(BOOL)session:(id)arg0 startVideoSend:(*id)arg1 captureRuleWifi:(id)arg2 captureRuleCell:(id)arg3 interface:(int)arg4 isUnpausing:(BOOL)arg5 ;
-(BOOL)session:(id)arg0 stopVideoReceive:(*id)arg1 isPausing:(BOOL)arg2 ;
-(BOOL)setActive:(BOOL)arg0 ;
-(BOOL)setPauseAudio:(BOOL)arg0 ;
-(BOOL)setPauseAudio:(BOOL)arg0 callID:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)setPauseVideo:(BOOL)arg0 ;
-(BOOL)setPauseVideo:(BOOL)arg0 callID:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)shouldReinitializeCallWithDuration:(CGFloat)arg0 forCallID:(unsigned int)arg1 ;
-(BOOL)shouldSendAudioForCallID:(unsigned int)arg0 ;
-(BOOL)startConnectionWithParticipantID:(id)arg0 callID:(unsigned int)arg1 oldCallID:(unsigned int)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(BOOL)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 destination:(id)arg9 error:(*id)arg10 ;
-(BOOL)startConnectionWithParticipantID:(id)arg0 callID:(unsigned int)arg1 usingInviteData:(id)arg2 isCaller:(BOOL)arg3 capabilities:(id)arg4 idsSocket:(int)arg5 destination:(id)arg6 error:(*id)arg7 ;
-(BOOL)startConnectionWithParticipantID:(id)arg0 callID:(unsigned int)arg1 usingInviteData:(id)arg2 isCaller:(BOOL)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(BOOL)arg5 capabilities:(id)arg6 idsSocket:(int)arg7 destination:(id)arg8 error:(*id)arg9 ;
-(BOOL)stopVideoSend:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)updateSpeaking:(unsigned int)arg0 timeStamp:(unsigned int)arg1 ;
-(CGFloat)localBitrateForCallID:(unsigned int)arg0 ;
-(CGFloat)localFramerateForCallID:(unsigned int)arg0 ;
-(CGFloat)localPacketLossRateForCallID:(unsigned int)arg0 ;
-(CGFloat)networkQualityForCallID:(unsigned int)arg0 ;
-(CGFloat)packetLossRateForCallID:(unsigned int)arg0 ;
-(CGFloat)remoteBitrateForCallID:(unsigned int)arg0 ;
-(CGFloat)remoteFramerateForCallID:(unsigned int)arg0 ;
-(CGFloat)remotePacketLossRateForCallID:(unsigned int)arg0 ;
-(CGFloat)roundTripTimeForCallID:(unsigned int)arg0 ;
-(float)powerIntToFloat:(unsigned char)arg0 ;
-(id)callMetadataForCallID:(unsigned int)arg0 ;
-(id)clientCaptureRule;
-(id)connectionBlobForParticipantID:(id)arg0 callID:(*unsigned int)arg1 error:(*id)arg2 ;
-(id)initWithClientPid:(int)arg0 ;
-(id)inviteDataForParticipantID:(id)arg0 callID:(*unsigned int)arg1 remoteInviteData:(id)arg2 nonCellularCandidateTimeout:(CGFloat)arg3 error:(*id)arg4 ;
-(id)loopbackSessionWaitingForSIPInvite;
-(id)newSessionWithDeviceRole:(int)arg0 reportingHierarchyToken:(id)arg1 ;
-(id)openSessionForParticipant:(id)arg0 ;
-(id)sessionForIncomingParticipantID:(id)arg0 ;
-(id)sessionForParticipantID:(id)arg0 ;
-(id)sessionForSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 ;
-(id)statsForCallID:(unsigned int)arg0 ;
-(int)conferenceOperatingMode;
-(int)currentCameraID;
-(int)natType;
-(int)natTypeForCallSessions:(char *)arg0 ;
-(int)pullDecodedAsFocus:(struct opaqueVCAudioBufferList *)arg0 ;
-(int)pullDecodedAsFocusClient:(struct opaqueVCAudioBufferList *)arg0 ;
-(int)pullDecodedMeshMode:(struct opaqueVCAudioBufferList *)arg0 ;
-(int)setupSpatialAudioWithCallID:(unsigned int)arg0 ;
-(int)sipCallbackNotification:(int)arg0 callID:(unsigned int)arg1 msgIn:(char *)arg2 msgOut:(char *)arg3 optional:(*void)arg4 confIndex:(*int)arg5 ;
-(int)stateForCallID:(unsigned int)arg0 ;
-(int)tryrdlock;
-(struct AudioStreamBasicDescription )audioIOFormat;
-(struct CGSize )remoteFrameSizeForCallID:(unsigned int)arg0 ;
-(unsigned char)powerFloatToInt:(float)arg0 ;
-(unsigned int)calculateTalkingMaskAtTimeStamp:(unsigned int)arg0 ;
-(unsigned int)callIDForOpenSessionWithParticipantID:(id)arg0 ;
-(unsigned int)initializeNewCallWithDeviceRole:(int)arg0 ;
-(unsigned int)initializeNewCallWithDeviceRole:(int)arg0 reportingHierarchyToken:(id)arg1 ;
-(unsigned int)momentsCapabilitiesWithNegotiationBlobMomentsSettings_Capabilities:(int)arg0 ;
-(unsigned int)pruneQuietestPeers:(unsigned int)arg0 talking:(unsigned int)arg1 mask:(unsigned int)arg2 meters:(char *)arg3 ;
-(void)NATTypeDictionaryUpdated:(id)arg0 ;
-(void)avConferencePreviewError:(id)arg0 ;
-(void)avConferenceScreenCaptureError:(id)arg0 ;
-(void)calculateMixingArrays:(*unsigned int)arg0 talkingMask:(unsigned int)arg1 ;
-(void)cameraAvailabilityDidChange:(BOOL)arg0 ;
-(void)cancelCallID:(unsigned int)arg0 ;
-(void)cancelCallID:(unsigned int)arg0 error:(id)arg1 ;
-(void)captureAsFocus:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)captureAsFocusClient:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)captureMeshMode:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)cleanupManager;
-(void)cleanupProc:(id)arg0 ;
-(void)cleanupQueues;
-(void)cleanupSession:(id)arg0 didRemoteCancel:(BOOL)arg1 ;
-(void)cleanupSession:(id)arg0 withDelay:(NSUInteger)arg1 ;
-(void)cleanupSpatialAudioForCallID:(unsigned int)arg0 ;
// -(void)connectionBlobForParticipantID:(id)arg0 callID:(unsigned int)arg1 block:(id)arg2 queue:(unk)arg3 caller:(id)arg4  ;
-(void)dealloc;
-(void)defaultCleanupSession:(id)arg0 ;
-(void)didChangeLocalVariablesForSession:(id)arg0 ;
-(void)didReceiveCaptions:(id)arg0 remoteClient:(unsigned int)arg1 ;
-(void)didResumeAudioIO:(id)arg0 ;
-(void)didSuspendAudioIO:(id)arg0 ;
-(void)didUpdateBasebandCodec:(struct _VCRemoteCodecInfo *)arg0 ;
-(void)forceNoICE:(BOOL)arg0 ;
-(void)handleCellTechChange:(int)arg0 cellularMaxPktLen:(unsigned short)arg1 ;
// -(void)inviteDataForParticipantID:(id)arg0 callID:(unsigned int)arg1 remoteInviteData:(id)arg2 nonCellularCandidateTimeout:(NSUInteger)arg3 block:(id)arg4 queue:(unk)arg5 caller:(id)arg6  ;
-(void)markUnfinishedSessions;
-(void)moments:(id)arg0 shouldProcessRequest:(id)arg1 recipientID:(id)arg2 ;
-(void)notifyDelegateOfLocalVariablesChange;
-(void)processRelayRequestResponse:(unsigned int)arg0 responseDict:(id)arg1 didOriginateRequest:(BOOL)arg2 ;
-(void)processRelayUpdate:(unsigned int)arg0 updateDict:(id)arg1 didOriginateRequest:(BOOL)arg2 ;
-(void)processRemoteIPChange:(id)arg0 callID:(unsigned int)arg1 ;
-(void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)rdlock;
-(void)remoteAudioDidPause:(BOOL)arg0 callID:(unsigned int)arg1 ;
-(void)remoteCancelledCallID:(unsigned int)arg0 ;
-(void)remoteVideoDidPause:(BOOL)arg0 callID:(unsigned int)arg1 ;
-(void)sendARPLData:(id)arg0 toCallID:(unsigned int)arg1 ;
-(void)sendData:(id)arg0 toCallID:(unsigned int)arg1 encrypted:(BOOL)arg2 ;
-(void)session:(id)arg0 cancelRelayRequest:(id)arg1 ;
-(void)session:(id)arg0 changeVideoRulesToCaptureRule:(id)arg1 encodeRule:(id)arg2 featureListString:(id)arg3 ;
-(void)session:(id)arg0 cleanUpWithDelay:(NSInteger)arg1 error:(id)arg2 ;
-(void)session:(id)arg0 connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 callID:(unsigned int)arg3 ;
-(void)session:(id)arg0 didChangeRemoteScreenAttributes:(id)arg1 ;
-(void)session:(id)arg0 didChangeVideoRule:(id)arg1 ;
-(void)session:(id)arg0 didPauseAudio:(BOOL)arg1 error:(id)arg2 ;
-(void)session:(id)arg0 didPauseVideo:(BOOL)arg1 error:(id)arg2 ;
-(void)session:(id)arg0 didReceiveARPLData:(id)arg1 fromCallID:(unsigned int)arg2 ;
-(void)session:(id)arg0 didReceiveData:(id)arg1 messageType:(unsigned int)arg2 withCallID:(unsigned int)arg3 ;
-(void)session:(id)arg0 didReceiveMomentsRequest:(id)arg1 ;
-(void)session:(id)arg0 didStart:(BOOL)arg1 connectionType:(unsigned int)arg2 localInterfaceType:(id)arg3 remoteInterfaceType:(id)arg4 error:(id)arg5 ;
-(void)session:(id)arg0 didStopWithError:(id)arg1 ;
-(void)session:(id)arg0 initiateRelayRequest:(id)arg1 ;
-(void)session:(id)arg0 isSendingAudio:(BOOL)arg1 error:(id)arg2 ;
-(void)session:(id)arg0 localAudioEnabled:(BOOL)arg1 withCallID:(unsigned int)arg2 error:(id)arg3 ;
-(void)session:(id)arg0 localIPChange:(id)arg1 withCallID:(unsigned int)arg2 ;
-(void)session:(id)arg0 packMeters:(char *)arg1 withLength:(char *)arg2 ;
-(void)session:(id)arg0 receivedNoPacketsForSeconds:(CGFloat)arg1 ;
-(void)session:(id)arg0 remoteAudioEnabled:(BOOL)arg1 withCallID:(unsigned int)arg2 ;
-(void)session:(id)arg0 remoteCallingModeChanged:(unsigned int)arg1 withCallID:(unsigned int)arg2 ;
-(void)session:(id)arg0 remoteMediaStalled:(BOOL)arg1 ;
-(void)session:(id)arg0 sendRelayResponse:(id)arg1 ;
-(void)session:(id)arg0 setMomentsCapabilities:(unsigned int)arg1 imageType:(int)arg2 videoCodec:(int)arg3 ;
-(void)session:(id)arg0 setRemoteBasebandCodecType:(unsigned int)arg1 sampleRate:(CGFloat)arg2 ;
-(void)session:(id)arg0 startAudioWithFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo *)arg1 internalFrameFormat:(struct tagVCAudioFrameFormat *)arg2 completionHandler:(id)arg3 ;
-(void)session:(id)arg0 stopAudioWithCompletionHandler:(id)arg1 ;
-(void)session:(id)arg0 withCallID:(unsigned int)arg1 networkHint:(BOOL)arg2 ;
-(void)session:(id)arg0 withCallID:(unsigned int)arg1 videoIsDegraded:(BOOL)arg2 isRemote:(BOOL)arg3 ;
-(void)setBWEOptions:(BOOL)arg0 UseNewBWEMode:(BOOL)arg1 FakeLargeFrameMode:(BOOL)arg2 ProbingSenderLog:(BOOL)arg3 ;
-(void)setCallReport:(unsigned int)arg0 withReport:(id)arg1 ;
-(void)setCallReportProtobuf:(unsigned int)arg0 withProtobufData:(id)arg1 forMetricID:(NSInteger)arg2 ;
-(void)setCanProcessAudio:(BOOL)arg0 ;
-(void)setConferenceOperatingMode:(int)arg0 ;
-(void)setConferenceState:(unsigned int)arg0 forCallID:(unsigned int)arg1 ;
-(void)setConferenceVisualRectangle:(struct CGRect )arg0 forCallID:(unsigned int)arg1 ;
-(void)setPeerCN:(id)arg0 callID:(unsigned int)arg1 ;
-(void)setPeerProtocolVersion:(unsigned int)arg0 forCallID:(unsigned int)arg1 ;
-(void)setPeerReportingID:(id)arg0 sessionID:(id)arg1 callID:(unsigned int)arg2 ;
-(void)setSendAudio:(BOOL)arg0 forCallID:(unsigned int)arg1 ;
-(void)setSessionID:(id)arg0 callID:(unsigned int)arg1 ;
-(void)setUpAudioIO:(int)arg0 callID:(unsigned int)arg1 ;
-(void)setupNATObserver;
-(void)shouldSendBlackFrame:(BOOL)arg0 callID:(id)arg1 ;
-(void)sourceFrameRateDidChange:(unsigned int)arg0 ;
-(void)stopAllCalls:(id)arg0 ;
-(void)stopCallID:(unsigned int)arg0 ;
-(void)stopCallID:(unsigned int)arg0 didRemoteCancel:(BOOL)arg1 error:(id)arg2 ;
-(void)thermalLevelDidChange:(int)arg0 ;
-(void)threadSafeCleanupSession:(id)arg0 ;
-(void)triggerInterfaceChange;
-(void)unlock;
-(void)updateAudioTimestampsForSession:(id)arg0 withNewSampleTime:(unsigned int)arg1 hostTime:(CGFloat)arg2 numSamples:(int)arg3 ;
-(void)updateCapabilities:(id)arg0 forCallID:(unsigned int)arg1 ;
-(void)updateCapabilities:(id)arg0 forSession:(id)arg1 ;
-(void)updateMeter:(unsigned char)arg0 forParticipant:(id)arg1 atIndex:(unsigned int)arg2 ;
-(void)updateMeters:(unsigned short)arg0 ;
-(void)updatedConnectedPeers:(id)arg0 ;
-(void)updatedMutedPeers:(id)arg0 forParticipantID:(id)arg1 ;
-(void)vcAudioPowerLevelMonitor:(id)arg0 isAudioBelowThreshold:(BOOL)arg1 ;
-(void)warmupForCall;
-(void)wrlock;


@end


#endif