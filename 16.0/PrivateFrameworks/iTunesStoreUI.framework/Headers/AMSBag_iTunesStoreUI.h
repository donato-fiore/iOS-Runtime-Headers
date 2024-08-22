// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSBAG_ITUNESSTOREUI_H
#define AMSBAG_ITUNESSTOREUI_H

@class AMSBagValue, NSString;
@protocol AMSDeviceOfferBagContract;

#import <Foundation/Foundation.h>


@interface AMSBag_iTunesStoreUI : NSObject <AMSDeviceOfferBagContract>



@property (readonly, nonatomic) AMSBagValue *appleMusicDeviceOfferDeepLink;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AMSBagValue *iCloudDeviceOfferDeepLink;
@property (readonly) Class superclass;




@end


#endif