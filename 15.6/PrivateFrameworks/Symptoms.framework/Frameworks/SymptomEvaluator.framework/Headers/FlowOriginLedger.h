// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLOWORIGINLEDGER_H
#define FLOWORIGINLEDGER_H

@class NSMutableDictionary, NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface FlowOriginLedger : NSObject

@property (nonatomic) NSUInteger closedFlows; // ivar: _closedFlows
@property (retain, nonatomic) NSMutableDictionary *currentAssetDownloads; // ivar: _currentAssetDownloads
@property (retain, nonatomic) NSMutableDictionary *currentFlows; // ivar: _currentFlows
@property (retain, nonatomic) NSMutableDictionary *delegates; // ivar: _delegates
@property (nonatomic) CGFloat lastUsed; // ivar: _lastUsed
@property (nonatomic) BOOL mostRecentFlowSeenAsForeground; // ivar: _mostRecentFlowSeenAsForeground
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger pollIntervalIfTypeRxBytes;
@property (readonly, nonatomic) NSUInteger pollIntervalIfTypeTxBytes;
@property (retain, nonatomic) NSMutableArray *possibleAVFlows; // ivar: _possibleAVFlows
@property (nonatomic) NSUInteger prevPollIfTypeRxBytes; // ivar: _prevPollIfTypeRxBytes
@property (nonatomic) NSUInteger prevPollIfTypeTxBytes; // ivar: _prevPollIfTypeTxBytes
@property (readonly, nonatomic) NSUInteger prevPollIntervalIfTypeRxBytes;
@property (readonly, nonatomic) NSUInteger prevPollIntervalIfTypeTxBytes;
@property (nonatomic) NSUInteger prevPrevPollIfTypeRxBytes; // ivar: _prevPrevPollIfTypeRxBytes
@property (nonatomic) NSUInteger prevPrevPollIfTypeTxBytes; // ivar: _prevPrevPollIfTypeTxBytes
@property (nonatomic) NSUInteger sampleAdditionalFlags; // ivar: _sampleAdditionalFlags
@property (readonly, nonatomic) NSUInteger sampleIfTypeRxBytes;
@property (readonly, nonatomic) NSUInteger sampleIfTypeTxBytes;
@property (readonly, nonatomic) CGFloat sampleRxThroughput;
@property (nonatomic) NSUInteger sampleStartIfTypeRxBytes; // ivar: _sampleStartIfTypeRxBytes
@property (nonatomic) NSUInteger sampleStartIfTypeTxBytes; // ivar: _sampleStartIfTypeTxBytes
@property (nonatomic) CGFloat sampleStartTime; // ivar: _sampleStartTime
@property (nonatomic) BOOL sampleStartedInForegroundState; // ivar: _sampleStartedInForegroundState
@property (nonatomic) CGFloat sampleTotalBusyTime; // ivar: _sampleTotalBusyTime
@property (readonly, nonatomic) CGFloat sampleTxThroughput;
@property (nonatomic) BOOL sampledAsCoreMediaAssetDownload; // ivar: _sampledAsCoreMediaAssetDownload
@property (nonatomic) BOOL sampledAsHighInterfaceUse; // ivar: _sampledAsHighInterfaceUse
@property (nonatomic) BOOL sampledAsHighTransferSize; // ivar: _sampledAsHighTransferSize
@property (nonatomic) BOOL sampledCoreMediaAssetDownloadInactive; // ivar: _sampledCoreMediaAssetDownloadInactive
@property (nonatomic) NSUInteger totalObservedIfTypeRxBytes; // ivar: _totalObservedIfTypeRxBytes
@property (nonatomic) NSUInteger totalObservedIfTypeTxBytes; // ivar: _totalObservedIfTypeTxBytes
@property (nonatomic) NSUInteger totalWithDelegatesIfTypeRxBytes; // ivar: _totalWithDelegatesIfTypeRxBytes
@property (nonatomic) NSUInteger totalWithDelegatesIfTypeTxBytes; // ivar: _totalWithDelegatesIfTypeTxBytes


-(id)briefDescription;
-(id)description;
-(id)init;
-(void)startSamplingPeriod;


@end


#endif