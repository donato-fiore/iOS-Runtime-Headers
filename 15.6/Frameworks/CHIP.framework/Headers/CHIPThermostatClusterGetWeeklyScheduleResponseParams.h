// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTHERMOSTATCLUSTERGETWEEKLYSCHEDULERESPONSEPARAMS_H
#define CHIPTHERMOSTATCLUSTERGETWEEKLYSCHEDULERESPONSEPARAMS_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface CHIPThermostatClusterGetWeeklyScheduleResponseParams : NSObject

@property (retain, nonatomic) NSNumber *dayOfWeekForSequence; // ivar: _dayOfWeekForSequence
@property (retain, nonatomic) NSNumber *modeForSequence; // ivar: _modeForSequence
@property (retain, nonatomic) NSNumber *numberOfTransitionsForSequence; // ivar: _numberOfTransitionsForSequence
@property (retain, nonatomic) NSArray *payload; // ivar: _payload


-(id)init;


@end


#endif