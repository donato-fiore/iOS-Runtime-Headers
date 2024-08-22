// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFUBIQUITYSETUPASSISTANT_H
#define PFUBIQUITYSETUPASSISTANT_H

@class NSMutableDictionary, NSString, NSURL, NSMutableSet, NSMutableArray, NSError;
@protocol NSObject><NSCopying><NSCoding, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "NSPersistentStoreCoordinator.h"
#import "NSPersistentStore.h"
#import "PFUbiquityKnowledgeVector.h"
#import "PFUbiquityLocation.h"
#import "_PFUbiquityStack.h"
#import "PFUbiquityStoreMetadata.h"
#import "PFUbiquityPeerState.h"
#import "PFUbiquityBaseline.h"
#import "PFUbiquityPeerReceipt.h"
#import "PFUbiquityContainerIdentifier.h"
#import "PFUbiquityMigrationAssistant.h"
#import "PFUbiquityMigrationManager.h"
#import "PFUbiquitySwitchboardEntry.h"

@interface PFUbiquitySetupAssistant : NSObject {
    NSMutableDictionary *_options;
    NSPersistentStoreCoordinator *_psc;
    NSPersistentStore *_store;
    NSString *_storeType;
    NSURL *_storeURL;
    NSURL *_actualStoreFileURL;
    NSMutableDictionary *_storeMetadataDict;
    BOOL _needsMetadataWrite;
    PFUbiquityKnowledgeVector *_storeKV;
    BOOL _ubiquityEnabled;
    id<NSObject><NSCopying><NSCoding> *_ubiquityIdentityToken;
    NSURL *_ubiquityRootURL;
    NSString *_ubiquityRootSubpath;
    NSString *_ubiquityName;
    NSString *_ubiquityContainerIdentifier;
    NSString *_localPeerID;
    NSString *_modelVersionHash;
    NSString *_previousModelVersionHash;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    _PFUbiquityStack *_stack;
    PFUbiquityStoreMetadata *_storeMetadata;
    PFUbiquityPeerState *_localPeerState;
    PFUbiquityKnowledgeVector *_metaKV;
    PFUbiquityBaseline *_baseline;
    BOOL _baselineFileExistsInCloud;
    BOOL _hasUploadingBaseline;
    BOOL _monitorUploadingBaselineAsync;
    BOOL _didBaselineCopy;
    PFUbiquityKnowledgeVector *_baselineKV;
    BOOL _votedOffIsland;
    BOOL _reapUbiquitousLogs;
    BOOL _respondToBaselineRoll;
    BOOL _storeFileExists;
    BOOL _storeFileIsReadOnly;
    BOOL _hasStoreMetadataFile;
    BOOL _hasStoreMetadataEntry;
    BOOL _hasContainerUUID;
    BOOL _hasContainerUUIDInStore;
    BOOL _needsMetadataRecovery;
    PFUbiquityPeerReceipt *_localPeerReceipt;
    PFUbiquityKnowledgeVector *_receiptKV;
    PFUbiquityContainerIdentifier *_containerIdentifier;
    NSString *_preStoreContainerUUID;
    BOOL _usedExistingUUIDMapping;
    BOOL _hasLocalTransactionLogs;
    BOOL _hasMigrationOptions;
    BOOL _didMigrateBaseline;
    BOOL _storeWasMigrated;
    PFUbiquityMigrationAssistant *_migrationAssistant;
    PFUbiquityMigrationManager *_migrationManager;
    BOOL _replayLogsSynchronously;
    BOOL _useLocalAccount;
    BOOL _seedStore;
    NSURL *_seedStoreURL;
    BOOL _haveExistingUUIDMappings;
    BOOL _abortSetup;
    PFUbiquitySwitchboardEntry *_entry;
    BOOL _gotExportNotification;
    int _sideLoadLock;
    NSMutableSet *_logLocationsExportedDuringSideLoad;
    NSMutableDictionary *_gidToRid;
    NSMutableDictionary *_entityNameToGidSet;
    NSObject<OS_dispatch_semaphore> *_initialSyncSemaphore;
    int _initialSyncComplete;
    NSMutableArray *_queryLocations;
    BOOL _notifyAboutSetupProgress;
    NSInteger _numSetupTries;
    NSUInteger _retryDelaySec;
    BOOL _failSetup;
    NSError *_failSetupError;
    BOOL _gotAccountChange;
    BOOL _cacheFilePresenterForUbiquityRoot;
}




-(id)init;
-(id)initWithPersistentStoreCoordinator:(id)arg0 andStoreOptions:(id)arg1 forPersistentStoreOfType:(id)arg2 atURL:(id)arg3 ;
-(void)coordinatorWillRemoveStore:(id)arg0 ;
-(void)dealloc;
-(void)exportedLog:(id)arg0 ;
-(void)ubiquityIdentityTokenChanged:(id)arg0 ;


@end


#endif