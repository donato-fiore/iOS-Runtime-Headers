// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFINCOMINGINVITATION_H
#define _MKFINCOMINGINVITATION_H

@class MKFInvitation, NSString, NSDate, NSUUID, NSNumber, NSData, NSURL;
@protocol MKFIncomingInvitation, MKFIncomingInvitationPrivateExtensions, MKFHomeManager;


#import "MKFIncomingInvitationDatabaseID.h"
#import "_MKFHomeManager.h"

@interface _MKFIncomingInvitation : MKFInvitation <MKFIncomingInvitation, MKFIncomingInvitationPrivateExtensions>



@property (readonly, copy, nonatomic) MKFIncomingInvitationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *expiryDate;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _MKFHomeManager *homeManager;
@property (readonly, retain, nonatomic) NSObject<MKFHomeManager> *homeManager;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSString *homeName;
@property (copy, nonatomic) NSString *homeName;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (copy, nonatomic) NSNumber *invitationState;
@property (copy, nonatomic) NSString *inviterMergeID;
@property (copy, nonatomic) NSString *inviterMergeID;
@property (copy, nonatomic) NSString *inviterPairingIdentifier;
@property (copy, nonatomic) NSString *inviterPairingIdentifier;
@property (retain, nonatomic) NSData *inviterPairingPublicKey;
@property (retain, nonatomic) NSData *inviterPairingPublicKey;
@property (copy, nonatomic) NSString *inviterUserID;
@property (copy, nonatomic) NSString *inviterUserID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) NSData *shareToken;
@property (retain, nonatomic) NSData *shareToken;
@property (copy, nonatomic) NSURL *shareURL;
@property (copy, nonatomic) NSURL *shareURL;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
-(id)castIfIncomingInvitation;


@end


#endif