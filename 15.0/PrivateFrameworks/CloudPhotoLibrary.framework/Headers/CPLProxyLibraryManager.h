// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLPROXYLIBRARYMANAGER_H
#define CPLPROXYLIBRARYMANAGER_H

@class NSXPCConnection, NSMutableDictionary, NSCountedSet, NSMutableArray, NSDate, NSString;
@protocol CPLClientLibraryManagerProtocol, NSXPCConnectionDelegate, CPLLibraryManagerImplementation, OS_dispatch_queue;


#import "CPLPlatformObject.h"

@interface CPLProxyLibraryManager : CPLPlatformObject <CPLClientLibraryManagerProtocol, NSXPCConnectionDelegate, CPLLibraryManagerImplementation>

 {
    os_unfair_lock_s _realConnectionLock;
    NSXPCConnection *_realConnection;
    id *_blockToCallOnDaemonDying;
    NSMutableDictionary *_downloadTasks;
    NSMutableDictionary *_inMemoryDownloadTasks;
    NSMutableDictionary *_uploadTasks;
    NSMutableDictionary *_forceSyncTasks;
    NSMutableDictionary *_vouchersPerTaskIdentifier;
    NSUInteger _foregroundCalls;
    NSCountedSet *_disablingReasons;
    NSUInteger _disablingMinglingCount;
    NSUInteger _significantWorkCalls;
    NSMutableDictionary *_outstandingInvocations;
    NSUInteger _outstandingInvocationsCount;
    NSMutableDictionary *_syncOutstandingInvocations;
    NSUInteger _syncOutstandingInvocationsCount;
    NSMutableArray *_pendingBlocksAfterOpening;
    int _openingStatus;
    NSDate *_backoffRetryingConnectionDate;
    int _notifyToken;
    BOOL _killed;
    BOOL _firstTryOpeningLibrary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)clientProtocolInterface;
+(id)daemonProtocolInterface;
-(BOOL)_setStatusFromDictionary:(id)arg0 ;
-(id)_connection;
-(id)_uploadTaskDidStartForResource:(id)arg0 withTaskIdentifier:(id)arg1 ;
-(id)initWithAbstractObject:(id)arg0 ;
-(id)proxyWithErrorHandler:(id)arg0 ;
-(void)_callBlockOnDaemonDying;
-(void)_dispatchBlockWhenOpen:(id)arg0 ;
-(void)_dispatchFailedDownloadTaskForResource:(id)arg0 options:(id)arg1 proposedTaskIdentifier:(id)arg2 withError:(id)arg3 withCompletionHandler:(id)arg4 ;
-(void)_dispatchFailedForceSyncTaskForScopeIdentifiers:(id)arg0 withError:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_dispatchFailedInMemoryDownloadTaskForResource:(id)arg0 withError:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_dropConnectionCompletly;
-(void)_dropConnectionCompletlyLocked;
-(void)_dropVoucherForTaskWithIdentifier:(id)arg0 ;
-(void)_invokeOutstandingInvocationsWithTaskIdentifier:(id)arg0 ;
-(void)_invokeSyncOutstandingInvocationsWithTaskIdentifier:(id)arg0 ;
-(void)_markConnectionAsInvalid;
-(void)_reallyOpenWithCompletionHandler:(id)arg0 ;
-(void)_setCallBlockOnDaemonDying:(id)arg0 ;
-(void)_setupConnection;
-(void)_storeVoucher:(id)arg0 forTaskWithIdentifier:(id)arg1 ;
-(void)_withVoucherForTaskWithIdentifier:(id)arg0 do:(id)arg1 ;
-(void)acceptSharedScope:(id)arg0 completionHandler:(id)arg1 ;
-(void)acknowledgeChangedStatuses:(id)arg0 ;
-(void)activateScopeWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)addDropDerivativesRecipe:(id)arg0 writeToUserDefaults:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)addInfoToLog:(id)arg0 ;
-(void)addStatusChangesForRecordsWithScopedIdentifiers:(id)arg0 persist:(BOOL)arg1 ;
-(void)backgroundDownloadDidFailForResource:(id)arg0 ;
-(void)backgroundDownloadDidFinishForResource:(id)arg0 ;
-(void)barrier;
-(void)beginDownloadForResource:(id)arg0 clientBundleID:(id)arg1 options:(id)arg2 proposedTaskIdentifier:(id)arg3 completionHandler:(id)arg4 ;
-(void)beginInMemoryDownloadOfResource:(id)arg0 completionHandler:(id)arg1 ;
-(void)blockEngineElement:(id)arg0 ;
-(void)boostPriorityForScopeWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancelSyncTask:(id)arg0 ;
-(void)cancelTask:(id)arg0 ;
-(void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(id)arg0 ;
-(void)checkResourcesAreSafeToPrune:(id)arg0 checkServerIfNecessary:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)closeWithCompletionHandler:(id)arg0 ;
-(void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg0 related:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)compactFileCacheWithCompletionHandler:(id)arg0 ;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)createScope:(id)arg0 completionHandler:(id)arg1 ;
-(void)deactivateScopeWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)deactivateWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)deleteResources:(id)arg0 checkServerIfNecessary:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)disableMingling;
-(void)disableSynchronizationWithReason:(id)arg0 ;
-(void)dispatchBlockWhenLibraryIsOpen:(id)arg0 ;
-(void)downloadDidFinishForResourceTransferTask:(id)arg0 finalResource:(id)arg1 withError:(id)arg2 ;
-(void)downloadDidProgress:(float)arg0 forResourceTransferTask:(id)arg1 ;
-(void)downloadDidStartForResourceTransferTask:(id)arg0 ;
-(void)enableMingling;
-(void)enableSynchronizationWithReason:(id)arg0 ;
-(void)fetchSharedScopeFromShareURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)forceBackupWithCompletionHandler:(id)arg0 ;
-(void)forceSyncDidFinishForTask:(id)arg0 withErrors:(id)arg1 ;
-(void)forceSynchronizingScopeWithIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)getChangedStatusesWithCompletionHandler:(id)arg0 ;
-(void)getCloudCacheForRecordWithScopedIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)getListOfComponentsWithCompletionHandler:(id)arg0 ;
-(void)getMappedScopedIdentifiersForScopedIdentifiers:(id)arg0 inAreLocalIdentifiers:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)getResourcesForItemWithScopedIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)getStatusArrayForComponents:(id)arg0 completionHandler:(id)arg1 ;
-(void)getStatusForComponents:(id)arg0 completionHandler:(id)arg1 ;
-(void)getStatusForRecordsWithScopedIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)getStatusesForScopesWithIdentifiers:(id)arg0 includeStorages:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)getStreamingURLForResource:(id)arg0 intent:(NSUInteger)arg1 hints:(id)arg2 timeRange:(struct ? )arg3 clientBundleID:(id)arg4 completionHandler:(id)arg5 ;
-(void)getSystemBudgetsWithCompletionHandler:(id)arg0 ;
-(void)inMemoryDownloadDidFinishForResourceTransferTask:(id)arg0 data:(id)arg1 withError:(id)arg2 ;
-(void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(NSUInteger)arg0 sizeOfOriginalResourcesToUpload:(NSUInteger)arg1 numberOfImages:(NSUInteger)arg2 numberOfVideos:(NSUInteger)arg3 numberOfOtherItems:(NSUInteger)arg4 ;
-(void)libraryManagerDidUpdateStatusWithProperties:(id)arg0 ;
-(void)libraryManagerHasBeenReplaced;
-(void)libraryManagerHasChangesToPull;
-(void)libraryManagerHasStatusChanges;
-(void)noteClientIsBeginningSignificantWork;
-(void)noteClientIsEndingSignificantWork;
-(void)noteClientIsInBackground;
-(void)noteClientIsInForeground;
-(void)noteClientReceivedNotificationOfServerChanges;
-(void)openWithCompletionHandler:(id)arg0 ;
-(void)provideCloudResource:(id)arg0 completionHandler:(id)arg1 ;
-(void)provideLocalResource:(id)arg0 recordClassString:(id)arg1 completionHandler:(id)arg2 ;
-(void)provideRecordWithCloudScopeIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)provideScopeChangeForScopeWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)pushAllChangesWithCompletionHandler:(id)arg0 ;
-(void)queryUserDetailsForShareParticipants:(id)arg0 completionHandler:(id)arg1 ;
-(void)rampingRequestForResourceType:(NSUInteger)arg0 numRequested:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)reportMiscInformation:(id)arg0 ;
-(void)reportSetting:(id)arg0 hasBeenSetToValue:(id)arg1 ;
-(void)requestClientToPushAllChangesWithCompletionHandler:(id)arg0 ;
-(void)resetCacheWithOption:(NSUInteger)arg0 reason:(id)arg1 completionHandler:(id)arg2 ;
-(void)resetStatus;
-(void)resolveLocalScopedIdentifiersForCloudScopedIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)setShouldOverride:(BOOL)arg0 forSystemBudgets:(NSUInteger)arg1 ;
-(void)startSyncSession;
-(void)testKey:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;
-(void)unblockEngineElement:(id)arg0 ;
-(void)unblockEngineElementOnce:(id)arg0 ;
-(void)updateShareForScope:(id)arg0 completionHandler:(id)arg1 ;
-(void)uploadDidStartForResource:(id)arg0 withResourceTransferTask:(id)arg1 ;
-(void)uploadOfResource:(id)arg0 didFinishForResourceTransferTask:(id)arg1 withError:(id)arg2 ;
-(void)uploadOfResource:(id)arg0 didProgress:(float)arg1 forResourceTransferTask:(id)arg2 ;


@end


#endif