// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBGETCARPOWERLEVELSTATUSINTENTRESPONSE_H
#define _INPBGETCARPOWERLEVELSTATUSINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBGetCarPowerLevelStatusIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBDouble.h"
#import "_INPBJSONDictionary.h"
#import "_INPBEnergy.h"
#import "_INPBDateTime.h"
#import "_INPBDistance.h"
#import "_INPBInteger.h"

@interface _INPBGetCarPowerLevelStatusIntentResponse : PBCodable <_INPBGetCarPowerLevelStatusIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int activeConnector; // ivar: _activeConnector
@property (copy, nonatomic) NSString *carIdentifier; // ivar: _carIdentifier
@property (retain, nonatomic) _INPBDouble *chargePercentRemaining; // ivar: _chargePercentRemaining
@property (nonatomic) BOOL charging; // ivar: _charging
@property (retain, nonatomic) _INPBJSONDictionary *chargingFormulaArguments; // ivar: _chargingFormulaArguments
@property (retain, nonatomic) _INPBJSONDictionary *consumptionFormulaArguments; // ivar: _consumptionFormulaArguments
@property (retain, nonatomic) _INPBEnergy *currentBatteryCapacity; // ivar: _currentBatteryCapacity
@property (retain, nonatomic) _INPBDateTime *dateOfLastStateUpdate; // ivar: _dateOfLastStateUpdate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBDistance *distanceRemaining; // ivar: _distanceRemaining
@property (retain, nonatomic) _INPBDistance *distanceRemainingElectric; // ivar: _distanceRemainingElectric
@property (retain, nonatomic) _INPBDistance *distanceRemainingFuel; // ivar: _distanceRemainingFuel
@property (retain, nonatomic) _INPBDouble *fuelPercentRemaining; // ivar: _fuelPercentRemaining
@property (nonatomic) BOOL hasActiveConnector;
@property (readonly, nonatomic) BOOL hasCarIdentifier;
@property (readonly, nonatomic) BOOL hasChargePercentRemaining;
@property (nonatomic) BOOL hasCharging;
@property (readonly, nonatomic) BOOL hasChargingFormulaArguments;
@property (readonly, nonatomic) BOOL hasConsumptionFormulaArguments;
@property (readonly, nonatomic) BOOL hasCurrentBatteryCapacity;
@property (readonly, nonatomic) BOOL hasDateOfLastStateUpdate;
@property (readonly, nonatomic) BOOL hasDistanceRemaining;
@property (readonly, nonatomic) BOOL hasDistanceRemainingElectric;
@property (readonly, nonatomic) BOOL hasDistanceRemainingFuel;
@property (readonly, nonatomic) BOOL hasFuelPercentRemaining;
@property (readonly, nonatomic) BOOL hasMaximumBatteryCapacity;
@property (readonly, nonatomic) BOOL hasMaximumDistance;
@property (readonly, nonatomic) BOOL hasMaximumDistanceElectric;
@property (readonly, nonatomic) BOOL hasMaximumDistanceFuel;
@property (readonly, nonatomic) BOOL hasMinimumBatteryCapacity;
@property (readonly, nonatomic) BOOL hasMinutesToFull;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBEnergy *maximumBatteryCapacity; // ivar: _maximumBatteryCapacity
@property (retain, nonatomic) _INPBDistance *maximumDistance; // ivar: _maximumDistance
@property (retain, nonatomic) _INPBDistance *maximumDistanceElectric; // ivar: _maximumDistanceElectric
@property (retain, nonatomic) _INPBDistance *maximumDistanceFuel; // ivar: _maximumDistanceFuel
@property (retain, nonatomic) _INPBEnergy *minimumBatteryCapacity; // ivar: _minimumBatteryCapacity
@property (retain, nonatomic) _INPBInteger *minutesToFull; // ivar: _minutesToFull
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)activeConnectorAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsActiveConnector:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif