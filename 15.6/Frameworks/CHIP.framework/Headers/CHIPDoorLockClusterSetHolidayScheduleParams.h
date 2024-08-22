// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDOORLOCKCLUSTERSETHOLIDAYSCHEDULEPARAMS_H
#define CHIPDOORLOCKCLUSTERSETHOLIDAYSCHEDULEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPDoorLockClusterSetHolidayScheduleParams : NSObject

@property (retain, nonatomic) NSNumber *holidayIndex; // ivar: _holidayIndex
@property (retain, nonatomic) NSNumber *localEndTime; // ivar: _localEndTime
@property (retain, nonatomic) NSNumber *localStartTime; // ivar: _localStartTime
@property (retain, nonatomic) NSNumber *operatingMode; // ivar: _operatingMode


-(id)init;


@end


#endif