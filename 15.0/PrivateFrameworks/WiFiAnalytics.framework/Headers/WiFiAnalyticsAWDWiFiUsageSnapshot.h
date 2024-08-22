// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIANALYTICSAWDWIFIUSAGESNAPSHOT_H
#define WIFIANALYTICSAWDWIFIUSAGESNAPSHOT_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiUsageSnapshot : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasTs;
@property (nonatomic) BOOL hasUse;
@property (nonatomic) NSUInteger ts; // ivar: _ts
@property (nonatomic) unsigned int use; // ivar: _use


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