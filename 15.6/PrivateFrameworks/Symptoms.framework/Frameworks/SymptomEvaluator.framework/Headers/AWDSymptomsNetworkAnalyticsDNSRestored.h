// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDSYMPTOMSNETWORKANALYTICSDNSRESTORED_H
#define AWDSYMPTOMSNETWORKANALYTICSDNSRESTORED_H

@class PBCodable;
@protocol NSCopying;



@interface AWDSymptomsNetworkAnalyticsDNSRestored : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int dnsServers; // ivar: _dnsServers
@property (nonatomic) BOOL hasDnsServers;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int networkType; // ivar: _networkType
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