// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLOWORACLE_H
#define FLOWORACLE_H

@class NSMutableSet, NSSet;

#import <Foundation/Foundation.h>

#import "ContinuousAVFlowDetector.h"
#import "StrictlyPeriodicAVFlowDetector.h"
#import "FlowOriginLedger.h"
#import "FlowScrutinizer.h"

@interface FlowOracle : NSObject {
    NSMutableSet *_expectedTransferOrigins;
    NSMutableSet *_coreMediaAssetDownloadOrigins;
    NSMutableSet *_likelyBelowThresholdAVFlows;
    NSMutableSet *_likelyOverThresholdAVFlows;
    NSMutableSet *_suppressedAVFlows;
    NSMutableSet *_accumulatedTransferOrigins;
    NSMutableSet *_accumulatedCoreMediaAssetDownloadOrigins;
    ContinuousAVFlowDetector *_continuousAVDetector;
    StrictlyPeriodicAVFlowDetector *_strictlyPeriodicAVDetector;
    CGFloat _prevStateRefreshTimestamp;
    CGFloat _prevStateRefreshTimestampForTputEstimates;
    CGFloat _olderSateRefreshTimestampForTputEstimates;
    BOOL _avUseCasesSupported;
    BOOL _hasSustainedInterfaceTraffic;
    BOOL _hasSustainedInterfaceRxTraffic;
    BOOL _hasSustainedInterfaceTxTraffic;
    unsigned int _nonCoreMediaAudioVideoOperation;
    CGFloat _averageTrafficClassAudioVideoRxThroughput;
    CGFloat _averageTrafficClassAudioVideoTxThroughput;
    CGFloat _thresholdAudioVideoFlowsClassifiedIntensive;
    NSUInteger _maxAppFlowMetricForAVDetermination;
    CGFloat _minPhysicalInterfaceDurationForSustainedHighThroughput;
    CGFloat _minDisplayOffPhysicalInterfaceDurationForSustainedHighThroughput;
    CGFloat _minDisplayOnPhysicalInterfaceDurationForSustainedHighThroughput;
    CGFloat _minPhysicalInterfaceRxUsageForSustainedHighThroughput;
    CGFloat _minInitialInterfaceRxUsageForSustainedHighThroughput;
    CGFloat _minPhysicalInterfaceTxUsageForSustainedHighThroughput;
    CGFloat _minInitialInterfaceTxUsageForSustainedHighThroughput;
    CGFloat _coreMediaAssetDownloadThresholdFailureQuarantineTime;
    CGFloat _minThroughputForNonIdleNonCoreMedia;
}


@property (readonly, nonatomic) int activeHighThroughputAudioVideoTrafficForegroundFlowScore;
@property (readonly, nonatomic) int activeLimitedThroughputAudioVideoTrafficForegroundFlowScore;
@property (readonly, nonatomic) NSSet *allContributors;
@property (readonly, nonatomic) CGFloat averageTrafficClassAudioVideoRxThroughput;
@property (readonly, nonatomic) CGFloat averageTrafficClassAudioVideoTxThroughput;
@property (readonly, nonatomic) CGFloat backgroundTransferRecentThroughput; // ivar: _backgroundTransferRecentThroughput
@property (readonly, nonatomic) FlowOriginLedger *busiestOrigin; // ivar: _busiestOrigin
@property (readonly, nonatomic) CGFloat busiestOriginRecentThroughput; // ivar: _busiestOriginRecentThroughput
@property (readonly, nonatomic) NSSet *coreMediaAssetDownloadContributors;
@property (readonly, nonatomic) CGFloat coreMediaAssetDownloadRelatedRecentThroughput;
@property (retain, nonatomic) FlowScrutinizer *flowScrutinizer; // ivar: _flowScrutinizer
@property (readonly, nonatomic) BOOL hasSustainedHighInterfaceRxThroughput; // ivar: _hasSustainedHighInterfaceRxThroughput
@property (readonly, nonatomic) BOOL hasSustainedHighInterfaceThroughput;
@property (readonly, nonatomic) BOOL hasSustainedHighInterfaceTxThroughput; // ivar: _hasSustainedHighInterfaceTxThroughput
@property (readonly, nonatomic) NSSet *highInterfaceUseContributors; // ivar: _highInterfaceUseContributors
@property (readonly, nonatomic) unsigned int nonCoreMediaAudioVideoOperation;
@property (readonly, nonatomic) NSUInteger numActiveCoreMediaAssetDownloads;
@property (readonly, nonatomic) NSUInteger numActiveTransferSizes;
@property (readonly, nonatomic) NSUInteger numCandidateCoreMediaAssetDownloads;
@property (readonly, nonatomic) NSUInteger numCloakedTransferSizes;
@property (readonly, nonatomic) NSUInteger numLowerThresholdTransferSizes;
@property (readonly, nonatomic) NSUInteger numUpperThresholdTransferSizes;
@property (readonly, nonatomic) NSSet *transferContributors;
@property (readonly, nonatomic) CGFloat transferSizeRelatedRecentRxThroughput; // ivar: _transferSizeRelatedRecentRxThroughput
@property (readonly, nonatomic) CGFloat transferSizeRelatedRecentThroughput; // ivar: _transferSizeRelatedRecentThroughput
@property (readonly, nonatomic) CGFloat transferSizeRelatedRecentTxThroughput; // ivar: _transferSizeRelatedRecentTxThroughput


+(id)sharedInstanceForInterfaceType:(NSInteger)arg0 ;
-(BOOL)flowQualfiesForAVHeuristics:(id)arg0 ;
-(BOOL)hadZeroInterfaceTrafficOn:(id)arg0 forLast:(CGFloat)arg1 ;
-(id)getState:(BOOL)arg0 ;
-(id)init;
-(int)setConfiguration:(id)arg0 ;
-(void)_clearState;
-(void)applyFlowHeuristics:(id)arg0 onBehalfOf:(id)arg1 ;
-(void)ensureNonZeroPhysicalInterfaceThroughputParameters;
-(void)evaluatePossibleAVFlows:(id)arg0 currentFlowCount:(NSUInteger)arg1 activeFlowCount:(NSUInteger)arg2 ;
-(void)logCoreMediaAssetDownloadContributors:(NSUInteger)arg0 ;
-(void)logInterfaceUseContributors:(NSUInteger)arg0 ;
-(void)logTransferContributors:(NSUInteger)arg0 ;
-(void)markCoreMediaAssetDownloadsAsActive;
-(void)markCoreMediaAssetDownloadsAsInactiveAt:(CGFloat)arg0 ;
-(void)markTransferSizeFlowsAsActive;
-(void)markTransferSizeFlowsAsInactive;
-(void)noteClosingFlow:(id)arg0 ledger:(id)arg1 originLedger:(id)arg2 ;
-(void)refreshState:(id)arg0 ;
-(void)refreshTransferSizeState;
-(void)restoreDefaults;
-(void)setThresholdsOptimizedFor:(NSUInteger)arg0 ;
-(void)startSamplingPeriod:(id)arg0 ;


@end


#endif