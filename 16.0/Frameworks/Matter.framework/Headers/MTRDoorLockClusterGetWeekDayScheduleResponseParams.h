// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRDOORLOCKCLUSTERGETWEEKDAYSCHEDULERESPONSEPARAMS_H
#define MTRDOORLOCKCLUSTERGETWEEKDAYSCHEDULERESPONSEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRDoorLockClusterGetWeekDayScheduleResponseParams : NSObject

@property (retain, nonatomic) NSNumber *daysMask; // ivar: _daysMask
@property (retain, nonatomic) NSNumber *endHour; // ivar: _endHour
@property (retain, nonatomic) NSNumber *endMinute; // ivar: _endMinute
@property (retain, nonatomic) NSNumber *startHour; // ivar: _startHour
@property (retain, nonatomic) NSNumber *startMinute; // ivar: _startMinute
@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSNumber *userIndex; // ivar: _userIndex
@property (retain, nonatomic) NSNumber *weekDayIndex; // ivar: _weekDayIndex


-(id)description;
-(id)init;


@end


#endif