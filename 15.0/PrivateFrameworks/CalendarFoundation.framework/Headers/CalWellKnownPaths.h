// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALWELLKNOWNPATHS_H
#define CALWELLKNOWNPATHS_H


#import <Foundation/Foundation.h>


@interface CalWellKnownPaths : NSObject



+(BOOL)checkOrCreatePath:(id)arg0 ;
+(id)calendarCachePath;
+(id)calendarClientIdConflictsPath;
+(id)calendarFileHandlerPath;
+(id)calendarSyncChangesPath;
+(id)calendarsFolderPath;
+(id)eventsPendingChangesPath;
+(id)mailInvitationDropPath;
+(id)realHomeDirectoryPath;
+(id)sandboxCalendarsFolderPath;
+(id)temporaryFilesPath;
+(void)initialize;
+(void)resetPaths;


@end


#endif