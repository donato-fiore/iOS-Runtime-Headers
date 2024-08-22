// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRDOORLOCKCLUSTERGETHOLIDAYSCHEDULEPARAMS_H
#define MTRDOORLOCKCLUSTERGETHOLIDAYSCHEDULEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRDoorLockClusterGetHolidayScheduleParams : NSObject

@property (retain, nonatomic) NSNumber *holidayIndex; // ivar: _holidayIndex
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif