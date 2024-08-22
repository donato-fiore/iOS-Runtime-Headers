// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGQUICKRESPONSESSTORE_H
#define SGQUICKRESPONSESSTORE_H

@class _PASLock;

#import <Foundation/Foundation.h>


@interface SGQuickResponsesStore : NSObject {
    _PASLock *_readerWriter;
}




+(BOOL)isProfane:(id)arg0 inLocales:(id)arg1 ;
+(id)instanceInMemory;
+(id)keyWithLanguage:(id)arg0 andResponse:(id)arg1 ;
+(id)sharedInstance;
+(void)warmup;
-(BOOL)addingMessageExceedsBatchLimit:(NSUInteger)arg0 tableLimit:(NSUInteger)arg1 message:(id)arg2 language:(id)arg3 prompt:(id)arg4 recipientHandle:(id)arg5 sentAt:(id)arg6 ;
// -(BOOL)deltaForResponsesOnRow:(id)arg0 completion:(unk)arg1  ;
-(BOOL)frailReadTransaction:(id)arg0 ;
-(BOOL)frailWriteTransaction:(id)arg0 ;
-(BOOL)resetDbIfNeededCompareWithCompatibilityVersion:(NSUInteger)arg0 ;
-(CGFloat)getPerRecipientCountForReply:(id)arg0 language:(id)arg1 recipient:(id)arg2 ;
-(CGFloat)getUsageSpreadForReply:(id)arg0 language:(id)arg1 ;
-(NSUInteger)countCustomResponsesAfterPruningWithMinimumCountThreshold:(CGFloat)arg0 ;
-(NSUInteger)countCustomResponsesAfterTruncatingTable:(NSUInteger)arg0 ;
-(NSUInteger)designateFilteringBatch:(NSUInteger)arg0 ;
-(id)_recordsForResponses:(id)arg0 language:(id)arg1 ;
-(id)embeddingForPrompt:(id)arg0 language:(id)arg1 embedder:(id)arg2 ;
-(id)getModelVersion;
-(id)getProfanityLocale;
-(id)init;
-(id)initInDirectory:(id)arg0 inMemory:(BOOL)arg1 withMigration:(BOOL)arg2 ;
-(id)initInDirectory:(id)arg0 inMemory:(BOOL)arg1 withMigration:(BOOL)arg2 forTools:(BOOL)arg3 ;
-(id)messagesForEval:(id)arg0 ;
-(id)nearestCustomResponsesAndScoresToPromptEmbedding:(id)arg0 recipient:(id)arg1 limit:(NSUInteger)arg2 withinRadius:(float)arg3 responseCountExponent:(float)arg4 minimumDecayedCount:(float)arg5 compatibilityVersion:(NSUInteger)arg6 language:(id)arg7 locale:(id)arg8 allowProfanity:(BOOL)arg9 minimumTimeInterval:(CGFloat)arg10 usageSpreadExponent:(float)arg11 ;
-(id)nearestCustomResponsesToPromptEmbedding:(id)arg0 recipient:(id)arg1 limit:(NSUInteger)arg2 withinRadius:(float)arg3 responseCountExponent:(float)arg4 minimumDecayedCount:(float)arg5 compatibilityVersion:(NSUInteger)arg6 language:(id)arg7 locale:(id)arg8 allowProfanity:(BOOL)arg9 minimumTimeInterval:(CGFloat)arg10 usageSpreadExponent:(float)arg11 ;
-(id)recordsForResponses:(id)arg0 language:(id)arg1 ;
-(id)recordsForResponsesInternal:(id)arg0 language:(id)arg1 ;
-(void)_addCustomResponseToDb:(id)arg0 reply:(id)arg1 language:(id)arg2 embedding:(id)arg3 sentAt:(CGFloat)arg4 recipient:(id)arg5 messagesRowId:(NSInteger)arg6 onError:(id)arg7 ;
-(void)_incrementCustomResponseInDb:(id)arg0 reply:(id)arg1 language:(id)arg2 embedding:(id)arg3 sentAt:(CGFloat)arg4 recipient:(id)arg5 messagesRowId:(NSInteger)arg6 onError:(id)arg7 ;
-(void)addDisplayedToResponses:(id)arg0 language:(id)arg1 ;
-(void)addSelectedToResponse:(id)arg0 language:(id)arg1 ;
-(void)addWrittenToResponse:(id)arg0 language:(id)arg1 isMatch:(BOOL)arg2 ;
-(void)calculateUsageSpreads;
-(void)decayAllCustomResponsesWithDecayFactor:(CGFloat)arg0 filteringBatchSize:(NSUInteger)arg1 ;
-(void)destroyInstanceInMemory;
-(void)filterBatchWithMinimumDistinctRecipients:(NSUInteger)arg0 minimumReplyOccurences:(NSUInteger)arg1 ;
-(void)prunePerRecipientTableWithMaxRows:(NSUInteger)arg0 ;
// -(void)recordKnownCustomResponsesInBatchWithEmbedder:(id)arg0 compatibilityVersion:(unk)arg1  ;
// -(void)recordMessagesInBatchAsCustomResponsesWithEmbedder:(id)arg0 compatibilityVersion:(unk)arg1  ;
-(void)resetCustomResponsesAndResetMessages:(BOOL)arg0 ;
-(void)resetCustomResponsesForEval:(id)arg0 ;
-(void)setProfanityLocale:(id)arg0 andModelVersion:(NSInteger)arg1 ;


@end


#endif