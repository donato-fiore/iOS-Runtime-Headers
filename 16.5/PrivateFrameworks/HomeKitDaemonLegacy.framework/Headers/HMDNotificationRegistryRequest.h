// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDNOTIFICATIONREGISTRYREQUEST_H
#define HMDNOTIFICATIONREGISTRYREQUEST_H

@class HMFObject, NSString;



@interface HMDNotificationRegistryRequest : HMFObject

@property (readonly) BOOL enable; // ivar: _enable
@property NSInteger retryCount; // ivar: _retryCount
@property (readonly, copy) NSString *userID; // ivar: _userID


-(id)attributeDescriptions;
-(id)initWithEnable:(BOOL)arg0 userID:(id)arg1 ;


@end


#endif