// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIASTREAMSENDGROUP_H
#define VCMEDIASTREAMSENDGROUP_H

@class NSMutableArray, NSMutableDictionary;
@protocol VCRedundancyControllerProtocol;


#import "VCMediaStreamGroup.h"

@interface VCMediaStreamSendGroup : VCMediaStreamGroup {
    BOOL _isRedundancyEnabled;
    NSMutableArray *_peerSubscribedStreams;
    BOOL _isRemoteOnPeace;
    NSMutableDictionary *_sendGroupConfigForMode;
    unsigned int _streamGroupMode;
    BOOL _shouldSynchronizeWithSourceRTPTimestamps;
    _opaque_pthread_rwlock_t _sourceTimestampRWLock;
    unsigned int _lastSentSourceSampleTime;
    CGFloat _lastSentSourceHostTime;
    BOOL _isSourceTimestampInfoAvailable;
    CGFloat _sourceSampleRate;
}


@property (nonatomic) unsigned int currentUplinkTargetBitrate; // ivar: _currentUplinkTargetBitrate
@property (nonatomic) unsigned int currentUplinkTotalBitrate; // ivar: _currentUplinkTotalBitrate
@property (nonatomic) BOOL isSuspended; // ivar: _isSuspended
@property (retain, nonatomic) NSObject<VCRedundancyControllerProtocol> *redundancyController; // ivar: _redundancyController
@property (nonatomic) unsigned int uplinkBitrateCapCell; // ivar: _uplinkBitrateCapCell
@property (nonatomic) unsigned int uplinkBitrateCapWifi; // ivar: _uplinkBitrateCapWifi


-(BOOL)enableRedundancy:(BOOL)arg0 ;
-(BOOL)setStreamGroupMode:(unsigned int)arg0 ;
-(BOOL)setupStreamGroupWithConfig:(id)arg0 ;
-(BOOL)shouldCompoundListIgnoreStream:(id)arg0 streamConfig:(id)arg1 activeStreamIds:(id)arg2 ;
-(BOOL)shouldSubscribeToStreamID:(id)arg0 peerSubscribedStreams:(id)arg1 ;
-(BOOL)updateConfig:(id)arg0 forMode:(unsigned int)arg1 ;
-(BOOL)updatePeerSubscribedStreams:(id)arg0 containsRepairStreams:(BOOL)arg1 ;
-(BOOL)updateUplinkStreamsForPeerSubscribedStreams:(id)arg0 ;
-(id)activeStreamKeys;
-(id)checkStreamsForAdditionalOptIn:(id)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(id)peerSubscribedStreams;
-(id)streamDescriptionForMediaStreamConfig:(id)arg0 ;
-(id)streamGroupConfigForMode:(unsigned int)arg0 ;
-(unsigned int)calculateUplinkTotalBitrateForMediaStreams:(id)arg0 ;
-(unsigned int)streamGroupMode;
-(void)dealloc;
-(void)didPause:(BOOL)arg0 ;
// -(void)didReceiveCustomReportPacket:(struct tagRTCPPACKET *)arg0 arrivalNTPTime:(unk)arg1  ;
-(void)didReceiveRTCPPackets:(struct _RTCPPacketList *)arg0 ;
// -(void)didReceiveReportPacket:(struct tagRTCPPACKET *)arg0 arrivalNTPTime:(unk)arg1  ;
-(void)didStart;
-(void)didStop;
-(void)dispatchedUpdateActiveMediaStreamIDs:(id)arg0 withTargetBitrate:(unsigned int)arg1 mediaBitrates:(id)arg2 rateChangeCounter:(unsigned int)arg3 ;
-(void)setActiveConnection:(id)arg0 uplinkBitrateCap:(unsigned int)arg1 activeMediaStreamIDs:(id)arg2 mediaBitrates:(id)arg3 rateChangeCounter:(unsigned int)arg4 ;
-(void)setStatisticsCollector:(id)arg0 ;
-(void)updateActiveMediaStreamIDs:(id)arg0 withTargetBitrate:(unsigned int)arg1 mediaBitrates:(id)arg2 rateChangeCounter:(unsigned int)arg3 ;
-(void)updateActiveStreamsCount:(unsigned int)arg0 ;
-(void)updateEnabledState;
-(void)updateEncryptionInformationWithConfig:(id)arg0 ;
// -(void)updateStreamIDCompoundingWithBlock:(id)arg0 activeStreamIds:(unk)arg1  ;
-(void)updateUplinkBitrateCapCell:(unsigned int)arg0 activeStreamIDs:(id)arg1 ;
-(void)updateUplinkBitrateCapWifi:(unsigned int)arg0 activeStreamIDs:(id)arg1 ;


@end


#endif