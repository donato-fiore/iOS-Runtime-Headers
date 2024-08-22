// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFATTACHMENTMANAGER_H
#define MFATTACHMENTMANAGER_H

@class NSMutableDictionary, NSLock, NSString, EDAttachmentPersistenceManager;
@protocol EFLoggable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MFFileCompressionQueue.h"

@interface MFAttachmentManager : NSObject <EFLoggable>

 {
    NSObject<OS_dispatch_queue> *_arrayAccessQueue;
    NSMutableDictionary *_providers;
    os_unfair_lock_s _providersLock;
    NSMutableDictionary *_attachments;
    NSMutableDictionary *_metadata;
    NSLock *_metaDataLock;
    NSObject<OS_dispatch_queue> *_imageScalingQueue;
    MFFileCompressionQueue *_compressionQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EDAttachmentPersistenceManager *persistenceManager; // ivar: _persistenceManager
@property (readonly) Class superclass;


+(id)allManagers;
+(id)defaultManager;
+(id)log;
+(id)supportedDocumentUTIs;
-(BOOL)_setupAttachment:(id)arg0 withMimeBody:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateAttachment:(id)arg0 withNewData:(id)arg1 ;
-(id)_contentIDForAttachment:(id)arg0 ;
-(id)_dataProviderForAttachmentURL:(id)arg0 error:(*id)arg1 ;
-(id)_fetchDataForAttachment:(id)arg0 withProvider:(id)arg1 request:(id)arg2 syncLock:(*id)arg3 ;
-(id)_filePathForAttachment:(id)arg0 ;
-(id)attachmentForCID:(id)arg0 ;
-(id)attachmentForContentID:(id)arg0 ;
-(id)attachmentForContentID:(id)arg0 preferredSchemes:(id)arg1 ;
-(id)attachmentForData:(id)arg0 mimeType:(id)arg1 fileName:(id)arg2 contentID:(id)arg3 context:(id)arg4 ;
-(id)attachmentForItemProvider:(id)arg0 mimeType:(id)arg1 fileName:(id)arg2 contentID:(id)arg3 context:(id)arg4 ;
-(id)attachmentForTextAttachment:(id)arg0 error:(*id)arg1 ;
-(id)attachmentForURL:(id)arg0 error:(*id)arg1 ;
-(id)attachmentForURL:(id)arg0 withMimeBody:(id)arg1 error:(*id)arg2 ;
-(id)attachmentsForContext:(id)arg0 ;
-(id)attachmentsForURLs:(id)arg0 error:(*id)arg1 ;
-(id)compressionQueue;
-(id)fetchDataForAttachment:(id)arg0 ;
-(id)imageScalingQueue;
-(id)init;
-(id)metadataForAttachment:(id)arg0 forKey:(id)arg1 ;
-(void)_cancelFetchForAttachment:(id)arg0 ;
-(void)_fetchCompletedForAttachment:(id)arg0 error:(id)arg1 ;
-(void)addProvider:(id)arg0 forBaseURL:(id)arg1 ;
-(void)clearMetadataForAttachment:(id)arg0 ;
-(void)fetchDataSynchronouslyForAttachment:(id)arg0 ;
-(void)insertMessageAttachmentMetadataToPersistence:(id)arg0 forMessage:(id)arg1 ;
-(void)loadAttachmentURL:(id)arg0 forContextID:(id)arg1 ;
-(void)recordPasteboardAttachmentsForURLs:(id)arg0 forContextID:(id)arg1 ;
-(void)recordUndoAttachmentsForURLs:(id)arg0 forContextID:(id)arg1 ;
-(void)removeAttachmentForURL:(id)arg0 ;
-(void)removeProvider:(id)arg0 ;
-(void)removeProviderForBaseURL:(id)arg0 ;
-(void)setContentID:(id)arg0 forAttachment:(id)arg1 ;
-(void)setMetadataForAttachment:(id)arg0 toValue:(id)arg1 forKey:(id)arg2 ;


@end


#endif