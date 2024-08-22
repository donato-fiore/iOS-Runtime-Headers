// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDHOMEKITEVENTSAGGREGATIONREPORT_H
#define AWDHOMEKITEVENTSAGGREGATIONREPORT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDHomeKitEventsAggregationReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int acceptedXPCRequestsCount; // ivar: _acceptedXPCRequestsCount
@property (nonatomic) unsigned int activeDay; // ivar: _activeDay
@property (nonatomic) unsigned int activeDaysPerMonthCount; // ivar: _activeDaysPerMonthCount
@property (nonatomic) unsigned int averageSampledProcessMemoryUsage; // ivar: _averageSampledProcessMemoryUsage
@property (retain, nonatomic) NSString *dataSyncState; // ivar: _dataSyncState
@property (nonatomic) unsigned int erroredXPCRequestsCount; // ivar: _erroredXPCRequestsCount
@property (nonatomic) unsigned int filteredXPCNotificationsCount; // ivar: _filteredXPCNotificationsCount
@property (nonatomic) unsigned int hapBTLEConnectionPerReasonsCount; // ivar: _hapBTLEConnectionPerReasonsCount
@property (nonatomic) unsigned int hapBTLEConnectionsCount; // ivar: _hapBTLEConnectionsCount
@property (nonatomic) unsigned int hapBTLEDiscoveriesCount; // ivar: _hapBTLEDiscoveriesCount
@property (nonatomic) unsigned int hapIPInvalidationCount; // ivar: _hapIPInvalidationCount
@property (nonatomic) unsigned int hapIPReceivedHTTPEventCount; // ivar: _hapIPReceivedHTTPEventCount
@property (nonatomic) unsigned int hapIPReceivedHTTPResponsesCount; // ivar: _hapIPReceivedHTTPResponsesCount
@property (nonatomic) unsigned int hapIPSentHTTPRequestsCount; // ivar: _hapIPSentHTTPRequestsCount
@property (nonatomic) BOOL hasAcceptedXPCRequestsCount;
@property (nonatomic) BOOL hasActiveDay;
@property (nonatomic) BOOL hasActiveDaysPerMonthCount;
@property (nonatomic) BOOL hasAverageSampledProcessMemoryUsage;
@property (readonly, nonatomic) BOOL hasDataSyncState;
@property (nonatomic) BOOL hasErroredXPCRequestsCount;
@property (nonatomic) BOOL hasFilteredXPCNotificationsCount;
@property (nonatomic) BOOL hasHapBTLEConnectionPerReasonsCount;
@property (nonatomic) BOOL hasHapBTLEConnectionsCount;
@property (nonatomic) BOOL hasHapBTLEDiscoveriesCount;
@property (nonatomic) BOOL hasHapIPInvalidationCount;
@property (nonatomic) BOOL hasHapIPReceivedHTTPEventCount;
@property (nonatomic) BOOL hasHapIPReceivedHTTPResponsesCount;
@property (nonatomic) BOOL hasHapIPSentHTTPRequestsCount;
@property (nonatomic) BOOL hasJetsamReasonHighwaterCount;
@property (nonatomic) BOOL hasJetsamReasonOtherCount;
@property (nonatomic) BOOL hasJetsamReasonProcessLimitCount;
@property (nonatomic) BOOL hasJetsamReasonUnknownKillCount;
@property (nonatomic) BOOL hasPeakSampledProcessMemoryUsage;
@property (nonatomic) BOOL hasProcessLaunchCount;
@property (nonatomic) BOOL hasProcessMemoryPressureStateCriticalCount;
@property (nonatomic) BOOL hasProcessMemoryPressureStateWarningCount;
@property (nonatomic) BOOL hasRemoteMessagesReceivedCount;
@property (nonatomic) BOOL hasRemoteMessagesSentCount;
@property (nonatomic) BOOL hasSentXPCNotificationsCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int jetsamReasonHighwaterCount; // ivar: _jetsamReasonHighwaterCount
@property (nonatomic) unsigned int jetsamReasonOtherCount; // ivar: _jetsamReasonOtherCount
@property (nonatomic) unsigned int jetsamReasonProcessLimitCount; // ivar: _jetsamReasonProcessLimitCount
@property (nonatomic) unsigned int jetsamReasonUnknownKillCount; // ivar: _jetsamReasonUnknownKillCount
@property (nonatomic) unsigned int peakSampledProcessMemoryUsage; // ivar: _peakSampledProcessMemoryUsage
@property (nonatomic) unsigned int processLaunchCount; // ivar: _processLaunchCount
@property (nonatomic) unsigned int processMemoryPressureStateCriticalCount; // ivar: _processMemoryPressureStateCriticalCount
@property (nonatomic) unsigned int processMemoryPressureStateWarningCount; // ivar: _processMemoryPressureStateWarningCount
@property (nonatomic) unsigned int remoteMessagesReceivedCount; // ivar: _remoteMessagesReceivedCount
@property (nonatomic) unsigned int remoteMessagesSentCount; // ivar: _remoteMessagesSentCount
@property (nonatomic) unsigned int sentXPCNotificationsCount; // ivar: _sentXPCNotificationsCount
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif