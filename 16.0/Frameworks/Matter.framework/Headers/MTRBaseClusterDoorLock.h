// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRBASECLUSTERDOORLOCK_H
#define MTRBASECLUSTERDOORLOCK_H



#import "MTRCluster.h"

@interface MTRBaseClusterDoorLock : MTRCluster

@property (readonly) *void cppCluster; // ivar: _cppCluster


+(void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeActuatorEnabledWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAutoRelockTimeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeCredentialRulesSupportWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeDefaultConfigurationRegisterWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeDoorClosedEventsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeDoorOpenEventsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeDoorStateWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeEnableInsideStatusLEDWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeEnableLocalProgrammingWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeEnableOneTouchLockingWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeEnablePrivacyModeButtonWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeExpiringUserTimeoutWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeFeatureMapWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLEDSettingsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLanguageWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLocalProgrammingFeaturesWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLockStateWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLockTypeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMaxPINCodeLengthWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMaxRFIDCodeLengthWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMinPINCodeLengthWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMinRFIDCodeLengthWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeNumberOfCredentialsSupportedPerUserWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeNumberOfHolidaySchedulesSupportedWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeNumberOfPINUsersSupportedWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeNumberOfRFIDUsersSupportedWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeNumberOfTotalUsersSupportedWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeNumberOfWeekDaySchedulesSupportedPerUserWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeNumberOfYearDaySchedulesSupportedPerUserWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOpenPeriodWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOperatingModeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeRequirePINforRemoteOperationWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeSendPINOverTheAirWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeSoundVolumeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeSupportedOperatingModesWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeUserCodeTemporaryDisableTimeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeWrongCodeEntryLimitWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(void)clearCredentialWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearHolidayScheduleWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearUserWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearWeekDayScheduleWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearYearDayScheduleWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)getCredentialStatusWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)getHolidayScheduleWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)getUserWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)getWeekDayScheduleWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)getYearDayScheduleWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)lockDoorWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)readAttributeAcceptedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeActuatorEnabledWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAutoRelockTimeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeCredentialRulesSupportWithCompletionHandler:(id)arg0 ;
-(void)readAttributeDefaultConfigurationRegisterWithCompletionHandler:(id)arg0 ;
-(void)readAttributeDoorClosedEventsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeDoorOpenEventsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeDoorStateWithCompletionHandler:(id)arg0 ;
-(void)readAttributeEnableInsideStatusLEDWithCompletionHandler:(id)arg0 ;
-(void)readAttributeEnableLocalProgrammingWithCompletionHandler:(id)arg0 ;
-(void)readAttributeEnableOneTouchLockingWithCompletionHandler:(id)arg0 ;
-(void)readAttributeEnablePrivacyModeButtonWithCompletionHandler:(id)arg0 ;
-(void)readAttributeExpiringUserTimeoutWithCompletionHandler:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletionHandler:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeLEDSettingsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeLanguageWithCompletionHandler:(id)arg0 ;
-(void)readAttributeLocalProgrammingFeaturesWithCompletionHandler:(id)arg0 ;
-(void)readAttributeLockStateWithCompletionHandler:(id)arg0 ;
-(void)readAttributeLockTypeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMaxPINCodeLengthWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMaxRFIDCodeLengthWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMinPINCodeLengthWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMinRFIDCodeLengthWithCompletionHandler:(id)arg0 ;
-(void)readAttributeNumberOfCredentialsSupportedPerUserWithCompletionHandler:(id)arg0 ;
-(void)readAttributeNumberOfHolidaySchedulesSupportedWithCompletionHandler:(id)arg0 ;
-(void)readAttributeNumberOfPINUsersSupportedWithCompletionHandler:(id)arg0 ;
-(void)readAttributeNumberOfRFIDUsersSupportedWithCompletionHandler:(id)arg0 ;
-(void)readAttributeNumberOfTotalUsersSupportedWithCompletionHandler:(id)arg0 ;
-(void)readAttributeNumberOfWeekDaySchedulesSupportedPerUserWithCompletionHandler:(id)arg0 ;
-(void)readAttributeNumberOfYearDaySchedulesSupportedPerUserWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOpenPeriodWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOperatingModeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeRequirePINforRemoteOperationWithCompletionHandler:(id)arg0 ;
-(void)readAttributeSendPINOverTheAirWithCompletionHandler:(id)arg0 ;
-(void)readAttributeSoundVolumeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeSupportedOperatingModesWithCompletionHandler:(id)arg0 ;
-(void)readAttributeUserCodeTemporaryDisableTimeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeWrongCodeEntryLimitWithCompletionHandler:(id)arg0 ;
-(void)setCredentialWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)setHolidayScheduleWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)setUserWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)setWeekDayScheduleWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)setYearDayScheduleWithParams:(id)arg0 completionHandler:(id)arg1 ;
// -(void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeActuatorEnabledWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAutoRelockTimeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeCredentialRulesSupportWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeDefaultConfigurationRegisterWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeDoorClosedEventsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeDoorOpenEventsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeDoorStateWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeEnableInsideStatusLEDWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeEnableLocalProgrammingWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeEnableOneTouchLockingWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeEnablePrivacyModeButtonWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeExpiringUserTimeoutWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeFeatureMapWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLEDSettingsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLanguageWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLocalProgrammingFeaturesWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLockStateWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLockTypeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMaxPINCodeLengthWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMaxRFIDCodeLengthWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMinPINCodeLengthWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMinRFIDCodeLengthWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeNumberOfCredentialsSupportedPerUserWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeNumberOfHolidaySchedulesSupportedWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeNumberOfPINUsersSupportedWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeNumberOfRFIDUsersSupportedWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeNumberOfTotalUsersSupportedWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeNumberOfWeekDaySchedulesSupportedPerUserWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeNumberOfYearDaySchedulesSupportedPerUserWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOpenPeriodWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOperatingModeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeRequirePINforRemoteOperationWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeSendPINOverTheAirWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeSoundVolumeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeSupportedOperatingModesWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeUserCodeTemporaryDisableTimeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeWrongCodeEntryLimitWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
-(void)unlockDoorWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)unlockWithTimeoutWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAutoRelockTimeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAutoRelockTimeWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeDoorClosedEventsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeDoorClosedEventsWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeDoorOpenEventsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeDoorOpenEventsWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeEnableInsideStatusLEDWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeEnableInsideStatusLEDWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeEnableLocalProgrammingWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeEnableLocalProgrammingWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeEnableOneTouchLockingWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeEnableOneTouchLockingWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeEnablePrivacyModeButtonWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeEnablePrivacyModeButtonWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeExpiringUserTimeoutWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeExpiringUserTimeoutWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeLEDSettingsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLEDSettingsWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeLanguageWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLanguageWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeLocalProgrammingFeaturesWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLocalProgrammingFeaturesWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeOpenPeriodWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOpenPeriodWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeOperatingModeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOperatingModeWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeRequirePINforRemoteOperationWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRequirePINforRemoteOperationWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeSendPINOverTheAirWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSendPINOverTheAirWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeSoundVolumeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSoundVolumeWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeUserCodeTemporaryDisableTimeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeUserCodeTemporaryDisableTimeWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeWrongCodeEntryLimitWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeWrongCodeEntryLimitWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif