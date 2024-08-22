// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWORACLE_H
#define FLOWORACLE_H

@class NSMutableSet, NSSet, NSString;
@protocol FlowScheduledRefreshDelegate;

#import <Foundation/Foundation.h>

#import "ContinuousAVFlowDetector.h"
#import "StrictlyPeriodicAVFlowDetector.h"
#import "FlowOriginLedger.h"
#import "FlowScrutinizer.h"

@interface FlowOracle : NSObject <FlowScheduledRefreshDelegate>

 {
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
    unsigned int _cellNonCoreMediaAudioVideoOperation;
    CGFloat _averageCellAudioVideoTrafficClassRxThroughput;
    CGFloat _averageCellAudioVideoTrafficClassTxThroughput;
    CGFloat _thresholdAudioVideoFlowsClassifiedIntensive;
    NSUInteger _maxAppFlowMetricForAVDetermination;
    CGFloat _coreMediaAssetDownloadThresholdFailureQuarantineTime;
    CGFloat _minThroughputForNonIdleNonCoreMedia;
}


@property (readonly, nonatomic) int activeHighThroughputAudioVideoTrafficForegroundFlowScore;
@property (readonly, nonatomic) int activeLimitedThroughputAudioVideoTrafficForegroundFlowScore;
@property (readonly, nonatomic) NSSet *allContributors;
@property (readonly, nonatomic) CGFloat averageCellAudioVideoTrafficClassRxThroughput;
@property (readonly, nonatomic) CGFloat averageCellAudioVideoTrafficClassTxThroughput;
@property (readonly, nonatomic) CGFloat backgroundCellTransferRecentThroughput; // ivar: _backgroundCellTransferRecentThroughput
@property (readonly, nonatomic) CGFloat backgroundWiFiTransferRecentThroughput; // ivar: _backgroundWiFiTransferRecentThroughput
@property (readonly, nonatomic) FlowOriginLedger *busiestCellOrigin; // ivar: _busiestCellOrigin
@property (readonly, nonatomic) CGFloat busiestCellOriginRecentThroughput; // ivar: _busiestCellOriginRecentThroughput
@property (readonly, nonatomic) FlowOriginLedger *busiestWiFiOrigin; // ivar: _busiestWiFiOrigin
@property (readonly, nonatomic) CGFloat busiestWiFiOriginRecentThroughput; // ivar: _busiestWiFiOriginRecentThroughput
@property (readonly, nonatomic) unsigned int cellNonCoreMediaAudioVideoOperation;
@property (readonly, nonatomic) NSSet *coreMediaAssetDownloadContributors;
@property (readonly, nonatomic) CGFloat coreMediaAssetDownloadRelatedRecentThroughput;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FlowScrutinizer *flowScrutinizer; // ivar: _flowScrutinizer
@property (readonly, nonatomic) BOOL hasSustainedConservativeHighCellInterfaceThroughput;
@property (readonly, nonatomic) BOOL hasSustainedConservativeHighWiFiInterfaceThroughput;
@property (readonly, nonatomic) BOOL hasSustainedHighCellInterfaceRxThroughput;
@property (readonly, nonatomic) BOOL hasSustainedHighCellInterfaceTxThroughput;
@property (readonly, nonatomic) BOOL hasSustainedHighWiFiInterfaceRxThroughput;
@property (readonly, nonatomic) BOOL hasSustainedHighWiFiInterfaceTxThroughput;
@property (readonly, nonatomic) BOOL hasSustainedResponsiveHighCellInterfaceThroughput;
@property (readonly, nonatomic) BOOL hasSustainedResponsiveHighWiFiInterfaceThroughput;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *highCellInterfaceUseContributors; // ivar: _highCellInterfaceUseContributors
@property (readonly, nonatomic) NSUInteger numActiveCoreMediaAssetDownloads;
@property (readonly, nonatomic) NSUInteger numActiveTransferSizes;
@property (readonly, nonatomic) NSUInteger numCandidateCoreMediaAssetDownloads;
@property (readonly, nonatomic) NSUInteger numCloakedTransferSizes;
@property (readonly, nonatomic) NSUInteger numLowerThresholdTransferSizes;
@property (readonly, nonatomic) NSUInteger numUpperThresholdTransferSizes;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *transferContributors;
@property (readonly, nonatomic) CGFloat transferSizeRelatedRecentCellRxThroughput; // ivar: _transferSizeRelatedRecentCellRxThroughput
@property (readonly, nonatomic) CGFloat transferSizeRelatedRecentCellThroughput; // ivar: _transferSizeRelatedRecentCellThroughput
@property (readonly, nonatomic) CGFloat transferSizeRelatedRecentCellTxThroughput; // ivar: _transferSizeRelatedRecentCellTxThroughput
@property (readonly, nonatomic) CGFloat transferSizeRelatedRecentTotalRxThroughput; // ivar: _transferSizeRelatedRecentTotalRxThroughput
@property (readonly, nonatomic) CGFloat transferSizeRelatedRecentTotalThroughput; // ivar: _transferSizeRelatedRecentTotalThroughput
@property (readonly, nonatomic) CGFloat transferSizeRelatedRecentTotalTxThroughput; // ivar: _transferSizeRelatedRecentTotalTxThroughput
@property (readonly, nonatomic) CGFloat transferSizeRelatedRecentWiFiRxThroughput; // ivar: _transferSizeRelatedRecentWiFiRxThroughput
@property (readonly, nonatomic) CGFloat transferSizeRelatedRecentWiFiThroughput; // ivar: _transferSizeRelatedRecentWiFiThroughput
@property (readonly, nonatomic) CGFloat transferSizeRelatedRecentWiFiTxThroughput; // ivar: _transferSizeRelatedRecentWiFiTxThroughput


+(id)sharedInstance;
-(BOOL)flowQualfiesForAVHeuristics:(id)arg0 ;
-(BOOL)hadZeroCellInterfaceTrafficForLast:(CGFloat)arg0 ;
-(BOOL)hadZeroWiFiInterfaceTrafficForLast:(CGFloat)arg0 ;
-(id)getState:(BOOL)arg0 ;
-(id)init;
-(int)didPollFlowsCallbackOrder;
-(int)setConfiguration:(id)arg0 ;
-(void)_clearState;
-(void)applyFlowHeuristics:(id)arg0 onBehalfOf:(id)arg1 ;
-(void)didPollFlowsAt:(CGFloat)arg0 periodic:(BOOL)arg1 ;
-(void)evaluatePossibleAVFlows:(id)arg0 currentFlowCount:(NSUInteger)arg1 activeFlowCount:(NSUInteger)arg2 ;
-(void)logCellInterfaceUseContributors:(NSUInteger)arg0 ;
-(void)logCoreMediaAssetDownloadContributors:(NSUInteger)arg0 ;
-(void)logTransferContributors:(NSUInteger)arg0 ;
-(void)markCoreMediaAssetDownloadsAsActive;
-(void)markCoreMediaAssetDownloadsAsInactiveAt:(CGFloat)arg0 ;
-(void)markTransferSizeFlowsAsActive;
-(void)markTransferSizeFlowsAsInactive;
-(void)refreshState:(id)arg0 ;
-(void)refreshTransferSizeState;
-(void)restoreDefaults;
-(void)startSamplingPeriod:(id)arg0 ;


@end


#endif