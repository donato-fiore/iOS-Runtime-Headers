// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDBATTACHMENTMIGRATOR_H
#define CDBATTACHMENTMIGRATOR_H


#import <Foundation/Foundation.h>


@interface CDBAttachmentMigrator : NSObject



+(?)_attachmentInfoForLegacyAttachmentURL:(?)arg0 newAttachmentContainerForStore:(?)arg1 newCalendarDataContainer:(?)arg2 databaseattachmentUUID;
+(?)_infoForAttachmentsInLegacyAttachmentContainerForStore:(?)arg0 newAttachmentContainerForStore:(?)arg1 newCalendarDataContainerdatabase;
+(?)_moveAttachmentsForStore:(?)arg0 fromLegacyAttachmentContainer:(?)arg1 calendarDataContainerProviderdatabase;
+(?)_setFileSizeForAttachmentsWithInfodatabase;
+(?)_updateLocalRelativeURLForAttachmentsWithInfodatabase;
+(BOOL)_createNewContainerIfNeeded:(id)arg0 error:(*id)arg1 ;
+(BOOL)_moveAttachmentWithInfo:(id)arg0 error:(*id)arg1 ;
+(BOOL)_moveAttachmentsWithInfo:(id)arg0 error:(*id)arg1 ;
+(void)_moveAttachmentsFromLegacyAttachmentContainer:(id)arg0 calendarDataContainerProvider:(id)arg1 database:(struct CalDatabase *)arg2 ;
+(void)_setFileSizeForAttachmentUUID:(id)arg0 attachmentURL:(id)arg1 database:(struct CalDatabase *)arg2 ;
+(void)_setLocalRelativePathForAttachmentUUID:(id)arg0 localRelativePath:(id)arg1 database:(struct CalDatabase *)arg2 ;
+(void)migrateDataClassProtectionForAttachmentsInLegacyCalendarDataContainer:(id)arg0 ;
+(void)migrateWithLegacyCalendarDataContainer:(id)arg0 calendarDataContainerProvider:(id)arg1 database:(struct CalDatabase *)arg2 ;


@end


#endif