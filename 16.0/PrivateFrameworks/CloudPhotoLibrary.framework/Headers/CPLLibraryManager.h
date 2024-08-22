// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLLIBRARYMANAGER_H
#define CPLLIBRARYMANAGER_H

@class NSURL, NSString, NSError;
@protocol CPLAbstractObject, OS_dispatch_queue, CPLLibraryManagerDelegate, CPLLibraryManagerForceSyncDelegate, CPLLibraryManagerOwner, CPLResourceProgressDelegate;

#import <Foundation/Foundation.h>

#import "CPLChangeSession.h"
#import "CPLConfiguration.h"
#import "CPLStatus.h"
#import "_CPLWeakLibraryManager.h"
#import "CPLPlatformObject.h"

@interface CPLLibraryManager : NSObject <CPLAbstractObject>

 {
    CPLChangeSession *_currentSession;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_sessionLock;
    BOOL _sizeOfResourcesToUploadIsSet;
    NSObject<OS_dispatch_queue> *_initLock;
    CPLConfiguration *_configuration;
    CPLStatus *_syncStatus;
    _CPLWeakLibraryManager *_weakSelf;
    BOOL _preventObserving;
}


@property (readonly, copy, nonatomic) NSURL *clientLibraryBaseURL; // ivar: _clientLibraryBaseURL
@property (readonly, copy, nonatomic) NSURL *cloudLibraryResourceStorageURL; // ivar: _cloudLibraryResourceStorageURL
@property (readonly, copy, nonatomic) NSURL *cloudLibraryStateStorageURL; // ivar: _cloudLibraryStateStorageURL
@property (readonly, nonatomic) CPLConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPLLibraryManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *effectiveClientBundleIdentifier; // ivar: _effectiveClientBundleIdentifier
@property (nonatomic) NSUInteger estimatedInitialAssetCountForLocalLibrary; // ivar: _estimatedInitialAssetCountForLocalLibrary
@property (nonatomic) NSUInteger estimatedInitialSizeForLocalLibrary; // ivar: _estimatedInitialSizeForLocalLibrary
@property (weak, nonatomic) NSObject<CPLLibraryManagerForceSyncDelegate> *forceSyncDelegate; // ivar: _forceSyncDelegate
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *libraryIdentifier; // ivar: _libraryIdentifier
@property (readonly, nonatomic) NSUInteger libraryOptions; // ivar: _libraryOptions
@property (readonly, copy, nonatomic) NSString *libraryVersion; // ivar: _libraryVersion
@property (readonly, nonatomic) NSUInteger numberOfImagesToUpload; // ivar: _numberOfImagesToUpload
@property (readonly, nonatomic) NSUInteger numberOfOtherItemsToUpload; // ivar: _numberOfOtherItemsToUpload
@property (readonly, nonatomic) NSUInteger numberOfVideosToUpload; // ivar: _numberOfVideosToUpload
@property (weak, nonatomic) NSObject<CPLLibraryManagerOwner> *owner; // ivar: _owner
@property (readonly, nonatomic) CPLPlatformObject *platformObject; // ivar: _platformObject
@property (weak, nonatomic) NSObject<CPLResourceProgressDelegate> *resourceProgressDelegate; // ivar: _resourceProgressDelegate
@property (readonly, nonatomic) NSUInteger sizeOfOriginalResourcesToUpload; // ivar: _sizeOfOriginalResourcesToUpload
@property (readonly, nonatomic) NSUInteger sizeOfResourcesToUpload; // ivar: _sizeOfResourcesToUpload
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) NSUInteger status; // ivar: _status
@property (readonly, nonatomic) NSError *statusError; // ivar: _statusError
@property (readonly) Class superclass;
@property (readonly, nonatomic) CPLStatus *syncStatus;
@property (copy, nonatomic) NSString *userOverride; // ivar: _userOverride


+(CGFloat)nextOverrideTimeIntervalForSystemBudgets:(NSUInteger)arg0 ;
+(NSUInteger)optionsFromDescription:(id)arg0 ;
+(id)_reverseMappingForLibraryOptions;
+(id)allLibraryOptionsDescriptions;
+(id)availableExitSources;
+(id)availableRetentionPolicies;
+(id)descriptionForExitSource:(NSInteger)arg0 ;
+(id)descriptionForLibraryOptions:(NSUInteger)arg0 ;
+(id)descriptionForProvideContentResult:(NSUInteger)arg0 ;
+(id)mappingExitSources;
+(id)mappingForLibraryOptions;
+(id)mappingRetentionPolicies;
+(id)platformImplementationProtocol;
+(id)stateDescriptionForState:(NSUInteger)arg0 ;
+(void)useCloudPhotoDaemonImplementation;
-(id)_mappedUnscopedIdentifiersFromScopedIdentifiers:(id)arg0 ;
-(id)addSubscriberUsingPublishingHandler:(id)arg0 ;
-(id)currentSession;
-(id)initForManagement;
-(id)initForManagementWithLibraryIdentifier:(id)arg0 ;
-(id)initWithClientLibraryBaseURL:(id)arg0 cloudLibraryStateStorageURL:(id)arg1 cloudLibraryResourceStorageURL:(id)arg2 libraryIdentifier:(id)arg3 ;
-(id)initWithClientLibraryBaseURL:(id)arg0 cloudLibraryStateStorageURL:(id)arg1 cloudLibraryResourceStorageURL:(id)arg2 libraryIdentifier:(id)arg3 options:(NSUInteger)arg4 ;
-(void)_closeDeactivating:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_getMappedIdentifiersForIdentifiers:(id)arg0 inAreLocalIdentifiers:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_getMappedScopedIdentifiersForScopedIdentifiers:(id)arg0 inAreLocalIdentifiers:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_setCurrentSession:(id)arg0 ;
-(void)acceptMomentShare:(id)arg0 completionHandler:(id)arg1 ;
-(void)acceptSharedScope:(id)arg0 completionHandler:(id)arg1 ;
-(void)acknowledgeChangedStatuses:(id)arg0 ;
-(void)activateScopeWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)addDropDerivativesRecipe:(id)arg0 writeToUserDefaults:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)addInfoToLog:(id)arg0 ;
-(void)addStatusChangesForRecordsWithIdentifiers:(id)arg0 persist:(BOOL)arg1 ;
-(void)addStatusChangesForRecordsWithScopedIdentifiers:(id)arg0 persist:(BOOL)arg1 ;
-(void)barrier;
-(void)beginDownloadForResource:(id)arg0 clientBundleID:(id)arg1 highPriority:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)beginDownloadForResource:(id)arg0 clientBundleID:(id)arg1 highPriority:(BOOL)arg2 proposedTaskIdentifier:(id)arg3 completionHandler:(id)arg4 ;
-(void)beginDownloadForResource:(id)arg0 clientBundleID:(id)arg1 intent:(NSUInteger)arg2 proposedTaskIdentifier:(id)arg3 completionHandler:(id)arg4 ;
-(void)beginDownloadForResource:(id)arg0 clientBundleID:(id)arg1 options:(id)arg2 proposedTaskIdentifier:(id)arg3 completionHandler:(id)arg4 ;
-(void)beginDownloadForResource:(id)arg0 highPriority:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)beginInMemoryDownloadOfResource:(id)arg0 completionHandler:(id)arg1 ;
-(void)beginPullChangeSessionWithKnownLibraryVersion:(id)arg0 completionHandler:(id)arg1 ;
-(void)beginPullChangeSessionWithKnownLibraryVersion:(id)arg0 resetTracker:(id)arg1 completionHandler:(id)arg2 ;
-(void)beginPushChangeSessionWithKnownLibraryVersion:(id)arg0 completionHandler:(id)arg1 ;
-(void)beginPushChangeSessionWithKnownLibraryVersion:(id)arg0 resetTracker:(id)arg1 completionHandler:(id)arg2 ;
-(void)blockEngineElement:(id)arg0 ;
-(void)boostPriorityForScopeWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(id)arg0 ;
-(void)checkResourcesAreSafeToPrune:(id)arg0 checkServerIfNecessary:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)closeWithCompletionHandler:(id)arg0 ;
-(void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg0 related:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)compactFileCacheWithCompletionHandler:(id)arg0 ;
-(void)createOwnedLibraryShareScopeWithShare:(id)arg0 title:(id)arg1 completionHandler:(id)arg2 ;
-(void)createScope:(id)arg0 completionHandler:(id)arg1 ;
-(void)deactivateScopeWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)deactivateWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)deleteResources:(id)arg0 checkServerIfNecessary:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)deleteResourcesIfSafe:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteScopeWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteScopeWithIdentifier:(id)arg0 forced:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)disableMainScopeWithCompletionHandler:(id)arg0 ;
-(void)disableMingling;
-(void)disableSynchronizationWithReason:(id)arg0 ;
-(void)discardCurrentSession;
-(void)enableMainScopeWithCompletionHandler:(id)arg0 ;
-(void)enableMingling;
-(void)enableSynchronizationWithReason:(id)arg0 ;
-(void)fetchExistingSharedLibraryScopeWithCompletionHandler:(id)arg0 ;
-(void)fetchMomentShareFromShareURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchSharedScopeFromShareURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)forceBackupWithCompletionHandler:(id)arg0 ;
-(void)forceSynchronizingScopeWithIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)getChangedStatusesWithCompletionHandler:(id)arg0 ;
-(void)getCloudCacheForRecordWithScopedIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)getCloudIdentifiersForLocalIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)getCloudScopedIdentifiersForLocalScopedIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)getListOfComponentsWithCompletionHandler:(id)arg0 ;
-(void)getLocalIdentifiersForCloudIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)getLocalScopedIdentifiersForCloudScopedIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)getResourcesForItemWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)getResourcesForItemWithScopedIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)getScopeStatusCountsForScopeWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)getStatusArrayForComponents:(id)arg0 completionHandler:(id)arg1 ;
-(void)getStatusForComponents:(id)arg0 completionHandler:(id)arg1 ;
-(void)getStatusForPendingRecordsSharedToScopeWithIdentifier:(id)arg0 maximumCount:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)getStatusForRecordsWithIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)getStatusForRecordsWithScopedIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)getStatusesForScopesWithIdentifiers:(id)arg0 includeStorages:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)getStreamingURLForResource:(id)arg0 intent:(NSUInteger)arg1 hints:(id)arg2 clientBundleID:(id)arg3 completionHandler:(id)arg4 ;
-(void)getStreamingURLForResource:(id)arg0 intent:(NSUInteger)arg1 hints:(id)arg2 completionHandler:(id)arg3 ;
-(void)getStreamingURLForResource:(id)arg0 intent:(NSUInteger)arg1 hints:(id)arg2 timeRange:(struct ? )arg3 clientBundleID:(id)arg4 completionHandler:(id)arg5 ;
-(void)getStreamingURLOrMediaMakerDataForResource:(id)arg0 intent:(NSUInteger)arg1 hints:(id)arg2 timeRange:(struct ? )arg3 clientBundleID:(id)arg4 completionHandler:(id)arg5 ;
-(void)getSystemBudgetsWithCompletionHandler:(id)arg0 ;
-(void)getTargetsForRecordsWithScopedIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)markLibraryManagerAsInvalid;
-(void)noteClientIsBeginningSignificantWork;
-(void)noteClientIsEndingSignificantWork;
-(void)noteClientIsInBackground;
-(void)noteClientIsInForeground;
-(void)noteClientIsInForegroundQuietly:(BOOL)arg0 ;
-(void)noteClientReceivedNotificationOfServerChanges;
-(void)openWithCompletionHandler:(id)arg0 ;
-(void)provideCloudResource:(id)arg0 completionHandler:(id)arg1 ;
-(void)provideRecordWithCloudScopeIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)provideScopeChangeForScopeWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)publishMomentShare:(id)arg0 completionHandler:(id)arg1 ;
-(void)publishResource:(id)arg0 completionHandler:(id)arg1 ;
-(void)queryUserDetailsForShareParticipants:(id)arg0 completionHandler:(id)arg1 ;
-(void)queryUserIdentitiesWithParticipants:(id)arg0 completionHandler:(id)arg1 ;
-(void)rampingRequestForResourceType:(NSUInteger)arg0 numRequested:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)removeParticipants:(id)arg0 fromSharedScopeWithIdentifier:(id)arg1 retentionPolicy:(NSInteger)arg2 exitSource:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)reportMiscInformation:(id)arg0 ;
-(void)reportSetting:(id)arg0 hasBeenEnabled:(BOOL)arg1 ;
-(void)reportSetting:(id)arg0 hasBeenSetToValue:(id)arg1 ;
-(void)requestClientToPushAllChangesWithCompletionHandler:(id)arg0 ;
-(void)resetCacheWithOption:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)resetCacheWithOption:(NSUInteger)arg0 reason:(id)arg1 completionHandler:(id)arg2 ;
-(void)resolveLocalScopedIdentifiersForCloudScopedIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)setShouldOverride:(BOOL)arg0 forSystemBudgets:(NSUInteger)arg1 ;
-(void)setShouldOverrideSystemBudgetsForSyncSession:(BOOL)arg0 ;
-(void)sharedLibraryRampCheckWithCompletionHandler:(id)arg0 ;
-(void)startExitFromSharedScopeWithIdentifier:(id)arg0 retentionPolicy:(NSInteger)arg1 exitSource:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)startSyncSession;
-(void)takeStatisticsSnapshotSinceDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)testKey:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;
-(void)unblockEngineElement:(id)arg0 ;
-(void)unblockEngineElementOnce:(id)arg0 ;
-(void)updateShareForScope:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif