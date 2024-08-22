// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSHAREPARTICIPANT_H
#define CKSHAREPARTICIPANT_H

@class NSString, NSData;
@protocol CKPropertiesDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKDeviceToDeviceShareInvitationToken.h"
#import "CKRecordID.h"
#import "CKUserIdentity.h"

@interface CKShareParticipant : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger acceptanceStatus; // ivar: _acceptanceStatus
@property (nonatomic) BOOL acceptedInProcess; // ivar: _acceptedInProcess
@property (nonatomic) BOOL createdInProcess; // ivar: _createdInProcess
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *encryptedPersonalInfo; // ivar: _encryptedPersonalInfo
@property (nonatomic) BOOL forceSendPublicKeyForAnonymousParticipants; // ivar: _forceSendPublicKeyForAnonymousParticipants
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CKDeviceToDeviceShareInvitationToken *invitationToken; // ivar: _invitationToken
@property (retain, nonatomic) NSString *inviterID; // ivar: _inviterID
@property (nonatomic) BOOL isAnonymousInvitedParticipant; // ivar: _isAnonymousInvitedParticipant
@property (nonatomic) BOOL isCurrentUser; // ivar: _isCurrentUser
@property (nonatomic) BOOL isOrgAdminUser; // ivar: _isOrgAdminUser
@property (nonatomic) NSInteger mutableInvitationTokenStatus; // ivar: _mutableInvitationTokenStatus
@property (nonatomic) NSInteger originalAcceptanceStatus; // ivar: _originalAcceptanceStatus
@property (nonatomic) NSInteger originalParticipantRole; // ivar: _originalParticipantRole
@property (nonatomic) NSInteger originalPermission; // ivar: _originalPermission
@property (copy, nonatomic) NSString *participantID; // ivar: _participantID
@property (nonatomic) NSInteger permission; // ivar: _permission
@property (retain, nonatomic) NSData *protectionInfo; // ivar: _protectionInfo
@property (retain, nonatomic) NSData *protectionInfoPublicKey; // ivar: _protectionInfoPublicKey
@property (nonatomic) NSInteger role; // ivar: _role
@property (retain, nonatomic) CKRecordID *shareRecordID; // ivar: _shareRecordID
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type;
@property (copy, nonatomic) CKUserIdentity *userIdentity; // ivar: _userIdentity
@property (nonatomic) BOOL wantsNewInvitationToken; // ivar: _wantsNewInvitationToken


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_init;
-(id)_initWithUserIdentity:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedDescription;
-(id)unifiedContactsInStore:(id)arg0 keysToFetch:(id)arg1 error:(*id)arg2 ;
-(void)CKDescribePropertiesUsing:(id)arg0 ;
-(void)_stripPersonalInfo;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif