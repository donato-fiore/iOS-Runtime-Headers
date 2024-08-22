// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMDUIFMIPSETTINGSCACHE_H
#define FMDUIFMIPSETTINGSCACHE_H


#import <Foundation/Foundation.h>


@interface FMDUIFMIPSettingsCache : NSObject

@property (readonly, nonatomic) BOOL fmipEnabled;
@property (nonatomic) NSUInteger fmipState; // ivar: _fmipState
@property (nonatomic) BOOL fmipStateAvailable; // ivar: _fmipStateAvailable
@property (readonly, nonatomic) BOOL fmipStateChangeInProgress;
@property (nonatomic) BOOL lowBatteryLocateEnabled; // ivar: _lowBatteryLocateEnabled
@property (nonatomic) BOOL lowBatteryLocateStateAvailable; // ivar: _lowBatteryLocateStateAvailable


+(id)sharedInstance;
-(id)init;
-(void)_loadFMIPState;
-(void)_loadLowBatteryState;


@end


#endif