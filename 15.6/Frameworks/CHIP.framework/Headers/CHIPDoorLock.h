// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDOORLOCK_H
#define CHIPDOORLOCK_H



#import "CHIPCluster.h"

@interface CHIPDoorLock : CHIPCluster {
    DoorLockCluster _cppCluster;
}


@property ? cppCluster;


+(void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeActuatorEnabledWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAutoRelockTimeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeDoorStateWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeEnableOneTouchLockingWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeEnablePrivacyModeButtonWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLanguageWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLockStateWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLockTypeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMaxPINCodeLengthWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMaxRFIDCodeLengthWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMinPINCodeLengthWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMinRFIDCodeLengthWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeNumberOfHolidaySchedulesSupportedWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeNumberOfPINUsersSupportedWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeNumberOfRFIDUsersSupportedWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeNumberOfTotalUsersSupportedWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeNumberOfWeekDaySchedulesSupportedPerUserWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeNumberOfYearDaySchedulesSupportedPerUserWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOperatingModeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeSoundVolumeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeSupportedOperatingModesWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeUserCodeTemporaryDisableTimeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeWrongCodeEntryLimitWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)clearCredentialWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearHolidayScheduleWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearUserWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearWeekDayScheduleWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearYearDayScheduleWithParams:(id)arg0 completionHandler:(id)arg1 ;
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
-(void)readAttributeDoorStateWithCompletionHandler:(id)arg0 ;
-(void)readAttributeEnableOneTouchLockingWithCompletionHandler:(id)arg0 ;
-(void)readAttributeEnablePrivacyModeButtonWithCompletionHandler:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeLanguageWithCompletionHandler:(id)arg0 ;
-(void)readAttributeLockStateWithCompletionHandler:(id)arg0 ;
-(void)readAttributeLockTypeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMaxPINCodeLengthWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMaxRFIDCodeLengthWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMinPINCodeLengthWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMinRFIDCodeLengthWithCompletionHandler:(id)arg0 ;
-(void)readAttributeNumberOfHolidaySchedulesSupportedWithCompletionHandler:(id)arg0 ;
-(void)readAttributeNumberOfPINUsersSupportedWithCompletionHandler:(id)arg0 ;
-(void)readAttributeNumberOfRFIDUsersSupportedWithCompletionHandler:(id)arg0 ;
-(void)readAttributeNumberOfTotalUsersSupportedWithCompletionHandler:(id)arg0 ;
-(void)readAttributeNumberOfWeekDaySchedulesSupportedPerUserWithCompletionHandler:(id)arg0 ;
-(void)readAttributeNumberOfYearDaySchedulesSupportedPerUserWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOperatingModeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeRequirePINforRemoteOperationWithCompletionHandler:(id)arg0 ;
-(void)readAttributeSoundVolumeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeSupportedOperatingModesWithCompletionHandler:(id)arg0 ;
-(void)readAttributeUserCodeTemporaryDisableTimeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeWrongCodeEntryLimitWithCompletionHandler:(id)arg0 ;
// -(void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeActuatorEnabledWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAutoRelockTimeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeDoorStateWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeEnableOneTouchLockingWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeEnablePrivacyModeButtonWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLanguageWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLockStateWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLockTypeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMaxPINCodeLengthWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMaxRFIDCodeLengthWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMinPINCodeLengthWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMinRFIDCodeLengthWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeNumberOfHolidaySchedulesSupportedWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeNumberOfPINUsersSupportedWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeNumberOfRFIDUsersSupportedWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeNumberOfTotalUsersSupportedWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeNumberOfWeekDaySchedulesSupportedPerUserWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeNumberOfYearDaySchedulesSupportedPerUserWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOperatingModeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeSoundVolumeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeSupportedOperatingModesWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeUserCodeTemporaryDisableTimeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeWrongCodeEntryLimitWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
-(void)unlockDoorWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)unlockWithTimeoutWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAutoRelockTimeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeEnableOneTouchLockingWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeEnablePrivacyModeButtonWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLanguageWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOperatingModeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRequirePINforRemoteOperationWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSoundVolumeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeUserCodeTemporaryDisableTimeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeWrongCodeEntryLimitWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif