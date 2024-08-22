// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRTHERMOSTATCLUSTERSETWEEKLYSCHEDULEPARAMS_H
#define MTRTHERMOSTATCLUSTERSETWEEKLYSCHEDULEPARAMS_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface MTRThermostatClusterSetWeeklyScheduleParams : NSObject

@property (retain, nonatomic) NSNumber *dayOfWeekForSequence; // ivar: _dayOfWeekForSequence
@property (retain, nonatomic) NSNumber *modeForSequence; // ivar: _modeForSequence
@property (retain, nonatomic) NSNumber *numberOfTransitionsForSequence; // ivar: _numberOfTransitionsForSequence
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSArray *transitions; // ivar: _transitions


-(id)description;
-(id)init;


@end


#endif