// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDEVICECONDITIONS_H
#define IMDEVICECONDITIONS_H


#import <Foundation/Foundation.h>


@interface IMDeviceConditions : NSObject

@property (readonly) BOOL isDeviceCharging;
@property (readonly) BOOL isDeviceOnData;
@property (readonly) BOOL isDeviceOnWifi;


+(id)sharedInstance;
-(id)_batteryStatus;
-(id)_mobileNetworkManager;


@end


#endif