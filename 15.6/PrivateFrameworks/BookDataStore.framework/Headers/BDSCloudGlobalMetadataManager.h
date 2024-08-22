// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BDSCLOUDGLOBALMETADATAMANAGER_H
#define BDSCLOUDGLOBALMETADATAMANAGER_H

@class NSMutableDictionary, NSString, NSManagedObjectModel;
@protocol BCCloudDataSyncManagerDelegate, BDSCloudKitSupportZoneRecovery, BDSCloudGlobalMetadataManager;

#import <Foundation/Foundation.h>

#import "BCCloudChangeTokenController.h"
#import "BCCloudDataManager.h"
#import "BCCloudDataSource.h"
#import "BDSSaltVersionIdentifierManager.h"
#import "BCCloudDataSyncManager.h"

@interface BDSCloudGlobalMetadataManager : NSObject <BCCloudDataSyncManagerDelegate, BDSCloudKitSupportZoneRecovery, BDSCloudGlobalMetadataManager>



@property (retain, nonatomic) BCCloudChangeTokenController *changeTokenController; // ivar: _changeTokenController
@property (retain, nonatomic) NSMutableDictionary *conflictResolvers; // ivar: _conflictResolvers
@property (retain, nonatomic) BCCloudDataManager *dataManager; // ivar: _dataManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableCloudSync; // ivar: _enableCloudSync
@property (retain, nonatomic) BCCloudDataSource *globalMetadataDataSource; // ivar: _globalMetadataDataSource
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSManagedObjectModel *objectModel; // ivar: _objectModel
@property (retain, nonatomic) BDSSaltVersionIdentifierManager *saltVersionIdentifierManager; // ivar: _saltVersionIdentifierManager
@property (readonly) Class superclass;
@property (retain, nonatomic) BCCloudDataSyncManager *syncManager; // ivar: _syncManager


+(id)sharedManager;
+(void)deleteCloudDataWithCompletion:(id)arg0 ;
-(id)entityName;
-(id)init;
-(id)initWithCloudDataSource:(id)arg0 ;
-(void)currentCloudSyncVersions:(id)arg0 ;
-(void)deleteMetadatumForKey:(id)arg0 completion:(id)arg1 ;
-(void)dissociateCloudDataFromSyncWithCompletion:(id)arg0 ;
-(void)fetchMetadataIncludingDeleted:(BOOL)arg0 completion:(id)arg1 ;
-(void)getMetadataChangesSince:(id)arg0 completion:(id)arg1 ;
-(void)hasSaltChangedWithCompletion:(id)arg0 ;
-(void)metadataValueForKey:(id)arg0 completion:(id)arg1 ;
-(void)metadatumForKey:(id)arg0 completion:(id)arg1 ;
-(void)metadatumIncludingDeleted:(BOOL)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)removeConflictResolverForKey:(id)arg0 ;
-(void)removeMetadataForSaltedHashedRecordIDs:(id)arg0 completion:(id)arg1 ;
-(void)resolvedMetadataValueForKey:(id)arg0 completion:(id)arg1 ;
// -(void)setConflictResolver:(id)arg0 forKey:(unk)arg1  ;
-(void)setMetadata:(id)arg0 completion:(id)arg1 ;
-(void)setMetadataValue:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setMetadatum:(id)arg0 completion:(id)arg1 ;
-(void)signalSyncToCKForSyncManager:(id)arg0 ;
-(void)syncManager:(id)arg0 failedRecordIDs:(id)arg1 completion:(id)arg2 ;
-(void)syncManager:(id)arg0 fetchedAllRecordsInZone:(id)arg1 ;
-(void)syncManager:(id)arg0 removeCloudDataForIDs:(id)arg1 completion:(id)arg2 ;
-(void)syncManager:(id)arg0 resolveConflictsForRecords:(id)arg1 completion:(id)arg2 ;
-(void)syncManager:(id)arg0 startSyncToCKWithCompletion:(id)arg1 ;
-(void)syncManager:(id)arg0 updateSyncGenerationFromCloudData:(id)arg1 completion:(id)arg2 ;
-(void)updateSyncGenerationFromCloudData:(id)arg0 completion:(id)arg1 ;


@end


#endif