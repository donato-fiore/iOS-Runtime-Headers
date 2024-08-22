// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFATTACHMENTCOMPOSEMANAGER_H
#define MFATTACHMENTCOMPOSEMANAGER_H

@class NSMutableArray;
@protocol OS_dispatch_queue;


#import "MFAttachmentManager.h"
#import "MFInvocationQueue.h"

@interface MFAttachmentComposeManager : MFAttachmentManager {
    MFInvocationQueue *_defaultDownloadQueue;
    NSMutableArray *_composeAttachmentURLs;
    NSObject<OS_dispatch_queue> *_composeAttachmentsQueue;
}




-(BOOL)updateAttachment:(id)arg0 withNewData:(id)arg1 ;
-(id)_composeAttachmentDataProviderForContext:(id)arg0 ;
-(id)_contentIDWithoutBracket:(id)arg0 ;
-(id)_fetchDataForAttachment:(id)arg0 withProvider:(id)arg1 request:(id)arg2 syncLock:(*id)arg3 ;
-(id)_filenameWithExtensionForFilename:(id)arg0 mimeType:(id)arg1 ;
-(id)_providerForURL:(id)arg0 ;
-(id)_queueForAttachment:(id)arg0 ;
-(id)attachmentForCID:(id)arg0 ;
-(id)attachmentForData:(id)arg0 mimeType:(id)arg1 fileName:(id)arg2 contentID:(id)arg3 context:(id)arg4 ;
-(id)attachmentForItemProvider:(id)arg0 mimeType:(id)arg1 fileName:(id)arg2 contentID:(id)arg3 context:(id)arg4 ;
-(id)attachmentsForContext:(id)arg0 ;
-(id)init;
-(void)_callProgressBlockForAttachmentURL:(id)arg0 withBytes:(NSInteger)arg1 expectedSize:(NSInteger)arg2 ;
-(void)_fetchInvocationCallUsingBlock:(id)arg0 ;
-(void)loadAttachmentURL:(id)arg0 forContextID:(id)arg1 ;
-(void)recordPasteboardAttachmentsForURLs:(id)arg0 forContextID:(id)arg1 ;
-(void)recordUndoAttachmentsForURLs:(id)arg0 forContextID:(id)arg1 ;
-(void)removeAttachmentForURL:(id)arg0 ;


@end


#endif