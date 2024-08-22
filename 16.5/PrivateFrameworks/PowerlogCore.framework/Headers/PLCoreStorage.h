// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCORESTORAGE_H
#define PLCORESTORAGE_H

@class NSString, NSMutableSet;
@protocol UMUserSwitchStakeholder, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLXPCResponderOperatorComposition.h"
#import "PLCFNotificationOperatorComposition.h"
#import "PLSQLiteConnection.h"
#import "PLNSNotificationOperatorComposition.h"
#import "PLTimer.h"
#import "PLKQueue.h"
#import "PLStorageOperator.h"

@interface PLCoreStorage : NSObject <UMUserSwitchStakeholder>



@property (retain) PLXPCResponderOperatorComposition *XPCFlushCacheResponder; // ivar: _XPCFlushCacheResponder
@property (retain) PLXPCResponderOperatorComposition *archivesResponder; // ivar: _archivesResponder
@property (retain) NSObject<OS_dispatch_queue> *backgroundQueue; // ivar: _backgroundQueue
@property (retain) PLXPCResponderOperatorComposition *batteryUIPlistsResponder; // ivar: _batteryUIPlistsResponder
@property (retain) PLXPCResponderOperatorComposition *blPathResponder; // ivar: _blPathResponder
@property (retain) PLCFNotificationOperatorComposition *blockingFlushCachesCFNotification; // ivar: _blockingFlushCachesCFNotification
@property (retain) PLSQLiteConnection *connection; // ivar: _connection
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification; // ivar: _dailyTaskNotification
@property (retain) PLTimer *dailyTaskTimer; // ivar: _dailyTaskTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PLCFNotificationOperatorComposition *flushCachesCFNotification; // ivar: _flushCachesCFNotification
@property (retain) PLTimer *flushCachesTimer; // ivar: _flushCachesTimer
@property (readonly) NSUInteger hash;
@property (retain) PLCFNotificationOperatorComposition *keybagFirstUnlockNotification; // ivar: _keybagFirstUnlockNotification
@property (retain) PLKQueue *profileDefaultsKQueue; // ivar: _profileDefaultsKQueue
@property (retain) PLXPCResponderOperatorComposition *quarantineCopyResponder; // ivar: _quarantineCopyResponder
@property (retain) PLXPCResponderOperatorComposition *quarantineResponder; // ivar: _quarantineResponder
@property (retain) NSMutableSet *safeCopyInProgress; // ivar: _safeCopyInProgress
@property (retain) PLXPCResponderOperatorComposition *safeFileResponder; // ivar: _safeFileResponder
@property (nonatomic) BOOL storageLocked; // ivar: _storageLocked
@property (retain) PLStorageOperator *storageOperator; // ivar: _storageOperator
@property BOOL storageReady; // ivar: _storageReady
@property (readonly) Class superclass;
@property (retain) PLXPCResponderOperatorComposition *upgradeLogsResponder; // ivar: _upgradeLogsResponder
@property (retain) NSObject<OS_dispatch_queue> *utilityQueue; // ivar: _utilityQueue
@property (retain) NSString *uuid; // ivar: _uuid


+(id)additionalTables;
+(id)allOperatorTablesToTrimConditionsForTrimDate:(id)arg0 ;
+(id)storageQueueNameForClass:(Class)arg0 ;
+(id)storageQueueNameForEntryKey:(id)arg0 ;
+(void)logMessage:(id)arg0 fromFile:(id)arg1 fromFunction:(id)arg2 fromLineNumber:(NSInteger)arg3 ;
-(BOOL)flushCachesIfRequiredForEntryKey:(id)arg0 ;
-(BOOL)setFileProtectionForPath:(id)arg0 withLevel:(id)arg1 ;
-(NSInteger)blockingWriteEntry:(id)arg0 withCompletionBlock:(id)arg1 ;
-(NSInteger)countOfEntriesForKey:(id)arg0 ;
-(NSInteger)generalEntryCacheSizeLimit;
-(NSInteger)writeEntry:(id)arg0 ;
-(id)aggregateEntriesForKey:(id)arg0 withBucketLength:(CGFloat)arg1 inTimeIntervalRange:(struct _PLTimeIntervalRange )arg2 ;
-(id)entriesForKey:(id)arg0 ;
-(id)entriesForKey:(id)arg0 before:(BOOL)arg1 timeInterval:(CGFloat)arg2 count:(NSInteger)arg3 withFilters:(id)arg4 ;
-(id)entriesForKey:(id)arg0 inTimeRange:(struct _PLTimeIntervalRange )arg1 withCountOfEntriesBefore:(NSInteger)arg2 withCountOfEntriesAfter:(NSInteger)arg3 withFilters:(id)arg4 ;
-(id)entriesForKey:(id)arg0 inTimeRange:(struct _PLTimeIntervalRange )arg1 withFilters:(id)arg2 ;
-(id)entriesForKey:(id)arg0 startingFromRowID:(NSInteger)arg1 count:(NSInteger)arg2 withFilters:(id)arg3 ;
-(id)entriesForKey:(id)arg0 withComparisons:(id)arg1 ;
-(id)entriesForKey:(id)arg0 withProperties:(id)arg1 ;
-(id)entriesForKey:(id)arg0 withQuery:(id)arg1 ;
-(id)entryForKey:(id)arg0 withID:(NSInteger)arg1 ;
-(id)firstEntryForKey:(id)arg0 ;
-(id)init;
-(id)lastEntriesForKey:(id)arg0 count:(NSInteger)arg1 withFilters:(id)arg2 ;
-(id)lastEntryForKey:(id)arg0 ;
-(id)lastEntryForKey:(id)arg0 withComparisons:(id)arg1 isSingleton:(BOOL)arg2 ;
-(id)lastEntryForKey:(id)arg0 withFilters:(id)arg1 ;
-(id)lastEntryForKey:(id)arg0 withIDLessThan:(NSInteger)arg1 ;
-(id)lastEntryForKey:(id)arg0 withSubEntryKey:(id)arg1 ;
-(id)processIDEntryForPid:(int)arg0 ;
-(short)verifySchemaVersionOfTable:(id)arg0 matchesExpectedVersion:(CGFloat)arg1 ;
-(void)_updateEntry:(id)arg0 withBlock:(id)arg1 ;
-(void)addAggdModeKeys;
-(void)attemptToSendTaskingStartNotification;
-(void)blockingFlushCachesWithReason:(id)arg0 ;
-(void)blockingFlushQueues:(id)arg0 ;
-(void)blockingUpdateEntry:(id)arg0 withBlock:(id)arg1 ;
-(void)checkCacheSizeForFlush;
-(void)cleanupQuarantine;
-(void)cleanupTmp;
-(void)configureCacheFlush;
-(void)dailyTasks;
-(void)dealloc;
-(void)deleteAllEntriesForKey:(id)arg0 ;
-(void)deleteAllEntriesForKey:(id)arg0 beforeTimestamp:(id)arg1 ;
-(void)deleteAllEntriesForKey:(id)arg0 beforeTimestamp:(id)arg1 withFilters:(id)arg2 ;
-(void)deleteAllEntriesForKey:(id)arg0 withFilters:(id)arg1 ;
-(void)deleteEntry:(id)arg0 ;
-(void)deleteEntryForKey:(id)arg0 WithRowID:(NSInteger)arg1 ;
-(void)dispatchAsyncForEntryKey:(id)arg0 withBlock:(id)arg1 ;
-(void)dispatchSyncForEntryKey:(id)arg0 withBlock:(id)arg1 ;
-(void)flushCachesWithReason:(id)arg0 ;
-(void)handleSchemaMismatchForTable:(id)arg0 expectedVersion:(CGFloat)arg1 schemaMatch:(short)arg2 ;
-(void)initOperatorDependancies;
-(void)loadDynamicValuesIntoEntry:(id)arg0 ;
-(void)logMessage:(id)arg0 fromFile:(id)arg1 fromFunction:(id)arg2 fromLineNumber:(NSInteger)arg3 ;
-(void)logPreUnlockState:(BOOL)arg0 ;
-(void)moveUpgradePowerlogsAtPath:(id)arg0 toPath:(id)arg1 ;
-(void)processEntriesForKey:(id)arg0 withProperties:(id)arg1 withBlock:(id)arg2 ;
-(void)removeErroneousQualificationEntries;
-(void)removeOldPowerlogFiles;
-(void)removeStorageForEntryKey:(id)arg0 ;
-(void)reportPerfStats;
-(void)setAllNullValuesForEntryKey:(id)arg0 forKey:(id)arg1 toValue:(id)arg2 withFilters:(id)arg3 ;
-(void)setupArrayForTableName:(id)arg0 forColumnNamed:(id)arg1 withValueType:(short)arg2 withShouldIndexFKID:(BOOL)arg3 ;
-(void)setupCompositeIndexOnTable:(id)arg0 withColumns:(id)arg1 ;
-(void)setupStorageForEntryKey:(id)arg0 ;
-(void)setupStorageForOperator:(id)arg0 ;
-(void)setupStorageForOperatorClass:(Class)arg0 ;
-(void)setupStorageForOperatorName:(id)arg0 ;
-(void)setupStorageVersions;
-(void)setupTableName:(id)arg0 withEntryKeyConfig:(id)arg1 withKeyOrder:(id)arg2 isDynamic:(BOOL)arg3 withShouldIndexFKID:(BOOL)arg4 ;
-(void)startStorage;
-(void)stopStorage;
-(void)updateEntry:(id)arg0 withBlock:(id)arg1 ;
-(void)willSwitchUser;
-(void)writeAggregateEntry:(id)arg0 ;
-(void)writeEntries:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)writeEntry:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)writeProportionateAggregateEntry:(id)arg0 withStartDate:(id)arg1 withEndDate:(id)arg2 ;


@end


#endif