// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCRUTINIZER_H
#define FLOWSCRUTINIZER_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PhysicalInterfaceSampler.h"

@interface FlowScrutinizer : NSObject {
    NSInteger _numNotedAsFGAudioVideoTC;
    NSInteger _numNotedAsCellFGAudioVideoTC;
    NSInteger _numNotedAsWiFiFGAudioVideoTC;
    CGFloat _lastSampleTimeIntervalSinceReferenceDate;
    NSInteger _totalCellAudioVideoRxBytes;
    NSInteger _totalCellAudioVideoTxBytes;
    NSInteger _totalWiFiAudioVideoRxBytes;
    NSInteger _totalWiFiAudioVideoTxBytes;
    NSInteger _lastSampledCellAudioVideoRxBytes;
    NSInteger _lastSampledCellAudioVideoTxBytes;
    NSInteger _lastSampledWiFiAudioVideoRxBytes;
    NSInteger _lastSampledWiFiAudioVideoTxBytes;
    CGFloat _lastAudioVideoSampleTimeIntervalSinceReferenceDate;
    CGFloat _minCoreMediaAssetDownloadEstimatedDuration;
    CGFloat _transferSizeFlowFailedThresholdQuarantineTime;
    CGFloat _maxFlowIdleTimeWhileMarkedWithTransferSize;
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


@property (nonatomic) BOOL accumulateCellAppHistoryEpisodes; // ivar: _accumulateCellAppHistoryEpisodes
@property (retain, nonatomic) NSMutableArray *cellAudioVideoSamples; // ivar: _cellAudioVideoSamples
@property (readonly, nonatomic) PhysicalInterfaceSampler *cellInterfaceSampler; // ivar: _cellInterfaceSampler
@property (nonatomic) BOOL cellThroughputAdviserShouldRun; // ivar: _cellThroughputAdviserShouldRun
@property (nonatomic) BOOL hasForegroundAVTrafficClassFlows; // ivar: _hasForegroundAVTrafficClassFlows
@property (nonatomic) BOOL hasForegroundCellAVTrafficClassFlows; // ivar: _hasForegroundCellAVTrafficClassFlows
@property (readonly, nonatomic) BOOL hasForegroundLikelyAVFlows;
@property (nonatomic) BOOL hasForegroundWiFiAVTrafficClassFlows; // ivar: _hasForegroundWiFiAVTrafficClassFlows
@property (readonly, nonatomic) CGFloat lastCellInterfaceTrafficTimestamp;
@property (readonly, nonatomic) CGFloat lastWiFiInterfaceTrafficTimestamp;
@property (nonatomic) NSInteger numExpectedTransferSignificantChanges; // ivar: _numExpectedTransferSignificantChanges
@property (retain, nonatomic) NSMutableDictionary *originLedgers; // ivar: _originLedgers
@property (retain, nonatomic) NSMutableDictionary *transferSizeFlows; // ivar: _transferSizeFlows
@property (retain, nonatomic) NSMutableArray *wifiAudioVideoSamples; // ivar: _wifiAudioVideoSamples
@property (readonly, nonatomic) PhysicalInterfaceSampler *wifiInterfaceSampler; // ivar: _wifiInterfaceSampler


+(id)sharedInstance;
-(id)getState:(BOOL)arg0 ;
-(id)init;
-(int)setConfiguration:(id)arg0 ;
-(void)addStateForOrigin:(id)arg0 named:(id)arg1 array:(id)arg2 isDelegate:(BOOL)arg3 ;
-(void)clearAVSamplesIfAllIdle:(id)arg0 time:(CGFloat)arg1 ;
-(void)coreMediaAssetDownloadCompletion:(id)arg0 for:(id)arg1 at:(CGFloat)arg2 ;
-(void)handleFlowDeltas:(id)arg0 snapshot:(id)arg1 ;
-(void)noteCoreMediaAssetDownloadEvent:(NSUInteger)arg0 downloadUUID:(id)arg1 onBehalfOf:(id)arg2 duration:(CGFloat)arg3 at:(CGFloat)arg4 ;
-(void)noteExpectedTransfer:(NSUInteger)arg0 inbound:(BOOL)arg1 upperThreshold:(BOOL)arg2 flowUUID:(id)arg3 at:(CGFloat)arg4 ;
-(void)restoreDefaults;
-(void)scrutinizeFlow:(id)arg0 withClassification:(id)arg1 ;
-(void)updateAudioVideoSamplesWithTime:(CGFloat)arg0 bumpSamples:(BOOL)arg1 ;
-(void)updateInterfaceSamplesWithTime:(CGFloat)arg0 bumpSamples:(BOOL)arg1 ;
-(void)updateTransferSizeFlowsWithTime:(CGFloat)arg0 ;


@end


#endif