// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSTEPCLIMBERDATA_H
#define HDSTEPCLIMBERDATA_H

@class NSDate;
@protocol HDDatumRendering;


#import "HDFitnessMachineDataCharacteristicBase.h"
#import "HDFitnessMachineCharacteristicUInt16Field.h"
#import "HDFitnessMachineCharacteristicUInt8Field.h"

@interface HDStepClimberData : HDFitnessMachineDataCharacteristicBase <HDDatumRendering>

 {
    HDFitnessMachineCharacteristicUInt16Field *_floorsField;
    HDFitnessMachineCharacteristicUInt16Field *_stepCountField;
    HDFitnessMachineCharacteristicUInt16Field *_stepPerMinuteField;
    HDFitnessMachineCharacteristicUInt16Field *_averageStepRateField;
    HDFitnessMachineCharacteristicUInt16Field *_positiveElevationGainField;
    HDFitnessMachineCharacteristicUInt16Field *_totalEnergyField;
    HDFitnessMachineCharacteristicUInt16Field *_energyPerHourField;
    HDFitnessMachineCharacteristicUInt8Field *_energyPerMinuteField;
    HDFitnessMachineCharacteristicUInt8Field *_heartRateField;
    HDFitnessMachineCharacteristicUInt8Field *_metabolicEquivalentField;
    HDFitnessMachineCharacteristicUInt16Field *_elapsedTimeField;
    HDFitnessMachineCharacteristicUInt16Field *_remainingTimeField;
}


@property (readonly, nonatomic) unsigned short averageStepRate;
@property (readonly, nonatomic) BOOL averageStepRateIsSet;
@property (readonly, nonatomic) unsigned short elapsedTime;
@property (readonly, nonatomic) BOOL elapsedTimeIsSet;
@property (readonly, nonatomic) unsigned short energyPerHour;
@property (readonly, nonatomic) BOOL energyPerHourIsSet;
@property (readonly, nonatomic) unsigned char energyPerMinute;
@property (readonly, nonatomic) BOOL energyPerMinuteIsSet;
@property (readonly, nonatomic) unsigned short floors;
@property (readonly, nonatomic) BOOL floorsIsSet;
@property (readonly, nonatomic) unsigned char heartRate;
@property (readonly, nonatomic) BOOL heartRateIsSet;
@property (readonly, nonatomic) unsigned char metabolicEquivalent;
@property (readonly, nonatomic) BOOL metabolicEquivalentIsSet;
@property (readonly, nonatomic) unsigned short positiveElevationGain;
@property (readonly, nonatomic) BOOL positiveElevationGainIsSet;
@property (readonly, nonatomic) unsigned short remainingTime;
@property (readonly, nonatomic) BOOL remainingTimeIsSet;
@property (readonly, nonatomic) unsigned short stepCount;
@property (readonly, nonatomic) BOOL stepCountIsSet;
@property (readonly, nonatomic) unsigned short stepPerMinute;
@property (readonly, nonatomic) BOOL stepPerMinuteIsSet;
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