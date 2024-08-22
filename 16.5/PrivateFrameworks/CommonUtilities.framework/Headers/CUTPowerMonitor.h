// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUTPOWERMONITOR_H
#define CUTPOWERMONITOR_H


#import <Foundation/Foundation.h>


@interface CUTPowerMonitor : NSObject {
    id *_internal;
}


@property (readonly, nonatomic) CGFloat batteryPercentRemaining;
@property (readonly, nonatomic) BOOL isExternalPowerConnected;


+(id)sharedInstance;
-(BOOL)_initIOService;
-(BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg0 ;
-(id)_init;
-(void)_handlePowerChangedNotificationWithMessageType:(unsigned int)arg0 notificationID:(*void)arg1 ;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)removeDelegate:(id)arg0 ;
-(void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg0 ;
-(void)updateBatteryLevelWithBatteryEntry:(unsigned int)arg0 ;


@end


#endif