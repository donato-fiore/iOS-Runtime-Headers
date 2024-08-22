// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDBATTACHMENTMIGRATOR_H
#define CDBATTACHMENTMIGRATOR_H


#import <Foundation/Foundation.h>


@interface CDBAttachmentMigrator : NSObject



+(?)_infoForAttachmentsInLegacyAttachmentContainerForStore:(?)arg0 newAttachmentContainerForStore:(?)arg1 newCalendarDataContainerdatabase;
+(?)_moveAttachmentsForStore:(?)arg0 fromLegacyAttachmentContainer:(?)arg1 calendarDataContainerProviderdatabase;
+(?)_moveAttachmentsFromLegacyAttachmentContainer:(?)arg0 calendarDataContainerProviderdatabase;
+(?)_setFileSizeForAttachmentUUID:(?)arg0 attachmentURLdatabase;
+(?)_setFileSizeForAttachmentsWithInfodatabase;
+(?)_setLocalRelativePathForAttachmentUUID:(?)arg0 localRelativePathdatabase;
+(?)_updateLocalRelativeURLForAttachmentsWithInfodatabase;
+(?)migrateWithLegacyCalendarDataContainer:(?)arg0 calendarDataContainerProviderdatabase;
+(BOOL)_createNewContainerIfNeeded:(id)arg0 error:(*id)arg1 ;
+(BOOL)_moveAttachmentWithInfo:(id)arg0 error:(*id)arg1 ;
+(BOOL)_moveAttachmentsWithInfo:(id)arg0 error:(*id)arg1 ;
+(id)_attachmentInfoForLegacyAttachmentURL:(id)arg0 newAttachmentContainerForStore:(id)arg1 newCalendarDataContainer:(id)arg2 database:(struct CalDatabase *)arg3 attachmentUUID:(*id)arg4 ;
+(void)migrateDataClassProtectionForAttachmentsInLegacyCalendarDataContainer:(id)arg0 ;


@end


#endif