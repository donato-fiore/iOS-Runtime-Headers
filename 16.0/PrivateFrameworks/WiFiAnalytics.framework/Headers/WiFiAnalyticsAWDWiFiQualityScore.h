// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIANALYTICSAWDWIFIQUALITYSCORE_H
#define WIFIANALYTICSAWDWIFIQUALITYSCORE_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiQualityScore : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int channelQuality; // ivar: _channelQuality
@property (nonatomic) BOOL hasChannelQuality;
@property (nonatomic) BOOL hasRxLatency;
@property (nonatomic) BOOL hasRxLoss;
@property (nonatomic) BOOL hasTxLatency;
@property (nonatomic) BOOL hasTxLoss;
@property (nonatomic) unsigned int rxLatency; // ivar: _rxLatency
@property (nonatomic) unsigned int rxLoss; // ivar: _rxLoss
@property (nonatomic) unsigned int txLatency; // ivar: _txLatency
@property (nonatomic) unsigned int txLoss; // ivar: _txLoss


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