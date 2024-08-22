// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPDEVICEUNLOCKMONITOR_H
#define HDSPDEVICEUNLOCKMONITOR_H

@class NSString, HKSPObserverSet, NSNumber;
@protocol HDSPNotificationObserver;

#import <Foundation/Foundation.h>


@interface HDSPDeviceUnlockMonitor : NSObject <HDSPNotificationObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBeenUnlockedSinceBoot; // ivar: _hasBeenUnlockedSinceBoot
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) os_unfair_lock_s monitorLock; // ivar: _monitorLock
@property (readonly, nonatomic) HKSPObserverSet *observers; // ivar: _observers
@property (retain, nonatomic) NSNumber *overrideDeviceHasBeenUnlockedSinceBoot; // ivar: _overrideDeviceHasBeenUnlockedSinceBoot
@property (readonly) Class superclass;


-(BOOL)_latestKeyBagValueForHasBeenUnlockedSinceBoot;
-(id)init;
-(id)initWithCallbackScheduler:(id)arg0 ;
-(id)notificationListener:(id)arg0 didReceiveNotificationWithName:(id)arg1 ;
-(void)_withLock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)handleFirstUnlock;
-(void)removeObserver:(id)arg0 ;


@end


#endif