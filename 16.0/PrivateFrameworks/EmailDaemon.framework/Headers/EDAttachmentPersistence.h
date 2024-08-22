// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDATTACHMENTPERSISTENCE_H
#define EDATTACHMENTPERSISTENCE_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabase.h"

@interface EDAttachmentPersistence : NSObject <EFLoggable>



@property (retain, nonatomic) EDPersistenceDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)attachmentColumnNameHash;
+(id)attachmentIDColumnNameInMessageAttachmentsTable;
+(id)attachmentTableSchema;
+(id)attachmentsTableName;
+(id)globalMessageIDColumnNameInMessageAttachmentTable;
+(id)hashForAttachmentData:(id)arg0 ;
+(id)hashForAttachmentName:(id)arg0 ;
+(id)log;
+(id)messageAttachmentTableSchema;
+(id)messageAttachmentsTableName;
+(id)tablesAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;
-(BOOL)insertMessageAttachmentMetadata:(id)arg0 ;
-(BOOL)messageAttachmentExistsForGlobalMessageID:(NSInteger)arg0 mimePartNumber:(id)arg1 hasAttachmentEntry:(*BOOL)arg2 ;
-(BOOL)messageAttachmentExistsForGlobalMessageID:(NSInteger)arg0 remoteURL:(id)arg1 hasAttachmentEntry:(*BOOL)arg2 ;
-(BOOL)removeAttachments:(id)arg0 ;
-(BOOL)updateAttachmentIDForMessageAttachment:(id)arg0 ;
-(NSInteger)insertAttachmentMetadata:(id)arg0 ;
-(id)attachmentMetadataForMessage:(NSInteger)arg0 mimePartNumber:(id)arg1 ;
-(id)attachmentMetadataForMessage:(NSInteger)arg0 remoteURL:(id)arg1 ;
-(id)attachmentMetadataForMessageAttachmentID:(NSInteger)arg0 ;
-(id)attachmentsForGlobalMessageIDs:(id)arg0 ;
-(id)globalMessageIDsForAttachment:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 ;
-(id)messageAttachmentMetadataForMessageID:(NSInteger)arg0 ;
-(id)uniqueAttachmentDataForHash:(id)arg0 ;


@end


#endif