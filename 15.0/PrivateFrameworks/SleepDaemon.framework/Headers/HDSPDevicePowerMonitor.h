// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPDEVICEPOWERMONITOR_H
#define HDSPDEVICEPOWERMONITOR_H

@class NSNumber, NSString, HKSPObserverSet;
@protocol HDSPNotificationObserver;

#import <Foundation/Foundation.h>


@interface HDSPDevicePowerMonitor : NSObject <HDSPNotificationObserver>



@property (readonly, nonatomic) float batteryLevel;
@property (retain, nonatomic) NSNumber *batteryLevelOverride; // ivar: _batteryLevelOverride
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCharging;
@property (retain, nonatomic) NSNumber *isChargingOverride; // ivar: _isChargingOverride
@property (readonly, nonatomic) HKSPObserverSet *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)init;
-(id)initWithCallbackScheduler:(id)arg0 ;
-(id)notificationListener:(id)arg0 didReceiveNotificationWithName:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif