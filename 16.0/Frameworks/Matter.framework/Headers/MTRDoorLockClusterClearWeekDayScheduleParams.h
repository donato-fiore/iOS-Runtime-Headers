// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRDOORLOCKCLUSTERCLEARWEEKDAYSCHEDULEPARAMS_H
#define MTRDOORLOCKCLUSTERCLEARWEEKDAYSCHEDULEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRDoorLockClusterClearWeekDayScheduleParams : NSObject

@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSNumber *userIndex; // ivar: _userIndex
@property (retain, nonatomic) NSNumber *weekDayIndex; // ivar: _weekDayIndex


-(id)description;
-(id)init;


@end


#endif