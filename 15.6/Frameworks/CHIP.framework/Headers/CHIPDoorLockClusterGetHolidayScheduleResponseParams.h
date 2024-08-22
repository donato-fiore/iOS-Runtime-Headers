// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDOORLOCKCLUSTERGETHOLIDAYSCHEDULERESPONSEPARAMS_H
#define CHIPDOORLOCKCLUSTERGETHOLIDAYSCHEDULERESPONSEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPDoorLockClusterGetHolidayScheduleResponseParams : NSObject

@property (retain, nonatomic) NSNumber *holidayIndex; // ivar: _holidayIndex
@property (retain, nonatomic) NSNumber *localEndTime; // ivar: _localEndTime
@property (retain, nonatomic) NSNumber *localStartTime; // ivar: _localStartTime
@property (retain, nonatomic) NSNumber *operatingMode; // ivar: _operatingMode
@property (retain, nonatomic) NSNumber *status; // ivar: _status


-(id)init;


@end


#endif