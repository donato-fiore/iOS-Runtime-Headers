// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTHERMOSTATCLUSTERGETRELAYSTATUSLOGRESPONSEPARAMS_H
#define CHIPTHERMOSTATCLUSTERGETRELAYSTATUSLOGRESPONSEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPThermostatClusterGetRelayStatusLogResponseParams : NSObject

@property (retain, nonatomic) NSNumber *humidityInPercentage; // ivar: _humidityInPercentage
@property (retain, nonatomic) NSNumber *localTemperature; // ivar: _localTemperature
@property (retain, nonatomic) NSNumber *relayStatus; // ivar: _relayStatus
@property (retain, nonatomic) NSNumber *setpoint; // ivar: _setpoint
@property (retain, nonatomic) NSNumber *timeOfDay; // ivar: _timeOfDay
@property (retain, nonatomic) NSNumber *unreadEntries; // ivar: _unreadEntries


-(id)init;


@end


#endif