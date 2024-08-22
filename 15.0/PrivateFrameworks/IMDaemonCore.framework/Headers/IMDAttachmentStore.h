// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDATTACHMENTSTORE_H
#define IMDATTACHMENTSTORE_H


#import <Foundation/Foundation.h>


@interface IMDAttachmentStore : NSObject



+(BOOL)_cloudkitSyncingEnabled;
+(BOOL)fileEligibleForCacheDelete:(id)arg0 ;
+(BOOL)updateTransferIn:(id)arg0 fromGUID:(id)arg1 toGUID:(id)arg2 ;
+(id)sharedInstance;
+(void)_askToTapToRadarForErrorString:(id)arg0 path:(id)arg1 ;
-(BOOL)_shouldEarlyReturnForWrongItemType:(id)arg0 ;
-(BOOL)_transferCanBeMarkedPurgable:(id)arg0 ;
-(BOOL)_updateAttachmentGUID:(id)arg0 withGUID:(id)arg1 ;
-(BOOL)_updateLegacyTransferGUIDOn:(id)arg0 andUpdateMessageIfNeeded:(id)arg1 transfersToSync:(id)arg2 ;
-(BOOL)deleteAttachmentDataForTransfer:(id)arg0 ;
-(BOOL)deleteAttachmentWithGUID:(id)arg0 ;
-(BOOL)deleteAttachmentsWithGUIDs:(id)arg0 ;
-(BOOL)isSafeToDeleteAttachmentAtPath:(id)arg0 ;
-(BOOL)removeAttachment:(id)arg0 fromMessageWithGUID:(id)arg1 ;
-(BOOL)storeAttachment:(id)arg0 associateWithMessageWithGUID:(id)arg1 ;
-(BOOL)storeAttachment:(id)arg0 associateWithMessageWithGUID:(id)arg1 chatGUID:(id)arg2 storeAtExternalLocation:(BOOL)arg3 ;
-(BOOL)updateAttachment:(id)arg0 ;
-(BOOL)updateAttachment:(id)arg0 chatGUID:(id)arg1 storeAtExternalPath:(BOOL)arg2 ;
-(BOOL)updateLegacyTransferGUIDIfNeeded:(id)arg0 transfersToSync:(id)arg1 ;
-(BOOL)updateLegacyTransferGUIDOnMessageIfNeeded:(id)arg0 ;
-(id)_IMTransferGUIDForMessageGUID:(id)arg0 andIndex:(NSUInteger)arg1 ;
-(id)_newFileTransferFromIMDAttachmentRecordRef:(struct _IMDAttachmentRecordStruct *)arg0 ;
-(id)_updatedMessageBody:(id)arg0 replacingGuid:(id)arg1 withGuid:(id)arg2 ;
-(id)attachmentWithGUID:(id)arg0 ;
-(id)attachmentsWithGUIDs:(id)arg0 ;
-(id)fileTransferWithAttachmentRecordRef:(struct _IMDAttachmentRecordStruct *)arg0 ;
-(struct _IMDAttachmentRecordStruct *)_loadAttachmentRecordForGUID:(id)arg0 ;
-(void)_reindexMessage:(id)arg0 completion:(id)arg1 ;
-(void)markAllAttachmentsAsNeedingCloudKitSync;
-(void)markAllAttachmentsAsNotPurgeable;
-(void)markAttachment:(id)arg0 purgeable:(BOOL)arg1 ;
-(void)markAttachmentPurgeable:(id)arg0 ;
-(void)markAttachmentUnpurgeable:(id)arg0 ;
-(void)markFile:(id)arg0 asPurgeable:(BOOL)arg1 ;


@end


#endif