// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCROSSTRAINERDATA_H
#define HDCROSSTRAINERDATA_H

@class NSDate;
@protocol HDDatumRendering;


#import "HDFitnessMachineDataCharacteristicBase.h"
#import "HDFitnessMachineCharacteristicDoubleField.h"
#import "HDFitnessMachineCharacteristicUInt24Field.h"
#import "HDFitnessMachineCharacteristicUInt16Field.h"
#import "HDFitnessMachineCharacteristicInt16Field.h"
#import "HDFitnessMachineCharacteristicUInt8Field.h"

@interface HDCrossTrainerData : HDFitnessMachineDataCharacteristicBase <HDDatumRendering>

 {
    HDFitnessMachineCharacteristicDoubleField *_instantaneousSpeedField;
    HDFitnessMachineCharacteristicDoubleField *_averageSpeedField;
    HDFitnessMachineCharacteristicUInt24Field *_totalDistanceField;
    HDFitnessMachineCharacteristicUInt16Field *_stepPerMinuteField;
    HDFitnessMachineCharacteristicUInt16Field *_averageStepRateField;
    HDFitnessMachineCharacteristicDoubleField *_strideCountField;
    HDFitnessMachineCharacteristicUInt16Field *_positiveElevationGainField;
    HDFitnessMachineCharacteristicUInt16Field *_negativeElevationGainField;
    HDFitnessMachineCharacteristicDoubleField *_inclinationField;
    HDFitnessMachineCharacteristicDoubleField *_rampSettingField;
    HDFitnessMachineCharacteristicDoubleField *_resistanceLevelField;
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


@property (readonly, nonatomic) short averagePower;
@property (readonly, nonatomic) BOOL averagePowerIsSet;
@property (readonly, nonatomic) CGFloat averageSpeed;
@property (readonly, nonatomic) BOOL averageSpeedIsSet;
@property (readonly, nonatomic) unsigned short averageStepRate;
@property (readonly, nonatomic) BOOL averageStepRateIsSet;
@property (readonly, nonatomic) unsigned short elapsedTime;
@property (readonly, nonatomic) BOOL elapsedTimeIsSet;
@property (readonly, nonatomic) unsigned short energyPerHour;
@property (readonly, nonatomic) BOOL energyPerHourIsSet;
@property (readonly, nonatomic) unsigned char energyPerMinute;
@property (readonly, nonatomic) BOOL energyPerMinuteIsSet;
@property (readonly, nonatomic) unsigned char heartRate;
@property (readonly, nonatomic) BOOL heartRateIsSet;
@property (readonly, nonatomic) CGFloat inclination;
@property (readonly, nonatomic) BOOL inclinationIsSet;
@property (readonly, nonatomic) short instantaneousPower;
@property (readonly, nonatomic) BOOL instantaneousPowerIsSet;
@property (readonly, nonatomic) CGFloat instantaneousSpeed;
@property (readonly, nonatomic) BOOL instantaneousSpeedIsSet;
@property (readonly, nonatomic) unsigned char metabolicEquivalent;
@property (readonly, nonatomic) BOOL metabolicEquivalentIsSet;
@property (readonly, nonatomic) unsigned short negativeElevationGain;
@property (readonly, nonatomic) BOOL negativeElevationGainIsSet;
@property (readonly, nonatomic) unsigned short positiveElevationGain;
@property (readonly, nonatomic) BOOL positiveElevationGainIsSet;
@property (readonly, nonatomic) CGFloat rampSetting;
@property (readonly, nonatomic) BOOL rampSettingIsSet;
@property (readonly, nonatomic) unsigned short remainingTime;
@property (readonly, nonatomic) BOOL remainingTimeIsSet;
@property (readonly, nonatomic) CGFloat resistanceLevel;
@property (readonly, nonatomic) BOOL resistanceLevelIsSet;
@property (readonly, nonatomic) unsigned short stepPerMinute;
@property (readonly, nonatomic) BOOL stepPerMinuteIsSet;
@property (readonly, nonatomic) CGFloat strideCount;
@property (readonly, nonatomic) BOOL strideCountIsSet;
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