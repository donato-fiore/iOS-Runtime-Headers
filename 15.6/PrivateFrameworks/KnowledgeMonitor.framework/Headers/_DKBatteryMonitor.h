// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKBATTERYMONITOR_H
#define _DKBATTERYMONITOR_H

@class DKMonitor, NSDictionary;



@interface _DKBatteryMonitor : DKMonitor {
    unsigned int _powerService;
    unsigned int _batteryNotification;
    *IONotificationPort _notifyPort;
}


@property (nonatomic) BOOL hasInternalBattery; // ivar: _hasInternalBattery
@property (nonatomic) int immediateShutdownThreshold; // ivar: _immediateShutdownThreshold
@property (retain, nonatomic) NSDictionary *previousBatteryState; // ivar: _previousBatteryState
@property (nonatomic) CGFloat previousPercentage; // ivar: _previousPercentage
@property (nonatomic) BOOL previouslyFullyCharged; // ivar: _previouslyFullyCharged


+(id)_eventWithBatteryPercentage:(CGFloat)arg0 isFullyCharged:(BOOL)arg1 ;
+(id)entitlements;
+(id)eventStream;
+(void)setCurrentBatteryPercentage:(CGFloat)arg0 ;
-(BOOL)adapterType:(id)arg0 differsFrom:(id)arg1 ;
-(BOOL)externalConnected:(id)arg0 differsFrom:(id)arg1 ;
-(BOOL)fullyCharged:(id)arg0 differsFrom:(id)arg1 ;
-(BOOL)fullyChargedFromPowerSourceDictionary:(id)arg0 ;
-(BOOL)isCharging:(id)arg0 differsFrom:(id)arg1 ;
-(BOOL)newBatteryState:(id)arg0 differsSignificantlyFromState:(id)arg1 currentBatteryPercentage:(CGFloat)arg2 previousBatteryPercentage:(CGFloat)arg3 ;
-(BOOL)percentage:(CGFloat)arg0 differsFrom:(CGFloat)arg1 ;
-(BOOL)temperature:(id)arg0 differsFrom:(id)arg1 ;
-(BOOL)voltage:(id)arg0 differsFrom:(id)arg1 ;
-(CGFloat)batteryPercentageFromPowerSourceDictionary:(id)arg0 ;
-(CGFloat)currentBatteryPercentage;
-(id)getBatteryProperties;
-(void)_handleBatteryNotification;
-(void)_queue_handleNotification;
-(void)batteryStateChangeHandler;
-(void)completeStart;
-(void)deactivate;
-(void)dealloc;
-(void)postImminentShutdownNotification:(CGFloat)arg0 ;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;
-(void)updateBatteryStateDictionary:(id)arg0 currentBatteryPercentage:(CGFloat)arg1 ;


@end


#endif