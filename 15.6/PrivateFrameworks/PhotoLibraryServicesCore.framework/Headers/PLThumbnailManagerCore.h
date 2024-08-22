// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLTHUMBNAILMANAGERCORE_H
#define PLTHUMBNAILMANAGERCORE_H

@class NSMutableDictionary, NSLock, NSArray;
@protocol PLThumbPersistenceManager;

#import <Foundation/Foundation.h>

#import "PLPhotoLibraryPathManager.h"

@interface PLThumbnailManagerCore : NSObject {
    NSMutableDictionary *_thumbnailConfigurationDict;
    os_unfair_lock_s _ivarLock;
    NSLock *_thumbManagersLock;
    id<PLThumbPersistenceManager> *_lastUsedThumbManager;
    unsigned short _lastUsedThumbManagerFormatID;
    NSArray *_fastImageTables;
}


@property (readonly) PLPhotoLibraryPathManager *pathManager; // ivar: _pathManager
@property (readonly) NSMutableDictionary *thumbManagersByFormat; // ivar: _thumbManagersByFormat


+(BOOL)_hasTableChangesOnlyFromFormatIDs:(id)arg0 toFormatIDs:(id)arg1 ;
+(BOOL)_hasTableFormatsAndAllAreCompressedForFormatIDs:(id)arg0 ;
+(BOOL)_isSuppressingTargetConfigComparedToSavedConfigForPathManager:(id)arg0 ;
+(BOOL)hasThumbnailConfigMismatchWithPathManager:(id)arg0 comparedToConfigPhase:(NSInteger)arg1 ;
+(BOOL)isMissingThumbnailTablesWithPathManager:(id)arg0 ;
+(BOOL)isSuppressingTargetConfigDueToPendingThumbMigrationForPathManager:(id)arg0 ;
+(BOOL)wantsTableOnlyRebuildForThumbnailConfigDict:(id)arg0 ;
+(NSInteger)requiredThumbnailResetTypeWithPathManager:(id)arg0 comparedToConfigPhase:(NSInteger)arg1 ;
+(id)_configurationThumbnailFormatIDsWithPathManager:(id)arg0 ;
+(id)_formatIDsForIthmbFilesWithPathManager:(id)arg0 ;
+(id)_generateTableFormatsFromFormatIDs:(id)arg0 ;
+(id)_generateUncompressedImageTableSpecificationsForRunningConfigWithPathManager:(id)arg0 ;
+(id)_thumbnailFormatsFromIDs:(id)arg0 ;
+(id)supportedThumbnailFormatIDsForDeviceConfiguration:(id)arg0 ;
+(id)tableThumbnailFormatsForConfigPhase:(NSInteger)arg0 withPathManager:(id)arg1 ;
+(id)thumbnailConfigurationDictWithPathManager:(id)arg0 ;
+(id)thumbnailConfigurationPathWithPathManager:(id)arg0 ;
+(id)thumbnailFormatIDsForConfigPhase:(NSInteger)arg0 withPathManager:(id)arg1 ;
+(id)thumbnailFormatsForConfigPhase:(NSInteger)arg0 withPathManager:(id)arg1 ;
+(id)uncompressedImageTableSpecificationsWithPathManager:(id)arg0 ;
+(int)configurationThumbnailVersionWithPathManager:(id)arg0 ;
+(int)thumbnailVersionForConfigPhase:(NSInteger)arg0 withPathManager:(id)arg1 ;
+(void)invalidateCachedConfig;
+(void)invalidateIsSuppressingTargetConfigDueToPendingThumbMigrationForPathManager:(id)arg0 ;
+(void)markThumbnailConfigurationForTableOnlyRebuildForThumbnailConfigDict:(id)arg0 ;
+(void)markThumbnailConfigurationTableOnlyRebuildFinishedForThumbnailConfigDict:(id)arg0 ;
+(void)removeThumbnailTablesUnsupportedOnly:(BOOL)arg0 withPathManager:(id)arg1 ;
+(void)stampThumbnailConfiguration:(id)arg0 toFile:(BOOL)arg1 withPathManager:(id)arg2 ;
-(id)_thumbManagerForFormatID:(unsigned short)arg0 ;
-(id)fastThumbPersistenceManagers;
-(id)initWithPhotoLibraryPathManager:(id)arg0 ;
-(id)thumbManagerForFormatID:(unsigned short)arg0 thumbFileManagerClass:(Class)arg1 ;
-(void)dealloc;


@end


#endif