// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFOUTGOINGINVITATION_H
#define _MKFOUTGOINGINVITATION_H

@class MKFInvitation, NSString, NSNumber, NSDate, NSUUID;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFOutgoingInvitation, MKFOutgoingInvitationPrivateExtensions, MKFHome;


#import "MKFOutgoingInvitationDatabaseID.h"
#import "_MKFHome.h"

@interface _MKFOutgoingInvitation : MKFInvitation <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFOutgoingInvitation, MKFOutgoingInvitationPrivateExtensions>



@property (copy, nonatomic) NSString *accessCode;
@property (copy, nonatomic) NSString *accessCode;
@property (copy, nonatomic) NSNumber *announceAccessLevel;
@property (copy, nonatomic) NSNumber *announceAccessLevel;
@property (copy, nonatomic) NSNumber *cameraAccessLevel;
@property (copy, nonatomic) NSNumber *cameraAccessLevel;
@property (readonly, copy, nonatomic) MKFOutgoingInvitationDatabaseID *databaseID;
@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) NSDate *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *expiryDate;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (retain, nonatomic) _MKFHome *home;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (copy, nonatomic) NSNumber *invitationState;
@property (copy, nonatomic) NSString *inviteeUserID;
@property (copy, nonatomic) NSString *inviteeUserID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSNumber *privilege;
@property (copy, nonatomic) NSNumber *privilege;
@property (copy, nonatomic) NSNumber *remoteAccessAllowed;
@property (copy, nonatomic) NSNumber *remoteAccessAllowed;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfOutgoingInvitation;


@end


#endif