// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLFILEUTILITIES_H
#define PLFILEUTILITIES_H


#import <Foundation/Foundation.h>


@interface PLFileUtilities : NSObject



+(BOOL)URLIsInTrash:(id)arg0 ;
+(BOOL)changeFileOwnerToMobileAtPath:(id)arg0 error:(*id)arg1 ;
+(BOOL)changeFileOwnerToMobileAtPath:(id)arg0 error:(*id)arg1 usingFileManager:(id)arg2 ;
+(BOOL)cloneFileAtPath:(id)arg0 toPath:(id)arg1 error:(*id)arg2 ;
+(BOOL)copyItemAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)createDirectoryAtPath:(id)arg0 error:(*id)arg1 ;
+(BOOL)createDirectoryAtPath:(id)arg0 error:(*id)arg1 usingFileManager:(id)arg2 ;
+(BOOL)filePath:(id)arg0 hasPrefix:(id)arg1 ;
+(BOOL)filePath:(id)arg0 isEqualToFilePath:(id)arg1 ;
+(BOOL)filePathIsSubpathOfSyncRoot:(id)arg0 ;
+(BOOL)fileURL:(id)arg0 isEqualToFileURL:(id)arg1 ;
+(BOOL)hasDiskSpaceToCopyFileAtURL:(id)arg0 ;
+(BOOL)ingestItemAtURL:(id)arg0 toURL:(id)arg1 type:(NSInteger)arg2 options:(NSUInteger)arg3 capabilities:(id)arg4 error:(*id)arg5 ;
+(BOOL)isFileExistsError:(id)arg0 ;
+(BOOL)removeDisconnectedSQLiteDatabaseFileWithPath:(id)arg0 error:(*id)arg1 ;
+(BOOL)removeFilesInDirectoryAtURL:(id)arg0 withPrefix:(id)arg1 error:(*id)arg2 progress:(id)arg3 ;
+(BOOL)secureMoveItemAtURL:(id)arg0 toURL:(id)arg1 capabilities:(id)arg2 error:(*id)arg3 ;
+(BOOL)stripExtendedAttributesFromFileAtURL:(id)arg0 inDomain:(id)arg1 error:(*id)arg2 ;
+(BOOL)stripImmutableFlagIfNecessaryFromFileAtPath:(id)arg0 ;
+(NSInteger)directoryEntryCountAtURL:(id)arg0 error:(*id)arg1 ;
+(NSInteger)fileLengthForFilePath:(id)arg0 ;
+(id)_defaultSystemLibraryPath;
+(id)_mobileOwnerAttributes;
+(id)defaultSystemLibraryURL;
+(id)defaultSystemPhotoDCIMDirectory;
+(id)defaultSystemPhotoDataCPLDirectory;
+(id)defaultSystemPhotoDataDirectory;
+(id)defaultSystemPhotoDataMiscDirectory;
+(id)descriptionForFileIngestionType:(NSInteger)arg0 ;
+(id)embeddedHomeDirectory;
+(id)fileManager;
+(id)proxyLockCoordinatingFilePathForDatabaseDirectory:(id)arg0 databaseName:(id)arg1 ;
+(id)proxyLockFilePathForDatabasePath:(id)arg0 ;
+(id)realPathForPath:(id)arg0 error:(*id)arg1 ;
+(id)realSystemPhotoLibraryPath;
+(id)redactedDescriptionForFileURL:(id)arg0 ;
+(id)redactedDescriptionForPath:(id)arg0 ;
+(id)systemLibraryURL;


@end


#endif