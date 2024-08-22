// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCPERSISTENTCONTAINER_H
#define RCPERSISTENTCONTAINER_H

@class NSPersistentContainer, NSString, NSManagedObjectContext, NSDictionary;
@protocol RCRemoteChangeMergerDelegate;


#import "RCRegulatoryLogger.h"
#import "RCRemoteChangeMerger.h"
#import "RCDatabaseMetadata.h"
#import "RCQueryManager.h"

@interface RCPersistentContainer : NSPersistentContainer <RCRemoteChangeMergerDelegate>

 {
    NSString *_transactionAuthor;
    RCRegulatoryLogger *_regulatoryLogger;
    RCRemoteChangeMerger *_remoteChangeMerger;
    NSManagedObjectContext *_fetchedIvarContext;
    BOOL _fetchedEncryptedRecordingsExist;
    BOOL _viewContextIsConfigured;
}


@property (readonly, nonatomic) BOOL automaticallyDownloadFileBackedFutures; // ivar: _automaticallyDownloadFileBackedFutures
@property (readonly, nonatomic) NSDictionary *cloudStoresByID; // ivar: _cloudStoresByID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *encryptedCloudStoreID; // ivar: _encryptedCloudStoreID
@property (readonly, nonatomic) BOOL encryptedRecordingsExist;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RCDatabaseMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) RCQueryManager *queryManager; // ivar: _queryManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *unencryptedCloudStoreID; // ivar: _unencryptedCloudStoreID


+(id)mirroringContainer;
+(id)newObjectModel;
+(id)sharedContainer;
+(void)initialize;
-(BOOL)_manuallyMigrateCloudRecordingsDatabase:(id)arg0 error:(*id)arg1 ;
-(id)_cloudRecordingsInContext:(id)arg0 ;
-(id)_createMirroringDelegateForContainer:(id)arg0 ;
-(id)_fetchLegacyRecordingsForMigrationWithContext:(id)arg0 ;
-(id)_initWithMirroring:(BOOL)arg0 useXPCStore:(BOOL)arg1 ;
-(id)_legacyRecordingWithUniqueID:(id)arg0 context:(id)arg1 ;
-(id)_storeDescriptionForStore:(id)arg0 xpcServiceName:(id)arg1 configuration:(id)arg2 ;
-(id)_valueForDatabaseProperty:(id)arg0 context:(id)arg1 ;
-(id)newBackgroundModel;
-(id)newChangeTrackingBackgroundModel;
-(id)newContextWithConcurrencyType:(NSUInteger)arg0 ;
-(id)newMainQueueModel;
-(void)_configureContext:(id)arg0 ;
-(void)_deleteOrphanedEntityRevisionsWithContext:(id)arg0 ;
-(void)_fetchIvarsAsync;
-(void)_handleCloudKitContainerEvent:(id)arg0 ;
-(void)_handleCloudKitContainerEventChangedNotification:(id)arg0 ;
-(void)_logIfDescrepencyWithKey:(id)arg0 cloudRecordingValue:(id)arg1 legacyRecordingValue:(id)arg2 ;
-(void)_migrateDatabaseIfNecessary:(id)arg0 ;
-(void)_validateMigratedRecording:(id)arg0 legacyRecording:(id)arg1 ;
-(void)_waitForFetchedIvars;
-(void)notifyEncryptedRecordingsExist;


@end


#endif