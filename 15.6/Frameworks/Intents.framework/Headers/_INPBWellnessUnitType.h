// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBWELLNESSUNITTYPE_H
#define _INPBWELLNESSUNITTYPE_H

@class PBCodable, NSString;
@protocol _INPBWellnessUnitType, NSSecureCoding, NSCopying;



@interface _INPBWellnessUnitType : PBCodable <_INPBWellnessUnitType, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int bloodGlucoseUnit; // ivar: _bloodGlucoseUnit
@property (nonatomic) int bloodPressureUnit; // ivar: _bloodPressureUnit
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int energyUnit; // ivar: _energyUnit
@property (nonatomic) BOOL hasBloodGlucoseUnit;
@property (nonatomic) BOOL hasBloodPressureUnit;
@property (nonatomic) BOOL hasEnergyUnit;
@property (nonatomic) BOOL hasHeartRateUnit;
@property (nonatomic) BOOL hasLengthUnit;
@property (nonatomic) BOOL hasMassUnit;
@property (nonatomic) BOOL hasRespiratoryRateUnit;
@property (nonatomic) BOOL hasTemperatureUnit;
@property (nonatomic) BOOL hasTimeUnit;
@property (nonatomic) BOOL hasVolumeUnit;
@property (readonly) NSUInteger hash;
@property (nonatomic) int heartRateUnit; // ivar: _heartRateUnit
@property (nonatomic) int lengthUnit; // ivar: _lengthUnit
@property (nonatomic) int massUnit; // ivar: _massUnit
@property (nonatomic) int respiratoryRateUnit; // ivar: _respiratoryRateUnit
@property (readonly) Class superclass;
@property (nonatomic) int temperatureUnit; // ivar: _temperatureUnit
@property (nonatomic) int timeUnit; // ivar: _timeUnit
@property (nonatomic) int volumeUnit; // ivar: _volumeUnit


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)bloodGlucoseUnitAsString:(int)arg0 ;
-(id)bloodPressureUnitAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)energyUnitAsString:(int)arg0 ;
-(id)heartRateUnitAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)lengthUnitAsString:(int)arg0 ;
-(id)massUnitAsString:(int)arg0 ;
-(id)respiratoryRateUnitAsString:(int)arg0 ;
-(id)temperatureUnitAsString:(int)arg0 ;
-(id)timeUnitAsString:(int)arg0 ;
-(id)volumeUnitAsString:(int)arg0 ;
-(int)StringAsBloodGlucoseUnit:(id)arg0 ;
-(int)StringAsBloodPressureUnit:(id)arg0 ;
-(int)StringAsEnergyUnit:(id)arg0 ;
-(int)StringAsHeartRateUnit:(id)arg0 ;
-(int)StringAsLengthUnit:(id)arg0 ;
-(int)StringAsMassUnit:(id)arg0 ;
-(int)StringAsRespiratoryRateUnit:(id)arg0 ;
-(int)StringAsTemperatureUnit:(id)arg0 ;
-(int)StringAsTimeUnit:(id)arg0 ;
-(int)StringAsVolumeUnit:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif