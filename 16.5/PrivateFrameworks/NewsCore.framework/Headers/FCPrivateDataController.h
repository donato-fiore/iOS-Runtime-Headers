// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCPRIVATEDATACONTROLLER_H
#define FCPRIVATEDATACONTROLLER_H

@class NSString, NSArray, NSHashTable;
@protocol FCJSONEncodableObjectProviding, FCPrivateZoneSyncManagerDelegate, FCPrivateRecordSyncManagerDelegate, FCCommandQueueDelegate, FCCKZoneRestorationSource, FCCKZonePruningAssistant, FCAppActivityObserving;

#import <Foundation/Foundation.h>

#import "FCPushNotificationCenter.h"
#import "FCCommandQueue.h"
#import "FCAsyncSerialQueue.h"
#import "FCCloudContext.h"
#import "FCKeyValueStore.h"

@interface FCPrivateDataController : NSObject <FCJSONEncodableObjectProviding, FCPrivateZoneSyncManagerDelegate, FCPrivateRecordSyncManagerDelegate, FCCommandQueueDelegate, FCCKZoneRestorationSource, FCCKZonePruningAssistant, FCAppActivityObserving>

 {
    BOOL _waitingForFirstSync;
    BOOL _preparedForUse;
    FCPushNotificationCenter *_pushNotificationCenter;
    NSString *_storeDirectory;
    FCCommandQueue *_commandQueue;
    NSArray *_syncManagers;
    NSUInteger _changeCount;
    FCAsyncSerialQueue *_syncQueue;
    NSHashTable *_stateObservers;
}


@property (readonly, nonatomic) FCCloudContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDirty) BOOL dirty;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FCKeyValueStore *localStore; // ivar: _localStore
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled;
@property (nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled; // ivar: _syncingEnabled
@property (readonly, getter=isWaitingForFirstSync) BOOL waitingForFirstSync;


+(BOOL)isLocalStoreKeyInternal:(id)arg0 ;
+(BOOL)requiresBatchedSync;
+(BOOL)requiresHighPriorityFirstSync;
+(BOOL)requiresPushNotificationSupport;
+(NSInteger)commandQueueUrgency;
+(id)backingRecordIDs;
+(id)backingRecordZoneIDs;
+(id)commandStoreFileName;
+(id)commandsToMergeLocalDataToCloud:(id)arg0 privateDataDirectory:(id)arg1 ;
+(id)desiredKeys;
+(id)internalLocalStoreKeys;
+(void)configureKeyValueStoreForJSONHandling:(id)arg0 ;
+(void)populateLocalStoreClassRegistry:(id)arg0 ;
-(BOOL)canHelpPruneZoneName:(id)arg0 ;
-(BOOL)canHelpRestoreZoneName:(id)arg0 ;
-(BOOL)isBackedByAnyRecordZoneIDsInSet:(id)arg0 ;
-(CGFloat)softMaxRecordAgeWhenMigratingZoneName:(id)arg0 ;
-(NSInteger)qualityOfServiceForNextCommandInCommandQueue:(id)arg0 ;
-(NSUInteger)softMaxRecordCountWhenMigratingZoneName:(id)arg0 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 pushNotificationCenter:(id)arg1 storeDirectory:(id)arg2 ;
-(id)jsonEncodableObject;
-(id)pruneRecords:(id)arg0 forZoneName:(id)arg1 ;
-(id)recordsForRestoringZoneName:(id)arg0 ;
-(void)_possiblySimulateCrashWithMessage:(id)arg0 ;
-(void)activityObservingApplicationWindowDidBecomeForeground;
-(void)addCommandToCommandQueue:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)addStateObserver:(id)arg0 ;
-(void)assertReadyForUse;
-(void)createLocalStore;
-(void)dealloc;
-(void)disableSyncing;
-(void)enableSyncing;
-(void)forceSyncWithCompletion:(id)arg0 ;
-(void)handleSyncCompletion;
-(void)handleSyncDidResetLocalDataForRecordZoneWithID:(id)arg0 ;
-(void)handleSyncWithChangedRecords:(id)arg0 deletedRecordNames:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)markAsDirty;
-(void)mergeLocalStoreWithCloudWithPrivateDataDirectory:(id)arg0 ;
-(void)performFirstSyncWithCallbackQueue:(id)arg0 completion:(id)arg1 ;
-(void)performFirstSyncWithCompletion:(id)arg0 ;
-(void)prepareForUse;
-(void)recordSyncManager:(id)arg0 stateDidChange:(id)arg1 ;
-(void)recordSyncManagerNotifyObservers:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeStateObserver:(id)arg0 ;
-(void)saveWithCompletion:(id)arg0 ;
-(void)syncWithCallbackQueue:(id)arg0 completion:(id)arg1 ;
-(void)syncWithCompletion:(id)arg0 ;
-(void)zoneSyncManager:(id)arg0 stateDidChange:(id)arg1 ;
-(void)zoneSyncManagerNotifyObservers:(id)arg0 ;


@end


#endif