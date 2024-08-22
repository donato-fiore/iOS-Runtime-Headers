// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLOWSCRUTINIZER_H
#define FLOWSCRUTINIZER_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "FlowOracle.h"

@interface FlowScrutinizer : NSObject {
    NSInteger _numNotedAsFGAudioVideoTC;
    NSInteger _totalRxIfTypeBytes;
    NSInteger _totalTxIfTypeBytes;
    NSInteger _lastSampledRxIfTypeBytes;
    NSInteger _lastSampledTxIfTypeBytes;
    CGFloat _lastSampleTimeIntervalSinceReferenceDate;
    NSInteger _totalAudioVideoRxIfTypeBytes;
    NSInteger _totalAudioVideoTxIfTypeBytes;
    NSInteger _lastSampledAudioVideoRxIfTypeBytes;
    NSInteger _lastSampledAudioVideoTxIfTypeBytes;
    CGFloat _lastAudioVideoSampleTimeIntervalSinceReferenceDate;
    CGFloat _minCoreMediaAssetDownloadEstimatedDuration;
    CGFloat _transferSizeFlowFailedThresholdQuarantineTime;
    CGFloat _maxFlowIdleTimeWhileMarkedWithTransferSize;
    CGFloat _lastInterfaceTrafficTimestamp;
    NSUInteger _numFlowsScrutinized;
    NSUInteger _numExpectedTransferSymptoms;
    NSUInteger _numMatchedExpectedTransferSymptoms;
    NSUInteger _numDelayedMatchExpectedTransferSymptoms;
    NSUInteger _numDupDelayedMatchExpectedTransferSymptoms;
    NSUInteger _numClosedFlowsForExpectedTransferSymptoms;
    NSUInteger _maxContinuouslyActiveSamples;
    NSUInteger _maxAlternatingIdleNonIdleSamples;
    CGFloat _idleDurationStopNonCoreMediaThroughputReporting;
}


@property (retain, nonatomic) NSMutableArray *audioVideoSamples; // ivar: _audioVideoSamples
@property (nonatomic) NSInteger flavor; // ivar: _flavor
@property (readonly, nonatomic) BOOL hasForegroundAVTrafficClassFlows;
@property (readonly, nonatomic) BOOL hasForegroundLikelyAVFlows;
@property (retain, nonatomic) NSMutableArray *interfaceSamples; // ivar: _interfaceSamples
@property (readonly, nonatomic) CGFloat lastInterfaceTrafficTimestamp;
@property (retain, nonatomic) FlowOracle *oracle; // ivar: _oracle
@property (retain, nonatomic) NSMutableDictionary *originLedgers; // ivar: _originLedgers
@property (readonly, nonatomic) BOOL pendingInterfaceSampleIsIdle;
@property (retain, nonatomic) NSMutableDictionary *transferSizeFlows; // ivar: _transferSizeFlows


+(id)sharedInstanceForInterfaceType:(NSInteger)arg0 ;
-(id)getState:(BOOL)arg0 ;
-(id)init;
-(int)setConfiguration:(id)arg0 ;
-(void)addStateForOrigin:(id)arg0 named:(id)arg1 array:(id)arg2 isDelegate:(BOOL)arg3 ;
-(void)coreMediaAssetDownloadCompletion:(id)arg0 for:(id)arg1 at:(CGFloat)arg2 ;
-(void)handleFlowDeltas:(id)arg0 snapshot:(id)arg1 ;
-(void)noteCoreMediaAssetDownloadEvent:(NSUInteger)arg0 downloadUUID:(id)arg1 onBehalfOf:(id)arg2 duration:(CGFloat)arg3 ;
-(void)noteExpectedTransfer:(NSUInteger)arg0 inbound:(BOOL)arg1 upperThreshold:(BOOL)arg2 flowUUID:(id)arg3 at:(CGFloat)arg4 scrutinizedAsSignificantChange:(*BOOL)arg5 ;
-(void)noteInterfaceTraffic:(id)arg0 ;
-(void)restoreDefaults;
-(void)scrutinizeFlow:(id)arg0 withClassification:(id)arg1 scrutinizedAsSignificantChange:(*BOOL)arg2 ;
-(void)updateAudioVideoSamplesWithTime:(CGFloat)arg0 bumpSamples:(BOOL)arg1 ;
-(void)updateInterfaceSamplesWithTime:(CGFloat)arg0 bumpSamples:(BOOL)arg1 ;
-(void)updateTransferSizeFlowsWithTime:(CGFloat)arg0 ;


@end


#endif