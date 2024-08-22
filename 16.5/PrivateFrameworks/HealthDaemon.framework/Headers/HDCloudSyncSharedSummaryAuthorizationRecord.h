// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCSHAREDSUMMARYAUTHORIZATIONRECORD_H
#define HDCLOUDSYNCSHAREDSUMMARYAUTHORIZATIONRECORD_H

@class NSUUID, NSArray, CKRecordID;


#import "HDCloudSyncRecord.h"
#import "HDCloudSyncCodableSharedSummaryAuthorizationRecord.h"

@interface HDCloudSyncSharedSummaryAuthorizationRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSharedSummaryAuthorizationRecord *_underlyingAuthorizationRecord;
}


@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSArray *authorizationIdentifiers;
@property (readonly, copy, nonatomic) CKRecordID *participantRecordID;


+(BOOL)hasFutureSchema:(id)arg0 ;
+(BOOL)isAuthorizationRecord:(id)arg0 ;
+(BOOL)requiresUnderlyingMessage;
+(BOOL)shouldSerializeUnderlyingMessageAsProtected;
+(id)codableRecordFromRecord:(id)arg0 ;
+(id)fieldsForUnprotectedSerialization;
+(id)recordIDWithZoneID:(id)arg0 UUID:(id)arg1 ;
+(id)recordType;
+(id)recordWithCKRecord:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initInZone:(id)arg0 UUID:(id)arg1 authorizationIdentifiers:(id)arg2 participantRecord:(id)arg3 ;
-(id)initWithCKRecord:(id)arg0 schemaVersion:(NSInteger)arg1 ;
-(id)printDescription;
-(id)serializeUnderlyingMessage;
-(void)replaceAuthorizationIdentifiers:(id)arg0 ;
-(void)updateAuthorizationWithIdentifiersToAdd:(id)arg0 identifiersToDelete:(id)arg1 ;


@end


#endif