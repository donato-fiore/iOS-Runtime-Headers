// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCSHAREDSUMMARYRELATIONSHIPRECORD_H
#define HDCLOUDSYNCSHAREDSUMMARYRELATIONSHIPRECORD_H



#import "HDCloudSyncRecord.h"
#import "HDCloudSyncCodableSharedSummaryRelationshipRecord.h"

@interface HDCloudSyncSharedSummaryRelationshipRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSharedSummaryRelationshipRecord *_underlyingSummaryRelationshipRecord;
}




+(BOOL)hasFutureSchema:(id)arg0 ;
+(BOOL)isRelationshipRecord:(id)arg0 ;
+(BOOL)isRelationshipRecordID:(id)arg0 ;
+(BOOL)requiresUnderlyingMessage;
+(BOOL)shouldSerializeUnderlyingMessageAsProtected;
+(id)recordIDWithZoneID:(id)arg0 ;
+(id)recordType;
-(BOOL)addOrUpdateParticipant:(id)arg0 errorOut:(*id)arg1 ;
-(BOOL)containsContactIdentifier:(id)arg0 ;
-(BOOL)removeParticipant:(id)arg0 errorOut:(*id)arg1 ;
-(id)authorizationRecordIdentifierForContactIdentifier:(id)arg0 errorOut:(*id)arg1 ;
-(id)codableParticipantForContactIdentifier:(id)arg0 errorOut:(*id)arg1 ;
-(id)description;
-(id)initInZone:(id)arg0 ;
-(id)initWithCKRecord:(id)arg0 schemaVersion:(NSInteger)arg1 ;
-(id)printDescription;
-(id)serializeUnderlyingMessage;


@end


#endif