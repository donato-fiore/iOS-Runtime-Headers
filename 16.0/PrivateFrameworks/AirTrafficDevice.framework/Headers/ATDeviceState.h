// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATDEVICESTATE_H
#define ATDEVICESTATE_H


#import <Foundation/Foundation.h>


@interface ATDeviceState : NSObject



+(BOOL)isClassCLocked;
+(BOOL)isUnlocked;
+(void)blockUntilFirstUnlock;
+(void)registerBlockForFirstUnlock:(id)arg0 ;


@end


#endif