// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYTRAFFIC_H
#define WIFIANALYTICSAWDWIFINWACTIVITYTRAFFIC_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiNWActivityTraffic : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasTraffic;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) int traffic; // ivar: _traffic
@property (nonatomic) NSUInteger value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)trafficAsString:(int)arg0 ;
-(int)StringAsTraffic:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif