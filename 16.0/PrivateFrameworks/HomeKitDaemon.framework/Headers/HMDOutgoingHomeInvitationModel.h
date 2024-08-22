// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDOUTGOINGHOMEINVITATIONMODEL_H
#define HMDOUTGOINGHOMEINVITATIONMODEL_H

@class NSString, NSNumber, NSDate, NSUUID, NSArray, NSDictionary;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDOutgoingHomeInvitationModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (retain, nonatomic) NSString *accessCode;
@property (retain, nonatomic) NSNumber *announceAccessLevel;
@property (retain, nonatomic) NSDate *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *expiryDate;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *idsInvitationUUID;
@property (retain, nonatomic) NSNumber *invitationState;
@property (retain, nonatomic) NSString *inviteeDestinationAddress;
@property (retain, nonatomic) NSString *messageIdentifier;
@property (retain, nonatomic) NSArray *operationIdentifiers;
@property (retain, nonatomic) NSArray *operations;
@property (retain, nonatomic) NSNumber *responseReceived;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *user;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)properties;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;
-(id)dependentUUIDs;


@end


#endif