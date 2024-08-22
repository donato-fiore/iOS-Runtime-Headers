// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKFILEMANAGER_H
#define FBKFILEMANAGER_H


#import <Foundation/Foundation.h>


@interface FBKFileManager : NSObject



+(BOOL)humansCanReadFile:(id)arg0 ;
+(BOOL)isDirectory:(id)arg0 ;
+(id)applicationSupportDirectory;
+(id)cachedTemporaryDirectory;
+(id)containerURL;
+(id)draftDirectoryForFilerForm:(id)arg0 ;
+(id)draftDirectoryForFilerForm:(id)arg0 isTemporary:(BOOL)arg1 ;
+(id)draftDirectoryForFilerType:(NSInteger)arg0 ;
+(id)draftDirectoryForFilerType:(NSInteger)arg0 isTemporary:(BOOL)arg1 ;
+(id)draftsDirectory;
+(id)getUniqueDestinationURLForURL:(id)arg0 alwaysIndex:(BOOL)arg1 ;
+(id)getUniqueDestinationURLForURL:(id)arg0 alwaysIndex:(BOOL)arg1 forSourceURL:(id)arg2 ;
+(id)libraryDirectory;
+(id)temporaryDirectoryWithPathComponents:(id)arg0 ;
+(id)temporaryDraftDirectoryForFilerForm:(id)arg0 ;
+(void)deleteAllDraftDirectories;
+(void)setCachedTemporaryDirectory:(id)arg0 ;


@end


#endif