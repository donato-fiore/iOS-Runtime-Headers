// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERDOORLOCK_H
#define MTRCLUSTERDOORLOCK_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterDoorLock : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeActuatorEnabledWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeAutoRelockTimeWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeCredentialRulesSupportWithParams:(id)arg0 ;
-(id)readAttributeDefaultConfigurationRegisterWithParams:(id)arg0 ;
-(id)readAttributeDoorClosedEventsWithParams:(id)arg0 ;
-(id)readAttributeDoorOpenEventsWithParams:(id)arg0 ;
-(id)readAttributeDoorStateWithParams:(id)arg0 ;
-(id)readAttributeEnableInsideStatusLEDWithParams:(id)arg0 ;
-(id)readAttributeEnableLocalProgrammingWithParams:(id)arg0 ;
-(id)readAttributeEnableOneTouchLockingWithParams:(id)arg0 ;
-(id)readAttributeEnablePrivacyModeButtonWithParams:(id)arg0 ;
-(id)readAttributeExpiringUserTimeoutWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeLEDSettingsWithParams:(id)arg0 ;
-(id)readAttributeLanguageWithParams:(id)arg0 ;
-(id)readAttributeLocalProgrammingFeaturesWithParams:(id)arg0 ;
-(id)readAttributeLockStateWithParams:(id)arg0 ;
-(id)readAttributeLockTypeWithParams:(id)arg0 ;
-(id)readAttributeMaxPINCodeLengthWithParams:(id)arg0 ;
-(id)readAttributeMaxRFIDCodeLengthWithParams:(id)arg0 ;
-(id)readAttributeMinPINCodeLengthWithParams:(id)arg0 ;
-(id)readAttributeMinRFIDCodeLengthWithParams:(id)arg0 ;
-(id)readAttributeNumberOfCredentialsSupportedPerUserWithParams:(id)arg0 ;
-(id)readAttributeNumberOfHolidaySchedulesSupportedWithParams:(id)arg0 ;
-(id)readAttributeNumberOfPINUsersSupportedWithParams:(id)arg0 ;
-(id)readAttributeNumberOfRFIDUsersSupportedWithParams:(id)arg0 ;
-(id)readAttributeNumberOfTotalUsersSupportedWithParams:(id)arg0 ;
-(id)readAttributeNumberOfWeekDaySchedulesSupportedPerUserWithParams:(id)arg0 ;
-(id)readAttributeNumberOfYearDaySchedulesSupportedPerUserWithParams:(id)arg0 ;
-(id)readAttributeOpenPeriodWithParams:(id)arg0 ;
-(id)readAttributeOperatingModeWithParams:(id)arg0 ;
-(id)readAttributeRequirePINforRemoteOperationWithParams:(id)arg0 ;
-(id)readAttributeSendPINOverTheAirWithParams:(id)arg0 ;
-(id)readAttributeSoundVolumeWithParams:(id)arg0 ;
-(id)readAttributeSupportedOperatingModesWithParams:(id)arg0 ;
-(id)readAttributeUserCodeTemporaryDisableTimeWithParams:(id)arg0 ;
-(id)readAttributeWrongCodeEntryLimitWithParams:(id)arg0 ;
-(void)clearCredentialWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)clearCredentialWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)clearHolidayScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)clearHolidayScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)clearUserWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)clearUserWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)clearWeekDayScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)clearWeekDayScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)clearYearDayScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)clearYearDayScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)getCredentialStatusWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)getCredentialStatusWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)getHolidayScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)getHolidayScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)getUserWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)getUserWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)getWeekDayScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)getWeekDayScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)getYearDayScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)getYearDayScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)lockDoorWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)lockDoorWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)setCredentialWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)setCredentialWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)setHolidayScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)setHolidayScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)setUserWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)setUserWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)setWeekDayScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)setWeekDayScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)setYearDayScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)setYearDayScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)unlockDoorWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)unlockDoorWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)unlockWithTimeoutWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)unlockWithTimeoutWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)writeAttributeAutoRelockTimeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeAutoRelockTimeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeDoorClosedEventsWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeDoorClosedEventsWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeDoorOpenEventsWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeDoorOpenEventsWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeEnableInsideStatusLEDWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeEnableInsideStatusLEDWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeEnableLocalProgrammingWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeEnableLocalProgrammingWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeEnableOneTouchLockingWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeEnableOneTouchLockingWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeEnablePrivacyModeButtonWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeEnablePrivacyModeButtonWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeExpiringUserTimeoutWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeExpiringUserTimeoutWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeLEDSettingsWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeLEDSettingsWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeLanguageWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeLanguageWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeLocalProgrammingFeaturesWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeLocalProgrammingFeaturesWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeOpenPeriodWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeOpenPeriodWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeOperatingModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeOperatingModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeRequirePINforRemoteOperationWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeRequirePINforRemoteOperationWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeSendPINOverTheAirWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeSendPINOverTheAirWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeSoundVolumeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeSoundVolumeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeUserCodeTemporaryDisableTimeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeUserCodeTemporaryDisableTimeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeWrongCodeEntryLimitWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeWrongCodeEntryLimitWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;


@end


#endif