// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDASSISTANTACCESSCONTROLMODEL_H
#define HMDASSISTANTACCESSCONTROLMODEL_H

@class NSArray, NSNumber, NSString;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDAssistantAccessControlModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (copy, nonatomic) NSArray *accessoryModelIDs;
@property (copy, nonatomic) NSNumber *activityNotificationsEnabledForPersonalRequests;
@property (retain, nonatomic) NSString *changeTag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *enabled;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *options;
@property (copy, nonatomic) NSArray *siriEndpointAccessoryModelUUIDs;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)properties;
-(id)dependentUUIDs;


@end


#endif