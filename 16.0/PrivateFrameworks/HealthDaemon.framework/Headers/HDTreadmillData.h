// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDTREADMILLDATA_H
#define HDTREADMILLDATA_H

@class NSDate;
@protocol HDDatumRendering;


#import "HDFitnessMachineDataCharacteristicBase.h"
#import "HDFitnessMachineCharacteristicDoubleField.h"
#import "HDFitnessMachineCharacteristicUInt24Field.h"
#import "HDFitnessMachineCharacteristicUInt16Field.h"
#import "HDFitnessMachineCharacteristicUInt8Field.h"

@interface HDTreadmillData : HDFitnessMachineDataCharacteristicBase <HDDatumRendering>

 {
    HDFitnessMachineCharacteristicDoubleField *_instantaneousSpeedField;
    HDFitnessMachineCharacteristicDoubleField *_averageSpeedField;
    HDFitnessMachineCharacteristicUInt24Field *_totalDistanceField;
    HDFitnessMachineCharacteristicDoubleField *_inclinationField;
    HDFitnessMachineCharacteristicDoubleField *_rampSettingField;
    HDFitnessMachineCharacteristicDoubleField *_positiveElevationGainField;
    HDFitnessMachineCharacteristicDoubleField *_negativeElevationGainField;
    HDFitnessMachineCharacteristicDoubleField *_instantaneousPaceField;
    HDFitnessMachineCharacteristicDoubleField *_averagePaceField;
    HDFitnessMachineCharacteristicUInt16Field *_totalEnergyField;
    HDFitnessMachineCharacteristicUInt16Field *_energyPerHourField;
    HDFitnessMachineCharacteristicUInt8Field *_energyPerMinuteField;
    HDFitnessMachineCharacteristicUInt8Field *_heartRateField;
    HDFitnessMachineCharacteristicUInt8Field *_metabolicEquivalentField;
    HDFitnessMachineCharacteristicUInt16Field *_elapsedTimeField;
    HDFitnessMachineCharacteristicUInt16Field *_remainingTimeField;
    HDFitnessMachineCharacteristicUInt16Field *_forceOnBeltField;
    HDFitnessMachineCharacteristicUInt16Field *_powerOutputField;
}


@property (readonly, nonatomic) CGFloat averagePace;
@property (readonly, nonatomic) BOOL averagePaceIsSet;
@property (readonly, nonatomic) CGFloat averageSpeed;
@property (readonly, nonatomic) BOOL averageSpeedIsSet;
@property (readonly, nonatomic) unsigned short elapsedTime;
@property (readonly, nonatomic) BOOL elapsedTimeIsSet;
@property (readonly, nonatomic) unsigned short energyPerHour;
@property (readonly, nonatomic) BOOL energyPerHourIsSet;
@property (readonly, nonatomic) unsigned char energyPerMinute;
@property (readonly, nonatomic) BOOL energyPerMinuteIsSet;
@property (readonly, nonatomic) unsigned short forceOnBelt;
@property (readonly, nonatomic) BOOL forceOnBeltIsSet;
@property (readonly, nonatomic) unsigned char heartRate;
@property (readonly, nonatomic) BOOL heartRateIsSet;
@property (readonly, nonatomic) CGFloat inclination;
@property (readonly, nonatomic) BOOL inclinationIsSet;
@property (readonly, nonatomic) CGFloat instantaneousPace;
@property (readonly, nonatomic) BOOL instantaneousPaceIsSet;
@property (readonly, nonatomic) CGFloat instantaneousSpeed;
@property (readonly, nonatomic) BOOL instantaneousSpeedIsSet;
@property (readonly, nonatomic) unsigned char metabolicEquivalent;
@property (readonly, nonatomic) BOOL metabolicEquivalentIsSet;
@property (readonly, nonatomic) CGFloat negativeElevationGain;
@property (readonly, nonatomic) BOOL negativeElevationGainIsSet;
@property (readonly, nonatomic) CGFloat positiveElevationGain;
@property (readonly, nonatomic) BOOL positiveElevationGainIsSet;
@property (readonly, nonatomic) unsigned short powerOutput;
@property (readonly, nonatomic) BOOL powerOutputIsSet;
@property (readonly, nonatomic) CGFloat rampSetting;
@property (readonly, nonatomic) BOOL rampSettingIsSet;
@property (readonly, nonatomic) unsigned short remainingTime;
@property (readonly, nonatomic) BOOL remainingTimeIsSet;
@property (readonly, nonatomic) unsigned int totalDistance;
@property (readonly, nonatomic) BOOL totalDistanceIsSet;
@property (readonly, nonatomic) unsigned short totalEnergy;
@property (readonly, nonatomic) BOOL totalEnergyIsSet;
@property (readonly, nonatomic) NSDate *updateTime;


+(id)unitTest_fakeTreadmillDataForDistance:(unsigned int)arg0 energy:(unsigned short)arg1 elapsedTime:(unsigned short)arg2 ;
+(id)uuid;
+(unsigned char)flagFieldLength;
-(id)_init;
-(id)allFields;
-(id)description;
-(id)generateDatums:(id)arg0 ;


@end


#endif