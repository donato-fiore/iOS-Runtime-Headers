// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCAUDIOTRANSMITTER_H
#define VCAUDIOTRANSMITTER_H

@class NSMutableArray, NSString, NSDictionary, NSArray;
@protocol VCAudioIOSink, VCConnectionChangedHandler, VCAudioTransmitterDelegate;

#import <Foundation/Foundation.h>

#import "VCAudioRedBuilder.h"
#import "VCRedundancyControllerAudio.h"
#import "VCAudioTier.h"
#import "AVCStatisticsCollector.h"
#import "VCAudioPayload.h"
#import "VCTransportSession.h"
#import "VCPacketBundler.h"
#import "VCAudioTierPicker.h"
#import "VCAudioPayloadConfig.h"

@interface VCAudioTransmitter : NSObject <VCAudioIOSink, VCConnectionChangedHandler>

 {
    VCAudioRedBuilder *_redBuilder;
    VCRedundancyControllerAudio *_redundancyController;
    *opaqueVCAudioBufferList _encodeBuffer;
    BOOL _lastIsTalking;
    CGFloat _lastTierSwitch;
    CGFloat _audioInterval;
    int _audioTierChangeRequestCount;
    NSInteger _blockSize;
    float _blockSeconds;
    CGFloat _lastUpdateQualityIndicator;
    VCAudioTier *_requestedAudioTier;
    char * _lastInputSampleBuffer;
    unsigned int _lastInputSampleBufferSize;
    int _audioHeaderSize;
    BOOL _audioTierHysteresis;
    BOOL _lastAudioStalled;
    *void _packetThread;
    unsigned int _currentTargetBitrate;
    unsigned int _currentDuplication;
    unsigned int _redundancyPercentage;
    CGFloat _redundancyInterval;
    unsigned int _redundancyControllerNumPayloads;
    unsigned int _redundancyControllerMaxDelay20ms;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _sentAudioBytes;
    unsigned int _encodedBytes;
    unsigned int _totalTxAudioBytes;
    unsigned int _estimateTxAudioBytes;
    unsigned int _audioFrameCounter;
    unsigned int _silenceFrameCounter;
    unsigned int _vadSegmentCounter;
    *tagHANDLE _rtpHandle;
    *tagHANDLE _afrc;
    *tagHANDLE _mediaQueue;
    *tagHANDLE _rtpVideo;
    *void _controlInfoGenerator;
    BOOL _useRateControl;
    BOOL _isUseCaseWatchContinuity;
    BOOL _allowAudioSwitching;
    BOOL _supportsAdaptation;
    BOOL _needsPacketThread;
    BOOL _isLocalCellular_LowestConnectionQuality;
    BOOL _isRemoteCellular_LowestConnectionQuality;
    BOOL _isConnectedOnIPv6_LowestConnectionQuality;
    BOOL _includeRedSequenceOffset;
    unsigned int _redNumPayloads;
    unsigned int _redMaxDelay20ms;
    BOOL _transmitROC;
    NSMutableArray *_audioPayloads;
    VCAudioPayload *_currentDTXPayload;
    VCAudioPayload *_currentAudioPayload;
    int _currentRedPayloadType;
    unsigned int _currentAudioCap;
    tagVCAudioFrameFormat _inputFormat;
    *opaqueRTCReporting _reportingAgent;
    int _reportingModuleID;
    VCTransportSession *_transportSession;
    id *_delegate;
    unsigned int _tierNetworkBitrate;
    unsigned int _qualityIndex;
    CGFloat _lastReportingCallbackTime;
    CGFloat _lastReportingCallbackTimeShort;
    tagVCIDSChannelDataFormat _idsChannelDataFormat;
    BOOL _alwaysOnAudioRedundancyEnabled;
    BOOL _cellularAllowRedLowBitratesEnabled;
    BOOL _wifiAllowRedLowBitratesEnabled;
    *tagVCMemoryPool _audioBundlePool;
    NSUInteger _remoteIDSParticipantID;
    BOOL _useChannelDataFormat;
    *tagVCCryptor _sframeCryptor;
    unsigned int _rtpTimestampBase;
    BOOL _shouldApplyRedAsBoolean;
    unsigned int _sentAudioBytesShort;
}


@property (readonly, nonatomic) int actualAudioSendingBitrate; // ivar: _actualAudioSendingBitrate
@property (readonly, nonatomic) VCPacketBundler *audioBundler; // ivar: _audioBundler
@property (retain, nonatomic) VCAudioTierPicker *audioTierPicker; // ivar: _audioTierPicker
@property (readonly, nonatomic) int audioTxBitrate; // ivar: _audioTxBitrate
@property (readonly, nonatomic) VCAudioPayloadConfig *currentAudioPayloadConfig;
@property (readonly, nonatomic) VCAudioTier *currentAudioTier; // ivar: _currentAudioTier
@property (nonatomic) ? currentChannelMetrics; // ivar: _currentChannelMetrics
@property (nonatomic, getter=isCurrentDTXEnabled) BOOL currentDTXEnable; // ivar: _currentDTXEnable
@property (readonly, copy) NSString *debugDescription;
@property NSObject<VCAudioTransmitterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dtxMetrics;
@property (readonly, nonatomic) unsigned int encodedBytes;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL ignoreSilence; // ivar: _ignoreSilence
@property unsigned char inputMeter; // ivar: _inputMeter
@property (nonatomic) BOOL isAudioStalled; // ivar: _isAudioStalled
@property (readonly, nonatomic) BOOL isRedEnabled; // ivar: _isRedEnabled
@property (readonly, nonatomic) unsigned int lastSentAudioSampleTime; // ivar: _lastSentAudioSampleTime
@property (nonatomic) unsigned int maxIDSStreamIdCount; // ivar: _maxIDSStreamIdCount
@property (nonatomic) unsigned char mediaControlInfoVersion; // ivar: _mediaControlInfoVersion
@property (nonatomic) int operatingMode; // ivar: _operatingMode
@property (nonatomic) int qualityIndicator; // ivar: _qualityIndicator
@property (nonatomic) unsigned int rateChangeCounter; // ivar: _rateChangeCounter
@property (readonly, nonatomic) unsigned int redMaxDelay20ms;
@property (readonly, nonatomic) unsigned int redNumPayloads;
@property (nonatomic) BOOL sendActiveVoiceOnly; // ivar: _sendActiveVoiceOnly
@property (readonly, nonatomic) unsigned int sentAudioBytes;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *supportedNumRedundantPayload; // ivar: _supportedNumRedundantPayload
@property (nonatomic) unsigned int targetBitrate; // ivar: _targetBitrate
@property (nonatomic) BOOL useWiFiTiers; // ivar: _useWiFiTiers


-(*void)generateControlInfo;
-(BOOL)allocateLastInputSampleBuffer:(unsigned int)arg0 ;
-(BOOL)chooseAudioNetworkBitrate;
-(BOOL)handleCodecRateModeChange:(unsigned char)arg0 withBitrate:(unsigned int)arg1 ;
-(BOOL)sendAudioPacketImpl:(struct tagAudioPacketData *)arg0 bytesSent:(*int)arg1 ;
-(BOOL)setupAudio:(*id)arg0 ;
-(BOOL)setupAudioEncoders;
-(BOOL)setupAudioTierPicker;
-(BOOL)setupEncoderBuffer;
-(BOOL)shouldUseDtx;
-(float)nextAudioInterval:(int)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(id)packetsPerBundle;
-(id)usedAudioPayloadForType:(int)arg0 ;
-(int)bundleAndSendSamples:(char *)arg0 numEncodedBytes:(int)arg1 withPayload:(int)arg2 timeStamp:(unsigned int)arg3 bufferedSamples:(int)arg4 hasNewSamples:(BOOL)arg5 voiceActivity:(BOOL)arg6 priority:(unsigned char)arg7 ;
-(int)encodeAudio:(struct opaqueVCAudioBufferList *)arg0 numInputSamples:(int)arg1 outputBytes:(*void)arg2 numOutputBytes:(int)arg3 withPayload:(*int)arg4 isTalking:(BOOL)arg5 ;
-(int)sendAudioBundle:(BOOL)arg0 atTimeStamp:(unsigned int)arg1 nextInterval:(float)arg2 ;
-(int)sendAudioPacket:(char *)arg0 payloadLength:(int)arg1 payloadType:(int)arg2 timestamp:(unsigned int)arg3 priority:(unsigned char)arg4 marker:(int)arg5 nextInterval:(float)arg6 padding:(char *)arg7 paddingLength:(unsigned char)arg8 sendReport:(int)arg9 ;
-(int)sendAudioPacket:(struct tagAudioPacketData )arg0 ;
-(int)sendSframeEncryptedAudioPacket:(struct tagAudioPacketData )arg0 ;
-(unsigned int)maximumSamplesPerFrame;
-(unsigned int)redundancyControllerModeForOperatingMode:(int)arg0 isRedEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)encodeBundleAndSendAudio:(struct opaqueVCAudioBufferList *)arg0 sampleCount:(unsigned int)arg1 ;
-(void)gatherRealtimeStats:(struct __CFDictionary *)arg0 ;
-(void)handleActiveConnectionChange:(id)arg0 ;
-(void)initAudioValues;
-(void)logTierInfo:(int)arg0 ;
-(void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg0 ;
-(void)redundancyController:(id)arg0 redundancyIntervalDidChange:(CGFloat)arg1 ;
-(void)redundancyController:(id)arg0 redundancyPercentageDidChange:(unsigned int)arg1 ;
-(void)registerReportingTask;
-(void)removeUnusedAudioPayloads;
-(void)reportRedundancyConfigChange;
-(void)setCellTech:(int)arg0 remoteCellular:(int)arg1 isIPV6:(int)arg2 audioCap:(unsigned int)arg3 ;
-(void)setStreamIDs:(id)arg0 ;
-(void)setupAudioHeaderSize;
-(void)start;
-(void)stop;
-(void)updateAudioTxBitrate;
-(void)updateAudioTxRate;
-(void)useAudioPayload:(id)arg0 withBitrate:(unsigned int)arg1 ;
-(void)useAudioTier:(id)arg0 ;


@end


#endif