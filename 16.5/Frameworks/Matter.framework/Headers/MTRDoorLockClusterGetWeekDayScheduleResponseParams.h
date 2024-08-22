// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDOORLOCKCLUSTERGETWEEKDAYSCHEDULERESPONSEPARAMS_H
#define MTRDOORLOCKCLUSTERGETWEEKDAYSCHEDULERESPONSEPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRDoorLockClusterGetWeekDayScheduleResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *daysMask; // ivar: _daysMask
@property (copy, nonatomic) NSNumber *endHour; // ivar: _endHour
@property (copy, nonatomic) NSNumber *endMinute; // ivar: _endMinute
@property (copy, nonatomic) NSNumber *startHour; // ivar: _startHour
@property (copy, nonatomic) NSNumber *startMinute; // ivar: _startMinute
@property (copy, nonatomic) NSNumber *status; // ivar: _status
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (copy, nonatomic) NSNumber *userIndex; // ivar: _userIndex
@property (copy, nonatomic) NSNumber *weekDayIndex; // ivar: _weekDayIndex


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif