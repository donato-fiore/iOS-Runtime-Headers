// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIANALYTICSAWDWAPEERDISCOVERYINFO_H
#define WIFIANALYTICSAWDWAPEERDISCOVERYINFO_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWAPeerDiscoveryInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIOSPeers;
@property (nonatomic) BOOL hasMacOSPeers;
@property (nonatomic) BOOL hasNumPeersDiscovered;
@property (nonatomic) BOOL hasTvOSPeers;
@property (nonatomic) unsigned int iOSPeers; // ivar: _iOSPeers
@property (nonatomic) unsigned int macOSPeers; // ivar: _macOSPeers
@property (nonatomic) unsigned int numPeersDiscovered; // ivar: _numPeersDiscovered
@property (nonatomic) unsigned int tvOSPeers; // ivar: _tvOSPeers


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