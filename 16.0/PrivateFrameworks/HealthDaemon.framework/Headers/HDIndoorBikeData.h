// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDINDOORBIKEDATA_H
#define HDINDOORBIKEDATA_H

@class NSDate;
@protocol HDDatumRendering;


#import "HDFitnessMachineDataCharacteristicBase.h"
#import "HDFitnessMachineCharacteristicDoubleField.h"
#import "HDFitnessMachineCharacteristicUInt24Field.h"
#import "HDFitnessMachineCharacteristicInt16Field.h"
#import "HDFitnessMachineCharacteristicUInt16Field.h"
#import "HDFitnessMachineCharacteristicUInt8Field.h"

@interface HDIndoorBikeData : HDFitnessMachineDataCharacteristicBase <HDDatumRendering>

 {
    HDFitnessMachineCharacteristicDoubleField *_instantaneousSpeedField;
    HDFitnessMachineCharacteristicDoubleField *_averageSpeedField;
    HDFitnessMachineCharacteristicDoubleField *_instantaneousCadenceField;
    HDFitnessMachineCharacteristicDoubleField *_averageCadenceField;
    HDFitnessMachineCharacteristicUInt24Field *_totalDistanceField;
    HDFitnessMachineCharacteristicInt16Field *_resistanceLevelField;
    HDFitnessMachineCharacteristicInt16Field *_instantaneousPowerField;
    HDFitnessMachineCharacteristicInt16Field *_averagePowerField;
    HDFitnessMachineCharacteristicUInt16Field *_totalEnergyField;
    HDFitnessMachineCharacteristicUInt16Field *_energyPerHourField;
    HDFitnessMachineCharacteristicUInt8Field *_energyPerMinuteField;
    HDFitnessMachineCharacteristicUInt8Field *_heartRateField;
    HDFitnessMachineCharacteristicUInt8Field *_metabolicEquivalentField;
    HDFitnessMachineCharacteristicUInt16Field *_elapsedTimeField;
    HDFitnessMachineCharacteristicUInt16Field *_remainingTimeField;
}


@property (readonly, nonatomic) CGFloat averageCadence;
@property (readonly, nonatomic) BOOL averageCadenceIsSet;
@property (readonly, nonatomic) short averagePower;
@property (readonly, nonatomic) BOOL averagePowerIsSet;
@property (readonly, nonatomic) CGFloat averageSpeed;
@property (readonly, nonatomic) BOOL averageSpeedIsSet;
@property (readonly, nonatomic) unsigned short elapsedTime;
@property (readonly, nonatomic) BOOL elapsedTimeIsSet;
@property (readonly, nonatomic) unsigned short energyPerHour;
@property (readonly, nonatomic) BOOL energyPerHourIsSet;
@property (readonly, nonatomic) unsigned char energyPerMinute;
@property (readonly, nonatomic) BOOL energyPerMinuteIsSet;
@property (readonly, nonatomic) unsigned char heartRate;
@property (readonly, nonatomic) BOOL heartRateIsSet;
@property (readonly, nonatomic) CGFloat instantaneousCadence;
@property (readonly, nonatomic) BOOL instantaneousCadenceIsSet;
@property (readonly, nonatomic) short instantaneousPower;
@property (readonly, nonatomic) BOOL instantaneousPowerIsSet;
@property (readonly, nonatomic) CGFloat instantaneousSpeed;
@property (readonly, nonatomic) BOOL instantaneousSpeedIsSet;
@property (readonly, nonatomic) unsigned char metabolicEquivalent;
@property (readonly, nonatomic) BOOL metabolicEquivalentIsSet;
@property (readonly, nonatomic) unsigned short remainingTime;
@property (readonly, nonatomic) BOOL remainingTimeIsSet;
@property (readonly, nonatomic) short resistanceLevel;
@property (readonly, nonatomic) BOOL resistanceLevelIsSet;
@property (readonly, nonatomic) unsigned int totalDistance;
@property (readonly, nonatomic) BOOL totalDistanceIsSet;
@property (readonly, nonatomic) unsigned short totalEnergy;
@property (readonly, nonatomic) BOOL totalEnergyIsSet;
@property (readonly, nonatomic) NSDate *updateTime;


+(id)uuid;
+(unsigned char)flagFieldLength;
-(id)_init;
-(id)allFields;
-(id)description;
-(id)generateDatums:(id)arg0 ;


@end


#endif