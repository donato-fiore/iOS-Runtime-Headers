// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNOTIFICATIONREGISTRYCOREDATACHARACTERISTICSREQUEST_H
#define HMDNOTIFICATIONREGISTRYCOREDATACHARACTERISTICSREQUEST_H

@class HMFObject, NSArray;


#import "HMDNotificationRegistryCharacteristicsRequest.h"

@interface HMDNotificationRegistryCoreDataCharacteristicsRequest : HMFObject

@property (readonly) NSArray *characteristics; // ivar: _characteristics
@property (readonly) HMDNotificationRegistryCharacteristicsRequest *request; // ivar: _request


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithRequest:(id)arg0 characteristics:(id)arg1 ;


@end


#endif