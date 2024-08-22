// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDATTACHMENTPERSISTENCEMANAGER_H
#define EDATTACHMENTPERSISTENCEMANAGER_H

@class NSString, NSURL;
@protocol EFLoggable;

#import <Foundation/Foundation.h>

#import "EDAttachmentPersistence.h"
#import "EDMessagePersistence.h"

@interface EDAttachmentPersistenceManager : NSObject <EFLoggable>



@property (readonly, nonatomic) EDAttachmentPersistence *attachmentPersistence; // ivar: _attachmentPersistence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *tempDirectoryForArchiveAttachments; // ivar: _tempDirectoryForArchiveAttachments


+(id)attachmentDirectoryURLWithBasePath:(id)arg0 ;
+(id)log;
-(BOOL)_moveAttachmentAtURL:(id)arg0 toURL:(id)arg1 outError:(*id)arg2 ;
-(BOOL)_persistAndUpdateAttachmentPersistenceTableFromFileWrapper:(id)arg0 orURL:(id)arg1 attachmentMetadata:(id)arg2 basePath:(id)arg3 shouldUpdateAttachmentID:(BOOL)arg4 ;
-(BOOL)_persistAttachmentWithWrapper:(id)arg0 orURL:(id)arg1 attachmentMetadata:(id)arg2 basePath:(id)arg3 error:(*id)arg4 ;
-(BOOL)_writeAttachment:(id)arg0 toDirectory:(id)arg1 outError:(*id)arg2 ;
-(BOOL)_writeFileWrapper:(id)arg0 toURL:(id)arg1 outError:(*id)arg2 ;
-(BOOL)persistAttachment:(id)arg0 attachmentMetadata:(id)arg1 basePath:(id)arg2 error:(*id)arg3 ;
-(BOOL)persistAttachmentMetadata:(id)arg0 ;
-(BOOL)persistAttachmentWithURL:(id)arg0 attachmentMetadata:(id)arg1 basePath:(id)arg2 error:(*id)arg3 ;
-(BOOL)removeDatabaseAttachments:(id)arg0 ;
-(BOOL)removeFilesystemAttachmentsByAccountIdentifier:(id)arg0 ;
-(id)_accountIdentifiersByAttachmentIDs:(id)arg0 ;
-(id)_tempDirectoryForArchiveAttachmentsWithParentDirectory:(id)arg0 ;
-(id)_updateFileWrapperNameToStaticFileName:(id)arg0 ;
-(id)attachmentDirectoryURLForMessageID:(NSInteger)arg0 basePath:(id)arg1 ;
-(id)attachmentURLForGlobalMessageID:(NSInteger)arg0 mimePartNumber:(id)arg1 basePath:(id)arg2 ;
-(id)attachmentURLForGlobalMessageID:(NSInteger)arg0 remoteURL:(id)arg1 basePath:(id)arg2 ;
-(id)attachmentURLForMessageAttachmentID:(NSInteger)arg0 basePath:(id)arg1 ;
-(id)initWithDatabase:(id)arg0 messagePersistence:(id)arg1 ;
-(void)isDeletingMessages:(id)arg0 ;
-(void)persistenceIsDeletingMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceWillDeleteMessages:(id)arg0 ;
-(void)willDeleteAttachmentsForMessages:(id)arg0 ;


@end


#endif