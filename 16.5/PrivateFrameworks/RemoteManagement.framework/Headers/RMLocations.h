// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMLOCATIONS_H
#define RMLOCATIONS_H


#import <Foundation/Foundation.h>


@interface RMLocations : NSObject



+(BOOL)fixFilePermissionsForURL:(id)arg0 ;
+(NSInteger)currentDomain;
+(id)URLWithResolvedSymlinksFromURL:(id)arg0 error:(*id)arg1 ;
+(id)_applicationSupportChildDirectoryURLInDomain:(NSInteger)arg0 createIfNeeded:(BOOL)arg1 childName:(id)arg2 descriptor:(id)arg3 ;
+(id)_dataVaultChildDirectoryURLInDomain:(NSInteger)arg0 createIfNeeded:(BOOL)arg1 childName:(id)arg2 descriptor:(id)arg3 ;
+(id)_rootDirectoryURLInDomain:(NSInteger)arg0 error:(*id)arg1 ;
+(id)baseDirectoryURLCreateIfNeeded:(BOOL)arg0 ;
+(id)baseDirectoryURLInDomain:(NSInteger)arg0 createIfNeeded:(BOOL)arg1 ;
+(id)darwinCacheDirectoryURL;
+(id)darwinTemporaryDirectoryURL;
+(id)darwinUserDirectoryURL;
+(id)dataVaultDirectoryURLCreateIfNeeded:(BOOL)arg0 ;
+(id)dataVaultDirectoryURLInDomain:(NSInteger)arg0 createIfNeeded:(BOOL)arg1 ;
+(id)defaultsOverrideFileURLCreateIfNeeded:(BOOL)arg0 ;
+(id)defaultsOverrideFileURLInDomain:(NSInteger)arg0 createIfNeeded:(BOOL)arg1 ;
+(id)homeDirectoryURL;
+(id)httpLoggingDirectoryURLCreateIfNeeded:(BOOL)arg0 ;
+(id)httpLoggingDirectoryURLInDomain:(NSInteger)arg0 createIfNeeded:(BOOL)arg1 ;
+(id)identityDirectoryURLCreateIfNeeded:(BOOL)arg0 ;
+(id)identityDirectoryURLInDomain:(NSInteger)arg0 createIfNeeded:(BOOL)arg1 ;
+(id)managedObjectModelURL;
+(id)migrationStatusFileURLCreateIfNeeded:(BOOL)arg0 ;
+(id)migrationStatusFileURLInDomain:(NSInteger)arg0 createIfNeeded:(BOOL)arg1 ;
+(id)oldBaseDirectoryURLInSystemDomain;
+(id)persistentStoreDirectoryURLCreateIfNeeded:(BOOL)arg0 ;
+(id)persistentStoreDirectoryURLInDomain:(NSInteger)arg0 createIfNeeded:(BOOL)arg1 ;
+(id)persistentStoreURLCreateIfNeeded:(BOOL)arg0 ;
+(id)persistentStoreURLInDomain:(NSInteger)arg0 createIfNeeded:(BOOL)arg1 ;
+(id)statusDirectoryURLCreateIfNeeded:(BOOL)arg0 ;
+(id)statusDirectoryURLInDomain:(NSInteger)arg0 createIfNeeded:(BOOL)arg1 ;
+(id)xpcServiceDirectoryURL;
+(void)_oneTimeDataVaultConversionInDomain:(NSInteger)arg0 dataVaultDirectoryURL:(id)arg1 ;


@end


#endif