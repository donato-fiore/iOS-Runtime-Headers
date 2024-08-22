// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCATTACHMENTMANAGEMENTRECORD_H
#define HDCLOUDSYNCATTACHMENTMANAGEMENTRECORD_H

@class NSUUID;


#import "HDCloudSyncRecord.h"
#import "HDCloudSyncCodableAttachmentManagementRecord.h"

@interface HDCloudSyncAttachmentManagementRecord : HDCloudSyncRecord {
    HDCloudSyncCodableAttachmentManagementRecord *_underlyingAttachmentManagementRecord;
}


@property (readonly, copy, nonatomic) NSUUID *UUID;


+(BOOL)hasFutureSchema:(id)arg0 ;
+(BOOL)isAttachmentManagementRecord:(id)arg0 ;
+(BOOL)isAttachmentManagementRecordID:(id)arg0 ;
+(BOOL)requiresUnderlyingMessage;
+(id)recordIDForZoneID:(id)arg0 ;
+(id)recordType;
-(id)description;
-(id)initInZoneID:(id)arg0 ;
-(id)initWithCKRecord:(id)arg0 schemaVersion:(NSInteger)arg1 ;
-(id)printDescription;
-(id)serializeUnderlyingMessage;


@end


#endif