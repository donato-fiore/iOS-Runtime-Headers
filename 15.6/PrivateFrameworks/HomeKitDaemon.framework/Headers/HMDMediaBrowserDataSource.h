// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIABROWSERDATASOURCE_H
#define HMDMEDIABROWSERDATASOURCE_H

@class HMFObject, NSString, HMFSystemInfo;
@protocol HMDMediaBrowserDataSource;


#import "HMDDevice.h"

@interface HMDMediaBrowserDataSource : HMFObject <HMDMediaBrowserDataSource>



@property (readonly) NSString *currentAccessoryMediaRouteIdentifier;
@property (readonly) HMDDevice *currentDevice;
@property (readonly) BOOL isAppleMediaAccessory;
@property (readonly) BOOL requiresHomePodPairing;
@property (readonly) HMFSystemInfo *systemInfo;


+(id)shortDescription;


@end


#endif