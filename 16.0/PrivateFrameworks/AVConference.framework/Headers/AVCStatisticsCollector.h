// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCSTATISTICSCOLLECTOR_H
#define AVCSTATISTICSCOLLECTOR_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>

#import "VCRateControlBandwidthEstimatorMap.h"
#import "VCRateControlOWRDEstimator.h"
#import "VCStatisticsHistory.h"
#import "VCStatisticsCollectorQueue.h"
#import "VCRateControlServerBag.h"

@interface AVCStatisticsCollector : NSObject {
    NSMutableDictionary *_statistics;
    *tagVCStatisticsCollection _statisticsCollection;
    NSMutableDictionary *_statisticChangeHandlerDictionary;
    NSDictionary *_statisticChangeHandlerDictionaryCache;
    BOOL _isStatisticChangeHandlerDictionaryModified;
    VCRateControlBandwidthEstimatorMap *_bandwidthEstimatorMap;
    VCRateControlOWRDEstimator *_owrdEstimator;
    VCStatisticsHistory *_history;
    VCStatisticsCollectorQueue *_queue;
    int _forceQueueWaitTimeMs;
    CGFloat _previousProcessTime;
    BOOL _useExternalThread;
    uint8_t _isStarted;
    unsigned int _maxVideoLocalBurstyLoss;
    unsigned int _maxAudioLocalBurstyLoss;
    unsigned int _remotePacketReceivedAudio;
    unsigned int _remotePacketReceivedVideo;
    CGFloat _packetReceivedOWRD;
    unsigned int _feedbackOutOfOrderTotalCount;
    BOOL _resetRemoteAudioPacketReceived;
    _opaque_pthread_rwlock_t _statisticsCollectionLock;
}


@property (nonatomic) unsigned int estimatedBandwidthCap; // ivar: _estimatedBandwidthCap
@property (nonatomic) unsigned int expectedBitrate; // ivar: _expectedBitrate
@property (nonatomic) BOOL fastSuddenBandwidthDetectionEnabled; // ivar: _fastSuddenBandwidthDetectionEnabled
@property (readonly, nonatomic) BOOL isStarted;
@property (nonatomic) unsigned char mediaControlInfoFECFeedbackVersion; // ivar: _mediaControlInfoFECFeedbackVersion
@property (nonatomic) unsigned int mode; // ivar: _mode
@property (nonatomic) unsigned int radioAccessTechnology; // ivar: _radioAccessTechnology
@property (retain, nonatomic) VCRateControlServerBag *serverBag; // ivar: _serverBag
@property (readonly, nonatomic) unsigned int sharedEstimatedBandwidth; // ivar: _sharedEstimatedBandwidth
@property (readonly, nonatomic) unsigned int sharedEstimatedBandwidthUncapped; // ivar: _sharedEstimatedBandwidthUncapped
@property (readonly, nonatomic) unsigned int sharedRemoteEstimatedBandwidth; // ivar: _sharedRemoteEstimatedBandwidth


-(BOOL)shouldProcessAtTime:(CGFloat)arg0 ;
-(BOOL)unregisterStatisticsChangeHandlerWithType:(int)arg0 handlerIndex:(int)arg1 ;
-(id)getStatistics:(id)arg0 ;
-(id)init;
-(id)initForSimulation:(BOOL)arg0 useExternalThread:(BOOL)arg1 ;
-(int)registerStatisticsChangeHandlerWithType:(int)arg0 handler:(id)arg1 ;
-(struct ? )getVCStatisticsWithType:(int)arg0 time:(CGFloat)arg1 ;
-(void)addActualBitrateInfo:(struct ? *)arg0 ;
-(void)addEntriesFromStatistics:(struct ? )arg0 ;
-(void)addMostBurstyLossInfo:(struct ? *)arg0 ;
-(void)addPacketLossInfo:(struct ? *)arg0 ;
-(void)addRoundTripTimeInfo:(struct ? *)arg0 ;
-(void)addStatisticsHistory:(struct ? *)arg0 ;
-(void)computeBWEstimation:(struct ? *)arg0 ;
-(void)computeOWRDEstimation:(struct ? *)arg0 ;
-(void)computeOtherStatistics:(struct ? *)arg0 ;
-(void)dealloc;
-(void)drainAndProcessVCStatistics:(struct ? )arg0 ;
-(void)enableBWELogDump:(*void)arg0 ;
-(void)processVCStatisticsInternal:(struct ? )arg0 ;
-(void)recordRemoteEstimatedBandwidthForLargeFrameInfo:(struct ? *)arg0 ;
-(void)setStatistics:(id)arg0 ;
-(void)setVCStatistics:(struct ? )arg0 ;
-(void)start;
-(void)stop;
-(void)unregisterAllStatisticsChangeHandlers;
-(void)updateLocalEstimatedBandwidth;
-(void)updateLocalEstimatedBandwidthWithArrivalTime:(CGFloat)arg0 ;
-(void)updateMaxLocalBurstyLoss:(unsigned int)arg0 isAudio:(BOOL)arg1 ;
-(void)updatePacketReceivedCount:(struct ? *)arg0 ;
-(void)updateStatisticChangeHandlerDictionaryCache;


@end


#endif