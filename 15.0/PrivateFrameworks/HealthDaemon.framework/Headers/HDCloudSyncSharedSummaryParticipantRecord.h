// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCSHAREDSUMMARYPARTICIPANTRECORD_H
#define HDCLOUDSYNCSHAREDSUMMARYPARTICIPANTRECORD_H

@class NSUUID, NSArray, NSString, NSDate, NSNumber, CKShareParticipant;


#import "HDCloudSyncRecord.h"
#import "HDCloudSyncCodableSharedSummaryParticipantRecord.h"
#import "HDCodableSharingSetupMetadata.h"

@interface HDCloudSyncSharedSummaryParticipantRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSharedSummaryParticipantRecord *_underlyingSummaryParticipantRecord;
}


@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSArray *allContactIdentifiers;
@property (readonly, copy, nonatomic) NSUUID *authorizationRecordIdentifier;
@property (copy, nonatomic) NSString *cloudKitIdentifier;
@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSDate *entryAcceptanceDate;
@property (copy, nonatomic) NSDate *entryInvitationDate;
@property (copy, nonatomic) NSDate *entryModificationDate;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSUUID *invitationUUID;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSNumber *notificationStatus;
@property (copy, nonatomic) CKShareParticipant *ownerParticipant;
@property (copy, nonatomic) NSNumber *relationshipDirection;
@property (copy, nonatomic) NSNumber *relationshipStatus;
@property (copy, nonatomic) NSNumber *relationshipType;
@property (copy, nonatomic) HDCodableSharingSetupMetadata *shareSetupMetadata;
@property (copy, nonatomic) NSNumber *userWheelchairMode;


+(BOOL)hasFutureSchema:(id)arg0 ;
+(BOOL)isParticipantRecord:(id)arg0 ;
+(BOOL)requiresUnderlyingMessage;
+(BOOL)shouldSerializeUnderlyingMessageAsProtected;
+(id)codableRecordFromRecord:(id)arg0 ;
+(id)fieldsForUnprotectedSerialization;
+(id)recordIDWithZoneID:(id)arg0 UUID:(id)arg1 ;
+(id)recordType;
+(id)recordWithCKRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateWithLocalEntry:(id)arg0 error:(*id)arg1 ;
-(NSInteger)mergeWithLocalEntry:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initInZone:(id)arg0 UUID:(id)arg1 contactIdentifier:(id)arg2 relationshipRecord:(id)arg3 ;
-(id)initInZone:(id)arg0 codableEntry:(id)arg1 relationshipRecord:(id)arg2 ;
-(id)initWithCKRecord:(id)arg0 schemaVersion:(NSInteger)arg1 ;
-(id)printDescription;
-(id)serializeUnderlyingMessage;
-(void)setAuthorizationRecord:(id)arg0 ;


@end


#endif