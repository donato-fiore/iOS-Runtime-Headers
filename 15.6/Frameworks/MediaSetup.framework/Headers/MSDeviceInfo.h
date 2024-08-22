// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSDEVICEINFO_H
#define MSDEVICEINFO_H


#import <Foundation/Foundation.h>


@interface MSDeviceInfo : NSObject



+(BOOL)deviceCanManageMultiUser;
+(BOOL)deviceSupportsMultipleUsers;
+(BOOL)isDeviceAppleTV;
+(BOOL)isDeviceAudioAccessory;
+(BOOL)isDeviceiPad;
+(BOOL)isDeviceiPhone;


@end


#endif