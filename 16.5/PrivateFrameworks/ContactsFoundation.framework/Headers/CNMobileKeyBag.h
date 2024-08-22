// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMOBILEKEYBAG_H
#define CNMOBILEKEYBAG_H


#import <Foundation/Foundation.h>


@interface CNMobileKeyBag : NSObject



+(BOOL)isDevicePasscodeProtected;
+(BOOL)isDeviceUnlockedSinceBoot;
+(char *)firstUnlockNotificationID;


@end


#endif