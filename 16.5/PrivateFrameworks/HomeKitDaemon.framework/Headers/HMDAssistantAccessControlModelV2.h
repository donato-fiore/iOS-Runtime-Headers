// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDASSISTANTACCESSCONTROLMODELV2_H
#define HMDASSISTANTACCESSCONTROLMODELV2_H

@class HMBModel, NSArray, NSNumber;



@interface HMDAssistantAccessControlModelV2 : HMBModel

@property (copy, nonatomic) NSArray *accessoryUUIDs;
@property (copy, nonatomic) NSNumber *activityNotificationsEnabledForPersonalRequests;
@property (copy, nonatomic) NSNumber *requiresAuthenticationForSecureRequests;
@property (copy, nonatomic) NSArray *siriEndpointAccessoryUUIDs;


+(id)hmbProperties;


@end


#endif