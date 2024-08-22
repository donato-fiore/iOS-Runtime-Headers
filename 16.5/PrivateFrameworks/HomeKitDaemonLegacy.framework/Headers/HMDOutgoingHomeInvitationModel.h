// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDOUTGOINGHOMEINVITATIONMODEL_H
#define HMDOUTGOINGHOMEINVITATIONMODEL_H

@class NSDate, NSNumber, NSString, NSArray, NSDictionary;


#import "HMDBackingStoreModelObject.h"

@interface HMDOutgoingHomeInvitationModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSDate *expiryDate;
@property (retain, nonatomic) NSNumber *invitationState;
@property (retain, nonatomic) NSString *inviteeDestinationAddress;
@property (retain, nonatomic) NSString *messageIdentifier;
@property (retain, nonatomic) NSArray *operationIdentifiers;
@property (retain, nonatomic) NSArray *operations;
@property (retain, nonatomic) NSNumber *responseReceived;
@property (retain, nonatomic) NSDictionary *user;


+(id)properties;
-(id)dependentUUIDs;


@end


#endif