// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _KSTEXTREPLACEMENTCKSTORE_H
#define _KSTEXTREPLACEMENTCKSTORE_H

@class NSString;
@protocol _KSCloudKitManagerDelegate, _KSTextReplacementSyncProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_KSCloudKitManager.h"
#import "_KSTextReplacementCoreDataStore.h"

@interface _KSTextReplacementCKStore : NSObject <_KSCloudKitManagerDelegate, _KSTextReplacementSyncProtocol>

 {
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
}


@property (nonatomic) BOOL ckMigrationStatusOnCloud; // ivar: _ckMigrationStatusOnCloud
@property (retain, nonatomic) _KSCloudKitManager *cloudKitManager; // ivar: _cloudKitManager
@property (retain, nonatomic) _KSTextReplacementCoreDataStore *coreDataStore; // ivar: _coreDataStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numPullRequests; // ivar: _numPullRequests
@property (readonly) Class superclass;


+(BOOL)isMigrationCompleted;
-(BOOL)isAccountAvailable;
-(NSUInteger)countLocalEntriesToBeSynced;
-(NSUInteger)decayedSyncCountForTime:(id)arg0 ;
-(NSUInteger)getSyncCount;
-(NSUInteger)getSyncCountThresholdHalfLifeHours;
-(NSUInteger)getSyncCountThrottleThreshold;
-(NSUInteger)totalPullRequestsUntilNow;
-(id)cloudEntriesFromLocalEntries:(id)arg0 ;
-(id)cloudRecordIDsForLocalEntries:(id)arg0 ;
-(id)initWithDirectoryPath:(id)arg0 ;
-(id)localEntriesFromCloudEntries:(id)arg0 ;
-(id)queryDeletedEntries;
-(id)queryUpdatedLocalEntries;
-(id)textReplacementEntries;
-(void)_requestSync:(NSUInteger)arg0 completionBlock:(id)arg1 ;
-(void)_updateSyncCount:(NSUInteger)arg0 success:(BOOL)arg1 ;
-(void)accountDidChange:(id)arg0 ;
-(void)addEntries:(id)arg0 removeEntries:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)dealloc;
-(void)importSampleShortcutsIfNecessary;
-(void)pullRemoteDataWithPriority:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)pushAllLocalData;
-(void)pushLocalChangesWithPriority:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)pushMigrationStatusToCloud:(BOOL)arg0 ;
-(void)queryCloudIfFirstPullOrAccountChanged:(BOOL)arg0 ;
-(void)queryMigrationStatusOnCloudWithCallback:(id)arg0 ;
-(void)queryTextReplacementsWithCallback:(id)arg0 ;
-(void)queryTextReplacementsWithPredicate:(id)arg0 callback:(id)arg1 ;
-(void)recordSyncStatus;
-(void)removeAllEntries;
-(void)removeAllEntriesWithCompletionHandler:(id)arg0 ;
-(void)requestSync:(NSUInteger)arg0 withCompletionBlock:(id)arg1 ;
-(void)requestSyncWithCompletionBlock:(id)arg0 ;
-(void)userDidDeleteRecordZone:(id)arg0 ;


@end


#endif