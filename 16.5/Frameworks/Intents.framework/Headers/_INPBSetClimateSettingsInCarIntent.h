// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBSETCLIMATESETTINGSINCARINTENT_H
#define _INPBSETCLIMATESETTINGSINCARINTENT_H

@class PBCodable, NSString;
@protocol _INPBSetClimateSettingsInCarIntent, NSSecureCoding, NSCopying;


#import "_INPBDataString.h"
#import "_INPBInteger.h"
#import "_INPBDouble.h"
#import "_INPBIntentMetadata.h"
#import "_INPBTemperature.h"

@interface _INPBSetClimateSettingsInCarIntent : PBCodable <_INPBSetClimateSettingsInCarIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int airCirculationMode; // ivar: _airCirculationMode
@property (retain, nonatomic) _INPBDataString *carName; // ivar: _carName
@property (nonatomic) int climateZone; // ivar: _climateZone
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableAirConditioner; // ivar: _enableAirConditioner
@property (nonatomic) BOOL enableAutoMode; // ivar: _enableAutoMode
@property (nonatomic) BOOL enableClimateControl; // ivar: _enableClimateControl
@property (nonatomic) BOOL enableFan; // ivar: _enableFan
@property (retain, nonatomic) _INPBInteger *fanSpeedIndex; // ivar: _fanSpeedIndex
@property (retain, nonatomic) _INPBDouble *fanSpeedPercentage; // ivar: _fanSpeedPercentage
@property (nonatomic) BOOL hasAirCirculationMode;
@property (readonly, nonatomic) BOOL hasCarName;
@property (nonatomic) BOOL hasClimateZone;
@property (nonatomic) BOOL hasEnableAirConditioner;
@property (nonatomic) BOOL hasEnableAutoMode;
@property (nonatomic) BOOL hasEnableClimateControl;
@property (nonatomic) BOOL hasEnableFan;
@property (readonly, nonatomic) BOOL hasFanSpeedIndex;
@property (readonly, nonatomic) BOOL hasFanSpeedPercentage;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasRelativeFanSpeedSetting;
@property (nonatomic) BOOL hasRelativeTemperatureSetting;
@property (readonly, nonatomic) BOOL hasTemperature;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (nonatomic) int relativeFanSpeedSetting; // ivar: _relativeFanSpeedSetting
@property (nonatomic) int relativeTemperatureSetting; // ivar: _relativeTemperatureSetting
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBTemperature *temperature; // ivar: _temperature


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)airCirculationModeAsString:(int)arg0 ;
-(id)climateZoneAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)relativeFanSpeedSettingAsString:(int)arg0 ;
-(id)relativeTemperatureSettingAsString:(int)arg0 ;
-(int)StringAsAirCirculationMode:(id)arg0 ;
-(int)StringAsClimateZone:(id)arg0 ;
-(int)StringAsRelativeFanSpeedSetting:(id)arg0 ;
-(int)StringAsRelativeTemperatureSetting:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif