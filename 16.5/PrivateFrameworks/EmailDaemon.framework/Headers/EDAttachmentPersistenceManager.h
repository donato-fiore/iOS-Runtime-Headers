// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDATTACHMENTPERSISTENCEMANAGER_H
#define EDATTACHMENTPERSISTENCEMANAGER_H

@class NSURL, NSString;
@protocol EFLoggable, EDMessageChangeHookResponder;

#import <Foundation/Foundation.h>

#import "EDAttachmentPersistence.h"
#import "EDMessagePersistence.h"

@interface EDAttachmentPersistenceManager : NSObject <EFLoggable, EDMessageChangeHookResponder>

 {
    EDAttachmentPersistence *_attachmentPersistence;
    EDMessagePersistence *_messagePersistence;
    NSURL *_tempDirectoryForArchiveAttachments;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)attachmentDirectoryURLWithBasePath:(id)arg0 ;
+(id)createFilenameForAttachmentName:(id)arg0 ;
+(id)log;
-(BOOL)persistAttachment:(id)arg0 attachmentMetadata:(id)arg1 basePath:(id)arg2 error:(*id)arg3 ;
-(BOOL)persistAttachmentMetadata:(id)arg0 ;
-(BOOL)persistAttachmentWithURL:(id)arg0 attachmentMetadata:(id)arg1 basePath:(id)arg2 error:(*id)arg3 ;
-(id)allAttachmentsInfoForGlobalMessageIDs:(id)arg0 basePath:(id)arg1 ;
-(id)attachmentDirectoryURLForMessageID:(NSInteger)arg0 basePath:(id)arg1 ;
-(id)attachmentURLForGlobalMessageID:(NSInteger)arg0 mimePartNumber:(id)arg1 basePath:(id)arg2 ;
-(id)attachmentURLForGlobalMessageID:(NSInteger)arg0 remoteURL:(id)arg1 basePath:(id)arg2 ;
-(id)attachmentURLForMessageAttachmentID:(NSInteger)arg0 basePath:(id)arg1 ;
-(id)createAttachmentFileWriterForAttachmentMetadata:(id)arg0 basePath:(id)arg1 downloadDate:(id)arg2 queue:(id)arg3 compressionQueue:(id)arg4 completion:(id)arg5 ;
-(id)initWithDatabase:(id)arg0 messagePersistence:(id)arg1 ;
-(void)insertMimePartAttachments:(id)arg0 forGlobalMessageID:(NSInteger)arg1 ;
-(void)isDeletingMessages:(id)arg0 ;
-(void)persistenceIsDeletingMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceWillDeleteMessages:(id)arg0 ;
-(void)willDeleteAttachmentsForMessages:(id)arg0 ;


@end


#endif