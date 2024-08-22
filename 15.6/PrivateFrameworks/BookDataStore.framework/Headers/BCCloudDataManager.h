// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCCLOUDDATAMANAGER_H
#define BCCLOUDDATAMANAGER_H

@class NSString, NSManagedObjectContext;
@protocol BDSCloudKitSupportSignOutDissociate, BCCloudDataMapper, BCCloudDataPrivacyDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BCCloudKitController.h"
#import "BCCloudDataSource.h"
#import "BCCloudDataSyncManager.h"

@interface BCCloudDataManager : NSObject <BDSCloudKitSupportSignOutDissociate>



@property (weak, nonatomic) BCCloudKitController *cloudKitController; // ivar: _cloudKitController
@property (retain, nonatomic) NSObject<BCCloudDataMapper> *dataMapper; // ivar: _dataMapper
@property (retain, nonatomic) BCCloudDataSource *dataSource; // ivar: _dataSource
@property (copy, nonatomic) NSString *entityName; // ivar: _entityName
@property Class immutableClass; // ivar: _immutableClass
@property (weak, nonatomic) NSManagedObjectContext *moc; // ivar: _moc
@property Class mutableClass; // ivar: _mutableClass
@property (copy, nonatomic) NSString *notificationName; // ivar: _notificationName
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate; // ivar: _privacyDelegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // ivar: _responseQueue
@property (nonatomic) BOOL signalDataChangedTransaction; // ivar: _signalDataChangedTransaction
@property (weak, nonatomic) BCCloudDataSyncManager *syncManager; // ivar: _syncManager


-(id)initWithCloudDataSource:(id)arg0 entityName:(id)arg1 notificationName:(id)arg2 immutableClass:(Class)arg3 mutableClass:(Class)arg4 syncManager:(id)arg5 cloudKitController:(id)arg6 ;
-(id)initWithCloudDataSource:(id)arg0 entityName:(id)arg1 notificationName:(id)arg2 immutableClass:(Class)arg3 mutableClass:(Class)arg4 syncManager:(id)arg5 cloudKitController:(id)arg6 dataMapper:(id)arg7 ;
-(id)mq_cloudSyncVersions;
-(id)mq_sanitizeError:(id)arg0 ;
-(void)_logError:(id)arg0 ;
-(void)cloudDataWithPredicate:(id)arg0 sortDescriptors:(id)arg1 completion:(id)arg2 ;
-(void)cloudDatasWithPredicate:(id)arg0 completion:(id)arg1 ;
// -(void)cloudDatasWithPredicate:(id)arg0 sortDescriptors:(id)arg1 maximumResultCount:(NSUInteger)arg2 filter:(id)arg3 completion:(unk)arg4  ;
-(void)countWithPredicate:(id)arg0 completion:(id)arg1 ;
-(void)currentCloudSyncVersions:(id)arg0 ;
-(void)deleteCloudDataForPredicate:(id)arg0 completion:(id)arg1 ;
-(void)dissociateCloudDataFromSyncWithCompletion:(id)arg0 ;
-(void)failedRecordIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchCloudDataIncludingDeleted:(BOOL)arg0 completion:(id)arg1 ;
-(void)getChangesSince:(id)arg0 forEntityClass:(Class)arg1 completion:(id)arg2 ;
-(void)hasSaltChangedWithCompletion:(id)arg0 ;
-(void)mq_incrementCloudVersion;
-(void)mq_signalTransactions;
-(void)removeCloudDataForPredicate:(id)arg0 completion:(id)arg1 ;
-(void)resolveConflictsForRecords:(id)arg0 completion:(id)arg1 ;
-(void)resolveConflictsForRecords:(id)arg0 withResolvers:(id)arg1 completion:(id)arg2 ;
-(void)resolveConflictsForRecords:(id)arg0 withResolvers:(id)arg1 mergers:(id)arg2 completion:(id)arg3 ;
-(void)resolvedCloudDataForCloudData:(id)arg0 predicate:(id)arg1 completion:(id)arg2 ;
-(void)resolvedCloudDataForCloudData:(id)arg0 withResolvers:(id)arg1 mergers:(id)arg2 predicate:(id)arg3 completion:(id)arg4 ;
-(void)resolvedCloudDataForCloudData:(id)arg0 withResolvers:(id)arg1 predicate:(id)arg2 completion:(id)arg3 ;
-(void)setCloudData:(id)arg0 predicate:(id)arg1 completion:(id)arg2 ;
-(void)setCloudData:(id)arg0 predicate:(id)arg1 mergers:(id)arg2 completion:(id)arg3 ;
-(void)setCloudData:(id)arg0 predicate:(id)arg1 propertyIDKey:(id)arg2 completion:(id)arg3 ;
-(void)setCloudData:(id)arg0 predicate:(id)arg1 propertyIDKey:(id)arg2 mergers:(id)arg3 completion:(id)arg4 ;
-(void)startSyncToCKWithCompletion:(id)arg0 ;
// -(void)transformedCloudDatasWithPredicate:(id)arg0 transformer:(id)arg1 limit:(unk)arg2 completion:(NSInteger)arg3  ;
-(void)updateSyncGenerationFromCloudData:(id)arg0 predicate:(id)arg1 propertyIDKey:(id)arg2 completion:(id)arg3 ;


@end


#endif