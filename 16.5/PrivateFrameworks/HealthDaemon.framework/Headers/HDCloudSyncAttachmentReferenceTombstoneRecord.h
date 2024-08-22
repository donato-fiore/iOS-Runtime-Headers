// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCATTACHMENTREFERENCETOMBSTONERECORD_H
#define HDCLOUDSYNCATTACHMENTREFERENCETOMBSTONERECORD_H

@class NSArray, NSString;


#import "HDCloudSyncRecord.h"
#import "HDCloudSyncCodableAttachmentReferenceTombstones.h"

@interface HDCloudSyncAttachmentReferenceTombstoneRecord : HDCloudSyncRecord {
    HDCloudSyncCodableAttachmentReferenceTombstones *_underlyingReferenceTombstones;
}


@property (readonly, nonatomic) NSInteger attachmentReferenceTombstoneCount;
@property (readonly, copy, nonatomic) NSArray *attachmentReferenceTombstones;
@property (readonly, copy, nonatomic) NSString *ownerIdentifier;
@property (readonly, nonatomic) NSInteger recordIndex;


+(BOOL)hasFutureSchema:(id)arg0 ;
+(BOOL)isAttachmentReferenceTombstoneRecord:(id)arg0 ;
+(BOOL)isAttachmentReferenceTombstoneRecordID:(id)arg0 ;
+(BOOL)requiresUnderlyingMessage;
+(BOOL)shouldSerializeUnderlyingMessageAsProtected;
+(id)recordIDForOwnerIdentifier:(id)arg0 recordIndex:(NSInteger)arg1 zoneID:(id)arg2 ;
+(id)recordType;
-(id)description;
-(id)initWithCKRecord:(id)arg0 schemaVersion:(NSInteger)arg1 ;
-(id)initWithOwnerIdentifier:(id)arg0 recordIndex:(NSInteger)arg1 zoneID:(id)arg2 ;
-(id)printDescription;
-(id)serializeUnderlyingMessage;
-(void)addAttachmentReferenceTombstone:(id)arg0 ;


@end


#endif