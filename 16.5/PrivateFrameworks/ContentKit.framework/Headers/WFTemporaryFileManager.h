// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTEMPORARYFILEMANAGER_H
#define WFTEMPORARYFILEMANAGER_H


#import <Foundation/Foundation.h>


@interface WFTemporaryFileManager : NSObject



+(id)appGroupIdentifier;
+(id)createSharedTemporaryDirectoryWithFilename:(id)arg0 ;
+(id)createSharedTemporaryFileWithFilename:(id)arg0 ;
+(id)createTemporaryDirectoryWithFilename:(id)arg0 ;
+(id)createTemporaryDirectoryWithFilename:(id)arg0 inDirectory:(id)arg1 ;
+(id)createTemporaryFileWithFilename:(id)arg0 ;
+(id)createTemporaryFileWithFilename:(id)arg0 inDirectory:(id)arg1 ;
+(id)createUniqueDirectoryInDirectory:(id)arg0 ;
+(id)proposedFileURLForFilename:(id)arg0 atTheRootOfDirectory:(id)arg1 ;
+(id)proposedFileURLForFilename:(id)arg0 atTheRootOfDirectory:(id)arg1 isDirectory:(BOOL)arg2 ;
+(id)proposedFileURLForFilename:(id)arg0 inDirectory:(id)arg1 ;
+(id)proposedFileURLForFilename:(id)arg0 inDirectory:(id)arg1 isDirectory:(BOOL)arg2 ;
+(id)proposedSharedTemporaryFileURLForFilename:(id)arg0 ;
+(id)proposedSharedTemporaryFileURLForFilename:(id)arg0 isDirectory:(BOOL)arg1 ;
+(id)proposedTemporaryFileURLForFilename:(id)arg0 ;
+(id)proposedTemporaryFileURLForFilename:(id)arg0 isDirectory:(BOOL)arg1 ;
+(id)sharedAppGroupDirectoryURL;
+(id)sharedTemporaryDirectoryURL;
+(id)temporaryDirectoryURL;
+(id)topLevelTemporaryDirectoryURL;
+(id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)arg0 error:(*id)arg1 ;
+(void)clearTemporaryFiles;
+(void)configureBackupFlagAtURL:(id)arg0 ;
+(void)configureBackupFlagIfNecessary;
+(void)configureFileProtectionAtPath:(id)arg0 ;
+(void)configureTemporaryDirectoryProtectionIfNecessary;
+(void)createSharedDirectoryIfNecessary;
+(void)markDirectoryAsPurgeableAtURL:(id)arg0 ;
+(void)setUpDirectories;


@end


#endif