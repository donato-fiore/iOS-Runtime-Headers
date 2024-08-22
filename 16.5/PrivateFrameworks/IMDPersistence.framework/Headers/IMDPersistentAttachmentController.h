// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDPERSISTENTATTACHMENTCONTROLLER_H
#define IMDPERSISTENTATTACHMENTCONTROLLER_H


#import <Foundation/Foundation.h>


@interface IMDPersistentAttachmentController : NSObject



+(id)sharedInstance;
-(BOOL)_canDeleteAttachmentPath:(id)arg0 ;
-(BOOL)_deleteAttachmentForTransfer:(id)arg0 highQuality:(BOOL)arg1 ;
-(BOOL)_shouldDeleteOriginalPath:(id)arg0 copyWithinAttachmentStore:(BOOL)arg1 destPath:(id)arg2 storeAtExternalPath:(BOOL)arg3 ;
-(BOOL)cleanseOrphanedFileTransfers;
-(BOOL)deleteAttachmentsForTransfer:(id)arg0 ;
-(BOOL)isSafeToDeleteAttachmentPath:(id)arg0 ;
-(id)_migrateSiblingAssetsInAttachmentStoreWithOriginalPath:(id)arg0 destinationPath:(id)arg1 withFileManager:(id)arg2 ;
-(id)_persistentPathForTransfer:(id)arg0 filename:(id)arg1 highQuality:(BOOL)arg2 chatGUID:(id)arg3 storeAtExternalPath:(BOOL)arg4 ;
-(id)_saveAttachmentForTransfer:(id)arg0 highQuality:(BOOL)arg1 copyWithinAttachmentStore:(BOOL)arg2 ;
-(id)_saveAttachmentForTransfer:(id)arg0 highQuality:(BOOL)arg1 copyWithinAttachmentStore:(BOOL)arg2 chatGUID:(id)arg3 storeAtExternalPath:(BOOL)arg4 ;
-(void)_removeLegacyAttachmentPathsInAttachmentStoreWithOriginalPath:(id)arg0 withFileManager:(id)arg1 ;
-(void)moveAttachmentsForTransfer:(id)arg0 completion:(id)arg1 ;
-(void)saveAttachmentsForTransfer:(id)arg0 chatGUID:(id)arg1 storeAtExternalLocation:(BOOL)arg2 completion:(id)arg3 ;
-(void)saveAttachmentsForTransfer:(id)arg0 completion:(id)arg1 ;


@end


#endif