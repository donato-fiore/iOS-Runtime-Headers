// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCAUDIOSTREAM_H
#define VCAUDIOSTREAM_H

@class NSMutableArray, NSString, NSNumber;
@protocol VCMediaStreamSyncSource, VCAudioIOSink, VCAudioIODelegate, OS_dispatch_source, VCMediaStreamSyncSourceDelegate;


#import "VCMediaStream.h"
#import "DTMFEventHandler.h"
#import "WRMClient.h"
#import "VCAudioPayload.h"
#import "AVTelephonyInterface.h"
#import "VCAudioPowerSpectrumSource.h"
#import "AVCStatisticsCollector.h"
#import "VCAudioIO.h"
#import "VCAudioTransmitter.h"

@interface VCAudioStream : VCMediaStream <VCMediaStreamSyncSource, VCAudioIOSink, VCAudioIODelegate>

 {
    int _clientPid;
    int numBufferBytesAvailable;
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;
    CGFloat dAudioHostTime;
    BOOL lastVoiceActive;
    CGFloat _remoteMediaStallTimeout;
    unsigned int lastInputAudioTimeStamp;
    unsigned int lastSentAudioSampleTime;
    _opaque_pthread_rwlock_t stateLock;
    NSMutableArray *audioPayloads;
    tagVCAudioFrameFormat _vpioFormat;
    BOOL _useExternalIO;
    int preferredAudioCodec;
    DTMFEventHandler *dtmfEventHandler;
    WRMClient *wrmClient;
    VCAudioPayload *currentAudioPayload;
    VCAudioPayload *currentDTXPayload;
    int _reportingModuleID;
    AVTelephonyInterface *_telephonyInterface;
    *unsigned int _reportingSSRCList;
    unsigned int _reportingSSRCCount;
    BOOL _sendActiveVoiceOnly;
    BOOL _rtpEnabledBeforeInterrupt;
    BOOL _rtcpEnabledBeforeInterrupt;
    unsigned int _pullAudioSamplesCount;
    _VCAudioStreamSinkContext _sinkContext;
    _VCAudioStreamSourceContext _sourceContext;
    NSInteger _inputAudioPowerSpectrumToken;
    NSInteger _outputAudioPowerSpectrumToken;
    VCAudioPowerSpectrumSource *_inputAudioPowerSpectrumSource;
    VCAudioPowerSpectrumSource *_outputAudioPowerSpectrumSource;
    unsigned int _abnormalOWRDCount;
    CGFloat _lastAbnormalOWRDVerificationTime;
    CGFloat _lastNetworkHealthPrintTime;
    CGFloat _packetLossRateAccum;
    int _packetLossRateCount;
    CGFloat _packetLossRate5Secs;
    CGFloat _timeLastPLR5Secs;
    unsigned int _preferredMediaBitrate;
    AVCStatisticsCollector *_statsCollector;
    BOOL _enableAudioPowerSpectrum;
}


@property (readonly, nonatomic) unsigned int actualAudioSendingBitrate;
@property (retain) VCAudioIO *audioIO; // ivar: _audioIO
@property (retain) VCAudioTransmitter *audioTransmitter; // ivar: _audioTransmitter
@property (readonly) unsigned int conferenceID; // ivar: conferenceID
@property (nonatomic, getter=isCurrentDTXEnabled) BOOL currentDTXEnable; // ivar: _currentDTXEnable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceRole; // ivar: deviceRole
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isValid; // ivar: isValid
@property (nonatomic, getter=isMuted) BOOL muted; // ivar: _isMuted
@property (readonly, nonatomic) *void realtimeSourceContext;
@property (nonatomic, getter=isRemoteMuted) BOOL remoteMuted;
@property (nonatomic) BOOL sendActiveVoiceOnly;
@property (readonly) Class superclass;
@property (nonatomic) NSObject<VCMediaStreamSyncSourceDelegate> *syncSourceDelegate; // ivar: syncSourceDelegate
@property (retain, nonatomic) NSNumber *targetStreamID; // ivar: _targetStreamID
@property (nonatomic) float volume;


+(id)capabilities;
+(id)supportedAudioPayloads;
+(int)operatingModeForAudioStreamMode:(NSInteger)arg0 ;
+(unsigned char)audioIODirectionWithMediaStreamDirection:(NSInteger)arg0 ;
-(*unk)pullSamplesCallback;
-(BOOL)canProcessAudio;
-(BOOL)createAudioReceiver;
-(BOOL)createAudioTransmitter:(NSInteger)arg0 streamIDs:(id)arg1 ;
-(BOOL)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg0 reportCount:(char *)arg1 ;
-(BOOL)isFrequencyMeteringEnabled:(int)arg0 ;
-(BOOL)onConfigureStreamWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)setReceiverPayloads;
-(BOOL)setupAudioStreamWithClientPid:(int)arg0 enableAudioPowerSpectrum:(BOOL)arg1 ;
-(BOOL)setupPayloads;
-(BOOL)setupSourceTransport:(id)arg0 ;
-(BOOL)validateAudioStreamConfigurations:(id)arg0 ;
-(CGFloat)lastReceivedRTCPPacketTime;
-(CGFloat)lastReceivedRTPPacketTime;
-(CGFloat)rtcpHeartbeatLeeway;
-(NSInteger)getSyncSourceSampleRate;
-(id)addAudioPayload:(int)arg0 ;
-(id)configForPayloadType:(int)arg0 ;
-(id)createTransportWithStreamConfig:(id)arg0 ;
-(id)getReportingServiceID;
-(id)getSupportedPayloads;
-(id)initWithClientPid:(int)arg0 ;
-(id)initWithClientPid:(int)arg0 ssrc:(unsigned int)arg1 ;
-(id)initWithClientPid:(int)arg0 ssrc:(unsigned int)arg1 transportSessionID:(unsigned int)arg2 ;
-(id)newPayloadConfigForCodecConfig:(id)arg0 streamConfig:(id)arg1 ;
-(id)setLocalParticipantInfo:(id)arg0 networkSockets:(id)arg1 withError:(*id)arg2 ;
-(id)streamIDsFromTransport;
-(id)supportedPayloads;
-(int)captureMeshMode:(struct opaqueVCAudioBufferList *)arg0 ;
-(int)getPacketsPerBundleForStreamConfig:(id)arg0 ;
-(int)getReportingClientType;
-(struct _METER_INFO *)meterWithType:(int)arg0 ;
-(struct __CFDictionary *)getClientSpecificUserInfo:(id)arg0 ;
-(struct __CFString *)getReportingClientName;
-(unsigned int)codecTypeFromAudioPayload:(int)arg0 ;
-(unsigned int)computePacketTimestampWithInputTimestamp:(unsigned int)arg0 numSamples:(int)arg1 hostTime:(CGFloat)arg2 ;
-(unsigned int)internalSampleRateForCodecType:(NSInteger)arg0 ;
-(unsigned int)preferredAudioBitrateForPayload:(int)arg0 ;
-(void)_computeInternalFormatForStreamConfigurations:(id)arg0 ;
-(void)cleanupAudio;
-(void)cleanupBeforeReconfigure:(id)arg0 ;
-(void)collectRxChannelMetrics:(struct ? *)arg0 ;
-(void)collectRxChannelMetrics:(struct ? *)arg0 interval:(float)arg1 ;
-(void)collectTxChannelMetrics:(struct ? *)arg0 ;
-(void)configureAudioJBAlgos:(struct tagVCAudioReceiverConfig *)arg0 ;
-(void)createReportSSRCListWithStreamConfigs:(id)arg0 ;
-(void)dealloc;
-(void)didEnterState:(int)arg0 oldState:(int)arg1 ;
-(void)didResumeAudioIO:(id)arg0 ;
-(void)didSuspendAudioIO:(id)arg0 ;
-(void)didUpdateBasebandCodec:(struct _VCRemoteCodecInfo *)arg0 ;
-(void)getCodecConfigForPayload:(int)arg0 block:(id)arg1 ;
-(void)handleActiveConnectionChange:(id)arg0 ;
-(void)handleCodecRateModeChange:(int)arg0 payload:(int)arg1 ;
-(void)onCallIDChanged;
-(void)onPauseWithCompletionHandler:(id)arg0 ;
-(void)onRTCPTimeout;
-(void)onRTPTimeout;
-(void)onResumeWithCompletionHandler:(id)arg0 ;
-(void)onSendRTCPPacket;
-(void)onStartWithCompletionHandler:(id)arg0 ;
-(void)onStopWithCompletionHandler:(id)arg0 ;
-(void)prepareAudio;
-(void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)pushSamplesOutputPowerSpectrum:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)redundancyController:(id)arg0 redundancyPercentageDidChange:(unsigned int)arg1 ;
-(void)registerActiveAudioStreamChangeNotifications;
-(void)registerCodecRateModeChangeNotifications;
-(void)reportingAlgosAudioStreamEvent:(unsigned short)arg0 ;
-(void)reportingAudioStreamEvent:(unsigned short)arg0 ;
-(void)sendDTMFEvent:(id)arg0 ;
-(void)setCanProcessAudio:(BOOL)arg0 ;
-(void)setDTXPayload:(id)arg0 ;
-(void)setFrequencyMeteringEnabled:(BOOL)arg0 meterType:(int)arg1 ;
-(void)setInputTimestamp:(unsigned int)arg0 packetTimestamp:(int)arg1 hostTime:(CGFloat)arg2 ;
-(void)setStreamDirection:(NSInteger)arg0 ;
-(void)setStreamIDs:(id)arg0 repairStreamIDs:(id)arg1 ;
-(void)setTargetBitrate:(unsigned int)arg0 rateChangeCounter:(unsigned int)arg1 ;
-(void)setVCStatistics:(struct ? )arg0 ;
-(void)setupAudioPowerSpectrum;
-(void)setupReportingAgent:(id)arg0 ;
-(void)startAudioWithCompletionHandler:(id)arg0 ;
-(void)stopAudioWithCompletionHandler:(id)arg0 ;
-(void)stopSendDTMFEvent;
-(void)unregisterCodecRateModeChangeNotifications;
-(void)updateSoundMeter:(struct _METER_INFO *)arg0 isInputMeter:(BOOL)arg1 sampleBuffer:(struct opaqueVCAudioBufferList *)arg2 ;
-(void)willExitState:(int)arg0 newState:(int)arg1 ;


@end


#endif