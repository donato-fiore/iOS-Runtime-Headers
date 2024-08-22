// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUISIDEBANDMEDIALIBRARY_H
#define VUISIDEBANDMEDIALIBRARY_H

@class NSManagedObjectContext, NSPersistentContainer;
@protocol OS_dispatch_queue;


#import "VUIDeviceMediaLibrary.h"

@interface VUISidebandMediaLibrary : VUIDeviceMediaLibrary

@property (retain, nonatomic) NSManagedObjectContext *backgroundManagedObjectContext; // ivar: _backgroundManagedObjectContext
@property (retain, nonatomic) NSPersistentContainer *persistentContainer; // ivar: _persistentContainer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


+(void)initialize;
+(void)setDeleteAllVideosAndKeysOnInitializationForAppRemoval:(BOOL)arg0 ;
-(BOOL)_invalidateKeysForVideoManagedObject:(id)arg0 saveWhenDone:(BOOL)arg1 invalidateImmediately:(BOOL)arg2 ;
-(BOOL)_removeDownloadedMediaForVideoManagedObject:(id)arg0 markAsDeleted:(BOOL)arg1 saveWhenDone:(BOOL)arg2 invalidateImmediately:(BOOL)arg3 ;
-(NSUInteger)countOfDownloadingOrDownloadedVideosForNonMainQueue;
-(id)_downloadedVideosForNonSignedInUsers;
-(id)_imageLoadOperationWithParams:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 ;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg0 ;
-(id)_imageLoaderIdentifier;
-(id)_mainContextManagedObjectsForObjects:(id)arg0 ;
-(id)_managedObjectWithEntityName:(id)arg0 predicate:(id)arg1 createIfNeeded:(BOOL)arg2 wasCreated:(*BOOL)arg3 ;
-(id)_movieForCanonicalID:(id)arg0 createIfNeeded:(BOOL)arg1 wasCreated:(*BOOL)arg2 ;
-(id)_tvEpisodeForCanonicalID:(id)arg0 createIfNeeded:(BOOL)arg1 wasCreated:(*BOOL)arg2 ;
-(id)_tvSeasonForCanonicalID:(id)arg0 createIfNeeded:(BOOL)arg1 wasCreated:(*BOOL)arg2 ;
-(id)_tvSeriesForCanonicalID:(id)arg0 createIfNeeded:(BOOL)arg1 wasCreated:(*BOOL)arg2 ;
-(id)_videosMarkedAsDeleted;
-(id)allFpsKeyDeletionInfos;
-(id)enqueueFetchRequests:(id)arg0 completionHandler:(id)arg1 ;
-(id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id)arg0 ;
-(id)existingFpsKeyInfoForKeyURI:(id)arg0 ;
-(id)fpsKeyInfoForVideo:(id)arg0 keyURI:(id)arg1 createIfNeeded:(BOOL)arg2 wasCreated:(*BOOL)arg3 ;
-(id)imageInfoForSeries:(id)arg0 imageType:(NSUInteger)arg1 createIfNeeded:(BOOL)arg2 wasCreated:(*BOOL)arg3 ;
-(id)imageInfoForVideo:(id)arg0 imageType:(NSUInteger)arg1 createIfNeeded:(BOOL)arg2 wasCreated:(*BOOL)arg3 ;
-(id)initWithManager:(id)arg0 ;
-(id)mainContextVideoForVideo:(id)arg0 ;
-(id)performFetch:(id)arg0 ;
-(id)saveMediaEntity:(id)arg0 completionHandler:(id)arg1 ;
-(id)title;
-(id)videoForCanonicalID:(id)arg0 ;
-(id)videoForPlayable:(id)arg0 ;
-(id)videosWithDownloadState:(NSInteger)arg0 ;
-(void)_activeAccountDidChange:(id)arg0 ;
-(void)_deleteOrphanedDownloads;
-(void)_deleteVideoManagedObjects:(id)arg0 ;
-(void)_dumpDatabaseToLogIfEnabled;
-(void)_mainQueueManagedObjectContextDidSave:(id)arg0 ;
-(void)_migrateVideoExpirationDateAndAllowsManualRenewal;
-(void)_pruneVideosAtAppLaunchWithCompletion:(id)arg0 ;
-(void)_removeDownloadsForNonSignedInUsers;
-(void)dealloc;
-(void)deleteFPSKeyDeletionInfo:(id)arg0 ;
-(void)deleteFPSKeyDeletionInfos:(id)arg0 ;
-(void)invalidateKeysForVideoManagedObject:(id)arg0 ;
-(void)invalidateKeysForVideoManagedObjects:(id)arg0 ;
-(void)removeDownloadedMediaForVideoManagedObject:(id)arg0 markAsDeleted:(BOOL)arg1 invalidateImmediately:(BOOL)arg2 ;
-(void)removeDownloadedMediaForVideoManagedObjects:(id)arg0 markAsDeleted:(BOOL)arg1 invalidateImmediately:(BOOL)arg2 ;
-(void)saveChangesToManagedObjects;


@end


#endif