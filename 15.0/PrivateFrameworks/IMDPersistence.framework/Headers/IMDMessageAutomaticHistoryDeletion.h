// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDMESSAGEAUTOMATICHISTORYDELETION_H
#define IMDMESSAGEAUTOMATICHISTORYDELETION_H


#import <Foundation/Foundation.h>


@interface IMDMessageAutomaticHistoryDeletion : NSObject



+(BOOL)isDirCreationDateAtPath:(id)arg0 olderThanDays:(NSInteger)arg1 ;
+(BOOL)isFileAtDirPath:(id)arg0 olderThanDays:(NSInteger)arg1 ;
+(BOOL)isFileHeaderDateAtPath:(id)arg0 olderThanDays:(NSInteger)arg1 ;
+(BOOL)isOlderThanDays:(NSInteger)arg0 fromDate:(id)arg1 ;
+(id)_getDirSubDirURLsForDirPath:(id)arg0 error:(*id)arg1 ;
+(id)_getFilePathNotDSStore:(id)arg0 ;
+(id)_getPathAttributesForPath:(id)arg0 ;
+(id)_getiChatFileMetadataForPath:(id)arg0 ;
+(void)cleanDatabase;
+(void)cleanUpOrphanAttachments;
+(void)deleteDirectoryAtPath:(id)arg0 ;
+(void)deleteMessagesAndAttachmentsAfterDays:(NSInteger)arg0 ;
+(void)deleteSpolightArchivedFiles;


@end


#endif