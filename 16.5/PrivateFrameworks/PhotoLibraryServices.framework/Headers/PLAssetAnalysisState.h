// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLASSETANALYSISSTATE_H
#define PLASSETANALYSISSTATE_H

@class NSString, NSDate;


#import "PLManagedObject.h"
#import "PLManagedAsset.h"

@interface PLAssetAnalysisState : PLManagedObject

@property (nonatomic) int analysisState;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (retain, nonatomic) NSString *assetUUID;
@property (retain, nonatomic) NSDate *ignoreUntilDate;
@property (retain, nonatomic) NSDate *lastIgnoredDate;
@property (nonatomic) CGFloat sortToken;
@property (nonatomic) int workerFlags;
@property (nonatomic) short workerType;


+(BOOL)_bulkUpdateAnalysisStatesTo:(int)arg0 predicate:(id)arg1 library:(id)arg2 error:(*id)arg3 ;
+(BOOL)cleanupInvalidIgnoreUntilDatesInLibraryAtURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)clearIgnoreUntilDatesInLibraryAtURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)isUnitTestWorker:(short)arg0 ;
+(BOOL)markStatesProcessedForWorkerType:(short)arg0 library:(id)arg1 error:(*id)arg2 ;
+(BOOL)resetFaceCropAnalysisStateInLibraryAtURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)resetPendingStatesInLibraryAtURL:(id)arg0 error:(*id)arg1 ;
+(NSUInteger)_countOfAssetsAllowedForProcessingInLibrary:(id)arg0 error:(*id)arg1 ;
+(id)_batchOperationQueue;
+(id)_countOfAnalysisStatesByWorkerTypeWithPredicate:(id)arg0 analysisState:(int)arg1 forDeletedAssets:(BOOL)arg2 inContext:(id)arg3 error:(*id)arg4 ;
+(id)_managedObjectContextForStateChangesWithLibraryURL:(id)arg0 ;
+(id)_managedObjectContextForStateChangesWithPersistentStoreCoordinator:(id)arg0 ;
+(id)_sanitizeChanges:(id)arg0 ;
+(id)_subArrayOfChanges:(id)arg0 toRetryWithConflicts:(id)arg1 ;
+(id)analysisCountsForWorkerType:(short)arg0 library:(id)arg1 ;
+(id)assetUUIDsFromAssetObjectIDs:(id)arg0 library:(id)arg1 whereAllWorkerTypes:(id)arg2 matchState:(id)arg3 ;
+(id)deletedAssetUUIDsForAnalysisByWorkerType:(short)arg0 fetchLimit:(NSUInteger)arg1 inLibrary:(id)arg2 error:(*id)arg3 ;
+(id)entityName;
+(id)keyPathDictionaryWithWorkerType:(short)arg0 workerFlags:(int)arg1 analysisState:(int)arg2 lastIgnoredDate:(id)arg3 ignoreUntilDate:(id)arg4 ;
+(int)defaultWorkerFlagsForWorkerType:(short)arg0 ;
+(void)_removeAnalysisRecordsWithPredicate:(id)arg0 library:(id)arg1 ;
+(void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)arg0 forWorkerType:(short)arg1 library:(id)arg2 ;
+(void)removeAnalysisRecordsWithNoAssetOrUUIDUseMaintenanceMode:(BOOL)arg0 library:(id)arg1 ;
+(void)requestAnalysisCountsInLibrary:(id)arg0 completion:(id)arg1 ;
+(void)requestCountOfAnalysisRecordsForDeletedAssetsInLibrary:(id)arg0 completion:(id)arg1 ;
-(id)debugLogDescription;
-(id)mutableKeyPathDictionary;
-(void)unionWorkerFlags:(int)arg0 ;


@end


#endif