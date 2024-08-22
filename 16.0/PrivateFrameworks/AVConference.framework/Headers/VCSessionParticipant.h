// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCSESSIONPARTICIPANT_H
#define VCSESSIONPARTICIPANT_H

@class NSString, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSArray;
@protocol VCMediaStreamDelegate, VCSecurityEventHandler, VCAudioIOSink, VCAudioIODelegate, VCConnectionChangedHandler, VCRedundancyControllerDelegate, VCAudioPowerSpectrumSourceDelegate, VCMediaStreamGroupDelegate, OS_dispatch_queue, VCSessionParticipantDelegate, VCSessionParticipantStreamDelegate;


#import "VCObject.h"
#import "VCAudioIO.h"
#import "VCRedundancyControllerVideo.h"
#import "VCSecurityKeyManager.h"
#import "VCNetworkFeedbackController.h"
#import "AVCBasebandCongestionDetector.h"
#import "VCCallInfoBlob.h"
#import "VCSessionMediaNegotiator.h"
#import "VCSessionParticipantOneToOneConfig.h"
#import "AVCStatisticsCollector.h"
#import "VCAudioRuleCollection.h"

@interface VCSessionParticipant : VCObject <VCMediaStreamDelegate, VCSecurityEventHandler, VCAudioIOSink, VCAudioIODelegate, VCConnectionChangedHandler, VCRedundancyControllerDelegate, VCAudioPowerSpectrumSourceDelegate, VCMediaStreamGroupDelegate>

 {
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_participantQueue;
    int _processId;
    id *_delegate;
    id *_streamDelegate;
    NSString *_sessionUUID;
    NSString *_idsDestination;
    NSData *_mediaBlobCompressed;
    NSDictionary *_participantInfo;
    unsigned int _transportSessionID;
    int _deviceRole;
    NSInteger _direction;
    NSMutableArray *_audioStreams;
    NSMutableArray *_videoStreams;
    CGFloat _lastParticipantMKMRecoveryTime;
    CGFloat _participantMKMRecoveryTimeout;
    BOOL _audioPausedToStart;
    BOOL _videoPausedToStart;
    NSMutableDictionary *_mediaTypeSettingsDict;
    VCAudioIO *_audioIO;
    unsigned int _preferredIOSampleRate;
    unsigned int _preferredIOSamplesPerFrame;
    VCRedundancyControllerVideo *_videoRedundancyController;
    id *_reportingAgentWeak;
    BOOL _isGKVoiceChat;
    BOOL _isLowLatencyAudio;
    NSMutableDictionary *_streamGroups;
    NSMutableArray *_micStreamGroups;
    NSMutableArray *_videoStreamGroups;
    VCSecurityKeyManager *_securityKeyManager;
    VCNetworkFeedbackController *_networkFeedbackController;
}


@property (readonly, nonatomic) NSArray *allParticipantManagedStreamInfos;
@property (readonly, nonatomic) NSArray *allParticipantStreamInfo;
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled; // ivar: _audioEnabled
@property (nonatomic, getter=isAudioPaused) BOOL audioPaused; // ivar: _audioPaused
@property (readonly, nonatomic) float audioPosition; // ivar: _audioPosition
@property (readonly, nonatomic) NSArray *audioStreams;
@property (retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // ivar: _basebandCongestionDetector
@property (readonly) VCCallInfoBlob *callInfoBlob; // ivar: _callInfoBlob
@property (nonatomic) unsigned int cellularUniqueTag; // ivar: _cellularUniqueTag
@property (readonly, nonatomic) unk creationTime; // ivar: _creationTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<VCSessionParticipantDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasScreenStreams; // ivar: _hasScreenStreams
@property (readonly, nonatomic) BOOL hasVideoStreams;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger idsParticipantID; // ivar: _idsParticipantID
@property (nonatomic, getter=isLocalOnWiFi) BOOL localOnWiFi; // ivar: _localOnWiFi
@property (readonly, nonatomic) VCSessionMediaNegotiator *mediaNegotiator; // ivar: _mediaNegotiator
@property (nonatomic) *tagVCMediaQueue mediaQueue; // ivar: _mediaQueue
@property (nonatomic, getter=isMuted) BOOL muted; // ivar: _isMuted
@property (retain, nonatomic) VCSessionParticipantOneToOneConfig *oneToOneConfig; // ivar: _oneToOneConfig
@property (nonatomic, getter=isOneToOneModeEnabled) BOOL oneToOneModeEnabled; // ivar: _oneToOneModeEnabled
@property (readonly, nonatomic) NSData *opaqueData; // ivar: _opaqueData
@property (readonly, nonatomic) int operatingMode;
@property (readonly, nonatomic) NSDictionary *participantStreamTokens; // ivar: _participantStreamTokens
@property (nonatomic) unsigned char presentationState; // ivar: _presentationState
@property (nonatomic) *opaqueRTCReporting reportingAgent;
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled; // ivar: _screenEnabled
@property (nonatomic) BOOL sharingEnabled; // ivar: _sharingEnabled
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // ivar: _statisticsCollector
@property (nonatomic) NSObject<VCSessionParticipantStreamDelegate> *streamDelegate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) VCAudioRuleCollection *supportedAudioRules; // ivar: _supportedAudioRules
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // ivar: _videoEnabled
@property (nonatomic, getter=isVideoPaused) BOOL videoPaused; // ivar: _videoPaused
@property (readonly, nonatomic) float volume; // ivar: _volume


+(id)mediaTypesFromStreamGroupID:(unsigned int)arg0 ;
+(id)participantDataWithMediaNegotiatorVersion:(int)arg0 participantData:(id)arg1 ;
+(id)participantDataWithParticipantData:(id)arg0 isReinit:(BOOL)arg1 ;
+(id)participantDataWithParticipantInfo:(id)arg0 ;
+(id)participantInfoWithParticipantData:(id)arg0 ;
+(id)streamGroupIDsFromParticipantData:(id)arg0 ;
+(unsigned int)mediaStreamGroupStateToVCStreamGroupState:(unsigned int)arg0 ;
+(void)addCodecModesForPayload:(int)arg0 toCodecConfig:(id)arg1 ;
+(void)applyVideoNegotiatedSettings:(id)arg0 toStreamConfiguration:(id)arg1 withFeatureStringDictionary:(id)arg2 ;
-(BOOL)completeStreamSetup:(id)arg0 ;
-(BOOL)configureAudioIOWithDeviceRole:(int)arg0 operatingMode:(int)arg1 ;
-(BOOL)configureAudioWithDeviceRole:(int)arg0 ;
-(BOOL)configureOneToOneWithConfig:(id)arg0 ;
-(BOOL)configureVideoWithDeviceRole:(int)arg0 streamInfoArray:(id)arg1 ;
-(BOOL)configureWithDeviceRole:(int)arg0 negotiatedVideoEnabled:(BOOL)arg1 negotiatedScreenEnabled:(BOOL)arg2 operatingMode:(int)arg3 ;
-(BOOL)dispatchedConfigureWithDeviceRole:(int)arg0 negotiatedVideoEnabled:(BOOL)arg1 negotiatedScreenEnabled:(BOOL)arg2 operatingMode:(int)arg3 ;
-(BOOL)handleEncryptionInfoChange:(id)arg0 ;
-(BOOL)isActiveMediaType:(unsigned int)arg0 ;
-(BOOL)isAudioStream:(id)arg0 ;
-(BOOL)isStreamGroupActive:(id)arg0 ;
-(BOOL)isVideoStream:(id)arg0 ;
-(BOOL)setState:(unsigned int)arg0 ;
-(BOOL)setupAudioStreamConfiguration:(id)arg0 audioRules:(id)arg1 ;
-(BOOL)setupMediaSyncForStreamGroup:(id)arg0 ;
-(BOOL)setupSecurityKeyHolderForStreamConfig:(id)arg0 ;
-(BOOL)setupStreamGroupMediaSync;
-(BOOL)shouldSetPause:(BOOL)arg0 onStream:(id)arg1 ;
-(BOOL)updateConfigurationWithDeviceRole:(int)arg0 ;
-(BOOL)updateMediaStatesWithConfig:(id)arg0 ;
-(NSInteger)participantMicrophoneToken;
-(NSInteger)participantScreenToken;
-(NSInteger)participantVideoToken;
-(char *)participantStateToString:(unsigned int)arg0 ;
-(id)applyMediaState:(unsigned int)arg0 forMediaType:(unsigned int)arg1 ;
-(id)applyVideoEnabledSetting:(BOOL)arg0 ;
-(id)cameraGroups;
-(id)captionsGroup;
-(id)generateEncryptionKey;
-(id)getAudioDumpName;
-(id)initWithConfig:(id)arg0 delegate:(id)arg1 ;
-(id)microphoneGroup;
-(id)newAudioRateControlConfigWithMediaControlInfoVersion:(unsigned char)arg0 isOneToOne:(BOOL)arg1 ;
-(id)newOneToOneAudioStreamConfigWithAudioSettings:(id)arg0 streamDirection:(NSInteger)arg1 streamSsrc:(unsigned int)arg2 ;
-(id)newOneToOneScreenStreamConfigWithStreamDirection:(NSInteger)arg0 streamSsrc:(unsigned int)arg1 encodingType:(unsigned char)arg2 ;
-(id)newOneToOneScreenStreamMultiwayConfiguration:(unsigned char)arg0 ;
-(id)newOneToOneVideoStreamConfigWithStreamDirection:(NSInteger)arg0 streamSsrc:(unsigned int)arg1 encodingType:(unsigned char)arg2 ;
-(id)newOneToOneVideoStreamMultiwayConfiguration:(unsigned char)arg0 ;
-(id)newVideoRateControlConfigWithMediaControlInfoVersion:(unsigned char)arg0 enableMediaControlInfoGenerator:(BOOL)arg1 isOneToOne:(BOOL)arg2 ;
-(id)oneToOneVideoStream;
-(id)pauseAudioStreams:(BOOL)arg0 ;
-(id)pauseVideo:(BOOL)arg0 ;
-(id)screenGroup;
-(id)setAudioStreamGroupsPaused:(BOOL)arg0 ;
-(id)setCameraStreamGroupsPaused:(BOOL)arg0 ;
-(id)setPaused:(BOOL)arg0 onStreamGroups:(id)arg1 ;
-(id)startAudioIO;
-(id)startAudioStreams;
-(id)startMediaStreams:(id)arg0 ;
-(id)startMicStreamGroups;
-(id)startScreenGroup;
-(id)startStreamGroups;
-(id)startStreamGroups:(id)arg0 ;
-(id)startVideo;
-(id)startVideoStreams;
-(id)stopAudioIO;
-(id)stopAudioStreams;
-(id)stopMediaStreams:(id)arg0 ;
-(id)stopMicStreamGroups;
-(id)stopMultiwayStreams;
-(id)stopScreenGroup;
-(id)stopStreamGroups:(id)arg0 ;
-(id)stopVideoStreams;
-(id)streamGroupWithID:(unsigned int)arg0 ;
-(id)streamGroupsForIDs:(id)arg0 ;
-(id)streamGroupsForMediaType:(unsigned int)arg0 ;
-(id)streamsToString;
-(id)systemAudioGroup;
-(id)updateActiveStateForStreamGroup:(id)arg0 ;
-(id)updateMediaState:(unsigned int)arg0 forStreamGroups:(id)arg1 ;
-(id)updateStreamGroups:(id)arg0 ;
-(int)securityKeyHolderUsageForStreamConfigDirection:(NSInteger)arg0 ;
-(unsigned int)preferredIOSampleRateForGroupID:(unsigned int)arg0 ;
-(unsigned int)preferredIOSamplesPerFrameForGroupID:(unsigned int)arg0 ;
-(unsigned int)preferredRTPTimestampRateForGroupID:(unsigned int)arg0 ;
-(unsigned int)streamGroupStateFromStreamGroupID:(unsigned int)arg0 ;
-(void)applyScreenEnabledSetting:(BOOL)arg0 ;
-(void)audioPowerSpectrumSinkDidRegister;
-(void)audioPowerSpectrumSinkDidUnregister;
-(void)callDelegateWithBlock:(id)arg0 ;
-(void)callStreamDelegateWithBlock:(id)arg0 ;
-(void)collectAudioChannelMetrics:(struct ? *)arg0 ;
-(void)collectCaptionsChannelMetrics:(struct ? *)arg0 ;
-(void)collectVideoChannelMetrics:(struct ? *)arg0 ;
-(void)createRedundancyControllers;
-(void)dealloc;
-(void)didChangeActualNetworkBitrateForStreamGroup:(id)arg0 ;
-(void)didChangeReceivingStreamsForStreamGroup:(id)arg0 ;
-(void)didChangeSendingStreamsForStreamGroup:(id)arg0 ;
-(void)didDecryptionTimeOutForMKMRecoveryForStreamGroup:(id)arg0 ;
-(void)didEncryptionKeyRollTimeout;
-(void)didMediaDecryptionTimeOutForStreamGroup:(id)arg0 ;
-(void)didResumeAudioIO:(id)arg0 ;
-(void)didServerDie;
-(void)didSuspendAudioIO:(id)arg0 ;
-(void)didUpdateBasebandCodec:(struct _VCRemoteCodecInfo *)arg0 ;
-(void)dispatchedSetAudioEnabled:(BOOL)arg0 ;
-(void)dispatchedSetAudioPaused:(BOOL)arg0 ;
-(void)dispatchedSetMediaState:(unsigned int)arg0 forMediaType:(unsigned int)arg1 ;
-(void)dispatchedSetScreenEnabled:(BOOL)arg0 ;
-(void)dispatchedSetVideoEnabled:(BOOL)arg0 ;
-(void)dispatchedSetVideoPaused:(BOOL)arg0 ;
-(void)dispatchedStart;
-(void)dispatchedStartOneToOneStreams;
-(void)dispatchedStop;
-(void)handleActiveConnectionChange:(id)arg0 ;
-(void)handleRemoteOneToOneSwitchWithStreamGroup:(id)arg0 fromStreamID:(unsigned short)arg1 toStreamID:(unsigned short)arg2 ;
-(void)handleStreamGroupsActiveConnectionChange:(id)arg0 ;
-(void)handleSymptomReportForDecryptionError;
-(void)logAllStreamTokens;
-(void)onDidResumeAudio;
-(void)onPauseAudioStreams;
-(void)onStartAudioIO;
-(void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)redundancyController:(id)arg0 redundancyIntervalDidChange:(CGFloat)arg1 ;
-(void)redundancyController:(id)arg0 redundancyPercentageDidChange:(unsigned int)arg1 ;
-(void)resetDecryptionTimeout;
-(void)sendAudioPowerSpectrumSourceRegistration:(BOOL)arg0 ;
-(void)setMediaState:(unsigned int)arg0 forMediaType:(unsigned int)arg1 ;
-(void)setupMediaTypeSettingsWithConfig:(id)arg0 ;
-(void)setupNetworkAddressesForMediaConfig:(id)arg0 ;
-(void)setupPreferredIOSettings;
-(void)start;
-(void)startAudioDump;
-(void)startMultiwayStreams;
-(void)startOneToOneStreams;
-(void)startSystemAudioCapture;
-(void)stop;
-(void)stopAudioDump;
-(void)stopAudioIOCompletion;
-(void)stopInternal;
-(void)stopOneToOneStreams;
-(void)stopStreamGroups;
-(void)stopSystemAudioCapture;
-(void)stopVideoCaptureClient;
-(void)streamGroup:(id)arg0 didChangeMediaPriority:(unsigned char)arg1 ;
-(void)streamGroup:(id)arg0 didChangePlayoutRTPTime:(struct ? )arg1 ;
-(void)streamGroup:(id)arg0 didRemoteEnableChange:(BOOL)arg1 ;
-(void)streamGroup:(id)arg0 didRemotePauseChange:(BOOL)arg1 ;
-(void)streamGroup:(id)arg0 didRequestRedundancy:(BOOL)arg1 ;
-(void)streamGroup:(id)arg0 didSuspendStreams:(BOOL)arg1 ;
-(void)streamGroup:(id)arg0 didSwitchFromStreamID:(unsigned short)arg1 toStreamID:(unsigned short)arg2 ;
-(void)streamGroup:(id)arg0 remoteMediaStalled:(BOOL)arg1 duration:(CGFloat)arg2 ;
-(void)streamGroup:(id)arg0 requestKeyFrameGenerationWithStreamID:(unsigned short)arg1 firType:(int)arg2 ;
-(void)swapScreenStreamGroupSyncSourceWithState:(unsigned int)arg0 ;
-(void)updateAudioSpectrumState;
-(void)updateVideoPaused:(BOOL)arg0 ;
-(void)vcMediaStream:(id)arg0 requestKeyFrameGenerationWithStreamID:(unsigned short)arg1 firType:(int)arg2 ;
-(void)vcMediaStreamServerDidDie:(id)arg0 ;


@end


#endif