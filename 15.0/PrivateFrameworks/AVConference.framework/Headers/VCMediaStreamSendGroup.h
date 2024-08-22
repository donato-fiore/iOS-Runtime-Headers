// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCMEDIASTREAMSENDGROUP_H
#define VCMEDIASTREAMSENDGROUP_H

@class NSMutableArray;


#import "VCMediaStreamGroup.h"
#import "VCSessionUplinkBandwidthAllocator.h"

@interface VCMediaStreamSendGroup : VCMediaStreamGroup {
    BOOL _isRedundancyEnabled;
    BOOL _areStreamsSuspended;
    VCSessionUplinkBandwidthAllocator *_uplinkBandwidthAllocator;
    NSMutableArray *_peerSubscribedStreams;
    BOOL _isRemoteOnPeace;
    BOOL _shouldSynchronizeWithSourceRTPTimestamps;
    _opaque_pthread_rwlock_t _sourceTimestampRWLock;
    unsigned int _lastSentSourceSampleTime;
    CGFloat _lastSentSourceHostTime;
    CGFloat _sourceSampleRate;
}


@property (nonatomic) unsigned int currentUplinkTargetBitrate; // ivar: _currentUplinkTargetBitrate
@property (nonatomic) unsigned int currentUplinkTotalBitrate; // ivar: _currentUplinkTotalBitrate
@property (nonatomic) unsigned int uplinkBitrateCapCell; // ivar: _uplinkBitrateCapCell
@property (nonatomic) unsigned int uplinkBitrateCapWifi; // ivar: _uplinkBitrateCapWifi


-(BOOL)enableRedundancy:(BOOL)arg0 ;
-(BOOL)shouldCompoundListIgnoreStream:(id)arg0 streamConfig:(id)arg1 activeStreamIds:(id)arg2 ;
-(BOOL)shouldSubscribeToStreamID:(id)arg0 peerSubscribedStreams:(id)arg1 ;
-(BOOL)updateUplinkStreamsForPeerSubscribedStreams:(id)arg0 ;
-(id)activeStreamKeys;
-(id)initWithConfig:(id)arg0 ;
-(id)streamDescriptionForMultiwayConfig:(id)arg0 ;
-(unsigned int)calculateUplinkTotalBitrateForMediaStreams:(id)arg0 ;
-(void)dealloc;
-(void)didPause:(BOOL)arg0 ;
-(void)didStart;
-(void)didStop;
-(void)isStreamActive:(*BOOL)arg0 isDesiredActive:(*BOOL)arg1 peerSubscribedStreams:(id)arg2 configStreams:(id)arg3 ;
-(void)setActiveConnection:(id)arg0 uplinkBitrateCap:(unsigned int)arg1 ;
-(void)setPeerSubscribedStreams:(id)arg0 ;
-(void)updateActiveMediaStreamIDs:(id)arg0 withTargetBitrate:(unsigned int)arg1 mediaBitrates:(id)arg2 ;
-(void)updateActiveStreamsCount:(unsigned int)arg0 ;
-(void)updateActiveStreamsWithTargetBitrate:(unsigned int)arg0 ;
-(void)updateBandwidthAllocatorStreamTokenState;
// -(void)updateStreamIDCompoundingWithBlock:(id)arg0 activeStreamIds:(unk)arg1  ;


@end


#endif