// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALMIGRATIONBACKUP_H
#define CALMIGRATIONBACKUP_H


#import <Foundation/Foundation.h>


@interface CalMigrationBackup : NSObject



+(BOOL)backupCalendarDirectory:(id)arg0 intoArchiveNamed:(id)arg1 error:(*id)arg2 ;
+(BOOL)removeExistingBackupWithArchiveName:(id)arg0 inCalendarDirectory:(id)arg1 error:(*id)arg2 ;
+(BOOL)shouldBackupCalendarDirectory:(id)arg0 withPrivacySafePathProvider:(id)arg1 ;


@end


#endif