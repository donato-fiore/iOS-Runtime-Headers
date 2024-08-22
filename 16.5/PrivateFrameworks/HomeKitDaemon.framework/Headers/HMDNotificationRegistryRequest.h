// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDNOTIFICATIONREGISTRYREQUEST_H
#define HMDNOTIFICATIONREGISTRYREQUEST_H

@class HMFObject, NSString;


#import "HMDUser.h"

@interface HMDNotificationRegistryRequest : HMFObject

@property (readonly, copy) NSString *deviceIdsDestination; // ivar: _deviceIdsDestination
@property (readonly) BOOL enable; // ivar: _enable
@property NSInteger retryCount; // ivar: _retryCount
@property (readonly) HMDUser *user; // ivar: _user


-(id)attributeDescriptions;
-(id)initWithEnable:(BOOL)arg0 user:(id)arg1 deviceIdsDestination:(id)arg2 ;


@end


#endif