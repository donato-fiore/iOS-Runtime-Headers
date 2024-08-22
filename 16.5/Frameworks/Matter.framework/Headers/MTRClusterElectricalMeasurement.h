// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERELECTRICALMEASUREMENT_H
#define MTRCLUSTERELECTRICALMEASUREMENT_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterElectricalMeasurement : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcActivePowerOverloadWithParams:(id)arg0 ;
-(id)readAttributeAcCurrentDivisorWithParams:(id)arg0 ;
-(id)readAttributeAcCurrentMultiplierWithParams:(id)arg0 ;
-(id)readAttributeAcCurrentOverloadWithParams:(id)arg0 ;
-(id)readAttributeAcFrequencyDivisorWithParams:(id)arg0 ;
-(id)readAttributeAcFrequencyMaxWithParams:(id)arg0 ;
-(id)readAttributeAcFrequencyMinWithParams:(id)arg0 ;
-(id)readAttributeAcFrequencyMultiplierWithParams:(id)arg0 ;
-(id)readAttributeAcFrequencyWithParams:(id)arg0 ;
-(id)readAttributeAcOverloadAlarmsMaskWithParams:(id)arg0 ;
-(id)readAttributeAcPowerDivisorWithParams:(id)arg0 ;
-(id)readAttributeAcPowerMultiplierWithParams:(id)arg0 ;
-(id)readAttributeAcReactivePowerOverloadWithParams:(id)arg0 ;
-(id)readAttributeAcVoltageDivisorWithParams:(id)arg0 ;
-(id)readAttributeAcVoltageMultiplierWithParams:(id)arg0 ;
-(id)readAttributeAcVoltageOverloadWithParams:(id)arg0 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeActiveCurrentPhaseBWithParams:(id)arg0 ;
-(id)readAttributeActiveCurrentPhaseCWithParams:(id)arg0 ;
-(id)readAttributeActivePowerMaxPhaseBWithParams:(id)arg0 ;
-(id)readAttributeActivePowerMaxPhaseCWithParams:(id)arg0 ;
-(id)readAttributeActivePowerMaxWithParams:(id)arg0 ;
-(id)readAttributeActivePowerMinPhaseBWithParams:(id)arg0 ;
-(id)readAttributeActivePowerMinPhaseCWithParams:(id)arg0 ;
-(id)readAttributeActivePowerMinWithParams:(id)arg0 ;
-(id)readAttributeActivePowerPhaseBWithParams:(id)arg0 ;
-(id)readAttributeActivePowerPhaseCWithParams:(id)arg0 ;
-(id)readAttributeActivePowerWithParams:(id)arg0 ;
-(id)readAttributeApparentPowerPhaseBWithParams:(id)arg0 ;
-(id)readAttributeApparentPowerPhaseCWithParams:(id)arg0 ;
-(id)readAttributeApparentPowerWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeAverageRmsOverVoltageCounterPhaseBWithParams:(id)arg0 ;
-(id)readAttributeAverageRmsOverVoltageCounterPhaseCWithParams:(id)arg0 ;
-(id)readAttributeAverageRmsOverVoltageWithParams:(id)arg0 ;
-(id)readAttributeAverageRmsUnderVoltageCounterPhaseBWithParams:(id)arg0 ;
-(id)readAttributeAverageRmsUnderVoltageCounterPhaseCWithParams:(id)arg0 ;
-(id)readAttributeAverageRmsUnderVoltageCounterWithParams:(id)arg0 ;
-(id)readAttributeAverageRmsUnderVoltageWithParams:(id)arg0 ;
-(id)readAttributeAverageRmsVoltageMeasurementPeriodPhaseBWithParams:(id)arg0 ;
-(id)readAttributeAverageRmsVoltageMeasurementPeriodPhaseCWithParams:(id)arg0 ;
-(id)readAttributeAverageRmsVoltageMeasurementPeriodWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeCurrentOverloadWithParams:(id)arg0 ;
-(id)readAttributeDcCurrentDivisorWithParams:(id)arg0 ;
-(id)readAttributeDcCurrentMaxWithParams:(id)arg0 ;
-(id)readAttributeDcCurrentMinWithParams:(id)arg0 ;
-(id)readAttributeDcCurrentMultiplierWithParams:(id)arg0 ;
-(id)readAttributeDcCurrentWithParams:(id)arg0 ;
-(id)readAttributeDcPowerDivisorWithParams:(id)arg0 ;
-(id)readAttributeDcPowerMaxWithParams:(id)arg0 ;
-(id)readAttributeDcPowerMinWithParams:(id)arg0 ;
-(id)readAttributeDcPowerMultiplierWithParams:(id)arg0 ;
-(id)readAttributeDcPowerWithParams:(id)arg0 ;
-(id)readAttributeDcVoltageDivisorWithParams:(id)arg0 ;
-(id)readAttributeDcVoltageMaxWithParams:(id)arg0 ;
-(id)readAttributeDcVoltageMinWithParams:(id)arg0 ;
-(id)readAttributeDcVoltageMultiplierWithParams:(id)arg0 ;
-(id)readAttributeDcVoltageWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeHarmonicCurrentMultiplierWithParams:(id)arg0 ;
-(id)readAttributeInstantaneousActiveCurrentWithParams:(id)arg0 ;
-(id)readAttributeInstantaneousLineCurrentWithParams:(id)arg0 ;
-(id)readAttributeInstantaneousPowerWithParams:(id)arg0 ;
-(id)readAttributeInstantaneousReactiveCurrentWithParams:(id)arg0 ;
-(id)readAttributeInstantaneousVoltageWithParams:(id)arg0 ;
-(id)readAttributeLineCurrentPhaseBWithParams:(id)arg0 ;
-(id)readAttributeLineCurrentPhaseCWithParams:(id)arg0 ;
-(id)readAttributeMeasured11thHarmonicCurrentWithParams:(id)arg0 ;
-(id)readAttributeMeasured1stHarmonicCurrentWithParams:(id)arg0 ;
-(id)readAttributeMeasured3rdHarmonicCurrentWithParams:(id)arg0 ;
-(id)readAttributeMeasured5thHarmonicCurrentWithParams:(id)arg0 ;
-(id)readAttributeMeasured7thHarmonicCurrentWithParams:(id)arg0 ;
-(id)readAttributeMeasured9thHarmonicCurrentWithParams:(id)arg0 ;
-(id)readAttributeMeasuredPhase11thHarmonicCurrentWithParams:(id)arg0 ;
-(id)readAttributeMeasuredPhase1stHarmonicCurrentWithParams:(id)arg0 ;
-(id)readAttributeMeasuredPhase3rdHarmonicCurrentWithParams:(id)arg0 ;
-(id)readAttributeMeasuredPhase5thHarmonicCurrentWithParams:(id)arg0 ;
-(id)readAttributeMeasuredPhase7thHarmonicCurrentWithParams:(id)arg0 ;
-(id)readAttributeMeasuredPhase9thHarmonicCurrentWithParams:(id)arg0 ;
-(id)readAttributeMeasurementTypeWithParams:(id)arg0 ;
-(id)readAttributeNeutralCurrentWithParams:(id)arg0 ;
-(id)readAttributeOverloadAlarmsMaskWithParams:(id)arg0 ;
-(id)readAttributePhaseHarmonicCurrentMultiplierWithParams:(id)arg0 ;
-(id)readAttributePowerDivisorWithParams:(id)arg0 ;
-(id)readAttributePowerFactorPhaseBWithParams:(id)arg0 ;
-(id)readAttributePowerFactorPhaseCWithParams:(id)arg0 ;
-(id)readAttributePowerFactorWithParams:(id)arg0 ;
-(id)readAttributePowerMultiplierWithParams:(id)arg0 ;
-(id)readAttributeReactiveCurrentPhaseBWithParams:(id)arg0 ;
-(id)readAttributeReactiveCurrentPhaseCWithParams:(id)arg0 ;
-(id)readAttributeReactivePowerPhaseBWithParams:(id)arg0 ;
-(id)readAttributeReactivePowerPhaseCWithParams:(id)arg0 ;
-(id)readAttributeReactivePowerWithParams:(id)arg0 ;
-(id)readAttributeRmsCurrentMaxPhaseBWithParams:(id)arg0 ;
-(id)readAttributeRmsCurrentMaxPhaseCWithParams:(id)arg0 ;
-(id)readAttributeRmsCurrentMaxWithParams:(id)arg0 ;
-(id)readAttributeRmsCurrentMinPhaseBWithParams:(id)arg0 ;
-(id)readAttributeRmsCurrentMinPhaseCWithParams:(id)arg0 ;
-(id)readAttributeRmsCurrentMinWithParams:(id)arg0 ;
-(id)readAttributeRmsCurrentPhaseBWithParams:(id)arg0 ;
-(id)readAttributeRmsCurrentPhaseCWithParams:(id)arg0 ;
-(id)readAttributeRmsCurrentWithParams:(id)arg0 ;
-(id)readAttributeRmsExtremeOverVoltagePeriodPhaseBWithParams:(id)arg0 ;
-(id)readAttributeRmsExtremeOverVoltagePeriodPhaseCWithParams:(id)arg0 ;
-(id)readAttributeRmsExtremeOverVoltagePeriodWithParams:(id)arg0 ;
-(id)readAttributeRmsExtremeOverVoltageWithParams:(id)arg0 ;
-(id)readAttributeRmsExtremeUnderVoltagePeriodPhaseBWithParams:(id)arg0 ;
-(id)readAttributeRmsExtremeUnderVoltagePeriodPhaseCWithParams:(id)arg0 ;
-(id)readAttributeRmsExtremeUnderVoltagePeriodWithParams:(id)arg0 ;
-(id)readAttributeRmsExtremeUnderVoltageWithParams:(id)arg0 ;
-(id)readAttributeRmsVoltageMaxPhaseBWithParams:(id)arg0 ;
-(id)readAttributeRmsVoltageMaxPhaseCWithParams:(id)arg0 ;
-(id)readAttributeRmsVoltageMaxWithParams:(id)arg0 ;
-(id)readAttributeRmsVoltageMinPhaseBWithParams:(id)arg0 ;
-(id)readAttributeRmsVoltageMinPhaseCWithParams:(id)arg0 ;
-(id)readAttributeRmsVoltageMinWithParams:(id)arg0 ;
-(id)readAttributeRmsVoltagePhaseBWithParams:(id)arg0 ;
-(id)readAttributeRmsVoltagePhaseCWithParams:(id)arg0 ;
-(id)readAttributeRmsVoltageSagPeriodPhaseBWithParams:(id)arg0 ;
-(id)readAttributeRmsVoltageSagPeriodPhaseCWithParams:(id)arg0 ;
-(id)readAttributeRmsVoltageSagPeriodWithParams:(id)arg0 ;
-(id)readAttributeRmsVoltageSagWithParams:(id)arg0 ;
-(id)readAttributeRmsVoltageSwellPeriodPhaseBWithParams:(id)arg0 ;
-(id)readAttributeRmsVoltageSwellPeriodPhaseCWithParams:(id)arg0 ;
-(id)readAttributeRmsVoltageSwellPeriodWithParams:(id)arg0 ;
-(id)readAttributeRmsVoltageSwellWithParams:(id)arg0 ;
-(id)readAttributeRmsVoltageWithParams:(id)arg0 ;
-(id)readAttributeTotalActivePowerWithParams:(id)arg0 ;
-(id)readAttributeTotalApparentPowerWithParams:(id)arg0 ;
-(id)readAttributeTotalReactivePowerWithParams:(id)arg0 ;
-(id)readAttributeVoltageOverloadWithParams:(id)arg0 ;
-(void)getMeasurementProfileCommandWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)getMeasurementProfileCommandWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)getProfileInfoCommandWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completion:(id)arg2 ;
-(void)getProfileInfoCommandWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)getProfileInfoCommandWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)getProfileInfoCommandWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)writeAttributeAcOverloadAlarmsMaskWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeAcOverloadAlarmsMaskWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeAverageRmsUnderVoltageCounterWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeAverageRmsUnderVoltageCounterWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeAverageRmsVoltageMeasurementPeriodWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeAverageRmsVoltageMeasurementPeriodWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeOverloadAlarmsMaskWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeOverloadAlarmsMaskWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeRmsExtremeOverVoltagePeriodWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeRmsExtremeOverVoltagePeriodWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeRmsExtremeUnderVoltagePeriodWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeRmsExtremeUnderVoltagePeriodWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeRmsVoltageSagPeriodWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeRmsVoltageSagPeriodWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeRmsVoltageSwellPeriodWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeRmsVoltageSwellPeriodWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;


@end


#endif