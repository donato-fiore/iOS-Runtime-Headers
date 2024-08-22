// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLENGINETRANSPORT_H
#define CPLENGINETRANSPORT_H

@class NSString;
@protocol CPLAbstractObject, CPLEngineComponent, CPLTransportScopeTranslator, CPLSharedRecordPropertyMapping;

#import <Foundation/Foundation.h>

#import "CPLEngineLibrary.h"
#import "CPLPlatformObject.h"

@interface CPLEngineTransport : NSObject <CPLAbstractObject, CPLEngineComponent, CPLTransportScopeTranslator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary; // ivar: _engineLibrary
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject; // ivar: _platformObject
@property (readonly, nonatomic) NSObject<CPLSharedRecordPropertyMapping> *propertyMapping;
@property (readonly) Class superclass;
@property (readonly, nonatomic) Class transportGroupClass;
@property (readonly, nonatomic) NSString *universeName;
@property (readonly, nonatomic) Class userIdentifierClass;


+(id)platformImplementationProtocol;
-(BOOL)getProposedStagingScopeIdentifier:(*id)arg0 stagingTransportScope:(*id)arg1 forScope:(id)arg2 transportScope:(id)arg3 transportUserIdentifier:(id)arg4 ;
-(BOOL)isResourceDynamic:(id)arg0 ;
-(id)acceptTaskForSharedScope:(id)arg0 completionHandler:(id)arg1 ;
-(id)bestErrorForUnderlyingError:(id)arg0 ;
-(id)cleanupLibraryTaskDryRun:(BOOL)arg0 primaryScope:(id)arg1 brokenScope:(id)arg2 transportScopeMapping:(id)arg3 completionHandler:(id)arg4 ;
// -(id)cleanupStagedScope:(id)arg0 stagingScope:(id)arg1 destinationScope:(id)arg2 transportScopeMapping:(id)arg3 progressHandler:(id)arg4 completionHandler:(unk)arg5  ;
-(id)componentName;
-(id)concreteScopeFromTransportScope:(id)arg0 ;
-(id)createGroupForAcceptingLibraryShare;
-(id)createGroupForAcceptingMomentShare;
-(id)createGroupForAnalysisDownload;
-(id)createGroupForChangeDownload;
-(id)createGroupForChangeUpload;
-(id)createGroupForCleanupLibrary;
-(id)createGroupForDownloadWithIntent:(NSUInteger)arg0 priority:(NSUInteger)arg1 ;
-(id)createGroupForExitSharedLibrary;
-(id)createGroupForFeedback;
-(id)createGroupForFetchScopeListChanges;
-(id)createGroupForFetchingExistingSharedScope;
-(id)createGroupForFetchingLibraryShare;
-(id)createGroupForFetchingMomentShare;
-(id)createGroupForFixUpTasks;
-(id)createGroupForInitialDownload;
-(id)createGroupForInitialUpload;
-(id)createGroupForKeepOriginalsPrefetch;
-(id)createGroupForLibraryStateCheck;
-(id)createGroupForMemoriesPrefetch;
-(id)createGroupForMovieStreamingWithIntent:(NSUInteger)arg0 ;
-(id)createGroupForNonDerivativePrefetch;
-(id)createGroupForPrefetch;
-(id)createGroupForPruningCheck;
-(id)createGroupForPublishingLibraryShare;
-(id)createGroupForPublishingMomentShare;
-(id)createGroupForQueryUserIdentities;
-(id)createGroupForRecoveryDownload;
-(id)createGroupForResetSync;
-(id)createGroupForReshare;
-(id)createGroupForResourcesDownload;
-(id)createGroupForSetup;
-(id)createGroupForSharedLibraryRampCheck;
-(id)createGroupForStagedScopeCleanup;
-(id)createGroupForThumbnailPrefetch;
-(id)createGroupForThumbnailsDownload;
-(id)createGroupForTransportScopeDelete;
-(id)createGroupForTransportScopeUpdate;
-(id)createGroupForWidgetPrefetch;
-(id)createGroupForWidgetResourcesDownload;
-(id)createScopeTaskForScope:(id)arg0 completionHandler:(id)arg1 ;
-(id)deleteTransportScope:(id)arg0 scope:(id)arg1 completionHandler:(id)arg2 ;
-(id)descriptionForTransportScope:(id)arg0 ;
// -(id)downloadBatchTaskForSyncAnchor:(id)arg0 scope:(id)arg1 transportScopeMapping:(id)arg2 currentScopeChange:(id)arg3 progressHandler:(id)arg4 completionHandler:(unk)arg5  ;
-(id)fetchExistingSharedLibraryScopeTaskWithCompletionHandler:(id)arg0 ;
-(id)fetchRecordsTaskForRecordsWithScopedIdentifiers:(id)arg0 targetMapping:(id)arg1 transportScopeMapping:(id)arg2 completionHandler:(id)arg3 ;
// -(id)fetchScopeListChangesForScopeListSyncAnchor:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(id)fetchTaskForScopeWithShareURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)fetchTransportScopeForScope:(id)arg0 transportScope:(id)arg1 completionHandler:(id)arg2 ;
-(id)fixUpSparseRecordsTaskWithTasks:(id)arg0 transportScopeMapping:(id)arg1 completionHandler:(id)arg2 ;
-(id)getCurrentSyncAnchorWithTransportScope:(id)arg0 scope:(id)arg1 previousScopeChange:(id)arg2 completionHandler:(id)arg3 ;
-(id)getScopeInfoWithTransportScope:(id)arg0 scope:(id)arg1 previousScopeChange:(id)arg2 completionHandler:(id)arg3 ;
-(id)getStreamingURLTaskForResource:(id)arg0 intent:(NSUInteger)arg1 hints:(id)arg2 timeRange:(struct ? )arg3 target:(id)arg4 transportScopeMapping:(id)arg5 clientBundleID:(id)arg6 completionHandler:(id)arg7 ;
-(id)inMemoryDownloadTaskForResource:(id)arg0 record:(id)arg1 target:(id)arg2 transportScopeMapping:(id)arg3 completionHandler:(id)arg4 ;
-(id)initWithEngineLibrary:(id)arg0 ;
// -(id)queryTaskForCursor:(id)arg0 class:(Class)arg1 scope:(id)arg2 transportScopeMapping:(id)arg3 progressHandler:(id)arg4 completionHandler:(unk)arg5  ;
-(id)queryUserDetailsTaskForParticipants:(id)arg0 completionHandler:(id)arg1 ;
-(id)rampingRequestTaskForResourceType:(NSUInteger)arg0 numRequested:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(id)removeParticipantInSharedLibraryTaskFromSharedScope:(id)arg0 transportScope:(id)arg1 share:(id)arg2 retentionPolicy:(NSInteger)arg3 exitSource:(NSInteger)arg4 userIdentifiersToRemove:(id)arg5 participantIDsToRemove:(id)arg6 completionHandler:(id)arg7 ;
-(id)reshareRecordsTaskWithRecords:(id)arg0 sourceScope:(id)arg1 destinationScope:(id)arg2 transportScopeMapping:(id)arg3 completionHandler:(id)arg4 ;
-(id)resourceCheckTaskForResources:(id)arg0 targetMapping:(id)arg1 transportScopeMapping:(id)arg2 completionHandler:(id)arg3 ;
-(id)resourcesDownloadTaskWithCompletionHandler:(id)arg0 ;
-(id)scopeNameForTransportScope:(id)arg0 ;
-(id)sendFeedbackTaskForMessages:(id)arg0 completionHandler:(id)arg1 ;
-(id)setupTaskUpdateDisabledFeatures:(BOOL)arg0 completionHandler:(id)arg1 ;
-(id)sharedLibraryServerRampTaskWithCompletionHandler:(id)arg0 ;
-(id)simpleDescriptionForScopeListSyncAnchor:(id)arg0 ;
-(id)simpleDescriptionForSyncAnchor:(id)arg0 ;
-(id)startExitTaskFromSharedScope:(id)arg0 transportScope:(id)arg1 share:(id)arg2 retentionPolicy:(NSInteger)arg3 exitSource:(NSInteger)arg4 completionHandler:(id)arg5 ;
-(id)tentativeConcreteScopeForScope:(id)arg0 ;
-(id)transportScopeForUpgradeFromScopeName:(id)arg0 ;
-(id)transportScopeFromConcreteScope:(id)arg0 ;
-(id)updateShareTaskForScope:(id)arg0 transportScope:(id)arg1 completionHandler:(id)arg2 ;
-(id)updateTransportScope:(id)arg0 scope:(id)arg1 scopeChange:(id)arg2 completionHandler:(id)arg3 ;
// -(id)uploadBatchTaskForBatch:(id)arg0 scope:(id)arg1 targetMapping:(id)arg2 transportScopeMapping:(id)arg3 progressHandler:(id)arg4 completionHandler:(unk)arg5  ;
-(void)cancelBlockedTasksIncludingBackground:(BOOL)arg0 ;
-(void)closeAndDeactivate:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)dropPersistedInitialSyncSession;
// -(void)findPersistedInitialSyncSession:(id)arg0 completionHandler:(unk)arg1  ;
-(void)getStatusDictionaryWithCompletionHandler:(id)arg0 ;
-(void)getStatusWithCompletionHandler:(id)arg0 ;
-(void)getSystemBudgetsWithCompletionHandler:(id)arg0 ;
-(void)noteClientIsBeginningSignificantWork;
-(void)noteClientIsEndingSignificantWork;
-(void)noteClientIsInBackground;
-(void)noteClientIsInForeground;
-(void)openWithCompletionHandler:(id)arg0 ;
-(void)setShouldOverride:(BOOL)arg0 forSystemBudgets:(NSUInteger)arg1 ;
-(void)upgradeFlags:(id)arg0 fromTransportScope:(id)arg1 ;


@end


#endif