// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMFPOWERMANAGER_H
#define HMFPOWERMANAGER_H

@protocol OS_dispatch_queue;


#import "HMFObject.h"

@interface HMFPowerManager : HMFObject {
    os_unfair_lock_s _lock;
}


@property (readonly) float batteryLevel; // ivar: _batteryLevel
@property (readonly) NSInteger batteryState; // ivar: _batteryState
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly) BOOL hasBattery; // ivar: _hasBattery
@property (readonly, nonatomic) unsigned int interestNotification; // ivar: _interestNotification
@property (readonly, nonatomic) *IONotificationPort notificationPort; // ivar: _notificationPort
@property (nonatomic, getter=isRunning) BOOL running; // ivar: _running


+(id)sharedManager;
-(id)init;
-(void)_deregisterForPowerSourceNotifications:(BOOL)arg0 ;
-(void)_registerForPowerSourceNotifications;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)updateBatteryState:(unsigned int)arg0 ;


@end


#endif