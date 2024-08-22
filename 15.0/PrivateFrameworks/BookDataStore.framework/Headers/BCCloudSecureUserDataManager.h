// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCCLOUDSECUREUSERDATAMANAGER_H
#define BCCLOUDSECUREUSERDATAMANAGER_H

@class NSString, NSManagedObjectModel;
@protocol BCCloudDataSyncManagerDelegate, BCCloudSecureUserDataManager, BDSCloudKitSupportSignOutDeleteWithoutInstance;

#import <Foundation/Foundation.h>

#import "BCCloudChangeTokenController.h"
#import "BCCloudDataManager.h"
#import "BCCloudDataSource.h"
#import "BDSServiceProxy.h"
#import "BCCloudDataSyncManager.h"

@interface BCCloudSecureUserDataManager : NSObject <BCCloudDataSyncManagerDelegate, BCCloudSecureUserDataManager, BDSCloudKitSupportSignOutDeleteWithoutInstance>



@property (retain, nonatomic) BCCloudChangeTokenController *changeTokenController; // ivar: _changeTokenController
@property (retain, nonatomic) BCCloudDataManager *dataManager; // ivar: _dataManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableCloudSync; // ivar: _enableCloudSync
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSManagedObjectModel *objectModel; // ivar: _objectModel
@property (nonatomic) BOOL proxyMode; // ivar: _proxyMode
@property (retain, nonatomic) BCCloudDataSource *secureUserDataSource; // ivar: _secureUserDataSource
@property (retain, nonatomic) BDSServiceProxy *serviceProxy; // ivar: _serviceProxy
@property (readonly) Class superclass;
@property (retain, nonatomic) BCCloudDataSyncManager *syncManager; // ivar: _syncManager


+(id)sharedClientXPCProxy;
+(id)sharedManager;
+(void)deleteCloudDataWithCompletion:(id)arg0 ;
-(id)entityName;
-(void)currentCloudSyncVersions:(id)arg0 ;
-(void)deleteUserDatumForKey:(id)arg0 completion:(id)arg1 ;
-(void)dissociateCloudDataFromSyncWithCompletion:(id)arg0 ;
-(void)fetchUserDataIncludingDeleted:(BOOL)arg0 completion:(id)arg1 ;
-(void)getUserDataChangesSince:(id)arg0 completion:(id)arg1 ;
-(void)removeUserDataForSaltedHashedRecordIDs:(id)arg0 completion:(id)arg1 ;
-(void)resolvedUserDataValueForKey:(id)arg0 completion:(id)arg1 ;
-(void)setEnableSecureUserDataCloudSync:(BOOL)arg0 ;
-(void)setUserData:(id)arg0 completion:(id)arg1 ;
-(void)setUserDataValue:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setUserDatum:(id)arg0 completion:(id)arg1 ;
-(void)signalSyncToCKForSyncManager:(id)arg0 ;
-(void)syncManager:(id)arg0 failedRecordIDs:(id)arg1 completion:(id)arg2 ;
-(void)syncManager:(id)arg0 fetchedAllRecordsInZone:(id)arg1 ;
-(void)syncManager:(id)arg0 removeCloudDataForIDs:(id)arg1 completion:(id)arg2 ;
-(void)syncManager:(id)arg0 resolveConflictsForRecords:(id)arg1 completion:(id)arg2 ;
-(void)syncManager:(id)arg0 startSyncToCKWithCompletion:(id)arg1 ;
-(void)syncManager:(id)arg0 updateSyncGenerationFromCloudData:(id)arg1 completion:(id)arg2 ;
-(void)updateSyncGenerationFromCloudData:(id)arg0 completion:(id)arg1 ;
-(void)userDataValueForKey:(id)arg0 completion:(id)arg1 ;
-(void)userDatumForKey:(id)arg0 completion:(id)arg1 ;
-(void)userDatumIncludingDeleted:(BOOL)arg0 forKey:(id)arg1 completion:(id)arg2 ;


@end


#endif