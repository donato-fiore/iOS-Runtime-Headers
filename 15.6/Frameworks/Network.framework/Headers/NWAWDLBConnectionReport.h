// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWAWDLBCONNECTIONREPORT_H
#define NWAWDLBCONNECTIONREPORT_H

@class PBCodable;
@protocol NSCopying;



@interface NWAWDLBConnectionReport : PBCodable <NSCopying>

 {
    ? _connectionReadyTimes;
    ? _resumptionFailureErrors;
    ? _resumptionFailureTimes;
    ? _resumptionSuccessTimes;
    ? _has;
}


@property (nonatomic) NSInteger bytesReceived; // ivar: _bytesReceived
@property (nonatomic) NSInteger bytesSent; // ivar: _bytesSent
@property (nonatomic) NSInteger clientConnectionCount; // ivar: _clientConnectionCount
@property (nonatomic) int connectionAttemptCount; // ivar: _connectionAttemptCount
@property (nonatomic) int connectionCellularFallbackCount; // ivar: _connectionCellularFallbackCount
@property (nonatomic) NSInteger connectionDuration; // ivar: _connectionDuration
@property (nonatomic) int connectionFailureCount; // ivar: _connectionFailureCount
@property (readonly, nonatomic) *NSInteger connectionReadyTimes;
@property (readonly, nonatomic) NSUInteger connectionReadyTimesCount;
@property (nonatomic) int connectionSuccessMptcpCount; // ivar: _connectionSuccessMptcpCount
@property (nonatomic) int connectionSuccessTcpCount; // ivar: _connectionSuccessTcpCount
@property (nonatomic) BOOL hasBytesReceived;
@property (nonatomic) BOOL hasBytesSent;
@property (nonatomic) BOOL hasClientConnectionCount;
@property (nonatomic) BOOL hasConnectionAttemptCount;
@property (nonatomic) BOOL hasConnectionCellularFallbackCount;
@property (nonatomic) BOOL hasConnectionDuration;
@property (nonatomic) BOOL hasConnectionFailureCount;
@property (nonatomic) BOOL hasConnectionSuccessMptcpCount;
@property (nonatomic) BOOL hasConnectionSuccessTcpCount;
@property (nonatomic) BOOL hasResumptionFailureCount;
@property (nonatomic) BOOL hasResumptionSuccessCount;
@property (nonatomic) BOOL hasSuspensionCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUpgradeSuccessAndNotNeededCount;
@property (nonatomic) BOOL hasUpgradeSuccessAndPrimaryCount;
@property (nonatomic) int resumptionFailureCount; // ivar: _resumptionFailureCount
@property (readonly, nonatomic) *int resumptionFailureErrors;
@property (readonly, nonatomic) NSUInteger resumptionFailureErrorsCount;
@property (readonly, nonatomic) *NSInteger resumptionFailureTimes;
@property (readonly, nonatomic) NSUInteger resumptionFailureTimesCount;
@property (nonatomic) int resumptionSuccessCount; // ivar: _resumptionSuccessCount
@property (readonly, nonatomic) *NSInteger resumptionSuccessTimes;
@property (readonly, nonatomic) NSUInteger resumptionSuccessTimesCount;
@property (nonatomic) int suspensionCount; // ivar: _suspensionCount
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int upgradeSuccessAndNotNeededCount; // ivar: _upgradeSuccessAndNotNeededCount
@property (nonatomic) int upgradeSuccessAndPrimaryCount; // ivar: _upgradeSuccessAndPrimaryCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)connectionReadyTimesAtIndex:(NSUInteger)arg0 ;
-(NSInteger)resumptionFailureTimesAtIndex:(NSUInteger)arg0 ;
-(NSInteger)resumptionSuccessTimesAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)resumptionFailureErrorsAtIndex:(NSUInteger)arg0 ;
-(void)addConnectionReadyTimes:(NSInteger)arg0 ;
-(void)addResumptionFailureErrors:(int)arg0 ;
-(void)addResumptionFailureTimes:(NSInteger)arg0 ;
-(void)addResumptionSuccessTimes:(NSInteger)arg0 ;
-(void)clearConnectionReadyTimes;
-(void)clearResumptionFailureErrors;
-(void)clearResumptionFailureTimes;
-(void)clearResumptionSuccessTimes;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif