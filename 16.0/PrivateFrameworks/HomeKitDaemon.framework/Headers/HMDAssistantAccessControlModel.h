// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDASSISTANTACCESSCONTROLMODEL_H
#define HMDASSISTANTACCESSCONTROLMODEL_H

@class NSArray, NSNumber, NSString;


#import "HMDBackingStoreModelObject.h"

@interface HMDAssistantAccessControlModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSArray *accessoryModelIDs;
@property (copy, nonatomic) NSNumber *activityNotificationsEnabledForPersonalRequests;
@property (retain, nonatomic) NSString *changeTag;
@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSNumber *options;
@property (copy, nonatomic) NSArray *siriEndpointAccessoryModelUUIDs;


+(id)properties;
-(id)dependentUUIDs;


@end


#endif