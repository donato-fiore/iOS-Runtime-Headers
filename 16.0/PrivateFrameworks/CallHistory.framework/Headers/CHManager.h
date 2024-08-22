// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHMANAGER_H
#define CHMANAGER_H

@class NSString, NSArray, NSDate, NSPredicate;
@protocol SyncManagerProtocol;


#import "CHSynchronizedLoggable.h"
#import "CHPhoneBookIOSManager.h"

@interface CHManager : CHSynchronizedLoggable

@property BOOL cacheIsDirty; // ivar: _cacheIsDirty
@property (copy, nonatomic) NSString *coalescingStrategy; // ivar: _coalescingStrategy
@property (nonatomic) BOOL generateSyncTransactions; // ivar: _generateSyncTransactions
@property (copy, nonatomic) NSArray *limitingCallKinds; // ivar: _limitingCallKinds
@property (nonatomic) unsigned int limitingCallTypes; // ivar: _limitingCallTypes
@property (copy, nonatomic) NSDate *limitingEndDate; // ivar: _limitingEndDate
@property (copy, nonatomic) NSDate *limitingStartDate; // ivar: _limitingStartDate
@property NSInteger numberOfUnseenMissedCalls; // ivar: _numberOfUnseenMissedCalls
@property (readonly, nonatomic) CHPhoneBookIOSManager *phoneBookManager; // ivar: _phoneBookManager
@property (retain, nonatomic) NSPredicate *postFetchingPredicate; // ivar: _postFetchingPredicate
@property BOOL reCoalesce; // ivar: _reCoalesce
@property (retain, nonatomic) NSArray *recentCalls; // ivar: _recentCalls
@property (nonatomic) BOOL showsFaceTimeAudioCalls; // ivar: _showsFaceTimeAudioCalls
@property (nonatomic) BOOL showsFaceTimeVideoCalls; // ivar: _showsFaceTimeVideoCalls
@property (nonatomic) BOOL showsTelephonyCalls; // ivar: _showsTelephonyCalls
@property (retain, nonatomic) NSObject<SyncManagerProtocol> *syncManager; // ivar: _syncManager
@property (retain, nonatomic, getter=uncoalescedRecentCallsSync) NSArray *uncoalescedRecentCalls; // ivar: _uncoalescedRecentCalls
@property (retain) NSArray *uncoalescedUnFilteredRecentCalls; // ivar: _uncoalescedUnFilteredRecentCalls


+(id)limitingCallKindsForCallType:(unsigned int)arg0 ;
+(unsigned int)CHCallStatusForCallWithDuration:(CGFloat)arg0 isOriginated:(BOOL)arg1 isAnswered:(BOOL)arg2 ;
-(CGFloat)callTimersGetIncoming;
-(CGFloat)callTimersGetLifetime;
-(CGFloat)callTimersGetOutgoing;
-(NSInteger)deleteCallsWithPredicate:(id)arg0 ;
-(NSInteger)setRead:(BOOL)arg0 forCallsWithPredicate:(id)arg1 ;
-(NSUInteger)callCountWithPredicate:(id)arg0 ;
-(NSUInteger)coalescedCallCountWithPredicate:(id)arg0 ;
-(NSUInteger)countCallsWithPredicate:(id)arg0 ;
-(NSUInteger)countCallsWithPredicateSync:(id)arg0 ;
-(id)applyPredicate:(id)arg0 toCalls:(id)arg1 ;
-(id)callIdentifiersWithPredicate:(id)arg0 limit:(NSUInteger)arg1 offset:(NSUInteger)arg2 batchSize:(NSUInteger)arg3 ;
-(id)callsWithPredicate:(id)arg0 limit:(NSUInteger)arg1 offset:(NSUInteger)arg2 batchSize:(NSUInteger)arg3 ;
-(id)coalescedCallsWithCalls:(id)arg0 usingStrategy:(id)arg1 ;
-(id)coalescedCallsWithPredicate:(id)arg0 limit:(NSUInteger)arg1 offset:(NSUInteger)arg2 batchSize:(NSUInteger)arg3 ;
-(id)fetchRecentCallsSyncWithCoalescing:(BOOL)arg0 ;
-(id)getLimitsDictionary;
-(id)init;
-(id)initWithContactStore:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 queue:(id)arg1 ;
-(id)initWithFetchingLimitsDictionary:(id)arg0 andCoalescingStrategy:(id)arg1 andPostFetchingPredicate:(id)arg2 withQueue:(id)arg3 ;
-(id)initWithQueue:(id)arg0 ;
-(id)latestCallMatchingNormalizedRemoteParticipantHandleValues:(id)arg0 ;
-(id)latestRecentCallMatchingPredicate:(id)arg0 ;
-(id)recentCallsWithPredicate:(id)arg0 ;
-(id)unCoalesceCall:(id)arg0 ;
-(void)addMultipleCallsToCallHistory:(id)arg0 ;
-(void)addToCallHistory:(id)arg0 ;
-(void)callTimersReset;
-(void)clearDatabase;
-(void)currentLocaleChanged:(id)arg0 ;
-(void)dealloc;
-(void)deleteAllCalls;
-(void)deleteAllCallsSync;
-(void)deleteCall:(id)arg0 ;
-(void)deleteCallAtIndex:(NSUInteger)arg0 ;
-(void)deleteCalls:(id)arg0 withCompletion:(id)arg1 ;
-(void)deleteCallsWithPredicate:(id)arg0 completion:(id)arg1 ;
-(void)deleteTheseCalls:(id)arg0 ;
-(void)deleteTheseCallsSync:(id)arg0 ;
-(void)flush;
-(void)handleCallHistoryContactStoreChangedInternalNotification:(id)arg0 ;
-(void)handleCallHistoryDatabaseChangedInternalNotification:(id)arg0 ;
-(void)markAllCallsAsReadWithPredicate:(id)arg0 ;
-(void)registerForNotifications;
-(void)setDefaultInitValues;
-(void)setInitialLimitingCallKinds:(id)arg0 ;
-(void)setOutgoingLocalParticipantUUID:(id)arg0 forRecentCallsMatchingPredicate:(id)arg1 ;
-(void)setRead:(BOOL)arg0 forCallsWithPredicate:(id)arg1 completion:(id)arg2 ;
-(void)updateBytesOfDataUsedFor:(id)arg0 with:(id)arg1 ;


@end


#endif