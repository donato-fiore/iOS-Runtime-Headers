// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWAWDLIBNETCOREMPTCPSTATSREPORT_H
#define NWAWDLIBNETCOREMPTCPSTATSREPORT_H

@class PBCodable;
@protocol NSCopying;



@interface NWAWDLibnetcoreMPTCPStatsReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMptcpAggregateAllBytes;
@property (nonatomic) BOOL hasMptcpAggregateAttempt;
@property (nonatomic) BOOL hasMptcpAggregateCellBytes;
@property (nonatomic) BOOL hasMptcpBackToWiFi;
@property (nonatomic) BOOL hasMptcpCellDenied;
@property (nonatomic) BOOL hasMptcpCellProxy;
@property (nonatomic) BOOL hasMptcpFirstPartyAggregateAttempt;
@property (nonatomic) BOOL hasMptcpFirstPartyHandoverAttempt;
@property (nonatomic) BOOL hasMptcpFirstPartyInteractiveAttempt;
@property (nonatomic) BOOL hasMptcpHandoverAllBytes;
@property (nonatomic) BOOL hasMptcpHandoverAttempts;
@property (nonatomic) BOOL hasMptcpHandoverCellBytes;
@property (nonatomic) BOOL hasMptcpHandoverCellSubflowFromWiFi;
@property (nonatomic) BOOL hasMptcpHandoverWiFiSubflowFromCell;
@property (nonatomic) BOOL hasMptcpHandshakeAggregateSuccess;
@property (nonatomic) BOOL hasMptcpHandshakeAggregateSuccessFirstParty;
@property (nonatomic) BOOL hasMptcpHandshakeHandoverSuccessCell;
@property (nonatomic) BOOL hasMptcpHandshakeHandoverSuccessCellFirstParty;
@property (nonatomic) BOOL hasMptcpHandshakeHandoverSuccessWiFi;
@property (nonatomic) BOOL hasMptcpHandshakeHandoverSuccessWiFiFirstParty;
@property (nonatomic) BOOL hasMptcpHandshakeInteractiveSuccess;
@property (nonatomic) BOOL hasMptcpHandshakeInteractiveSuccessFirstParty;
@property (nonatomic) BOOL hasMptcpHeuristicFallback;
@property (nonatomic) BOOL hasMptcpHeuristicFallbackFirstParty;
@property (nonatomic) BOOL hasMptcpInteractiveAllBytes;
@property (nonatomic) BOOL hasMptcpInteractiveAttempt;
@property (nonatomic) BOOL hasMptcpInteractiveCellBytes;
@property (nonatomic) BOOL hasMptcpInteractiveCellUsage;
@property (nonatomic) BOOL hasMptcpTriggeredCell;
@property (nonatomic) BOOL hasMptcpWiFiProxy;
@property (nonatomic) NSUInteger mptcpAggregateAllBytes; // ivar: _mptcpAggregateAllBytes
@property (nonatomic) NSUInteger mptcpAggregateAttempt; // ivar: _mptcpAggregateAttempt
@property (nonatomic) NSUInteger mptcpAggregateCellBytes; // ivar: _mptcpAggregateCellBytes
@property (nonatomic) NSUInteger mptcpBackToWiFi; // ivar: _mptcpBackToWiFi
@property (nonatomic) NSUInteger mptcpCellDenied; // ivar: _mptcpCellDenied
@property (nonatomic) NSUInteger mptcpCellProxy; // ivar: _mptcpCellProxy
@property (nonatomic) NSUInteger mptcpFirstPartyAggregateAttempt; // ivar: _mptcpFirstPartyAggregateAttempt
@property (nonatomic) NSUInteger mptcpFirstPartyHandoverAttempt; // ivar: _mptcpFirstPartyHandoverAttempt
@property (nonatomic) NSUInteger mptcpFirstPartyInteractiveAttempt; // ivar: _mptcpFirstPartyInteractiveAttempt
@property (nonatomic) NSUInteger mptcpHandoverAllBytes; // ivar: _mptcpHandoverAllBytes
@property (nonatomic) NSUInteger mptcpHandoverAttempts; // ivar: _mptcpHandoverAttempts
@property (nonatomic) NSUInteger mptcpHandoverCellBytes; // ivar: _mptcpHandoverCellBytes
@property (nonatomic) NSUInteger mptcpHandoverCellSubflowFromWiFi; // ivar: _mptcpHandoverCellSubflowFromWiFi
@property (nonatomic) NSUInteger mptcpHandoverWiFiSubflowFromCell; // ivar: _mptcpHandoverWiFiSubflowFromCell
@property (nonatomic) NSUInteger mptcpHandshakeAggregateSuccess; // ivar: _mptcpHandshakeAggregateSuccess
@property (nonatomic) NSUInteger mptcpHandshakeAggregateSuccessFirstParty; // ivar: _mptcpHandshakeAggregateSuccessFirstParty
@property (nonatomic) NSUInteger mptcpHandshakeHandoverSuccessCell; // ivar: _mptcpHandshakeHandoverSuccessCell
@property (nonatomic) NSUInteger mptcpHandshakeHandoverSuccessCellFirstParty; // ivar: _mptcpHandshakeHandoverSuccessCellFirstParty
@property (nonatomic) NSUInteger mptcpHandshakeHandoverSuccessWiFi; // ivar: _mptcpHandshakeHandoverSuccessWiFi
@property (nonatomic) NSUInteger mptcpHandshakeHandoverSuccessWiFiFirstParty; // ivar: _mptcpHandshakeHandoverSuccessWiFiFirstParty
@property (nonatomic) NSUInteger mptcpHandshakeInteractiveSuccess; // ivar: _mptcpHandshakeInteractiveSuccess
@property (nonatomic) NSUInteger mptcpHandshakeInteractiveSuccessFirstParty; // ivar: _mptcpHandshakeInteractiveSuccessFirstParty
@property (nonatomic) NSUInteger mptcpHeuristicFallback; // ivar: _mptcpHeuristicFallback
@property (nonatomic) NSUInteger mptcpHeuristicFallbackFirstParty; // ivar: _mptcpHeuristicFallbackFirstParty
@property (nonatomic) NSUInteger mptcpInteractiveAllBytes; // ivar: _mptcpInteractiveAllBytes
@property (nonatomic) NSUInteger mptcpInteractiveAttempt; // ivar: _mptcpInteractiveAttempt
@property (nonatomic) NSUInteger mptcpInteractiveCellBytes; // ivar: _mptcpInteractiveCellBytes
@property (nonatomic) NSUInteger mptcpInteractiveCellUsage; // ivar: _mptcpInteractiveCellUsage
@property (nonatomic) NSUInteger mptcpTriggeredCell; // ivar: _mptcpTriggeredCell
@property (nonatomic) NSUInteger mptcpWiFiProxy; // ivar: _mptcpWiFiProxy


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