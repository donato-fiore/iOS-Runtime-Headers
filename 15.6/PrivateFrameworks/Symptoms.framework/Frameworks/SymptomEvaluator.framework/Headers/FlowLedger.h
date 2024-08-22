// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLOWLEDGER_H
#define FLOWLEDGER_H

@class NSMutableArray, NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "AppHistoryScreenerEpisode.h"
#import "FlowOriginLedger.h"

@interface FlowLedger : NSObject

@property (retain, nonatomic) NSMutableArray *alternatingIdleNonIdlePeriods; // ivar: _alternatingIdleNonIdlePeriods
@property (retain, nonatomic) AppHistoryScreenerEpisode *appEpisode; // ivar: _appEpisode
@property (readonly, nonatomic) NSString *createdBy;
@property (retain, nonatomic) FlowOriginLedger *creatorLedger; // ivar: _creatorLedger
@property (nonatomic) unsigned int expectedTransferState; // ivar: _expectedTransferState
@property (nonatomic) NSUInteger flowIdentifier; // ivar: _flowIdentifier
@property (nonatomic) CGFloat flowIdleDuration; // ivar: _flowIdleDuration
@property (nonatomic) BOOL flowIsQUIC; // ivar: _flowIsQUIC
@property (nonatomic) BOOL flowIsTCP; // ivar: _flowIsTCP
@property (nonatomic) BOOL flowIsUDP; // ivar: _flowIsUDP
@property (nonatomic) BOOL flowLastSeenAsForeground; // ivar: _flowLastSeenAsForeground
@property (nonatomic) CGFloat flowNonIdleDuration; // ivar: _flowNonIdleDuration
@property (nonatomic) BOOL flowStartedAsForeground; // ivar: _flowStartedAsForeground
@property (retain, nonatomic) NSString *flowType; // ivar: _flowType
@property (retain, nonatomic) NSUUID *flowUUID; // ivar: _flowUUID
@property (nonatomic) BOOL lastSampleWasIdle; // ivar: _lastSampleWasIdle
@property (retain, nonatomic) NSString *latestClassification; // ivar: _latestClassification
@property (nonatomic) CGFloat maxRxThroughput; // ivar: _maxRxThroughput
@property (nonatomic) CGFloat maxTxThroughput; // ivar: _maxTxThroughput
@property (nonatomic) CGFloat minRxThroughput; // ivar: _minRxThroughput
@property (nonatomic) CGFloat minTxThroughput; // ivar: _minTxThroughput
@property (retain, nonatomic) NSMutableArray *nonIdleSamples; // ivar: _nonIdleSamples
@property (nonatomic) BOOL notedAsAudioVideoTC; // ivar: _notedAsAudioVideoTC
@property (nonatomic) BOOL notedAsFGAudioVideoTC; // ivar: _notedAsFGAudioVideoTC
@property (nonatomic) unsigned int numSamples; // ivar: _numSamples
@property (nonatomic) CGFloat pendingFlowNonIdleDuration; // ivar: _pendingFlowNonIdleDuration
@property (nonatomic) CGFloat prevSampleTime; // ivar: _prevSampleTime
@property (readonly, nonatomic) CGFloat recentRxThroughput;
@property (readonly, nonatomic) CGFloat recentTxThroughput;
@property (nonatomic) BOOL rxTransferSizeLowerThreshold; // ivar: _rxTransferSizeLowerThreshold
@property (nonatomic) BOOL rxTransferSizeUpperThreshold; // ivar: _rxTransferSizeUpperThreshold
@property (nonatomic) NSUInteger totalObservedIfTypeRxBytes; // ivar: _totalObservedIfTypeRxBytes
@property (nonatomic) NSUInteger totalObservedIfTypeTxBytes; // ivar: _totalObservedIfTypeTxBytes
@property (nonatomic) unsigned int trafficClass; // ivar: _trafficClass
@property (nonatomic) BOOL trafficClassIsAudioVideo; // ivar: _trafficClassIsAudioVideo
@property (nonatomic) CGFloat transferStateEntryTimestamp; // ivar: _transferStateEntryTimestamp
@property (nonatomic) BOOL txTransferSizeLowerThreshold; // ivar: _txTransferSizeLowerThreshold
@property (nonatomic) BOOL txTransferSizeUpperThreshold; // ivar: _txTransferSizeUpperThreshold


-(BOOL)statisticsForAccumulatedSamples:(*NSUInteger)arg0 sampleDuration:(*CGFloat)arg1 avgRxTput:(*CGFloat)arg2 avgCeilingRxTput:(*CGFloat)arg3 avgTxTput:(*CGFloat)arg4 avgCeilingTxTput:(*CGFloat)arg5 ;
-(BOOL)statisticsForSampleCount:(*NSUInteger)arg0 sampleDuration:(*CGFloat)arg1 minRxTput:(*CGFloat)arg2 avgRxTput:(*CGFloat)arg3 maxRxTput:(*CGFloat)arg4 avgCeilingRxTput:(*CGFloat)arg5 normalizedRxStdDeviation:(*CGFloat)arg6 minTxTput:(*CGFloat)arg7 avgTxTput:(*CGFloat)arg8 maxTxTput:(*CGFloat)arg9 avgCeilingTxTput:(*CGFloat)arg10 normalizedTxStdDeviation:(*CGFloat)arg11 requiredMinSampleCount:(NSUInteger)arg12 ;
-(id)briefDescription;
-(id)description;
-(id)expectedTransferStateToString:(unsigned int)arg0 ;
-(id)statisticsDescription;


@end


#endif