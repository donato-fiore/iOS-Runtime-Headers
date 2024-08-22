// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSBATTERYPOWERMONITOR_H
#define MSBATTERYPOWERMONITOR_H


#import <Foundation/Foundation.h>


@interface MSBatteryPowerMonitor : NSObject {
    *__CFRunLoopSource _batteryRunLoopSource;
    *IONotificationPort _batteryIONotifyPort;
    unsigned int _batteryNotificationRef;
}


@property (nonatomic) CGFloat currentLevel; // ivar: _currentLevel
@property (nonatomic, setter=setExternalPowerConnected:) BOOL isExternalPowerConnected; // ivar: _isExteralPowerConnected


+(id)defaultMonitor;
-(BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg0 ;
-(CGFloat)batteryPercentRemaining;
-(id)init;
-(void)dealloc;
-(void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg0 ;
-(void)updateBatteryLevelWithBatteryEntry:(unsigned int)arg0 ;


@end


#endif