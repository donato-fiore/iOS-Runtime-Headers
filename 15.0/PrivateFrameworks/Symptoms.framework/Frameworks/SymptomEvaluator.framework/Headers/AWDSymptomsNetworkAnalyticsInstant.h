// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDSYMPTOMSNETWORKANALYTICSINSTANT_H
#define AWDSYMPTOMSNETWORKANALYTICSINSTANT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDSymptomsNetworkAnalyticsInstant : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int arpThreshold; // ivar: _arpThreshold
@property (nonatomic) BOOL arpThresholded; // ivar: _arpThresholded
@property (nonatomic) NSUInteger bytesIn; // ivar: _bytesIn
@property (nonatomic) NSUInteger bytesOut; // ivar: _bytesOut
@property (nonatomic) NSUInteger connAttempts; // ivar: _connAttempts
@property (nonatomic) NSUInteger connSuccess; // ivar: _connSuccess
@property (nonatomic) NSUInteger cumulInternetOutageSecs; // ivar: _cumulInternetOutageSecs
@property (nonatomic) unsigned int dnsServers; // ivar: _dnsServers
@property (nonatomic) BOOL hasArpThreshold;
@property (nonatomic) BOOL hasArpThresholded;
@property (nonatomic) BOOL hasBytesIn;
@property (nonatomic) BOOL hasBytesOut;
@property (nonatomic) BOOL hasConnAttempts;
@property (nonatomic) BOOL hasConnSuccess;
@property (nonatomic) BOOL hasCumulInternetOutageSecs;
@property (nonatomic) BOOL hasDnsServers;
@property (nonatomic) BOOL hasHasInternetConn;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasInternetConn; // ivar: _hasInternetConn
@property (nonatomic) BOOL hasLastReportedL2TxFail;
@property (nonatomic) BOOL hasLastReportedL2TxFrames;
@property (nonatomic) BOOL hasLastReportedL2TxReTry;
@property (nonatomic) BOOL hasLastReportedLQM;
@property (nonatomic) BOOL hasLastReportedRSSI;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) BOOL hasPacketsIn;
@property (nonatomic) BOOL hasPacketsOut;
@property (nonatomic) BOOL hasPenalizedDnsServers;
@property (nonatomic) BOOL hasRttMinUsecs;
@property (nonatomic) BOOL hasRxSignalThreshold;
@property (nonatomic) BOOL hasRxSignalThresholded;
@property (nonatomic) BOOL hasSupportsIPv4;
@property (nonatomic) BOOL hasSupportsIPv6;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger lastReportedL2TxFail; // ivar: _lastReportedL2TxFail
@property (nonatomic) NSUInteger lastReportedL2TxFrames; // ivar: _lastReportedL2TxFrames
@property (nonatomic) NSUInteger lastReportedL2TxReTry; // ivar: _lastReportedL2TxReTry
@property (nonatomic) int lastReportedLQM; // ivar: _lastReportedLQM
@property (nonatomic) unsigned int lastReportedRSSI; // ivar: _lastReportedRSSI
@property (nonatomic) int networkType; // ivar: _networkType
@property (nonatomic) NSUInteger packetsIn; // ivar: _packetsIn
@property (nonatomic) NSUInteger packetsOut; // ivar: _packetsOut
@property (nonatomic) unsigned int penalizedDnsServers; // ivar: _penalizedDnsServers
@property (nonatomic) NSUInteger rttMinUsecs; // ivar: _rttMinUsecs
@property (nonatomic) unsigned int rxSignalThreshold; // ivar: _rxSignalThreshold
@property (nonatomic) BOOL rxSignalThresholded; // ivar: _rxSignalThresholded
@property (nonatomic) BOOL supportsIPv4; // ivar: _supportsIPv4
@property (nonatomic) BOOL supportsIPv6; // ivar: _supportsIPv6
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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