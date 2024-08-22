// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POWERSTATERELAY_H
#define POWERSTATERELAY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PowerStateRelay : NSObject {
    int powerStateToken;
    int screenStateToken;
    int screenBrightnessToken;
    int thermalPressureToken;
    int keybagToken;
    NSObject<OS_dispatch_queue> *_powerStateQueue;
    unsigned int _batteryService;
    unsigned int _batteryNotification;
    *IONotificationPort _batteryPort;
}


@property unsigned int batteryAbsoluteCapacity; // ivar: _batteryAbsoluteCapacity
@property BOOL batteryAtCriticalLevel; // ivar: _batteryAtCriticalLevel
@property BOOL batteryAtWarnLevel; // ivar: _batteryAtWarnLevel
@property unsigned int batteryCurrentCapacity; // ivar: _batteryCurrentCapacity
@property unsigned int batteryDesignCapacity; // ivar: _batteryDesignCapacity
@property BOOL batteryExternalPowerIsConnected; // ivar: _batteryExternalPowerIsConnected
@property BOOL batteryFullyCharged; // ivar: _batteryFullyCharged
@property BOOL batteryIsCharging; // ivar: _batteryIsCharging
@property unsigned int batteryMaximumCapacity; // ivar: _batteryMaximumCapacity
@property CGFloat batteryPercentage; // ivar: _batteryPercentage
@property int batteryTemperature; // ivar: _batteryTemperature
@property unsigned int batteryTimeRemaining; // ivar: _batteryTimeRemaining
@property unsigned int batteryVoltage; // ivar: _batteryVoltage
@property (nonatomic) BOOL lowPowerModeEnabled; // ivar: _lowPowerModeEnabled
@property BOOL pluggedIn; // ivar: _pluggedIn
@property unsigned int screenBrightness; // ivar: _screenBrightness
@property BOOL screenNotDark; // ivar: _screenNotDark
@property BOOL screenUnlocked; // ivar: _screenUnlocked
@property NSInteger thermalPressure; // ivar: _thermalPressure


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)defaultRelay;
-(id)getBatteryProperties;
-(id)init;
-(id)thermalPressureLevelToString:(NSInteger)arg0 ;
-(void)dealloc;
-(void)disableIOKitBatteryLevelNotifications;
-(void)enableIOKitBatteryLevelNotifications;
-(void)getCurrentKeybagLockState;
-(void)handleBatteryNotification;
-(void)handlePowerStateChange:(id)arg0 ;
-(void)updateBatteryValuesFromPowerSourceDictionary:(id)arg0 ;


@end


#endif