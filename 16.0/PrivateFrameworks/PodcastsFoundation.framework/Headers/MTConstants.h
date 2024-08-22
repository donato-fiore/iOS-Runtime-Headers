// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTCONSTANTS_H
#define MTCONSTANTS_H


#import <Foundation/Foundation.h>


@interface MTConstants : NSObject



+(BOOL)excludeDirectoryFromBackup:(id)arg0 ;
+(id)_watchManagedAssetsDirectoryURL;
+(id)cachesDirectory;
+(id)documentsDirectory;
+(id)managedAssetsDirectoryURL;
+(id)managedObjectModelDefinitionURL;
+(id)sharedCacheDirectory;
+(id)sharedContainerURL;
+(id)sharedDocumentsDirectory;
+(void)removeExcludeFromBackupFlagFromDirectoryIfNeeded:(id)arg0 ;


@end


#endif