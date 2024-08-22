// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXWIFISTATEMONITOR_H
#define ATXWIFISTATEMONITOR_H

@class NSString, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXWifiStateMonitor : NSObject {
    *__WiFiManagerClient _manager;
    *__WiFiDeviceClient _device;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_lastSeenSSID;
    NSDate *_lastSeenDate;
    BOOL _isActive;
}


@property (readonly, nonatomic) NSString *SSID;


+(id)sharedInstance;
-(id)init;
-(void)_start;
-(void)dealloc;


@end


#endif