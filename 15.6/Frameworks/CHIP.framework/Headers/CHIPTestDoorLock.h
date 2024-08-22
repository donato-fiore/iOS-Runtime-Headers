// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTDOORLOCK_H
#define CHIPTESTDOORLOCK_H



#import "CHIPDoorLock.h"

@interface CHIPTestDoorLock : CHIPDoorLock {
    DoorLockClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeActuatorEnabledWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeDoorStateWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLockStateWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLockTypeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxPINCodeLengthWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxRFIDCodeLengthWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMinPINCodeLengthWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMinRFIDCodeLengthWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeNumberOfHolidaySchedulesSupportedWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeNumberOfPINUsersSupportedWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeNumberOfRFIDUsersSupportedWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeNumberOfTotalUsersSupportedWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeNumberOfWeekDaySchedulesSupportedPerUserWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeNumberOfYearDaySchedulesSupportedPerUserWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSupportedOperatingModesWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif