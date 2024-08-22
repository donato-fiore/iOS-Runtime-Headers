// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCATTACHMENTRECORD_H
#define HDCLOUDSYNCATTACHMENTRECORD_H

@class NSData, NSURL, NSString;


#import "HDCloudSyncRecord.h"
#import "HDCloudSyncCodableAttachment.h"
#import "HDAttachment.h"

@interface HDCloudSyncAttachmentRecord : HDCloudSyncRecord {
    HDCloudSyncCodableAttachment *_underlyingAttachment;
}


@property (readonly, copy, nonatomic) NSData *assetData;
@property (readonly, copy, nonatomic) NSURL *assetURL;
@property (readonly, copy, nonatomic) HDAttachment *attachment;
@property (readonly, copy, nonatomic) NSString *attachmentIdentifier;
@property (readonly, nonatomic) NSInteger fileSize;
@property (readonly, nonatomic) BOOL hasAssetData;


+(BOOL)hasFutureSchema:(id)arg0 ;
+(BOOL)isAttachmentRecord:(id)arg0 ;
+(BOOL)isAttachmentRecordID:(id)arg0 ;
+(BOOL)requiresUnderlyingMessage;
+(BOOL)shouldSerializeUnderlyingMessageAsProtected;
+(id)attachmentIdentifierForRecordID:(id)arg0 ;
+(id)recordIDForAttachmentIdentifier:(id)arg0 zoneID:(id)arg1 ;
+(id)recordType;
+(id)recordWithAttachment:(id)arg0 fileHandle:(id)arg1 zoneID:(id)arg2 error:(*id)arg3 ;
-(id)description;
-(id)initWithCKRecord:(id)arg0 schemaVersion:(NSInteger)arg1 ;
-(id)printDescription;
-(id)serializeUnderlyingMessage;
-(void)unitTest_setFileURL:(id)arg0 ;


@end


#endif