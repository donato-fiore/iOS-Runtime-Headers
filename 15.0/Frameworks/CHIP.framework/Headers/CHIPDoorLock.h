// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPDOORLOCK_H
#define CHIPDOORLOCK_H



#import "CHIPCluster.h"

@interface CHIPDoorLock : CHIPCluster

@property (readonly) DoorLockCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)clearAllPins:(id)arg0 ;
-(void)clearAllRfids:(id)arg0 ;
-(void)clearHolidaySchedule:(unsigned char)arg0 responseHandler:(id)arg1 ;
-(void)clearPin:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)clearRfid:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)clearWeekdaySchedule:(unsigned char)arg0 userId:(unsigned short)arg1 responseHandler:(id)arg2 ;
-(void)clearYeardaySchedule:(unsigned char)arg0 userId:(unsigned short)arg1 responseHandler:(id)arg2 ;
-(void)configureAttributeLockStateWithMinInterval:(unsigned short)arg0 maxInterval:(unsigned short)arg1 responseHandler:(id)arg2 ;
-(void)getHolidaySchedule:(unsigned char)arg0 responseHandler:(id)arg1 ;
-(void)getLogRecord:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)getPin:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)getRfid:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)getUserType:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)getWeekdaySchedule:(unsigned char)arg0 userId:(unsigned short)arg1 responseHandler:(id)arg2 ;
-(void)getYeardaySchedule:(unsigned char)arg0 userId:(unsigned short)arg1 responseHandler:(id)arg2 ;
-(void)lockDoor:(id)arg0 responseHandler:(id)arg1 ;
-(void)readAttributeActuatorEnabledWithResponseHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeLockStateWithResponseHandler:(id)arg0 ;
-(void)readAttributeLockTypeWithResponseHandler:(id)arg0 ;
-(void)reportAttributeLockStateWithResponseHandler:(id)arg0 ;
-(void)setHolidaySchedule:(unsigned char)arg0 localStartTime:(unsigned int)arg1 localEndTime:(unsigned int)arg2 operatingModeDuringHoliday:(unsigned char)arg3 responseHandler:(id)arg4 ;
-(void)setPin:(unsigned short)arg0 userStatus:(unsigned char)arg1 userType:(unsigned char)arg2 pin:(id)arg3 responseHandler:(id)arg4 ;
-(void)setRfid:(unsigned short)arg0 userStatus:(unsigned char)arg1 userType:(unsigned char)arg2 id:(id)arg3 responseHandler:(id)arg4 ;
-(void)setUserType:(unsigned short)arg0 userType:(unsigned char)arg1 responseHandler:(id)arg2 ;
-(void)setWeekdaySchedule:(unsigned char)arg0 userId:(unsigned short)arg1 daysMask:(unsigned char)arg2 startHour:(unsigned char)arg3 startMinute:(unsigned char)arg4 endHour:(unsigned char)arg5 endMinute:(unsigned char)arg6 responseHandler:(id)arg7 ;
-(void)setYeardaySchedule:(unsigned char)arg0 userId:(unsigned short)arg1 localStartTime:(unsigned int)arg2 localEndTime:(unsigned int)arg3 responseHandler:(id)arg4 ;
-(void)unlockDoor:(id)arg0 responseHandler:(id)arg1 ;
-(void)unlockWithTimeout:(unsigned short)arg0 pin:(id)arg1 responseHandler:(id)arg2 ;


@end


#endif