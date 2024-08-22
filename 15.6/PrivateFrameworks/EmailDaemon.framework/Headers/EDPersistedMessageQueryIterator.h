// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDPERSISTEDMESSAGEQUERYITERATOR_H
#define EDPERSISTEDMESSAGEQUERYITERATOR_H

@class EMMailboxScope, EFQuery, EFCancelationToken, EFQueue, NSMutableSet, NSMutableArray, NSString;
@protocol EFCancelable;

#import <Foundation/Foundation.h>

#import "EDMessagePersistence.h"

@interface EDPersistedMessageQueryIterator : NSObject <EFCancelable>

 {
    EDMessagePersistence *_messagePersistence;
    EMMailboxScope *_mailboxScope;
    EFQuery *_query;
    EFCancelationToken *_cancelationToken;
    EFQueue *_persistedMessageQueue;
    NSInteger _remaining;
    NSMutableSet *_seenGlobalMessages;
    id *_handler;
    NSMutableArray *_batchedMessages;
    NSUInteger _batchSize;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldCancel;
-(id)initWithMessagePersistence:(id)arg0 query:(id)arg1 batchSize:(NSInteger)arg2 firstBatchSize:(NSInteger)arg3 limit:(NSInteger)arg4 handler:(id)arg5 ;
-(void)_processPersistedMessages:(id)arg0 forceFlush:(BOOL)arg1 ;
-(void)addPersistedMessage:(id)arg0 ;
-(void)addPersistedMessages:(id)arg0 ;
-(void)cancel;
-(void)flush;


@end


#endif