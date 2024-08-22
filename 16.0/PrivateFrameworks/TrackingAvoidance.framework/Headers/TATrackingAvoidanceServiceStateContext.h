// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TATRACKINGAVOIDANCESERVICESTATECONTEXT_H
#define TATRACKINGAVOIDANCESERVICESTATECONTEXT_H


#import <Foundation/Foundation.h>


@interface TATrackingAvoidanceServiceStateContext : NSObject

@property BOOL airplaneMode; // ivar: _airplaneMode
@property BOOL allowSimulatedEvents; // ivar: _allowSimulatedEvents
@property BOOL batterySaverMode; // ivar: _batterySaverMode
@property BOOL deviceUnlockedSinceBoot; // ivar: _deviceUnlockedSinceBoot
@property BOOL hasKoreaCountryCode; // ivar: _hasKoreaCountryCode
@property BOOL highThermalState; // ivar: _highThermalState
@property BOOL locationServicesEnabled; // ivar: _locationServicesEnabled
@property BOOL locationSimulationInProgress; // ivar: _locationSimulationInProgress
@property BOOL restartRequired; // ivar: _restartRequired
@property BOOL serviceEnabled; // ivar: _serviceEnabled
@property BOOL userLocationInsideKorea; // ivar: _userLocationInsideKorea


-(id)init;


@end


#endif