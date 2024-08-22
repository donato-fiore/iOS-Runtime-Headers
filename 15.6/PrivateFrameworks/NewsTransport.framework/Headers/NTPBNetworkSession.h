// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBNETWORKSESSION_H
#define NTPBNETWORKSESSION_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBNetworkSession : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int cellularRadioAccessTechnology; // ivar: _cellularRadioAccessTechnology
@property (nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) BOOL hasWifiReachable;
@property (nonatomic) NSUInteger sessionID; // ivar: _sessionID
@property (nonatomic) BOOL wifiReachable; // ivar: _wifiReachable


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif