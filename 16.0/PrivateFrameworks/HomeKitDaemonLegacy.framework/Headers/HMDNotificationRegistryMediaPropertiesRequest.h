// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNOTIFICATIONREGISTRYMEDIAPROPERTIESREQUEST_H
#define HMDNOTIFICATIONREGISTRYMEDIAPROPERTIESREQUEST_H

@class NSUUID, NSMutableSet;


#import "HMDNotificationRegistryRequest.h"

@interface HMDNotificationRegistryMediaPropertiesRequest : HMDNotificationRegistryRequest

@property (readonly, copy) NSUUID *mediaProfileUUID; // ivar: _mediaProfileUUID
@property (retain) NSMutableSet *mediaProperties; // ivar: _mediaProperties


-(id)attributeDescriptions;
-(id)initWithEnable:(BOOL)arg0 userID:(id)arg1 mediaProfileUUID:(id)arg2 ;


@end


#endif