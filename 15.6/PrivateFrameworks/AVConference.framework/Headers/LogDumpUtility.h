// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LOGDUMPUTILITY_H
#define LOGDUMPUTILITY_H


#import <Foundation/Foundation.h>


@interface LogDumpUtility : NSObject



+(BOOL)createDirectory:(id)arg0 ;
+(id)createFileListSortedByTimestamp:(id)arg0 ;
+(id)getCachesDirectoryPath;
+(id)getDefaultLogDumpPath;
+(id)logFilename:(int)arg0 dumpID:(id)arg1 logNameType:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 ;
+(void)removeFilesInDirectory:(id)arg0 olderThan:(id)arg1 ;
+(void)removeOldFilesInDefaultLogDumpPath;


@end


#endif