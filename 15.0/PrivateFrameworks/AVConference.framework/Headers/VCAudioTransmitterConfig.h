// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCAUDIOTRANSMITTERCONFIG_H
#define VCAUDIOTRANSMITTERCONFIG_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "VCAudioPayload.h"
#import "AVCStatisticsCollector.h"
#import "VCTransportSession.h"

@interface VCAudioTransmitterConfig : NSObject {
    BOOL _shouldUseRedAsBoolean;
}


@property (nonatomic) *tagHANDLE afrcHandle; // ivar: _afrcHandle
@property (nonatomic) BOOL allowAudioSwitching; // ivar: _allowAudioSwitching
@property (nonatomic) BOOL alwaysOnAudioRedundancyEnabled; // ivar: _alwaysOnAudioRedundancyEnabled
@property (retain, nonatomic) NSMutableArray *audioPayloads; // ivar: _audioPayloads
@property (nonatomic) int bundlingScheme; // ivar: _bundlingScheme
@property (nonatomic) BOOL cellularAllowRedLowBitratesEnabled; // ivar: _cellularAllowRedLowBitratesEnabled
@property (retain, nonatomic) VCAudioPayload *chosenAudioPayload; // ivar: _chosenAudioPayload
@property (retain, nonatomic) VCAudioPayload *chosenDTXPayload; // ivar: _chosenDTXPayload
@property (nonatomic) int chosenRedPayloadType; // ivar: _chosenRedPayloadType
@property (nonatomic) *void controlInfoGenerator; // ivar: _controlInfoGenerator
@property (nonatomic, getter=isCurrentDTXEnabled) BOOL currentDTXEnable; // ivar: _currentDTXEnable
@property (nonatomic) BOOL ignoreSilence; // ivar: _ignoreSilence
@property (nonatomic) BOOL includeRedSequenceOffset; // ivar: _includeRedSequenceOffset
@property (nonatomic) tagVCAudioFrameFormat inputFormat; // ivar: _inputFormat
@property (nonatomic) BOOL isUseCaseWatchContinuity; // ivar: _isUseCaseWatchContinuity
@property (nonatomic) unsigned int maxIDSStreamIdCount; // ivar: _maxIDSStreamIdCount
@property (nonatomic) unsigned char mediaControlInfoVersion; // ivar: _mediaControlInfoVersion
@property (nonatomic) *tagHANDLE mediaQueue; // ivar: _mediaQueue
@property (nonatomic) BOOL needsPacketThread; // ivar: _needsPacketThread
@property (nonatomic) int operatingMode; // ivar: _operatingMode
@property (nonatomic) unsigned char packetsPerBundle; // ivar: _packetsPerBundle
@property (nonatomic) unsigned int qualityIndex; // ivar: _qualityIndex
@property (nonatomic, getter=isRedEnabled) BOOL redEnabled; // ivar: _redEnabled
@property (nonatomic) unsigned int redMaxDelay20ms; // ivar: _redMaxDelay20ms
@property (nonatomic) unsigned int redNumPayloads; // ivar: _redNumPayloads
@property (nonatomic) NSUInteger remoteIDSParticipantID; // ivar: _remoteIDSParticipantID
@property (nonatomic) *opaqueRTCReporting reportingAgent; // ivar: _reportingAgent
@property (nonatomic) int reportingParentID; // ivar: _reportingParentID
@property (nonatomic) *tagHANDLE rtpHandle; // ivar: _rtpHandle
@property (nonatomic) *tagHANDLE rtpVideo; // ivar: _rtpVideo
@property (nonatomic) BOOL sendActiveVoiceOnly; // ivar: _sendActiveVoiceOnly
@property (nonatomic) *tagVCCryptor sframeCryptor; // ivar: _sframeCryptor
@property (nonatomic) BOOL shouldApplyRedAsBoolean; // ivar: _shouldApplyRedAsBoolean
@property (nonatomic) BOOL shouldCreateRedundancyController; // ivar: _shouldCreateRedundancyController
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // ivar: _statisticsCollector
@property (retain, nonatomic) NSArray *streamIDs; // ivar: _streamIDs
@property (retain, nonatomic) NSArray *supportedNumRedundantPayload; // ivar: _supportedNumRedundantPayload
@property (nonatomic) BOOL supportsAdaptation; // ivar: _supportsAdaptation
@property (nonatomic) unsigned int tierNetworkBitrate; // ivar: _tierNetworkBitrate
@property (nonatomic) BOOL transmitROC; // ivar: _transmitROC
@property (retain, nonatomic) VCTransportSession *transportSession; // ivar: _transportSession
@property (nonatomic) BOOL useChannelDataFormat; // ivar: _useChannelDataFormat
@property (nonatomic) BOOL useRateControl; // ivar: _useRateControl
@property (nonatomic) BOOL useWifiTiers; // ivar: _useWifiTiers
@property (nonatomic) BOOL wifiAllowRedLowBitratesEnabled; // ivar: _wifiAllowRedLowBitratesEnabled


-(id)description;
-(void)dealloc;


@end


#endif