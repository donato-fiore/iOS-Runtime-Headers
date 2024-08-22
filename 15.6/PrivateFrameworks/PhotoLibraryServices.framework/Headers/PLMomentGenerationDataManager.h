// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMOMENTGENERATIONDATAMANAGER_H
#define PLMOMENTGENERATIONDATAMANAGER_H

@class PLXPCTransaction, CNContactStore, NSDictionary, PLPhotoLibraryPathManager, NSString, NSManagedObjectContext;
@protocol PLMomentGenerationDataManagement, PLHighlightItemModelReader;

#import <Foundation/Foundation.h>

#import "PLMomentGeneration.h"
#import "PLLibraryServicesManager.h"
#import "PLRoutineService.h"
#import "PLCameraAppWatcher.h"
#import "PLPhotoLibrary.h"

@interface PLMomentGenerationDataManager : NSObject <PLMomentGenerationDataManagement, PLHighlightItemModelReader>

 {
    PLXPCTransaction *_keepAliveTransaction;
    id *_reachabilityBlock;
    CNContactStore *_contactStore;
    PLMomentGeneration *_generator;
    NSDictionary *_generationOptions;
    BOOL _observingReachability;
    os_unfair_lock_s _lightweightMigrationLock;
    PLPhotoLibraryPathManager *_lightWeightMigrationPathManager;
    PLLibraryServicesManager *_libraryServicesManager;
    PLRoutineService *_routineManager;
}


@property (readonly, weak, nonatomic) CNContactStore *_contactStore;
@property (readonly, nonatomic) PLCameraAppWatcher *cameraWatcher; // ivar: _cameraWatcher
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *generationOptions;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLightweightMigrationManager; // ivar: _isLightweightMigrationManager
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (retain, nonatomic) PLPhotoLibrary *momentGenerationLibrary; // ivar: _momentGenerationLibrary
@property (nonatomic) NSInteger previousValidatedModelVersion; // ivar: _previousValidatedModelVersion
@property (nonatomic) BOOL previousValidationSucceeded; // ivar: _previousValidationSucceeded
@property (nonatomic) BOOL shouldPerformLightweightValidation; // ivar: _shouldPerformLightweightValidation
@property (readonly) Class superclass;


+(BOOL)isManagedObjectContextMomentarilyBlessed:(id)arg0 ;
+(void)initialize;
+(void)setManagerMomentarilyBlessed:(id)arg0 ;
-(BOOL)_batchDeleteForEntityName:(id)arg0 error:(*id)arg1 ;
-(BOOL)cameraIsActive;
-(BOOL)deleteAllHighlightsWithError:(*id)arg0 ;
-(BOOL)deleteAllMomentsWithError:(*id)arg0 ;
-(BOOL)hasChanges;
-(BOOL)isNetworkReachable;
-(BOOL)routineIsAvailable;
-(BOOL)save:(*id)arg0 ;
-(BOOL)wantsMomentReplayLogging;
-(Class)momentAssetDataClass;
-(Class)momentDataClass;
-(NSUInteger)hardGenerationBatchSizeLimit;
-(id)_currentHomeAddressDictionary;
-(id)_highlightsRelationshipKeyPathsForPrefetching;
-(id)_highlightsRelationshipKeyPathsForPrefetchingForKind:(unsigned short)arg0 ;
-(id)allAssetIDsNeedingLocationShiftWithError:(*id)arg0 ;
-(id)allAssetIDsToBeIncludedInMomentsWithError:(*id)arg0 ;
-(id)allAssetsToBeIncludedInMomentsWithError:(*id)arg0 ;
-(id)allEmptyPhotosHighlightsOfKind:(unsigned short)arg0 error:(*id)arg1 ;
-(id)allInvalidAssetsWithError:(*id)arg0 ;
-(id)allInvalidMomentIDsWithError:(*id)arg0 ;
-(id)allInvalidMomentsWithError:(*id)arg0 ;
-(id)allInvalidPhotosHighlightsOfAllKindsWithError:(*id)arg0 ;
-(id)allMomentIDsWithError:(*id)arg0 ;
-(id)allMomentsWithError:(*id)arg0 ;
-(id)allMomentsWithInvalidReverseLocationData;
-(id)allPhotosHighlightsOfAllKindsWithError:(*id)arg0 ;
-(id)allPhotosHighlightsOfKind:(unsigned short)arg0 error:(*id)arg1 ;
-(id)allPhotosHighlightsOfKind:(unsigned short)arg0 withPredicate:(id)arg1 error:(*id)arg2 ;
-(id)allPhotosHighlightsWithPredicate:(id)arg0 error:(*id)arg1 ;
-(id)assetWithUniqueID:(id)arg0 error:(*id)arg1 ;
-(id)assetsWithUniqueIDs:(id)arg0 error:(*id)arg1 ;
-(id)deletedObjects;
-(id)fetchChildHighlightItemsForHighlightItem:(id)arg0 ;
-(id)fetchNeighborHighlightItemsForHighlightItems:(id)arg0 ;
-(id)fetchParentHighlightItemsForHighlightItems:(id)arg0 ;
-(id)generator;
-(id)highlightsIntersectingDateInterval:(id)arg0 ofKind:(unsigned short)arg1 ;
-(id)homeAddressDictionary;
-(id)initWithLibraryServicesManager:(id)arg0 ;
-(id)initWithManagedObjectContext:(id)arg0 pathManagerForLightweightMigration:(id)arg1 ;
-(id)insertNewMoment;
-(id)insertNewPhotosHighlight;
-(id)insertedObjects;
-(id)invalidAssetsIgnoringAssetIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)lastLocationOfInterestVisit;
-(id)locationCoordinatesForAssetIDs:(id)arg0 ;
-(id)locationsOfInterest;
-(id)momentAnalysisTransactionWithName:(char *)arg0 ;
-(id)momentWithUniqueID:(id)arg0 error:(*id)arg1 ;
-(id)momentsBetweenDate:(id)arg0 andDate:(id)arg1 sorted:(BOOL)arg2 ;
-(id)momentsForAssetsWithUniqueIDs:(id)arg0 error:(*id)arg1 ;
-(id)momentsIntersectingDateInterval:(id)arg0 ;
-(id)momentsRequiringLocationProcessingWhenFrequentLocationsChangedWithError:(*id)arg0 ;
-(id)momentsSinceDate:(id)arg0 ;
-(id)momentsWithLocationTypeUnprocessedWithError:(*id)arg0 ;
-(id)momentsWithUniqueIDs:(id)arg0 error:(*id)arg1 ;
-(id)orphanedAssetIDsWithError:(*id)arg0 ;
-(id)replayLogPath;
-(id)updatedObjects;
-(void)_finalizeInit;
-(void)_networkReachabilityDidChange:(id)arg0 ;
-(void)_removeKeepAlive;
-(void)_updateKeepAlive;
-(void)beginObservingNetworkReachabilityChangesWithBlock:(id)arg0 ;
-(void)dealloc;
-(void)enumerateAssetsWithIDs:(id)arg0 usingBlock:(id)arg1 ;
-(void)fetchLocationsOfInterestIfNeeded;
-(void)invalidateAllHighlightSubtitles;
-(void)invalidateLocationDataForAssetsInMoment:(id)arg0 ;
-(void)invalidateLocationDataForAssetsWithOIDs:(id)arg0 ;
-(void)invalidateShiftedLocationForAllAssetsInMoments;
-(void)logRoutineInformation;
-(void)pendingChangesUpdated:(NSUInteger)arg0 ;
// -(void)performBlock:(id)arg0 synchronously:(unk)arg1 completionHandler:(BOOL)arg2  ;
// -(void)performBlock:(id)arg0 synchronously:(unk)arg1 priority:(BOOL)arg2 completionHandler:(NSInteger)arg3  ;
// -(void)performDataTransaction:(id)arg0 synchronously:(unk)arg1 completionHandler:(BOOL)arg2  ;
// -(void)performDataTransaction:(id)arg0 synchronously:(unk)arg1 priority:(BOOL)arg2 completionHandler:(NSInteger)arg3  ;
-(void)refreshAllObjects;
-(void)refreshObject:(id)arg0 mergeChanges:(BOOL)arg1 ;
-(void)reloadGenerationOptions;
-(void)resetOnFailure;
-(void)runPeriodicMaintenanceTasks:(NSUInteger)arg0 withTransaction:(id)arg1 ;
-(void)stopObservingNetworkReachabilityChanges;
-(void)verifyAndRepairOrphanedAssets:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif