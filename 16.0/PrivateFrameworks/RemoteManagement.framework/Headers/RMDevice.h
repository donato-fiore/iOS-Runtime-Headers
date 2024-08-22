// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMDEVICE_H
#define RMDEVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface RMDevice : NSObject

@property (readonly, nonatomic) NSString *UDID;
@property (readonly, nonatomic) BOOL locked;
@property (readonly, nonatomic) NSString *modelFamily;
@property (readonly, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) NSString *modelMarketingName;
@property (readonly, nonatomic) NSString *operatingSystem;
@property (readonly, nonatomic) NSString *operatingSystemBuildVersion;
@property (readonly, nonatomic) NSString *operatingSystemMarketingName;
@property (readonly, nonatomic) NSString *operatingSystemVersion;
@property (readonly, nonatomic) NSString *serialNumber;


+(id)currentDevice;


@end


#endif