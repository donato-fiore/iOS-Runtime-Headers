// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOEVCHARGINGINFO_H
#define GEOEVCHARGINGINFO_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOChargerPlugsInfo.h"

@interface GEOEVChargingInfo : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOChargerPlugsInfo *_chargerPlugsInfo;
    unsigned int _batteryChargeAfterCharging;
    unsigned int _batteryPercentageAfterCharging;
    unsigned int _chargingTime;
    ? _flags;
}


@property (nonatomic) unsigned int batteryChargeAfterCharging;
@property (nonatomic) unsigned int batteryPercentageAfterCharging;
@property (retain, nonatomic) GEOChargerPlugsInfo *chargerPlugsInfo;
@property (nonatomic) unsigned int chargingTime;
@property (nonatomic) BOOL hasBatteryChargeAfterCharging;
@property (nonatomic) BOOL hasBatteryPercentageAfterCharging;
@property (readonly, nonatomic) BOOL hasChargerPlugsInfo;
@property (nonatomic) BOOL hasChargingTime;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif