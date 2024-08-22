// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDRESETCONFIGPOSTCLEANUP_H
#define HMDRESETCONFIGPOSTCLEANUP_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMDResetConfigPostCleanup : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_readExistingPostCleanupRecord;
+(id)filesToExcludeFromCacheDirectory;
+(id)logCategory;
+(id)resetConfigPostCleanupFileLocation;
+(id)sqlFileListToRemove:(id)arg0 fromRootDirectory:(id)arg1 ;
+(void)deleteFilesInsideDirectory:(id)arg0 excludingFiles:(id)arg1 shouldSkipDirectories:(BOOL)arg2 ;
+(void)deleteFilesInsideDirectory:(id)arg0 excludingFiles:(id)arg1 shouldSkipDirectories:(BOOL)arg2 usingFileManager:(id)arg3 ;
+(void)performAnyPostCleanupStepsIfNecessary;
+(void)performIndividualCleanupTasks:(NSUInteger)arg0 onRootDirectory:(id)arg1 ;
+(void)performResetConfigPostCleanupSteps:(NSUInteger)arg0 dueToReason:(NSUInteger)arg1 ;
+(void)removeFilesAtLocation:(id)arg0 ;
+(void)removeFilesAtLocation:(id)arg0 usingFileManager:(id)arg1 ;
+(void)writePostCleanupRecordToRemoveAllCoreDataFilesWithReason:(NSUInteger)arg0 ;
+(void)writePostCleanupRecordWithReason:(NSUInteger)arg0 steps:(NSUInteger)arg1 ;


@end


#endif