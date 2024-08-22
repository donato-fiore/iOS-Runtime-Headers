// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOEVINFO_H
#define GEOEVINFO_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEOChargerPlugsInfo.h"

@interface GEOEVInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOChargerPlugsInfo *_chargerPlugsInfo;
    NSString *_chargingArguments;
    NSString *_consumptionArguments;
    NSString *_vehicleArguments;
    NSString *_vehicleIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _criticalBatteryCharge;
    unsigned int _currentBatteryCharge;
    unsigned int _currentBatteryPercentage;
    unsigned int _lastSocUpdateDate;
    unsigned int _lowBatteryCharge;
    unsigned int _maxBatteryCharge;
    unsigned int _maxRange;
    unsigned int _minBatteryCharge;
    BOOL _isCharging;
    ? _flags;
}


@property (retain, nonatomic) GEOChargerPlugsInfo *chargerPlugsInfo;
@property (retain, nonatomic) NSString *chargingArguments;
@property (retain, nonatomic) NSString *consumptionArguments;
@property (nonatomic) unsigned int criticalBatteryCharge;
@property (nonatomic) unsigned int currentBatteryCharge;
@property (nonatomic) unsigned int currentBatteryPercentage;
@property (readonly, nonatomic) BOOL hasChargerPlugsInfo;
@property (readonly, nonatomic) BOOL hasChargingArguments;
@property (readonly, nonatomic) BOOL hasConsumptionArguments;
@property (nonatomic) BOOL hasCriticalBatteryCharge;
@property (nonatomic) BOOL hasCurrentBatteryCharge;
@property (nonatomic) BOOL hasCurrentBatteryPercentage;
@property (nonatomic) BOOL hasIsCharging;
@property (nonatomic) BOOL hasLastSocUpdateDate;
@property (nonatomic) BOOL hasLowBatteryCharge;
@property (nonatomic) BOOL hasMaxBatteryCharge;
@property (nonatomic) BOOL hasMaxRange;
@property (nonatomic) BOOL hasMinBatteryCharge;
@property (readonly, nonatomic) BOOL hasVehicleArguments;
@property (readonly, nonatomic) BOOL hasVehicleIdentifier;
@property (nonatomic) BOOL isCharging;
@property (nonatomic) unsigned int lastSocUpdateDate;
@property (nonatomic) unsigned int lowBatteryCharge;
@property (nonatomic) unsigned int maxBatteryCharge;
@property (nonatomic) unsigned int maxRange;
@property (nonatomic) unsigned int minBatteryCharge;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSString *vehicleArguments;
@property (retain, nonatomic) NSString *vehicleIdentifier;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
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