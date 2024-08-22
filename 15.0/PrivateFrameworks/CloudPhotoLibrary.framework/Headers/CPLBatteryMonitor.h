// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLBATTERYMONITOR_H
#define CPLBATTERYMONITOR_H


#import <Foundation/Foundation.h>


@interface CPLBatteryMonitor : NSObject



+(CGFloat)batteryLevel;
+(id)delegate;
+(id)powerStatus;
+(id)powerStatusPlist;
+(void)_updateBatteryWithBatteryEntry:(unsigned int)arg0 ;
+(void)setDelegate:(id)arg0 ;
+(void)startMonitoringPowerEvents;


@end


#endif