// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMESSAGEPERSISTENCE_IOS_H
#define MFMESSAGEPERSISTENCE_IOS_H

@class EDMessagePersistence, NSMutableDictionary, EFLazyCache, NSString;
@protocol EFLoggable, EDMessageChangeHookResponder, EFScheduler, OS_dispatch_queue, MFMessageSummaryLoaderProvider;


#import "MFMailMessageLibrary.h"
#import "MFMailMessageLibraryQueryTransformer.h"

@interface MFMessagePersistence_iOS : EDMessagePersistence <EFLoggable, EDMessageChangeHookResponder>

 {
    os_unfair_lock_s _summaryLock;
    NSMutableDictionary *_summaryLoaders;
    EFLazyCache *_obsoleteGlobalMessageIDToDatabaseIDMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) MFMailMessageLibrary *library; // ivar: _library
@property (retain, nonatomic) NSObject<EFScheduler> *networkContentLoadScheduler; // ivar: _networkContentLoadScheduler
@property (retain, nonatomic) NSObject<EFScheduler> *offlineContentLoadScheduler; // ivar: _offlineContentLoadScheduler
@property (retain, nonatomic) MFMailMessageLibraryQueryTransformer *queryTransformer; // ivar: _queryTransformer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestSummaryQueue; // ivar: _requestSummaryQueue
@property (retain, nonatomic) NSObject<MFMessageSummaryLoaderProvider> *summaryLoaderProvider; // ivar: _summaryLoaderProvider
@property (readonly) Class superclass;


+(id)log;
-(BOOL)compressFile:(id)arg0 error:(*id)arg1 ;
-(NSInteger)countOfMessagesMatchingQuery:(id)arg0 ;
-(NSInteger)countOfMessagesWithGlobalMessageID:(NSInteger)arg0 matchingQuery:(id)arg1 ;
-(NSInteger)globalIDForMessageWithDatabaseID:(NSInteger)arg0 mailboxScope:(*id)arg1 ;
-(NSUInteger)_countOfMessagesMatchingCriteria:(id)arg0 includingDuplicates:(BOOL)arg1 ;
-(id)_requestSummaryForLibraryMessage:(id)arg0 ;
-(id)cachedDatabaseIDsDictionaryForGlobalMessageIDs:(id)arg0 ;
-(id)enabledAccountMailboxesExpression;
-(id)groupedMessagesCountByMailboxMatchingQuery:(NSUInteger)arg0 variable:(id)arg1 ;
-(id)initWithMailboxPersistence:(id)arg0 database:(id)arg1 userProfileProvider:(id)arg2 blockedSenderManager:(id)arg3 vipReader:(id)arg4 hookRegistry:(id)arg5 library:(id)arg6 ;
-(id)libraryMessageForMessageObjectID:(id)arg0 ;
-(id)persistedMessageForOutgoingMessage:(id)arg0 isDraft:(BOOL)arg1 ;
-(id)persistedMessagesForDatabaseIDs:(id)arg0 requireProtectedData:(BOOL)arg1 temporarilyUnavailableDatabaseIDs:(*id)arg2 ;
-(id)requestContentForMessageObjectID:(id)arg0 requestID:(NSUInteger)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(id)arg4 ;
-(id)requestSummaryForMessageObjectID:(id)arg0 ;
-(void)_iterateMessagesMatchingQuery:(id)arg0 options:(unsigned int)arg1 cancelationToken:(id)arg2 resultHandler:(id)arg3 monitor:(id)arg4 ;
-(void)iterateMessagesMatchingQuery:(id)arg0 batchSize:(NSInteger)arg1 firstBatchSize:(NSInteger)arg2 limit:(NSInteger)arg3 cancelationToken:(id)arg4 handler:(id)arg5 ;
-(void)iteratePersistedMessagesMatchingQuery:(id)arg0 limit:(NSInteger)arg1 cancelationToken:(id)arg2 handler:(id)arg3 ;
-(void)persistenceDidChangeGlobalMessageID:(NSInteger)arg0 orConversationID:(NSInteger)arg1 message:(id)arg2 generationWindow:(id)arg3 ;


@end


#endif