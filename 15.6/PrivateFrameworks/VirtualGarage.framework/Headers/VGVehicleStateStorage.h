// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VGVEHICLESTATESTORAGE_H
#define VGVEHICLESTATESTORAGE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface VGVehicleStateStorage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int activeConnector; // ivar: _activeConnector
@property (nonatomic) CGFloat batteryPercentage; // ivar: _batteryPercentage
@property (retain, nonatomic) NSString *chargingArguments; // ivar: _chargingArguments
@property (retain, nonatomic) NSString *consumptionArguments; // ivar: _consumptionArguments
@property (nonatomic) CGFloat currentBatteryCapacity; // ivar: _currentBatteryCapacity
@property (nonatomic) CGFloat currentEVRange; // ivar: _currentEVRange
@property (nonatomic) CGFloat dateOfUpdate; // ivar: _dateOfUpdate
@property (nonatomic) BOOL hasActiveConnector;
@property (nonatomic) BOOL hasBatteryPercentage;
@property (readonly, nonatomic) BOOL hasChargingArguments;
@property (readonly, nonatomic) BOOL hasConsumptionArguments;
@property (nonatomic) BOOL hasCurrentBatteryCapacity;
@property (nonatomic) BOOL hasCurrentEVRange;
@property (nonatomic) BOOL hasDateOfUpdate;
@property (nonatomic) BOOL hasIsCharging;
@property (nonatomic) BOOL hasMaxBatteryCapacity;
@property (nonatomic) BOOL hasMaxEVRange;
@property (nonatomic) BOOL hasMinBatteryCapacity;
@property (nonatomic) BOOL hasOrigin;
@property (readonly, nonatomic) BOOL hasPairedAppInstallDeviceIdentifier;
@property (readonly, nonatomic) BOOL hasPairedAppInstallSessionIdentifier;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isCharging; // ivar: _isCharging
@property (nonatomic) CGFloat maxBatteryCapacity; // ivar: _maxBatteryCapacity
@property (nonatomic) CGFloat maxEVRange; // ivar: _maxEVRange
@property (nonatomic) CGFloat minBatteryCapacity; // ivar: _minBatteryCapacity
@property (nonatomic) int origin; // ivar: _origin
@property (retain, nonatomic) NSString *pairedAppInstallDeviceIdentifier; // ivar: _pairedAppInstallDeviceIdentifier
@property (retain, nonatomic) NSData *pairedAppInstallSessionIdentifier; // ivar: _pairedAppInstallSessionIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activeConnectorAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)originAsString:(int)arg0 ;
-(int)StringAsActiveConnector:(id)arg0 ;
-(int)StringAsOrigin:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif