// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIABROWSERDATASOURCE_H
#define HMDMEDIABROWSERDATASOURCE_H

@class HMFObject, NSString, HMFProductInfo, HMFSystemInfo;
@protocol HMDMediaBrowserDataSource;


#import "HMDDevice.h"

@interface HMDMediaBrowserDataSource : HMFObject <HMDMediaBrowserDataSource>



@property (readonly) NSUInteger appleMediaAccessoryVariant;
@property (readonly) NSString *currentAccessoryMediaRouteIdentifier;
@property (readonly) HMDDevice *currentDevice;
@property (readonly) BOOL isAppleMediaAccessory;
@property (readonly) HMFProductInfo *productInfo;
@property (readonly) BOOL requiresHomePodMiniPairing;
@property (readonly) NSUInteger supportedStereoPairVersions;
@property (readonly) HMFSystemInfo *systemInfo;


+(id)shortDescription;
-(id)createUnassociatedAppleMediaAccessory:(id)arg0 name:(id)arg1 category:(id)arg2 productColor:(NSInteger)arg3 messageDispatcher:(id)arg4 ;
-(id)createUnassociatedHomePodAccessory:(id)arg0 name:(id)arg1 category:(id)arg2 productColor:(NSInteger)arg3 requiredPairingCapabilities:(NSUInteger)arg4 minimumPairingSoftware:(id)arg5 messageDispatcher:(id)arg6 ;
-(id)performOperation:(id)arg0 ;


@end


#endif