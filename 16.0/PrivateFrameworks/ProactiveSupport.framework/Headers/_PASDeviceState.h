// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASDEVICESTATE_H
#define _PASDEVICESTATE_H


#import <Foundation/Foundation.h>


@interface _PASDeviceState : NSObject



+(BOOL)isClassCLocked;
+(BOOL)isDeviceFormattedForProtection;
+(BOOL)isUnlocked;
+(id)currentOsBuild;
+(id)registerForLockStateChangeNotifications:(id)arg0 ;
+(int)lockState;
+(void)blockUntilFirstUnlock;
+(void)runBlockWhenDeviceIsClassCUnlocked:(id)arg0 ;
+(void)runBlockWhenDeviceIsClassCUnlockedWithQoS:(unsigned int)arg0 block:(id)arg1 ;
+(void)setDefaultSystemCallbacks;
+(void)setSystemCallbacks:(struct _PASDeviceStateSystemCallbacks *)arg0 ;
+(void)unregisterForLockStateChangeNotifications:(id)arg0 ;


@end


#endif