// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDNOTIFICATIONREGISTRYCHARACTERISTICSREQUEST_H
#define HMDNOTIFICATIONREGISTRYCHARACTERISTICSREQUEST_H

@class NSUUID, NSMutableSet;


#import "HMDNotificationRegistryRequest.h"

@interface HMDNotificationRegistryCharacteristicsRequest : HMDNotificationRegistryRequest

@property (readonly, copy) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (retain) NSMutableSet *characteristicInstanceIDs; // ivar: _characteristicInstanceIDs


-(id)attributeDescriptions;
-(id)initWithEnable:(BOOL)arg0 user:(id)arg1 deviceIdsDestination:(id)arg2 accessoryUUID:(id)arg3 ;


@end


#endif