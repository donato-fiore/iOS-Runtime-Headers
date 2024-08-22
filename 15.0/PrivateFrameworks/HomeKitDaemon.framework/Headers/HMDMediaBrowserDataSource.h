// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMEDIABROWSERDATASOURCE_H
#define HMDMEDIABROWSERDATASOURCE_H

@class HMFObject, NSString, HMFSystemInfo;
@protocol HMDMediaBrowserDataSource;



@interface HMDMediaBrowserDataSource : HMFObject <HMDMediaBrowserDataSource>



@property (readonly) NSString *currentAccessoryMediaRouteIdentifier;
@property (readonly) BOOL isAppleMediaAccessory;
@property (readonly) BOOL requiresHomePodPairing;
@property (readonly) HMFSystemInfo *systemInfo;


+(id)shortDescription;
-(id)createUnassociatedAppleMediaAccessory:(id)arg0 name:(id)arg1 category:(id)arg2 messageDispatcher:(id)arg3 ;
-(id)createUnassociatedHomePodAccessory:(id)arg0 name:(id)arg1 category:(id)arg2 messageDispatcher:(id)arg3 ;


@end


#endif