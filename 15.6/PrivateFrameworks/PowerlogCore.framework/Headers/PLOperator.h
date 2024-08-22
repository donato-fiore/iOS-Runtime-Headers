// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLOPERATOR_H
#define PLOPERATOR_H

@class NSMutableArray, NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLCoreStorage.h"
#import "PLTimer.h"

@interface PLOperator : NSObject

@property (retain) NSMutableArray *bufferedEntries; // ivar: _bufferedEntries
@property (readonly, weak) NSString *className;
@property (retain) NSMutableDictionary *filterDefinitions; // ivar: _filterDefinitions
@property (retain) NSMutableDictionary *filterDeltaLastEntryIDs; // ivar: _filterDeltaLastEntryIDs
@property (retain) NSMutableDictionary *lastLogDateForEntryKey; // ivar: _lastLogDateForEntryKey
@property (retain) NSMutableDictionary *localCache; // ivar: _localCache
@property (readonly, weak) PLCoreStorage *storage;
@property (readonly, weak) NSObject<OS_dispatch_queue> *storageQueue;
@property (readonly, weak) NSString *storageQueueName;
@property (retain) PLTimer *triggerBufferFlush; // ivar: _triggerBufferFlush
@property (readonly, weak) NSObject<OS_dispatch_queue> *workQueue;


+(BOOL)fullMode;
+(BOOL)isDebugEnabled;
+(BOOL)isDebugEnabledForKey:(id)arg0 ;
+(BOOL)isEnabled;
+(id)accountingGroupDefinitions;
+(id)createEntriesForMetrics:(id)arg0 withData:(id)arg1 withDate:(id)arg2 ;
+(id)defaults;
+(id)entryAggregateDefinitions;
+(id)entryDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryKeyForType:(id)arg0 andName:(id)arg1 ;
+(id)entryKeyForType:(id)arg0 andName:(id)arg1 isDynamic:(BOOL)arg2 ;
+(id)entryKeys;
+(id)operator;
+(id)railDefinitions;
+(id)trimConditionsWithEntryKey:(id)arg0 withTrimDate:(id)arg1 withCount:(id)arg2 withStartDateKey:(id)arg3 ;
+(id)trimConditionsWithEntryKey:(id)arg0 withTrimDate:(id)arg1 withDuration:(id)arg2 withStartDateKey:(id)arg3 ;
+(void)load;
+(void)setEnabled:(BOOL)arg0 ;
-(BOOL)defaultBoolForKey:(id)arg0 ;
-(BOOL)isDebugEnabled;
-(BOOL)isDebugEnabledForKey:(id)arg0 ;
-(BOOL)postFilteredNotificationForEntry:(id)arg0 withFilteredDefition:(id)arg1 withNotificationName:(id)arg2 ;
-(BOOL)shouldWriteEntry:(id)arg0 withDebug:(BOOL)arg1 ;
-(CGFloat)defaultDoubleForKey:(id)arg0 ;
-(CGFloat)timeIntervalSinceLastLogForEntryKey:(id)arg0 ;
-(NSInteger)defaultLongForKey:(id)arg0 ;
-(id)defaultObjectForKey:(id)arg0 ;
-(id)entryDefinitions;
-(id)entryKeys;
-(id)init;
-(id)initForTest;
-(id)tablesToTrimConditionsForTrimDate:(id)arg0 ;
-(id)trimConditionsForEntryKey:(id)arg0 forTrimDate:(id)arg1 ;
-(void)dealloc;
-(void)enableBufferFlushTimer:(NSUInteger)arg0 ;
-(void)flushBuffer;
-(void)initOperatorDependancies;
-(void)initTaskOperatorDependancies;
-(void)log;
-(void)logEntries:(id)arg0 withGroupID:(id)arg1 ;
-(void)logEntry:(id)arg0 ;
-(void)logForSubsystem:(id)arg0 category:(id)arg1 data:(id)arg2 ;
-(void)logForSubsystem:(id)arg0 category:(id)arg1 data:(id)arg2 date:(id)arg3 ;
-(void)logFromCFCallback:(id)arg0 ;
-(void)logProportionateAggregateEntry:(id)arg0 withStartDate:(id)arg1 withEndDate:(id)arg2 ;
-(void)logRequestNotification:(id)arg0 ;
-(void)postEntries:(id)arg0 ;
-(void)postEntries:(id)arg0 withGroupID:(id)arg1 ;
-(void)setupFilterRequest:(id)arg0 ;
-(void)subscribeNotificationsForEntries;
-(void)updateEntry:(id)arg0 withBlock:(id)arg1 ;


@end


#endif