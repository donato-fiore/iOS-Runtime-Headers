// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLENGINELIBRARY_H
#define CPLENGINELIBRARY_H

@class NSArray, NSMutableDictionary, NSHashTable, NSError, NSDate, NSCountedSet, NSURL, NSString;
@protocol CPLStatusDelegate, CPLAbstractObject, OS_dispatch_queue, OS_dispatch_source, CPLEngineLibraryOwner;

#import <Foundation/Foundation.h>

#import "CPLStatus.h"
#import "CPLConfiguration.h"
#import "CPLEngineFeedbackManager.h"
#import "CPLPlatformObject.h"
#import "CPLEngineScheduler.h"
#import "CPLEngineStore.h"
#import "CPLEngineSyncManager.h"
#import "CPLEngineSystemMonitor.h"
#import "CPLEngineTransport.h"

@interface CPLEngineLibrary : NSObject <CPLStatusDelegate, CPLAbstractObject>

 {
    NSArray *_components;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_closingQueue;
    NSMutableDictionary *_blocksToDispatchWhenLibraryAttaches;
    NSHashTable *_attachedObjects;
    NSHashTable *_invalidAttachedObjects;
    NSError *_openingError;
    CPLStatus *_status;
    BOOL _closed;
    BOOL _totalAssetCountHasBeenCalculated;
    NSDate *_cachedLastQuarantineCountReportDate;
    NSUInteger _totalAssetCount;
    NSCountedSet *_holdTestAssertions;
    id *_pingRequestToPushAllChanges;
    NSObject<OS_dispatch_source> *_timerForPushRepositoryFlagsCountsHaveChanged;
    NSDate *_mostRecentScopeStatusCountsDidChangeNotificationDate;
}


@property (nonatomic) NSInteger busyState;
@property (readonly, copy, nonatomic) NSURL *clientLibraryBaseURL; // ivar: _clientLibraryBaseURL
@property (readonly, copy, nonatomic) NSURL *cloudLibraryResourceStorageURL; // ivar: _cloudLibraryResourceStorageURL
@property (readonly, copy, nonatomic) NSURL *cloudLibraryStateStorageURL; // ivar: _cloudLibraryStateStorageURL
@property (readonly, nonatomic) CPLConfiguration *configuration; // ivar: _configuration
@property (nonatomic) BOOL containerHasBeenWiped;
@property (readonly) NSString *currentClosingComponentName; // ivar: _currentClosingComponentName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger estimatedCountOfRemainingRecordsDuringSharedLibraryExit;
@property (copy, nonatomic) NSDate *exitDeleteTime;
@property (readonly, nonatomic) CPLEngineFeedbackManager *feedback; // ivar: _feedback
@property (nonatomic) BOOL hasChangesToProcess;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL iCloudLibraryClientVersionTooOld;
@property (nonatomic) BOOL iCloudLibraryExists;
@property (nonatomic) BOOL iCloudLibraryHasBeenWiped;
@property (readonly, nonatomic) NSDate *initialSyncDate;
@property (nonatomic) BOOL isExceedingQuota;
@property (nonatomic) BOOL isExceedingSharedLibraryQuota;
@property (readonly, nonatomic) BOOL isSystemLibrary; // ivar: _isSystemLibrary
@property (readonly, copy, nonatomic) NSString *libraryIdentifier; // ivar: _libraryIdentifier
@property (readonly, nonatomic) BOOL libraryIsCorrupted; // ivar: _libraryIsCorrupted
@property (readonly, nonatomic) NSUInteger libraryOptions; // ivar: _libraryOptions
@property (weak, nonatomic) NSObject<CPLEngineLibraryOwner> *owner; // ivar: _owner
@property (readonly, nonatomic) CPLPlatformObject *platformObject; // ivar: _platformObject
@property (readonly, nonatomic) CPLEngineScheduler *scheduler; // ivar: _scheduler
@property (readonly, nonatomic) CPLEngineStore *store; // ivar: _store
@property (readonly) Class superclass;
@property (readonly, nonatomic) CPLEngineSyncManager *syncManager; // ivar: _syncManager
@property (readonly, nonatomic) CPLEngineSystemMonitor *systemMonitor; // ivar: _systemMonitor
@property (readonly, nonatomic) CPLEngineTransport *transport; // ivar: _transport
@property (nonatomic, getter=isUpgradeSuggestedToAccessAllPhotos) BOOL upgradeSuggestedToAccessAllPhotos;


+(id)platformImplementationProtocol;
-(BOOL)hasAccountFlagsData;
-(BOOL)hasAssetCountOnServer;
-(NSUInteger)totalAssetCountOnServer;
-(id)_allComponentsIncludingPlatformObjects:(BOOL)arg0 respondingToSelector:(SEL)arg1 ;
-(id)_libraryObject;
-(id)_performBlockWhenLibraryAttaches:(id)arg0 ;
-(id)componentName;
-(id)corruptionInfo;
-(id)initWithClientLibraryBaseURL:(id)arg0 cloudLibraryStateStorageURL:(id)arg1 cloudLibraryResourceStorageURL:(id)arg2 libraryIdentifier:(id)arg3 options:(NSUInteger)arg4 ;
-(id)redactedDescription;
-(void)_cancelBlockWhenLibraryAttaches:(id)arg0 ;
-(void)_closeNextComponent:(id)arg0 deactivate:(BOOL)arg1 lastError:(id)arg2 completionHandler:(id)arg3 ;
-(void)_fillStatus:(id)arg0 forComponents:(id)arg1 completionHandler:(id)arg2 ;
-(void)_fillStatusArray:(id)arg0 forComponents:(id)arg1 completionHandler:(id)arg2 ;
-(void)_notifyAttachedObjectsThatPushRepositoryFlagsCountsHaveChanged;
-(void)_openNextComponent:(id)arg0 completionHandler:(id)arg1 ;
-(void)_performBlockWithLibrary:(BOOL)arg0 enumerateAttachedObjects:(id)arg1 ;
-(void)_performPendingBlockForWhenLibraryAttaches;
-(void)_reportQuarantineCountIfNecessaryWithLastReportDate:(id)arg0 ;
-(void)_testKey:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;
-(void)_updateTotalAssetCountWithAssetCounts:(id)arg0 ;
-(void)attachObject:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)blockEngineWithReason:(id)arg0 block:(id)arg1 ;
-(void)cleanUpBrokenScope:(id)arg0 completionHandler:(id)arg1 ;
-(void)clientIsPushingChanges;
-(void)closeAndDeactivate:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)detachObject:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)emergencyClose;
-(void)forceBackupWithActivity:(id)arg0 forceClientPush:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)forceFetchAccountFlags;
-(void)getListOfComponentsWithCompletionHandler:(id)arg0 ;
-(void)getStatusArrayForComponents:(id)arg0 completionHandler:(id)arg1 ;
-(void)getStatusForComponents:(id)arg0 completionHandler:(id)arg1 ;
-(void)markAttachedObjectAsInvalid:(id)arg0 ;
-(void)notifyAttachedObjectsHasStatusChanges;
-(void)notifyAttachedObjectsPullQueueIsFull;
-(void)notifyAttachedObjectsResourceDidDownloadInBackground:(id)arg0 ;
-(void)notifyAttachedObjectsResourceDidFailBackgroundDownloadOfResource:(id)arg0 ;
-(void)notifyAttachedObjectsSizeOfResourcesToUploadDidChangeToSize:(NSUInteger)arg0 sizeOfOriginalResourcesToUpload:(NSUInteger)arg1 numberOfImages:(NSUInteger)arg2 numberOfVideos:(NSUInteger)arg3 numberOfOtherItems:(NSUInteger)arg4 ;
-(void)notifyAttachedObjectsThatPushRepositoryFlagsCountsHaveChanged;
-(void)notifyAttachedObjectsUploadTask:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)notifyAttachedObjectsUploadTask:(id)arg0 didProgress:(float)arg1 ;
-(void)notifyAttachedObjectsUploadTaskDidStart:(id)arg0 ;
-(void)openWithCompletionHandler:(id)arg0 ;
-(void)performBlockOnLibrary:(id)arg0 ;
-(void)performMaintenanceCleanupWithCompletionHandler:(id)arg0 ;
-(void)provideCloudResource:(id)arg0 completionHandler:(id)arg1 ;
-(void)provideRecordWithCloudScopeIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)provideScopeChangeForScopeWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)reportLibraryCorrupted;
-(void)reportQuarantineCountIfNecessary;
-(void)reportRadar:(NSUInteger)arg0 ;
-(void)reportUnsuccessfulSync;
-(void)requestAttachedLibrary;
-(void)requestClientToPushAllChangesWithCompletionHandler:(id)arg0 ;
-(void)setConnectedToNetwork:(BOOL)arg0 cellularIsRestricted:(BOOL)arg1 inAirplaneMode:(BOOL)arg2 ;
-(void)setHasCellularBudget:(BOOL)arg0 hasBatteryBudget:(BOOL)arg1 isConstrainedNetwork:(BOOL)arg2 isBlockedByLowPowerMode:(BOOL)arg3 isBudgetValid:(BOOL)arg4 ;
-(void)setLowDiskSpace:(BOOL)arg0 veryLowDiskSpace:(BOOL)arg1 ;
-(void)startSyncSession;
-(void)statusDidChange:(id)arg0 ;
-(void)testKey:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateAccountFlagsData:(id)arg0 ;
-(void)updateAssetCountsFromServer:(id)arg0 ;
-(void)updateDisabledFeatures:(id)arg0 ;
-(void)updateInitialSyncDate:(id)arg0 ;
-(void)updateLastSuccessfullSyncDate:(id)arg0 ;


@end


#endif