// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSHAREMETADATA_H
#define CKSHAREMETADATA_H

@class NSString, NSData, NSArray;
@protocol CKContainerAssignment, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKShareParticipant.h"
#import "CKContainerID.h"
#import "CKRecordID.h"
#import "CKDeviceToDeviceShareInvitationToken.h"
#import "CKUserIdentity.h"
#import "CKRecord.h"
#import "CKShare.h"
#import "CKRecordZone.h"

@interface CKShareMetadata : NSObject <CKContainerAssignment, NSCopying, NSSecureCoding>



@property (nonatomic) BOOL acceptedInProcess; // ivar: _acceptedInProcess
@property (readonly, nonatomic, getter=baseToken) NSString *baseToken;
@property (copy, nonatomic) CKShareParticipant *callingParticipant; // ivar: _callingParticipant
@property (copy, nonatomic) CKContainerID *containerID; // ivar: _containerID
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) NSData *encryptedData; // ivar: _encryptedData
@property (copy, nonatomic) CKRecordID *hierarchicalRootRecordID; // ivar: _hierarchicalRootRecordID
@property (copy, nonatomic) CKDeviceToDeviceShareInvitationToken *invitationToken; // ivar: _invitationToken
@property (retain, nonatomic) NSArray *outOfNetworkMatches; // ivar: _outOfNetworkMatches
@property (copy, nonatomic) CKUserIdentity *ownerIdentity; // ivar: _ownerIdentity
@property (nonatomic) NSInteger participantPermission; // ivar: _participantPermission
@property (nonatomic) NSInteger participantRole; // ivar: _participantRole
@property (nonatomic) NSInteger participantStatus; // ivar: _participantStatus
@property (readonly, nonatomic) NSInteger participantType;
@property (copy, nonatomic) NSData *privateToken; // ivar: _privateToken
@property (copy, nonatomic) NSData *protectedFullToken; // ivar: _protectedFullToken
@property (copy, nonatomic) NSData *publicToken; // ivar: _publicToken
@property (copy, nonatomic) CKRecord *rootRecord; // ivar: _rootRecord
@property (readonly, copy, nonatomic) CKRecordID *rootRecordID;
@property (retain, nonatomic) NSString *rootRecordType; // ivar: _rootRecordType
@property (copy, nonatomic) CKShare *share; // ivar: _share
@property (copy, nonatomic) NSArray *sharedItemHierarchyIDs; // ivar: _sharedItemHierarchyIDs
@property (retain, nonatomic) CKRecordZone *sharedZone; // ivar: _sharedZone


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)environment;
-(NSUInteger)hash;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)ckShortDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)CKAssignToContainerWithID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fillAnonymousCKUserID:(id)arg0 ;


@end


#endif