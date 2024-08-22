// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDUPEMANAGER_H
#define PLDUPEMANAGER_H

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSCountedSet, NSSet;

#import <Foundation/Foundation.h>

#import "PLPhotoLibrary.h"

@interface PLDupeManager : NSObject {
    NSMutableArray *_normalAssetsObjectIDsToAnalyze;
    NSMutableDictionary *_cloudAssetsToAnalyze;
    NSMutableArray *_assetsWithUpdatedVisibility;
    BOOL _doneWithCloudAssets;
    BOOL _isRebuilding;
    NSMutableSet *_normalInserts;
    NSMutableSet *_cloudInserts;
    NSCountedSet *_pauseReasons;
    NSSet *_softPauseReasons;
    CGFloat _rebuildStartTime;
}


@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary; // ivar: _photoLibrary


+(BOOL)_computeHashForAsset:(id)arg0 ;
+(BOOL)_resetDupesAnalysisInManagedObjectContext:(id)arg0 pathManager:(id)arg1 ;
+(BOOL)resetDupesAnalysisForOfflineStore:(id)arg0 pathManager:(id)arg1 ;
+(id)_hashForFileAtPath:(id)arg0 utiType:(id)arg1 ;
+(id)hashForAsset:(id)arg0 ;
+(id)placeholderHash;
+(void)_setPlaceHolderHashOnAsset:(id)arg0 ;
-(BOOL)_analyzeDupeForCloudAssetsAndHashes:(id)arg0 andPublicGlobalUUIDs:(id)arg1 forManagedObjectContext:(id)arg2 ;
-(BOOL)_prepareCloudAssetsToAnalyzeForManagedObjectContext:(id)arg0 ;
-(id)_duplicateCloudAssetForHash:(id)arg0 orPublicGlobalUUID:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(short)_adjustCloudAssetVisibilityStateForManagedObjectContext:(id)arg0 ;
-(short)_analyzeDupesForCloudInsertsForManagedObjectContext:(id)arg0 ;
-(short)_analyzeDupesForNormalInsertsForManagedObjectContext:(id)arg0 ;
-(short)_analyzeNormalAssetsForManagedObjectContext:(id)arg0 ;
-(short)_computeAssetHashesForManagedObjectContext:(id)arg0 ;
-(short)_computeCloudAssetHashesForManagedObjectContext:(id)arg0 ;
-(void)_analyzeDupeForNormalAsset:(id)arg0 ;
-(void)_analyzeDupes;
-(void)_analyzeDupesForRebuild;
-(void)_continueAnalysis;
-(void)_continueAnalysisForRebuild;
-(void)_continueAnalysisForRebuildOrPause;
-(void)_noteAssetVisibilityDidChange:(id)arg0 ;
// -(void)_performAnalysisTransaction:(id)arg0 completionHandler:(unk)arg1  ;
-(void)_removeCloudAssetFromAnalysis:(id)arg0 ;
-(void)_resetSoftPauseReasons;
-(void)_updateVisibilityState:(short)arg0 forAsset:(id)arg1 ;
-(void)analyzeDupesWithNormalInserts:(id)arg0 cloudInserts:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)launchDupeAnalysisIfNeeded;
-(void)pauseAnalysisWithReason:(id)arg0 ;
-(void)persistPublicGlobalUUIDsForAssets:(id)arg0 completionHandler:(id)arg1 ;
-(void)resetDupesAnalysis;
-(void)resumeAnalysisWithReason:(id)arg0 ;


@end


#endif