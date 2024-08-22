// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTCONSTANTS_H
#define MTCONSTANTS_H


#import <Foundation/Foundation.h>


@interface MTConstants : NSObject



+(BOOL)excludeDirectoryFromBackup:(id)arg0 ;
+(id)_watchManagedAssetsDirectoryURL;
+(id)attributesForNewDirectory;
+(id)cachesDirectory;
+(id)documentsDirectory;
+(id)libraryDirectory;
+(id)managedAssetsDirectoryURL;
+(id)managedObjectModelDefinitionURL;
+(id)sharedCacheDirectory;
+(id)sharedContainerURL;
+(id)sharedDocumentsDirectory;
+(void)_repairFilePermissionsIfNeeded;
+(void)removeExcludeFromBackupFlagFromDirectoryIfNeeded:(id)arg0 ;
+(void)repairPermissionsOfDirectoryIfNeeded:(id)arg0 ;


@end


#endif