// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DECDEVICESTATE_H
#define _DECDEVICESTATE_H


#import <Foundation/Foundation.h>


@interface _DECDeviceState : NSObject



+(BOOL)isClassCLocked;
+(BOOL)isDemoModeEnabled;
+(BOOL)isUnlocked;
+(void)blockUntilFirstUnlock;
+(void)registerBlockForFirstUnlock:(id)arg0 ;
// +(void)registerBlockForFirstUnlock:(id)arg0 executeIfUnlocked:(unk)arg1  ;


@end


#endif