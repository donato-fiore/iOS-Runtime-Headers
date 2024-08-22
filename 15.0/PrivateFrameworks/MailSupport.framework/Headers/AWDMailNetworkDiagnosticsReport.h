// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDMAILNETWORKDIAGNOSTICSREPORT_H
#define AWDMAILNETWORKDIAGNOSTICSREPORT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDMailNetworkDiagnosticsReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL cellData; // ivar: _cellData
@property (retain, nonatomic) NSString *dataIndicator; // ivar: _dataIndicator
@property (nonatomic) int dataInterface; // ivar: _dataInterface
@property (nonatomic) BOOL dnsEnabled; // ivar: _dnsEnabled
@property (nonatomic) BOOL hasCellData;
@property (readonly, nonatomic) BOOL hasDataIndicator;
@property (nonatomic) BOOL hasDataInterface;
@property (nonatomic) BOOL hasDnsEnabled;
@property (nonatomic) BOOL hasNumActiveCalls;
@property (nonatomic) BOOL hasNumBackgroundWifiClients;
@property (nonatomic) BOOL hasReachabilityFlags;
@property (nonatomic) BOOL hasRoamingAllowed;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWifiEnabled;
@property (nonatomic) NSUInteger numActiveCalls; // ivar: _numActiveCalls
@property (nonatomic) NSUInteger numBackgroundWifiClients; // ivar: _numBackgroundWifiClients
@property (nonatomic) unsigned int reachabilityFlags; // ivar: _reachabilityFlags
@property (nonatomic) BOOL roamingAllowed; // ivar: _roamingAllowed
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) BOOL wifiEnabled; // ivar: _wifiEnabled


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