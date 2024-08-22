// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFINVITATION_H
#define _MKFINVITATION_H

@class MKFModel, NSString, NSDate, NSUUID, NSNumber;
@protocol MKFInvitation, MKFInvitationPrivateExtensions;


#import "MKFInvitationDatabaseID.h"

@interface _MKFInvitation : MKFModel <MKFInvitation, MKFInvitationPrivateExtensions>



@property (readonly, copy, nonatomic) MKFInvitationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSDate *expiryDate;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (copy, nonatomic) NSNumber *invitationState;
@property (copy, nonatomic) NSNumber *invitationState;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
-(id)castIfInvitation;


@end


#endif