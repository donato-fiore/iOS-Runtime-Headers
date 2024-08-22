// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _KSDEVICESTATEMONITOR_H
#define _KSDEVICESTATEMONITOR_H


#import <Foundation/Foundation.h>


@interface _KSDeviceStateMonitor : NSObject

@property (nonatomic) BOOL isContentProtectionAvailable; // ivar: _isContentProtectionAvailable


+(BOOL)isRunningOnInternalBuild;
+(id)deviceStateMonitor;
-(BOOL)deviceHasBeenUnlockedSinceBoot;
-(BOOL)deviceIsPasswordConfigured;
-(BOOL)isDataAvailableForClassC;
-(id)init;
-(void)dealloc;
-(void)handleKeyBagLockNotification;


@end


#endif