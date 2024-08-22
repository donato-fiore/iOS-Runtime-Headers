// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCATTACHMENTREFERENCERECORD_H
#define HDCLOUDSYNCATTACHMENTREFERENCERECORD_H

@class NSString;


#import "HDCloudSyncRecord.h"
#import "HDCloudSyncCodableAttachmentReference.h"
#import "HDAttachmentReference.h"

@interface HDCloudSyncAttachmentReferenceRecord : HDCloudSyncRecord {
    HDCloudSyncCodableAttachmentReference *_underlyingReference;
}


@property (readonly, copy, nonatomic) NSString *attachmentIdentifier;
@property (readonly, copy, nonatomic) HDAttachmentReference *attachmentReference;
@property (readonly, copy, nonatomic) NSString *referenceIdentifier;


+(BOOL)hasFutureSchema:(id)arg0 ;
+(BOOL)isAttachmentReferenceRecord:(id)arg0 ;
+(BOOL)isAttachmentReferenceRecordID:(id)arg0 ;
+(BOOL)requiresUnderlyingMessage;
+(BOOL)shouldSerializeUnderlyingMessageAsProtected;
+(id)recordIDForReferenceIdentifier:(id)arg0 zoneID:(id)arg1 ;
+(id)recordType;
-(id)description;
-(id)initWithAttachmentReference:(id)arg0 zoneID:(id)arg1 ;
-(id)initWithCKRecord:(id)arg0 schemaVersion:(NSInteger)arg1 ;
-(id)printDescription;
-(id)serializeUnderlyingMessage;


@end


#endif