// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCKPRIVATEDATABASE_H
#define FCCKPRIVATEDATABASE_H

@class NSData, CKRecord, NFLazy, NSOperationQueue, NSArray, NSDate;
@protocol FCCKDatabaseEncryptionDelegate, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "FCNetworkBehaviorMonitor.h"
#import "FCCKPrivateDatabaseSchema.h"

@interface FCCKPrivateDatabase : NSObject {
    BOOL _encryptionEnabled;
    BOOL _secureSubscriptionsEnabled;
    BOOL _encryptionRequired;
    BOOL _beganInitialStartUp;
    BOOL _finishedInitialStartUp;
    BOOL _activelyStartingUp;
    id<FCCKDatabaseEncryptionDelegate> *_encryptionDelegate;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    NSData *_encryptionKey;
    NSData *_secureEncryptionKey;
    CKRecord *_sentinelRecord;
    NFLazy *_ckProperties;
    FCCKPrivateDatabaseSchema *_schema;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_serialOperationQueue;
    NSOperationQueue *_highPriorityOperationQueue;
    NSOperationQueue *_noPreflightOperationQueue;
    NSArray *_middleware;
    NSArray *_remainingStartUpMiddleware;
    NSArray *_operationMiddleware;
    NSArray *_recordMiddleware;
    NSObject<OS_dispatch_group> *_initialStartUpGroup;
    NSInteger _startUpResult;
    NSUInteger _countOfFailedStartUpAttempts;
    NSDate *_dateOfLastFailedStartUpAttempt;
    NSArray *_zoneRestorationSources;
    NSArray *_zonePruningAssistants;
}




+(id)testingDatabase;
-(void)fetchAllDatabaseChangesWithServerChangeToken:(id)arg0 qualityOfService:(NSInteger)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchChangesForRecordZoneID:(id)arg0 changeToken:(id)arg1 desiredKeys:(id)arg2 fetchAllChanges:(BOOL)arg3 qualityOfService:(NSInteger)arg4 completionHandler:(id)arg5 ;


@end


#endif