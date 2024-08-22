// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXDEVICESTATEMONITOR_H
#define ATXDEVICESTATEMONITOR_H

@protocol ATXDeviceStateMonitorProtocol;

#import <Foundation/Foundation.h>


@interface ATXDeviceStateMonitor : NSObject <ATXDeviceStateMonitorProtocol>





+(BOOL)airplaneMode;
+(BOOL)onWifi;
+(id)SSID;
+(void)setAirplaneMode:(BOOL)arg0 ;
+(void)setSSID:(id)arg0 ;
+(void)startMockingSystem;
+(void)stopMockingSystem;


@end


#endif