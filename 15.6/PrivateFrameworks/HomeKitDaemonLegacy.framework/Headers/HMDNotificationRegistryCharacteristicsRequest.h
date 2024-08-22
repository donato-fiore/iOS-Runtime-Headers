// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDNOTIFICATIONREGISTRYCHARACTERISTICSREQUEST_H
#define HMDNOTIFICATIONREGISTRYCHARACTERISTICSREQUEST_H

@class NSUUID, NSMutableSet;


#import "HMDNotificationRegistryRequest.h"

@interface HMDNotificationRegistryCharacteristicsRequest : HMDNotificationRegistryRequest

@property (readonly, copy) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (retain) NSMutableSet *characteristicInstanceIDs; // ivar: _characteristicInstanceIDs


-(id)attributeDescriptions;
-(id)initWithEnable:(BOOL)arg0 userID:(id)arg1 accessoryUUID:(id)arg2 ;


@end


#endif