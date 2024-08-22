// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRTHERMOSTATCLUSTERGETWEEKLYSCHEDULEPARAMS_H
#define MTRTHERMOSTATCLUSTERGETWEEKLYSCHEDULEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRThermostatClusterGetWeeklyScheduleParams : NSObject

@property (retain, nonatomic) NSNumber *daysToReturn; // ivar: _daysToReturn
@property (retain, nonatomic) NSNumber *modeToReturn; // ivar: _modeToReturn
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif