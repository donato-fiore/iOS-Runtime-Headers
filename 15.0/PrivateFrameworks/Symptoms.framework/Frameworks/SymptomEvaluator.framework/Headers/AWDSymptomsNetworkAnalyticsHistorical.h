// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDSYMPTOMSNETWORKANALYTICSHISTORICAL_H
#define AWDSYMPTOMSNETWORKANALYTICSHISTORICAL_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDSymptomsNetworkAnalyticsHistorical : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger bytesIn; // ivar: _bytesIn
@property (nonatomic) NSUInteger bytesOut; // ivar: _bytesOut
@property (nonatomic) NSUInteger connAttempts; // ivar: _connAttempts
@property (nonatomic) NSUInteger connSuccess; // ivar: _connSuccess
@property (nonatomic) NSUInteger dnsCompleteFailures; // ivar: _dnsCompleteFailures
@property (nonatomic) NSUInteger dnsPartialFailures; // ivar: _dnsPartialFailures
@property (nonatomic) NSUInteger epochs; // ivar: _epochs
@property (nonatomic) NSUInteger faultyStaySecs; // ivar: _faultyStaySecs
@property (nonatomic) BOOL hasBytesIn;
@property (nonatomic) BOOL hasBytesOut;
@property (nonatomic) BOOL hasConnAttempts;
@property (nonatomic) BOOL hasConnSuccess;
@property (nonatomic) BOOL hasDnsCompleteFailures;
@property (nonatomic) BOOL hasDnsPartialFailures;
@property (nonatomic) BOOL hasEpochs;
@property (nonatomic) BOOL hasFaultyStaySecs;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) BOOL hasPacketsIn;
@property (nonatomic) BOOL hasPacketsOut;
@property (nonatomic) BOOL hasSecsSinceLastTrimmed;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTotalStaySecs;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) int networkType; // ivar: _networkType
@property (nonatomic) NSUInteger packetsIn; // ivar: _packetsIn
@property (nonatomic) NSUInteger packetsOut; // ivar: _packetsOut
@property (nonatomic) NSUInteger secsSinceLastTrimmed; // ivar: _secsSinceLastTrimmed
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) NSUInteger totalStaySecs; // ivar: _totalStaySecs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)networkTypeAsString:(int)arg0 ;
-(int)StringAsNetworkType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif