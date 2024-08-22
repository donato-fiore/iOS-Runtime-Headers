// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCSESSIONPARTICIPANTREMOTE_H
#define VCSESSIONPARTICIPANTREMOTE_H

@class TimingCollection, NSMutableDictionary, NSArray, NSNumber, NSString;
@protocol VCSessionDownlinkBandwidthAllocatorClient, OS_nw_activity, OS_dispatch_source;


#import "VCSessionParticipant.h"
#import "VCSessionBandwidthAllocationTable.h"
#import "VCSessionParticipantMediaStreamInfo.h"
#import "VCPositionalInfo.h"

@interface VCSessionParticipantRemote : VCSessionParticipant <VCSessionDownlinkBandwidthAllocatorClient>

 {
    BOOL _remoteSystemAudioPaused;
    BOOL _receivedFirstFrame;
    VCSessionBandwidthAllocationTable *_mediaTable;
    VCSessionBandwidthAllocationTable *_repairMediaTable;
    unsigned char _lastVideoPriority;
    BOOL _isVideoDegraded;
    BOOL _isRedundancyRequested;
    BOOL _isRemoteMediaStalled;
    tagVCAudioStreamGroupPriorityInfo _mediaPriorityInfo;
    TimingCollection *_perfTimers;
    BOOL _haveReportedPerfTimers;
    BOOL _isMediaSuspended;
    BOOL _oneToOneVideoEnabled;
    _VCSessionParticipantSourceIO _sourceIO;
    *void _spatialMetadataEntry;
    unsigned int _audioChannelIndex;
    NSObject<OS_nw_activity> *_nwActivity;
    NSObject<OS_nw_activity> *_participantPoorConnectionNwActivity;
    NSObject<OS_nw_activity> *_participantMediaStallNwActivity;
    CGFloat _lastVideoExpectationSwitch;
    BOOL _isVideoExpected;
    BOOL _isVideoJitterForPlayoutEnabled;
    BOOL _remoteScreenEnabledStateChanged;
    NSMutableDictionary *_jbSynchronizerPerSyncGroupID;
    NSObject<OS_dispatch_source> *_remoteStreamGroupStateUpdateTimer;
}


@property (readonly, nonatomic) VCSessionParticipantMediaStreamInfo *audioStreamInfo;
@property (nonatomic) _VCSessionParticipantCapabilities capabilities; // ivar: _capabilities
@property (readonly, nonatomic) BOOL isVideoExpected;
@property (readonly) BOOL isVisible;
@property (readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
@property (readonly) NSArray *mediaEntries;
@property (retain, nonatomic) NSNumber *optedInAudioStreamID; // ivar: _optedInAudioStreamID
@property (readonly, nonatomic) NSNumber *optedInVideoStreamID;
@property (readonly, nonatomic) VCPositionalInfo *positionalInfo; // ivar: _positionalInfo
@property (nonatomic) unsigned int prominenceIndex; // ivar: _prominenceIndex
@property (nonatomic, getter=isRemoteAudioEnabled) BOOL remoteAudioEnabled; // ivar: _remoteAudioEnabled
@property (nonatomic, getter=isRemoteAudioPaused) BOOL remoteAudioPaused; // ivar: _remoteAudioPaused
@property (nonatomic, getter=isRemoteScreenEnabled) BOOL remoteScreenEnabled; // ivar: _remoteScreenEnabled
@property (nonatomic, getter=isRemoteVideoEnabled) BOOL remoteVideoEnabled; // ivar: _remoteVideoEnabled
@property (nonatomic, getter=isRemoteVideoPaused) BOOL remoteVideoPaused; // ivar: _remoteVideoPaused
@property (readonly, nonatomic) VCSessionParticipantMediaStreamInfo *screenStreamInfo;
@property (readonly) NSString *uuid;
@property (nonatomic) unsigned char videoQuality; // ivar: _videoQuality
@property (readonly, nonatomic) VCSessionParticipantMediaStreamInfo *videoStreamInfo;
@property (nonatomic) unsigned int visibilityIndex; // ivar: _visibilityIndex


+(BOOL)isDeviceLargeScreen;
+(unsigned int)maxAudioNetworkBitrateForLocalInterfaceOnWiFi:(BOOL)arg0 isLowLatencyAudio:(BOOL)arg1 ;
+(unsigned int)maxVideoNetworkBitrateForVideoQuality:(unsigned char)arg0 isLocalOnWiFi:(BOOL)arg1 isRedundancyRequested:(BOOL)arg2 ;
-(?)createJitterBufferTargetEstimatorSynchronizersyncGroupID;
-(BOOL)configureAudioIOWithDeviceRole:(int)arg0 operatingMode:(int)arg1 ;
-(BOOL)configureWithOneToOneParticipantConfig:(id)arg0 operatingMode:(int)arg1 ;
-(BOOL)didNegotiateStreamGroupWithID:(unsigned int)arg0 ;
-(BOOL)isAudioActive;
-(BOOL)isInCanvas;
-(BOOL)isParticipantPeace:(id)arg0 ;
-(BOOL)isScreenActive;
-(BOOL)isSeamlessTransitionSupportedForStreamGroup:(id)arg0 ;
-(BOOL)isStreamGroupActive:(id)arg0 ;
-(BOOL)processParticipantInfo;
-(BOOL)setupAudioStreamConfiguration:(id)arg0 withStreamGroupConfig:(id)arg1 streamGroupStreamConfig:(id)arg2 ;
-(BOOL)setupAudioStreamOneToOneConfigurations:(id)arg0 ;
-(BOOL)setupBandwidthAllocationTableForMediaStreamConfigs:(id)arg0 streamGroupID:(unsigned int)arg1 entryType:(unsigned char)arg2 ;
-(BOOL)setupScreenStreamOneToOneConfigurations:(id)arg0 ;
-(BOOL)setupStreamConfigWithCodecs:(id)arg0 streamConfig:(id)arg1 codecConfigs:(id)arg2 featureStringsDict:(id)arg3 ;
-(BOOL)setupStreamGroupWithConfig:(id)arg0 ;
-(BOOL)setupStreamGroups;
-(BOOL)setupVideoStreamConfiguration:(id)arg0 withStreamGroupStreamConfig:(id)arg1 codecConfigs:(id)arg2 multiwayConfig:(id)arg3 groupID:(unsigned int)arg4 ;
-(BOOL)setupVideoStreamOneToOneConfigurations:(id)arg0 ;
-(BOOL)shouldSetupStreamGroupWithID:(unsigned int)arg0 ;
-(BOOL)supportsGFTSwitchToOneToOne;
-(BOOL)updateStreamGroupWithOneToOneStreamConfig:(id)arg0 ;
-(NSInteger)participantMicrophoneToken;
-(NSInteger)participantScreenToken;
-(id)activeDownlinkStreamIDForStreamGroupID:(unsigned int)arg0 ;
-(id)applyVideoEnabledSetting:(BOOL)arg0 ;
-(id)audioGroup;
-(id)checkSubstreams:(id)arg0 forLowerQualityIndex:(unsigned int)arg1 ;
-(id)entryForStreamID:(id)arg0 ;
-(id)getAudioDumpName;
-(id)initWithConfig:(id)arg0 delegate:(id)arg1 ;
-(id)newCameraStreamGroupWithStreamGroupConfig:(id)arg0 ;
-(id)newMediaStreamConfigWithStreamConfig:(id)arg0 streamGroupConfig:(id)arg1 maxIDSStreamIDCount:(unsigned int)arg2 ;
-(id)newMediaStreamConfigWithStreamGroupConfig:(id)arg0 streamConfig:(id)arg1 rateControlConfig:(id)arg2 multiwayConfig:(id)arg3 ;
-(id)newMediaStreamInfoWithNegotiationConfig:(id)arg0 streamToken:(NSInteger)arg1 ;
-(id)newMediaStreamWithNegotiationConfig:(id)arg0 streamToken:(NSInteger)arg1 ;
-(id)newMultiwayConfigWithStreamGroupStreamConfig:(id)arg0 maxIDSStreamIDCount:(unsigned int)arg1 groupID:(unsigned int)arg2 ;
-(id)newStreamGroupConfigWithNegotiationConfig:(id)arg0 ;
-(id)newVideoStreamGroupWithStreamGroupConfig:(id)arg0 ;
-(id)optedInStreamIDForStreamGroupID:(unsigned int)arg0 ;
-(id)recommendedStreamIDsForSelectedMediaEntries:(id)arg0 forceSeamlessTransition:(BOOL)arg1 ;
-(id)screenGroup;
-(id)setupStreamRTP:(id)arg0 ;
-(id)startAudioIO;
-(id)startScreenGroup;
-(id)stopAudioStreams;
-(id)videoGroup;
-(int)setupSpatialAudioWithMetadata:(*void)arg0 ;
-(unsigned char)cappedVideoQualityWithShouldLimitCameraQualityForPIP:(BOOL)arg0 ;
-(unsigned int)actualNetworkBitrateForStreamGroup:(unsigned int)arg0 ;
-(unsigned int)actualNetworkBitrateWithAudioBitrates:(id)arg0 ;
-(unsigned int)optedInNetworkBitrateForStreamGroup:(unsigned int)arg0 ;
-(void)appendOptedInStreamID:(id)arg0 toOptInStreamsIDs:(id)arg1 targetBandwidthEntry:(id)arg2 forceSeamlessTransition:(BOOL)arg3 ;
-(void)appendStreamGroup:(id)arg0 maxBitrate:(unsigned int)arg1 mediaEntries:(id)arg2 ;
-(void)appendStreamGroupsMediaEntries:(id)arg0 ;
-(void)cancelAndReleaseFetchTimer;
-(void)cleanupNwActivity;
-(void)cleanupSpatialAudio;
-(void)collectAudioChannelMetrics:(struct ? *)arg0 ;
-(void)collectVideoChannelMetrics:(struct ? *)arg0 ;
-(void)completeAndReleaseNwActivity:(id)arg0 withReason:(int)arg1 ;
-(void)createAndResumeFetchTimer;
-(void)dealloc;
-(void)debounceAudioPriority:(unsigned char)arg0 ;
-(void)didReceiveFirstFrameForStreamGroup:(id)arg0 ;
-(void)negotiateAudioRules:(id)arg0 ;
-(void)onDidResumeAudio;
-(void)onPauseAudioStreams;
-(void)onStartAudioIO;
-(void)pushEventToNwActivity:(NSInteger)arg0 started:(BOOL)arg1 ;
-(void)redundancyController:(id)arg0 redundancyIntervalDidChange:(CGFloat)arg1 ;
-(void)redundancyController:(id)arg0 redundancyPercentageDidChange:(unsigned int)arg1 ;
-(void)setActiveStreamIDs:(id)arg0 ;
-(void)setAudioPaused:(BOOL)arg0 ;
-(void)setMediaSuspended:(BOOL)arg0 forStreamToken:(id)arg1 ;
-(void)setMuted:(BOOL)arg0 ;
-(void)setRemoteMediaStalled:(BOOL)arg0 ;
-(void)setRemoteStreamGroupState:(unsigned int)arg0 forStreamGroup:(unsigned int)arg1 ;
-(void)setRemoteSystemAudioPaused:(BOOL)arg0 ;
-(void)setSharingEnabled:(BOOL)arg0 ;
-(void)setShouldEnableFaceZoom:(BOOL)arg0 ;
-(void)setTransitionToDisabled:(unsigned int)arg0 ;
-(void)setTransitionToEnabled:(unsigned int)arg0 ;
-(void)setTransitionToPaused:(unsigned int)arg0 ;
-(void)setVideoDegraded:(BOOL)arg0 ;
-(void)setVideoPaused:(BOOL)arg0 ;
-(void)setVideoReceiverFeedbackDelegate:(id)arg0 ;
-(void)setVideoStreamDelegate:(id)arg0 ;
-(void)setupJBTargetSynchronizers;
-(void)setupMediaStreamGroupConfig:(id)arg0 withNegotiationConfig:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)stopAudioIOCompletion;
-(void)updateAndHandleVideoMediaStall:(BOOL)arg0 isOneToOneStream:(BOOL)arg1 ;
-(void)updateAudioSpectrumState;
-(void)updateDownlinkBandwithAllocatorClientConfigurations:(id)arg0 ;
-(void)updateOneToOneAudioPositionalInfo:(struct tagVCSpatialAudioMetadataPositionalInfo *)arg0 ;
-(void)updatePositionalInfo:(id)arg0 shouldReapply:(BOOL)arg1 ;
-(void)updateScreenStreamConfigurationWithStreamGroupResult:(id)arg0 multiwayConfig:(id)arg1 screenStreamConfig:(id)arg2 ;
-(void)updateShouldEnableFaceZoom;
-(void)updateShouldEnableMLEnhance;
-(void)updateSourcePlayoutTimestampWithSamples:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)updateVideoMultiwayConfig:(id)arg0 withStreamGroupStreamConfig:(id)arg1 ;
-(void)updateVideoPriority:(unsigned char)arg0 ;
-(void)validateMediaEntries:(id)arg0 ;
-(void)vcMediaStream:(id)arg0 remoteMediaStalled:(BOOL)arg1 duration:(CGFloat)arg2 ;


@end


#endif