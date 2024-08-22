// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLENGINETRANSPORT_H
#define CPLENGINETRANSPORT_H

@class NSString;
@protocol CPLAbstractObject, CPLEngineComponent;

#import <Foundation/Foundation.h>

#import "CPLEngineLibrary.h"
#import "CPLPlatformObject.h"

@interface CPLEngineTransport : NSObject <CPLAbstractObject, CPLEngineComponent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary; // ivar: _engineLibrary
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject; // ivar: _platformObject
@property (readonly) Class superclass;
@property (readonly, nonatomic) Class transportGroupClass;
@property (readonly, nonatomic) Class userIdentifierClass;


+(id)platformImplementationProtocol;
-(BOOL)isResourceDynamic:(id)arg0 ;
-(id)acceptTaskForSharedScope:(id)arg0 completionHandler:(id)arg1 ;
-(id)bestErrorForUnderlyingError:(id)arg0 ;
-(id)checkRecordsExistenceTaskForRecords:(id)arg0 fetchRecordProperties:(id)arg1 transportScope:(id)arg2 scope:(id)arg3 additionalTransportScopes:(id)arg4 completionHandler:(id)arg5 ;
-(id)componentName;
-(id)createGroupForAcceptingMomentShare;
-(id)createGroupForAnalysisDownload;
-(id)createGroupForChangeDownload;
-(id)createGroupForChangeUpload;
-(id)createGroupForDownloadWithIntent:(NSUInteger)arg0 priority:(NSUInteger)arg1 ;
-(id)createGroupForFeedback;
-(id)createGroupForFetchScopeListChanges;
-(id)createGroupForFetchingMomentShare;
-(id)createGroupForInitialDownload;
-(id)createGroupForInitialUpload;
-(id)createGroupForKeepOriginalsPrefetch;
-(id)createGroupForLibraryStateCheck;
-(id)createGroupForMemoriesPrefetch;
-(id)createGroupForMovieStreamingWithIntent:(NSUInteger)arg0 ;
-(id)createGroupForNonDerivativePrefetch;
-(id)createGroupForPrefetch;
-(id)createGroupForPruningCheck;
-(id)createGroupForPublishingMomentShare;
-(id)createGroupForQueryUserIdentities;
-(id)createGroupForRecoveryDownload;
-(id)createGroupForResetSync;
-(id)createGroupForResourcesDownload;
-(id)createGroupForSetup;
-(id)createGroupForThumbnailPrefetch;
-(id)createGroupForThumbnailsDownload;
-(id)createGroupForTransportScopeDelete;
-(id)createGroupForTransportScopeUpdate;
-(id)createGroupForWidgetPrefetch;
-(id)createGroupForWidgetResourcesDownload;
-(id)createScopeTaskForScope:(id)arg0 completionHandler:(id)arg1 ;
-(id)deleteTransportScope:(id)arg0 scope:(id)arg1 completionHandler:(id)arg2 ;
-(id)descriptionForTransportScope:(id)arg0 ;
// -(id)downloadBatchTaskForSyncAnchor:(id)arg0 transportScope:(id)arg1 scope:(id)arg2 currentScopeChange:(id)arg3 progressHandler:(id)arg4 completionHandler:(unk)arg5  ;
// -(id)fetchScopeListChangesForScopeListSyncAnchor:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(id)fetchTaskForScopeWithShareURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)fetchTransportScopeForScope:(id)arg0 transportScope:(id)arg1 completionHandler:(id)arg2 ;
-(id)getCurrentSyncAnchorWithTransportScope:(id)arg0 scope:(id)arg1 completionHandler:(id)arg2 ;
-(id)getScopeInfoWithTransportScope:(id)arg0 scope:(id)arg1 completionHandler:(id)arg2 ;
-(id)getStreamingURLTaskForResource:(id)arg0 intent:(NSUInteger)arg1 hints:(id)arg2 timeRange:(struct ? )arg3 transportScope:(id)arg4 clientBundleID:(id)arg5 completionHandler:(id)arg6 ;
-(id)inMemoryDownloadTaskForResource:(id)arg0 record:(id)arg1 transportScope:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithEngineLibrary:(id)arg0 ;
// -(id)queryTaskForCursor:(id)arg0 class:(Class)arg1 transportScope:(id)arg2 scope:(id)arg3 progressHandler:(id)arg4 completionHandler:(unk)arg5  ;
-(id)queryUserDetailsTaskForParticipants:(id)arg0 completionHandler:(id)arg1 ;
-(id)rampingRequestTaskForResourceType:(NSUInteger)arg0 numRequested:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(id)resourceCheckTaskForResources:(id)arg0 transportScopes:(id)arg1 completionHandler:(id)arg2 ;
-(id)resourcesDownloadTaskWithCompletionHandler:(id)arg0 ;
-(id)scopeNameForTransportScope:(id)arg0 ;
-(id)sendFeedbackTaskForMessages:(id)arg0 completionHandler:(id)arg1 ;
-(id)setupTaskUpdateDisabledFeatures:(BOOL)arg0 completionHandler:(id)arg1 ;
-(id)simpleDescriptionForScopeListSyncAnchor:(id)arg0 ;
-(id)simpleDescriptionForSyncAnchor:(id)arg0 ;
-(id)tentativeTransportScopeForScope:(id)arg0 ;
-(id)transportScopeForUpgradeFromScopeName:(id)arg0 ;
-(id)updateShareTaskForScope:(id)arg0 transportScope:(id)arg1 completionHandler:(id)arg2 ;
-(id)updateTransportScope:(id)arg0 scope:(id)arg1 scopeChange:(id)arg2 completionHandler:(id)arg3 ;
// -(id)uploadBatchTaskForBatch:(id)arg0 transportScope:(id)arg1 scope:(id)arg2 additionalTransportScopes:(id)arg3 progressHandler:(id)arg4 completionHandler:(unk)arg5  ;
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