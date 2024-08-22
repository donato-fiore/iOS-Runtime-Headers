// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XBAPPLICATIONSNAPSHOTMANIFESTIMPL_H
#define XBAPPLICATIONSNAPSHOTMANIFESTIMPL_H

@class NSMutableDictionary, NSFileManager, BSContinuousMachTimer, BSAtomicSignal, NSMutableArray, NSString;
@protocol NSSecureCoding, BSDescriptionProviding;


#import "XBApplicationSnapshotManifest.h"
#import "XBSnapshotContainerIdentity.h"
#import "XBSnapshotManifestIdentity.h"

@interface XBApplicationSnapshotManifestImpl : XBApplicationSnapshotManifest <NSSecureCoding, BSDescriptionProviding>

 {
    NSMutableDictionary *_snapshotGroupsByID;
    NSFileManager *_imageAccessFileManger;
    BSContinuousMachTimer *_reapingTimer;
    BSAtomicSignal *_invalidatedSignal;
    NSUInteger _clientCount;
    NSUInteger _pendingOperations;
    NSMutableArray *_archiveSchedulingQueue_synchronizeCompletions;
    BOOL _archiveSchedulingQueue_dirty;
    BOOL _archiveSchedulingQueue_scheduled;
    BOOL _logContainerIdentifierDirty;
    os_unfair_lock_s _accessLock;
    NSString *_baseLogIdentifier;
    NSString *_logIdentifier;
}


@property (readonly, copy, nonatomic) XBSnapshotContainerIdentity *containerIdentity; // ivar: _containerIdentity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) XBSnapshotManifestIdentity *identity; // ivar: _identity
@property (readonly) Class superclass;


+(BOOL)isUnderMemoryPressure;
+(BOOL)supportsSecureCoding;
+(NSInteger)_outputFormatForSnapshot:(id)arg0 ;
+(id)_snapshotPredicateForRequest:(id)arg0 ;
+(id)acquireManifestForContainerIdentity:(id)arg0 store:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
+(void)_configureSnapshot:(id)arg0 withCompatibilityInfo:(id)arg1 forLaunchRequest:(id)arg2 ;
+(void)_workloop_noteManifestInvalidated:(id)arg0 ;
+(void)initialize;
+(void)relinquishManifest:(id)arg0 ;
-(BOOL)_access_snapshotsConsideredUnpurgableByAPFS;
-(BOOL)_access_validateWithContainerIdentity:(id)arg0 ;
-(BOOL)_imageAccessQueue_saveData:(id)arg0 forSnapshot:(id)arg1 ;
-(BOOL)_invalidate;
-(BOOL)_validateWithContainerIdentity:(id)arg0 ;
-(BOOL)snapshotsConsideredUnpurgableByAPFS;
-(id)_access_allSnapshotGroups;
-(id)_access_snapshotGroupForID:(id)arg0 creatingIfNeeded:(BOOL)arg1 ;
-(id)_access_snapshotsForGroupIDs:(id)arg0 ;
-(id)_access_snapshotsForGroupIDs:(id)arg0 matchingPredicate:(id)arg1 ;
-(id)_access_snapshotsMatchingPredicate:(id)arg0 ;
-(id)_allSnapshotGroups;
-(id)_createSnapshotWithGroupID:(id)arg0 generationContext:(id)arg1 ;
-(id)_descriptionForStateCaptureWithMultilinePrefix:(id)arg0 ;
-(id)_generatableSnapshotForGroupID:(id)arg0 generationContext:(id)arg1 ;
-(id)_initWithContainerIdentity:(id)arg0 ;
-(id)_snapshotGroupsByID;
-(id)bundleIdentifier;
-(id)containerPath;
-(id)createSnapshotWithGroupID:(id)arg0 ;
-(id)createVariantForSnapshot:(id)arg0 withIdentifier:(id)arg1 ;
-(id)defaultGroupIdentifier;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)snapshotsForGroupID:(id)arg0 ;
-(id)snapshotsForGroupID:(id)arg0 fetchRequest:(id)arg1 ;
-(id)snapshotsForGroupID:(id)arg0 matchingPredicate:(id)arg1 ;
-(id)snapshotsForGroupIDs:(id)arg0 ;
-(id)snapshotsForGroupIDs:(id)arg0 fetchRequest:(id)arg1 ;
-(id)snapshotsForGroupIDs:(id)arg0 matchingPredicate:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
// -(void)_access_accessSnapshotsWithBlock:(id)arg0 completion:(unk)arg1  ;
-(void)_access_addSnapshotToGroup:(id)arg0 ;
-(void)_access_deletePaths:(id)arg0 ;
-(void)_access_deleteSnapshots:(id)arg0 ;
-(void)_access_doArchiveWithCompletions:(id)arg0 ;
-(void)_access_gatherPaths:(id)arg0 forSnapshot:(id)arg1 ;
-(void)_access_purgeSnapshotsWithProtectedContent;
-(void)_access_updateSnapshotsAPFSPurgability:(BOOL)arg0 ;
-(void)_access_workloop_reapExpiredAndInvalidSnapshots;
-(void)_addSnapshotToGroup:(id)arg0 ;
-(void)_commonInit;
// -(void)_didGenerateImage:(BOOL)arg0 imageGenerationSignal:(id)arg1 logIdentifier:(id)arg2 imageGeneratedHandler:(id)arg3 qos:(unk)arg4  ;
// -(void)_didGenerateImageData:(id)arg0 forSnapshot:(id)arg1 imageWasGenerated:(BOOL)arg2 imageDataGenerationSignal:(id)arg3 logIdentifier:(id)arg4 didSaveHandler:(id)arg5 qos:(unk)arg6 writeToFileIfSupported:(unsigned int)arg7  ;
-(void)_handleMemoryPressure;
-(void)_noteDirtied;
-(void)_reapExpiredAndInvalidSnapshots;
-(void)_scheduleArchivingIfNecessaryWithCompletion:(id)arg0 ;
-(void)_scheduleArchivingIfNecessaryWithDelay:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_synchronizeDataStoreWithCompletion:(id)arg0 ;
-(void)_workloop_checkClientCount;
-(void)_workloop_decrementClientCount;
-(void)_workloop_incrementClientCount;
-(void)_workloop_reallyCheckClientCount;
-(void)archive;
// -(void)beginSnapshotAccessTransaction:(id)arg0 completion:(unk)arg1  ;
-(void)beginTrackingImageDeletions;
-(void)dealloc;
-(void)deleteAllSnapshots;
-(void)deleteSnapshot:(id)arg0 ;
-(void)deleteSnapshots:(id)arg0 ;
-(void)deleteSnapshotsForGroupID:(id)arg0 ;
-(void)deleteSnapshotsForGroupID:(id)arg0 matchingPredicate:(id)arg1 ;
-(void)deleteSnapshotsForGroupID:(id)arg0 predicateBuilder:(id)arg1 ;
-(void)deleteSnapshotsMatchingPredicate:(id)arg0 ;
-(void)deleteSnapshotsUsingPredicateBuilder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endTrackingImageDeletions;
// -(void)generateImageForSnapshot:(id)arg0 dataProvider:(id)arg1 options:(NSUInteger)arg2 imageGeneratedHandler:(id)arg3 imageDataSavedHandler:(unk)arg4  ;
-(void)purgeSnapshotsWithProtectedContent;
-(void)saveSnapshot:(id)arg0 atPath:(id)arg1 withContext:(id)arg2 ;
-(void)updateSnapshotsAPFSPurgability:(BOOL)arg0 ;


@end


#endif