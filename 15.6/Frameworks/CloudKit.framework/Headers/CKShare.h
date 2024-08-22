// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSHARE_H
#define CKSHARE_H

@class NSURL, NSMutableSet, NSMutableArray, NSString, NSArray, NSData, CKShareID;
@protocol CKPropertiesDescription, NSSecureCoding, NSCopying;


#import "CKRecord.h"
#import "CKContainerID.h"
#import "CKShareParticipant.h"
#import "CKRecordID.h"

@interface CKShare : CKRecord <CKPropertiesDescription, NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSMutableSet *addedParticipantIDs; // ivar: _addedParticipantIDs
@property (retain, nonatomic) NSMutableArray *allParticipants; // ivar: _allParticipants
@property (nonatomic) BOOL allowsAnonymousPublicAccess; // ivar: _allowsAnonymousPublicAccess
@property (retain, nonatomic) CKContainerID *containerID; // ivar: _containerID
@property (readonly, copy, nonatomic) CKShareParticipant *currentUserParticipant;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL encodeAllowsReadOnlyParticipantsToSeeEachOther; // ivar: _encodeAllowsReadOnlyParticipantsToSeeEachOther
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *invitedKeysToRemove; // ivar: _invitedKeysToRemove
@property (retain, nonatomic) NSData *invitedProtectionData; // ivar: _invitedProtectionData
@property (retain, nonatomic) NSString *invitedProtectionEtag; // ivar: _invitedProtectionEtag
@property (readonly, nonatomic) BOOL isZoneWideShare;
@property (retain, nonatomic) NSMutableArray *lastFetchedParticipants; // ivar: _lastFetchedParticipants
@property (readonly, copy, nonatomic) CKShareParticipant *owner;
@property (nonatomic) NSInteger participantSelfRemovalBehavior; // ivar: _participantSelfRemovalBehavior
@property (nonatomic) NSInteger participantVisibility; // ivar: _participantVisibility
@property (readonly, copy, nonatomic) NSArray *participants;
@property (retain, nonatomic) NSString *previousInvitedProtectionEtag; // ivar: _previousInvitedProtectionEtag
@property (retain, nonatomic) NSString *previousPublicProtectionEtag; // ivar: _previousPublicProtectionEtag
@property (nonatomic) NSInteger publicPermission; // ivar: _publicPermission
@property (retain, nonatomic) NSData *publicProtectionData; // ivar: _publicProtectionData
@property (retain, nonatomic) NSString *publicProtectionEtag; // ivar: _publicProtectionEtag
@property (retain, nonatomic) NSData *publicSharingIdentity;
@property (retain, nonatomic) NSMutableSet *removedParticipantIDs; // ivar: _removedParticipantIDs
@property (copy, nonatomic) CKRecordID *rootRecordID; // ivar: _rootRecordID
@property (nonatomic) BOOL serializePersonalInfo; // ivar: _serializePersonalInfo
@property (copy, nonatomic) CKShareID *shareID; // ivar: _shareID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)_participantArray:(id)arg0 containsEquivalentWithPermissionsParticipant:(id)arg1 ;
-(BOOL)_participantArray:(id)arg0 isEquivalentToArray:(id)arg1 ;
-(BOOL)allowsReadOnlyParticipantsToSeeEachOther;
-(BOOL)hasEncryptedData;
-(id)_copyWithoutPersonalInfo;
-(id)_initWithShareRecordID:(id)arg0 ;
-(id)_knownParticipantEqualToParticipant:(id)arg0 ;
-(id)addedParticipants;
-(id)copyWithOriginalValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encryptedPublicSharingKey;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordType:(id)arg0 ;
-(id)initWithRecordType:(id)arg0 recordID:(id)arg1 ;
-(id)initWithRecordType:(id)arg0 zoneID:(id)arg1 ;
-(id)initWithRecordZoneID:(id)arg0 ;
-(id)initWithRootRecord:(id)arg0 ;
-(id)initWithRootRecord:(id)arg0 shareID:(id)arg1 ;
-(id)redactedDescription;
-(id)removedParticipants;
-(id)updateFromServerShare:(id)arg0 ;
-(void)CKAssignToContainerWithID:(id)arg0 ;
-(void)CKDescribePropertiesUsing:(id)arg0 ;
-(void)_addOwnerParticipant;
-(void)_addParticipantBypassingChecks:(id)arg0 ;
-(void)_addParticipantEmails:(id)arg0 phoneNumbers:(id)arg1 asReadWrite:(BOOL)arg2 inContainer:(id)arg3 completionHandler:(id)arg4 ;
-(void)_commonCKShareInit;
-(void)_getDecryptedShareInContainer:(id)arg0 completionHandler:(id)arg1 ;
-(void)_removeAllParticipants;
-(void)_removeParticipantBypassingChecks:(id)arg0 ;
-(void)_removePendingPrivateAndAdminParticipants;
-(void)_stripPersonalInfo;
-(void)addParticipant:(id)arg0 ;
-(void)clearModifiedParticipants;
-(void)encodeSystemFieldsWithCoder:(id)arg0 ;
-(void)registerFetchedParticipant:(id)arg0 ;
-(void)removeParticipant:(id)arg0 ;
-(void)resetFetchedParticipants;
-(void)setAllowsReadOnlyParticipantsToSeeEachOther:(BOOL)arg0 ;
-(void)setWantsPublicSharingKey:(BOOL)arg0 ;


@end


#endif