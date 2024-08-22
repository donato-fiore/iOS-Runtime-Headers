// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCHANGENOTIFICATIONCENTER_H
#define PLCHANGENOTIFICATIONCENTER_H

@class NSNumber, NSMutableArray, NSMutableSet, NSDictionary, NSNotificationCenter;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLChangeList.h"
#import "PLContentChanges.h"
#import "PLManagedObjectContext.h"

@interface PLChangeNotificationCenter : NSObject {
    BOOL _isProcessingRemoteDidSave;
    int _cameraPreviewChangeListenerCount;
    NSNumber *_cameraPreviewChangedToken;
    NSObject<OS_dispatch_queue> *_notificationHandlingQueue;
    NSMutableArray *_snapshots;
    PLChangeList *_changedAlbumLists;
    PLContentChanges *_albumListsContent;
    PLChangeList *_changedAlbums;
    PLContentChanges *_albumsContent;
    PLChangeList *_changedAssets;
    NSMutableSet *_assetsWithCloudCommentChanges;
    PLContentChanges *_momentsContent;
    PLChangeList *_changedMoments;
    PLChangeList *_changedCloudFeedEntries;
    PLManagedObjectContext *_moc;
    NSMutableArray *_enqueuedNotifications;
    NSDictionary *_remoteNotificationData;
    BOOL _isOverloaded;
    NSMutableSet *_overloadedObjects;
}


@property (readonly, nonatomic) BOOL _shouldForceFetchingAlbumsToReload;
@property (readonly, retain, nonatomic) NSNotificationCenter *backingCenter;


+(id)allManagedObjectKeysStrategyWithContext:(id)arg0 ;
+(id)defaultCenter;
+(void)forceFetchingAlbumReload;
+(void)getInsertedAssetCount:(*NSUInteger)arg0 deletedAssetCount:(*NSUInteger)arg1 updatedAssets:(id)arg2 fromContextDidChangeNotification:(id)arg3 ;
-(BOOL)_isInterestedInUpdatesOfObject:(id)arg0 ;
-(id)_attributesOfInterestForObject:(id)arg0 ;
-(id)_keysOfInterestForObject:(id)arg0 ;
-(id)_orderedRelationshipsOfInterestForObject:(id)arg0 ;
-(id)_snapshotForObject:(id)arg0 ;
-(id)_takeSnapshotFromCommittedValuesOfObject:(id)arg0 ;
-(id)_takeSnapshotOfObject:(id)arg0 ;
-(id)_takeSnapshotOfObject:(id)arg0 useCommitedValues:(BOOL)arg1 ;
-(id)_toOneRelationshipsOfInterestForObject:(id)arg0 ;
-(id)addObserverForName:(id)arg0 object:(id)arg1 queue:(id)arg2 usingBlock:(id)arg3 ;
-(id)descriptionOfSplitChanges;
-(id)init;
-(id)observeCameraPreviewWellImageChangeOnQueue:(id)arg0 block:(id)arg1 ;
-(void)_cleanupState;
-(void)_enqueueAlbumChangeNotification:(id)arg0 ;
-(void)_enqueueAlbumListNotifications;
-(void)_enqueueAlbumNotifications;
-(void)_enqueueAssetChangeNotification;
-(void)_enqueueAssetContainerChangeNotification:(id)arg0 ;
-(void)_enqueueAssetContainerListChangeNotification:(id)arg0 ;
-(void)_enqueueCloudCommentsNotifications;
-(void)_enqueueCloudFeedEntriesChangeNotifications;
-(void)_enqueueInvitationRecordsChangeNotification:(id)arg0 ;
-(void)_enqueueMomentChangeNotifications;
-(void)_enqueueNotification:(id)arg0 object:(id)arg1 userInfo:(id)arg2 ;
-(void)_enqueueNotification:(id)arg0 object:(id)arg1 userInfoWithObjects:(*id)arg2 forKeys:(*id)arg3 count:(NSUInteger)arg4 ;
-(void)_enqueuePhotoLibraryNotifications;
-(void)_evaluateContainersWithUpdatedContent;
-(void)_evaluateUpdatedAssets;
-(void)_postEnqueuedNotifications;
-(void)_registerForCameraPreviewWellChanges;
-(void)_sendNotificationsForSplitChanges;
-(void)_splitContextDidChangeNotification:(id)arg0 ;
-(void)_takeSnapshotsFromContext:(id)arg0 forRemoteContextSaveNotification:(id)arg1 usingObjectIDs:(BOOL)arg2 ;
-(void)_unregisterForCameraPreviewWellChanges;
-(void)addAssetChangeObserver:(id)arg0 ;
-(void)addAssetContainerChangeObserver:(id)arg0 container:(id)arg1 ;
-(void)addAssetContainerListChangeObserver:(id)arg0 containerList:(id)arg1 ;
-(void)addCameraPreviewWellImageChangeObserver:(id)arg0 ;
-(void)addCloudCommentsChangeObserver:(id)arg0 asset:(id)arg1 ;
-(void)addCloudFeedEntriesObserver:(id)arg0 ;
-(void)addInvitationRecordsObserver:(id)arg0 ;
-(void)addObserver:(id)arg0 selector:(SEL)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)addShouldReloadObserver:(id)arg0 ;
-(void)dealloc;
-(void)enqueueNotification:(id)arg0 ;
-(void)enumerateIndexMappingCachesForObject:(id)arg0 withBlock:(id)arg1 ;
-(void)managedObjectContext:(id)arg0 didProcessRemoteContextSave:(id)arg1 usingObjectIDs:(BOOL)arg2 ;
-(void)managedObjectContext:(id)arg0 willProcessRemoteContextSave:(id)arg1 usingObjectIDs:(BOOL)arg2 isCoalescedEvent:(BOOL)arg3 ;
-(void)managedObjectContextWasOverloaded:(id)arg0 withNotificationData:(id)arg1 usingObjectIDs:(BOOL)arg2 ;
-(void)managedObjectContextWillBeOverloaded:(id)arg0 withNotificationData:(id)arg1 usingObjectIDs:(BOOL)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)postShouldReloadNotificationWithPhotoLibrary:(id)arg0 ;
-(void)processContextDidChangeNotification:(id)arg0 ;
-(void)processContextDidSaveObjectIDsNotification:(id)arg0 ;
-(void)removeAssetChangeObserver:(id)arg0 ;
-(void)removeAssetContainerChangeObserver:(id)arg0 container:(id)arg1 ;
-(void)removeAssetContainerListChangeObserver:(id)arg0 containerList:(id)arg1 ;
-(void)removeCameraPreviewWellImageChangeObserver:(id)arg0 ;
-(void)removeCloudCommentsChangeObserver:(id)arg0 asset:(id)arg1 ;
-(void)removeCloudFeedEntriesObserver:(id)arg0 ;
-(void)removeInvitationRecordsObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 name:(id)arg1 object:(id)arg2 ;
-(void)removeShouldReloadObserver:(id)arg0 ;


@end


#endif