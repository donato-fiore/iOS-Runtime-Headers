// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPHOTOLIBRARYPATHMANAGER_H
#define PLPHOTOLIBRARYPATHMANAGER_H

@class NSString, NSURL;
@protocol PLPhotoLibraryPathManager;

#import <Foundation/Foundation.h>

#import "PLPhotoLibraryPathManagerCore.h"
#import "PLFileSystemCapabilities.h"

@interface PLPhotoLibraryPathManager : NSObject <PLPhotoLibraryPathManager>

 {
    PLPhotoLibraryPathManagerCore *_internalPathManager;
    NSString *_singletonPhotoLibraryPath;
    unsigned char _format;
}


@property (readonly, copy) NSString *assetUUIDRecoveryMappingPath;
@property (readonly, copy) NSString *baseDirectory;
@property (readonly) unsigned short bundleScope;
@property (readonly) PLFileSystemCapabilities *capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isDCIM;
@property (readonly) BOOL isUBF;
@property (readonly, copy) NSURL *libraryURL;
@property (readonly) Class superclass;


+(BOOL)bundleScopeShouldBePersistedForRebuild:(unsigned short)arg0 ;
+(BOOL)ignoreFilesystemCheckForWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
+(BOOL)isMultiLibraryModeEnabled;
+(BOOL)isSystemLibraryURLDefined;
+(BOOL)isSystemPhotoLibraryURL:(id)arg0 ;
+(BOOL)setSystemLibraryURL:(id)arg0 options:(unsigned short)arg1 error:(*id)arg2 ;
+(BOOL)shouldAutoUpgradeWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
+(BOOL)shouldProcessHighlightsForWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
+(NSInteger)wellKnownPhotoLibraryIdentifierForURL:(id)arg0 ;
+(NSUInteger)libraryCreateOptionsForWellKnownLibraryIdentifier:(NSInteger)arg0 ;
+(id)managedPathWithUuid:(char *)arg0 base:(char *)arg1 fileMarker:(char *)arg2 extension:(char *)arg3 ;
+(id)systemLibraryBaseDirectory;
+(id)systemLibraryPathManager;
+(id)systemLibraryURL;
+(id)wellKnownPhotoLibraryURLForIdentifier:(NSInteger)arg0 ;
+(void)assertSingleLibraryMode;
+(void)enableMultiLibraryMode;
+(void)throwMultiLibraryAPIMisuse;
+(void)throwMultiLibraryAPIMisuseForLibraryPath:(id)arg0 ;
-(BOOL)createTimeMachineExclusionPathsWithError:(*id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithBaseDirectory:(id)arg0 ;
-(id)initWithLibraryURL:(id)arg0 ;
-(id)initWithLibraryURL:(id)arg0 bundleScope:(unsigned short)arg1 ;
-(id)initWithLibraryURL:(id)arg0 bundleScope:(unsigned short)arg1 libraryFormat:(unsigned char)arg2 ;
-(id)rebuildHistoryFilePath;
-(id)redactedDescription;
-(id)sqliteErrorIndicatorFilePath;
-(id)timeMachineExclusionPathForPathType:(unsigned char)arg0 ;
-(unsigned char)_bundleFormatFromLibraryURL:(id)arg0 libraryFormat:(unsigned char)arg1 ;
-(void)setBackupExclusionAttributesForWellKnownLibrariesOrWithCreateOptions:(NSUInteger)arg0 ;
-(void)setOrCompareLibraryURL:(id)arg0 ;


@end


#endif