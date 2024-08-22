// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LARGETRANSFERASSESSOR_H
#define LARGETRANSFERASSESSOR_H

@class NSMutableDictionary, NSSet;

#import <Foundation/Foundation.h>

#import "ConfigurationParams.h"
#import "FlowScrutinizer.h"

@interface LargeTransferAssessor : NSObject {
    NSUInteger numLowerThresholdRxTransferSizes;
    NSUInteger numUpperThresholdRxTransferSizes;
    NSUInteger numActiveTransferSizes;
    NSUInteger numCloakedTransferSizes;
    CGFloat _lastTransferSizeUse;
    CGFloat _lastTransferSizeCheck;
    CGFloat _prolongedBelowThresholdDampeningInterval;
    CGFloat _normalCloseDampeningInterval;
    CGFloat _transferSizeFlowFailedThresholdQuarantineTime;
    ConfigurationParams *_pendingConfigurationParams;
    NSMutableDictionary *_appTransferSummaries;
    FlowScrutinizer *_flowScrutinizer;
}


@property (readonly, nonatomic) CGFloat accumulatedLowThroughputHysteresisTime; // ivar: _accumulatedLowThroughputHysteresisTime
@property (readonly, nonatomic) int activeTransitionQualifier; // ivar: _activeTransitionQualifier
@property (readonly, nonatomic) BOOL assessedPositive;
@property (readonly, nonatomic) NSSet *currentActiveTransferApps; // ivar: _currentActiveTransferApps
@property (nonatomic) NSUInteger numCellRxLowerThresholdTransferSizes; // ivar: _numCellRxLowerThresholdTransferSizes
@property (nonatomic) NSUInteger numCellRxUpperThresholdTransferSizes; // ivar: _numCellRxUpperThresholdTransferSizes
@property (nonatomic) NSUInteger numCellTxLowerThresholdTransferSizes; // ivar: _numCellTxLowerThresholdTransferSizes
@property (nonatomic) NSUInteger numCellTxUpperThresholdTransferSizes; // ivar: _numCellTxUpperThresholdTransferSizes
@property (readonly, nonatomic) int numTransitionsLowThroughputHysteresisToActive; // ivar: _numTransitionsLowThroughputHysteresisToActive
@property (nonatomic) NSUInteger numWiFiRxLowerThresholdTransferSizes; // ivar: _numWiFiRxLowerThresholdTransferSizes
@property (nonatomic) NSUInteger numWiFiRxUpperThresholdTransferSizes; // ivar: _numWiFiRxUpperThresholdTransferSizes
@property (nonatomic) NSUInteger numWiFiTxLowerThresholdTransferSizes; // ivar: _numWiFiTxLowerThresholdTransferSizes
@property (nonatomic) NSUInteger numWiFiTxUpperThresholdTransferSizes; // ivar: _numWiFiTxUpperThresholdTransferSizes
@property (copy, nonatomic) id *shouldGoActiveBlock; // ivar: _shouldGoActiveBlock
@property (copy, nonatomic) id *shouldStayActiveBlock; // ivar: _shouldStayActiveBlock
@property (nonatomic) int state; // ivar: _state
@property (readonly, nonatomic) CGFloat transferSizeRelatedRecentCellRxThroughput; // ivar: _transferSizeRelatedRecentCellRxThroughput
@property (readonly, nonatomic) CGFloat transferSizeRelatedRecentCellTxThroughput; // ivar: _transferSizeRelatedRecentCellTxThroughput
@property (readonly, nonatomic) CGFloat transferSizeRelatedRecentTotalRxThroughput;
@property (readonly, nonatomic) CGFloat transferSizeRelatedRecentTotalTxThroughput;
@property (readonly, nonatomic) CGFloat transferSizeRelatedRecentWiFiRxThroughput; // ivar: _transferSizeRelatedRecentWiFiRxThroughput
@property (readonly, nonatomic) CGFloat transferSizeRelatedRecentWiFiTxThroughput; // ivar: _transferSizeRelatedRecentWiFiTxThroughput


-(BOOL)setConfiguration:(id)arg0 ;
-(CGFloat)transferSizeRelatedRecentCellThroughput;
-(CGFloat)transferSizeRelatedRecentTotalThroughput;
-(CGFloat)transferSizeRelatedRecentWiFiThroughput;
-(id)description;
-(id)getState;
-(id)init;
-(void)checkLargeTransfersAt:(CGFloat)arg0 ;
-(void)dumpStateAt:(CGFloat)arg0 ;
-(void)markActiveTransferSizeFlowsAs:(unsigned int)arg0 ;
-(void)refreshTransferSizeState;
-(void)restoreDefaults;


@end


#endif