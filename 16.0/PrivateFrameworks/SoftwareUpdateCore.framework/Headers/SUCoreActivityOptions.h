// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCOREACTIVITYOPTIONS_H
#define SUCOREACTIVITYOPTIONS_H

@class NSNumber, NSDate;

#import <Foundation/Foundation.h>


@interface SUCoreActivityOptions : NSObject

@property (retain, nonatomic) NSNumber *batteryLevelGreaterThan; // ivar: _batteryLevelGreaterThan
@property (retain, nonatomic) NSNumber *batteryLevelLessThan; // ivar: _batteryLevelLessThan
@property (nonatomic) int carplayState; // ivar: _carplayState
@property (nonatomic) int mediaPlayingState; // ivar: _mediaPlayingState
@property (nonatomic) int networkState; // ivar: _networkState
@property (nonatomic) int phoneCallState; // ivar: _phoneCallState
@property (nonatomic) int plugInState; // ivar: _plugInState
@property (retain, nonatomic) NSDate *runDate; // ivar: _runDate
@property (nonatomic) int screenOnState; // ivar: _screenOnState
@property (nonatomic) int waking; // ivar: _waking
@property (nonatomic) int wifiState; // ivar: _wifiState


-(id)init;


@end


#endif