// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEUTILS_H
#define DEUTILS_H


#import <Foundation/Foundation.h>


@interface DEUtils : NSObject



+(BOOL)copyAllFilesFromDir:(id)arg0 toDir:(id)arg1 ;
+(BOOL)copyAllFilesFromDir:(id)arg0 toDir:(id)arg1 keepSourceDir:(BOOL)arg2 ;
+(BOOL)copyFile:(id)arg0 toDir:(id)arg1 ;
+(BOOL)isValidDirectory:(id)arg0 ;
+(NSUInteger)getDirectorySize:(id)arg0 ;
+(NSUInteger)getFileSystemItemSize:(id)arg0 ;
+(id)copyAndReturn:(id)arg0 toDir:(id)arg1 ;
+(id)copyAndReturn:(id)arg0 toDir:(id)arg1 withNewFileName:(id)arg2 ;
+(id)copyItem:(id)arg0 toDestinationDir:(id)arg1 zipped:(BOOL)arg2 ;
+(id)copyPath:(id)arg0 toDestinationDir:(id)arg1 zipped:(BOOL)arg2 ;
+(id)copyPaths:(id)arg0 toDestinationDir:(id)arg1 withZipName:(id)arg2 ;
+(id)createUserOwnedDirectoryAtUrl:(id)arg0 ;
+(id)dirForTarGz:(id)arg0 ;
+(id)enumeratorForAllItems:(id)arg0 ;
+(id)findAllItems:(id)arg0 includeDirs:(BOOL)arg1 ;
+(id)findAllfiles:(id)arg0 ;
+(id)findEntriesInDirectory:(id)arg0 createdAfter:(id)arg1 matchingPattern:(id)arg2 ;
+(id)lsDir:(id)arg0 ;
+(id)lsDir:(id)arg0 sorted:(BOOL)arg1 ;
+(id)processErrorResponse:(id)arg0 ;
+(id)tarGzForDirectoryUrl:(id)arg0 ;
+(id)tarGzForDirectoryUrl:(id)arg0 validatesUrl:(BOOL)arg1 ;
+(id)uniqueDateString;
+(id)uniqueTemporaryDirectory;
+(id)urlByRemovingComponentsBefore:(id)arg0 source:(id)arg1 keepComponent:(BOOL)arg2 ;
+(id)userFileAttributes;
+(id)userLibraryDirectoryForApp:(id)arg0 ;
+(void)excludeFromBackup:(id)arg0 ;
+(void)removeFile:(id)arg0 ;


@end


#endif