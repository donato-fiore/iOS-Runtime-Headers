// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDINTERACTIONSTORE_H
#define _CDINTERACTIONSTORE_H

@protocol _CDInteractionRecording, _CDInteractionQuerying, _CDInteractionDeleting, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_CDInteractionStoreNotifier.h"
#import "_CDInteraction.h"
#import "_DKCoreDataStorage.h"

@interface _CDInteractionStore : NSObject <_CDInteractionRecording, _CDInteractionQuerying, _CDInteractionDeleting>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    _CDInteractionStoreNotifier *_notifier;
    NSObject<OS_dispatch_queue> *_pendingShareInteractionQueue;
    BOOL _inMaintenanceMode;
}


@property (retain, nonatomic) _CDInteraction *pendingShareSheetInteraction; // ivar: _pendingShareSheetInteraction
@property (nonatomic) BOOL readConcurrently; // ivar: _readConcurrently
@property (readonly, nonatomic) _DKCoreDataStorage *storage; // ivar: _storage


+(id)defaultDatabaseDirectory;
+(id)storeWithDirectory:(id)arg0 readOnly:(BOOL)arg1 ;
-(BOOL)deleteStorage;
-(BOOL)openAndCheckIfReadable;
-(BOOL)recordInteraction:(id)arg0 ;
-(BOOL)recordInteractions:(id)arg0 ;
-(BOOL)recordInteractions:(id)arg0 error:(*id)arg1 ;
-(BOOL)recordInteractionsBatch:(id)arg0 error:(*id)arg1 ;
-(BOOL)recordVersionNumber:(NSInteger)arg0 ;
-(NSInteger)queryVersionNumber;
-(NSUInteger)countContactsUsingPredicate:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)countInteractionsUsingPredicate:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)deleteInteractionsMatchingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 error:(*id)arg3 ;
-(NSUInteger)deleteInteractionsOlderThanDate:(id)arg0 limit:(NSUInteger)arg1 ;
-(NSUInteger)deleteInteractionsWithBundleId:(id)arg0 account:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)deleteInteractionsWithBundleId:(id)arg0 domainIdentifier:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)deleteInteractionsWithBundleId:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)deleteOldInteractionsIfNeededToLimitTotalNumber:(NSUInteger)arg0 limit:(NSUInteger)arg1 ;
-(NSUInteger)deleteUnreferencedContacts;
-(NSUInteger)deleteUnreferencedKeywords;
-(NSUInteger)numberOfContactsMatchingPredicate:(id)arg0 ;
-(NSUInteger)numberOfInteractionsMatchingPredicate:(id)arg0 ;
-(id)anonymizedCopyToDirectory:(id)arg0 salt:(id)arg1 ;
-(id)batchFetchExistingAttachmentRecords:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)batchFetchExistingContactRecords:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)batchFetchExistingInteractionsWithUUIDs:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)batchFetchExistingKeywordRecords:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)createAttachmentFromRecord:(id)arg0 ;
-(id)createInteractionFromRecord:(id)arg0 ;
-(id)createInteractionRecord:(id)arg0 context:(id)arg1 keywordCache:(id)arg2 attachmentCache:(id)arg3 contactCache:(id)arg4 error:(*id)arg5 ;
-(id)createKeywordFromRecord:(id)arg0 ;
-(id)dateFromTimeIntervalSinceRef:(CGFloat)arg0 ;
-(id)errorForException:(id)arg0 ;
-(id)fetchOrCreateAttachmentRecord:(id)arg0 context:(id)arg1 cache:(id)arg2 error:(*id)arg3 ;
-(id)fetchOrCreateContactRecord:(id)arg0 context:(id)arg1 cache:(id)arg2 error:(*id)arg3 ;
-(id)fetchOrCreateContactRecord:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)fetchOrCreateKeywordRecord:(id)arg0 context:(id)arg1 cache:(id)arg2 error:(*id)arg3 ;
-(id)fetchOrCreateKeywordRecord:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)getContactForRecord:(id)arg0 ;
-(id)histogramContactInteractionsUsingPredicate:(id)arg0 withLimit:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithDatabasePath:(id)arg0 inDirectory:(id)arg1 ;
-(id)initWithDirectory:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)interactionCountPerMechanism;
-(id)queryContactInteractionsUsingPredicate:(id)arg0 withLimit:(NSUInteger)arg1 ;
-(id)queryContactsUsingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)queryContactsUsingPredicate:(id)arg0 withLimit:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)queryInteractionsUsingPredicate:(id)arg0 matchingNameTokens:(id)arg1 sortDescriptors:(id)arg2 limit:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)queryInteractionsUsingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)queryInteractionsUsingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)queryInteractionsUsingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 offset:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)queryInteractionsUsingPredicate:(id)arg0 withLimit:(NSUInteger)arg1 ;
-(id)recipientArrayWithMostRecentSenderFirstFromIncomingInteraction:(id)arg0 outgoingInteraction:(id)arg1 ;
-(id)usersWithInteractions;
-(void)anonymizeContactsWithSalt:(id)arg0 ;
-(void)anonymizeInteractionsWithSalt:(id)arg0 ;
-(void)anonymizeKeywordsWithSalt:(id)arg0 ;
-(void)anonymizeWithSalt:(id)arg0 ;
-(void)closeStorage;
-(void)countContactsUsingPredicate:(id)arg0 completionHandler:(id)arg1 ;
-(void)countInteractionsUsingPredicate:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteInteractionsMatchingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)deleteInteractionsWithBundleId:(id)arg0 account:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteInteractionsWithBundleId:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteInteractionsWithBundleId:(id)arg0 domainIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)enterMaintenanceMode;
-(void)exitMaintenanceMode;
-(void)fillWithoutRelationshipsInteractionRecord:(id)arg0 fromInteraction:(id)arg1 ;
-(void)queryContactsUsingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)queryInteractionsUsingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)recordInteractions:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateCachedStatsForContactRecord:(id)arg0 isSender:(BOOL)arg1 withInteraction:(id)arg2 ;


@end


#endif