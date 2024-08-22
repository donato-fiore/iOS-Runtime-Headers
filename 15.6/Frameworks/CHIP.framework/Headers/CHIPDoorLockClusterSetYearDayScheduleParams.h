// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDOORLOCKCLUSTERSETYEARDAYSCHEDULEPARAMS_H
#define CHIPDOORLOCKCLUSTERSETYEARDAYSCHEDULEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPDoorLockClusterSetYearDayScheduleParams : NSObject

@property (retain, nonatomic) NSNumber *localEndTime; // ivar: _localEndTime
@property (retain, nonatomic) NSNumber *localStartTime; // ivar: _localStartTime
@property (retain, nonatomic) NSNumber *userIndex; // ivar: _userIndex
@property (retain, nonatomic) NSNumber *yearDayIndex; // ivar: _yearDayIndex


-(id)init;


@end


#endif