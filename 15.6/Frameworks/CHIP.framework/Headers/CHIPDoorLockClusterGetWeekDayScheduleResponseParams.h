// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDOORLOCKCLUSTERGETWEEKDAYSCHEDULERESPONSEPARAMS_H
#define CHIPDOORLOCKCLUSTERGETWEEKDAYSCHEDULERESPONSEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPDoorLockClusterGetWeekDayScheduleResponseParams : NSObject

@property (retain, nonatomic) NSNumber *daysMask; // ivar: _daysMask
@property (retain, nonatomic) NSNumber *endHour; // ivar: _endHour
@property (retain, nonatomic) NSNumber *endMinute; // ivar: _endMinute
@property (retain, nonatomic) NSNumber *startHour; // ivar: _startHour
@property (retain, nonatomic) NSNumber *startMinute; // ivar: _startMinute
@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSNumber *userIndex; // ivar: _userIndex
@property (retain, nonatomic) NSNumber *weekDayIndex; // ivar: _weekDayIndex


-(id)init;


@end


#endif