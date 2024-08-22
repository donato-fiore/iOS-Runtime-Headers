// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EDTHREADPERSISTENCE_PERSISTEDTHREAD_H
#define _EDTHREADPERSISTENCE_PERSISTEDTHREAD_H

@class EMThread, EMThreadObjectID, NSArray;

#import <Foundation/Foundation.h>

#import "EDMessagePersistence.h"
#import "_EDThreadPersistence_ThreadMessages.h"
#import "_EDThreadPersistence_SQLHelper.h"

@interface _EDThreadPersistence_PersistedThread : NSObject {
    BOOL _didCreateTempMessagesView;
}


@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) _EDThreadPersistence_ThreadMessages *messages; // ivar: _messages
@property (readonly, nonatomic) _EDThreadPersistence_SQLHelper *sqlHelper; // ivar: _sqlHelper
@property (readonly, nonatomic) EMThread *thread;
@property (readonly, nonatomic) NSInteger threadDatabaseID; // ivar: _threadDatabaseID
@property (readonly, nonatomic) EMThreadObjectID *threadObjectID;
@property (readonly, nonatomic) NSInteger threadScopeDatabaseID;
@property (readonly, nonatomic) NSArray *wrappedMessages;


-(BOOL)addMailboxes;
-(BOOL)addRecipients:(id)arg0 ofType:(NSUInteger)arg1 ;
-(BOOL)addRecipientsForType:(NSUInteger)arg0 ;
-(BOOL)addSenders;
-(BOOL)addSenders:(id)arg0 ;
-(BOOL)setPriorityForDisplayMessageSender;
-(BOOL)updateDisplayMessageWithUnreadWrappedMessages:(id)arg0 ;
-(BOOL)updateNewestReadMessage:(id)arg0 ;
-(id)_mailboxDatabaseIDsForWrappedMessages;
-(id)debugDescription;
-(id)initWithMessages:(id)arg0 threadDatabaseID:(NSInteger)arg1 ;
-(id)recipientDatabaseIDsAndDatesForRecipientType:(NSUInteger)arg0 ;
-(id)senderDatabaseIDsAndDates;
-(id)updateNewestReadAndDisplayMessage;
-(void)_ensureTempMessagesView;
-(void)addKeyPathsForDisplayMessageChangeToKeyPaths:(id)arg0 ;
-(void)dropTemporaryView;


@end


#endif