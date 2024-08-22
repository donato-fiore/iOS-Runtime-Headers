// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EDTHREADPERSISTENCE_THREADMESSAGES_H
#define _EDTHREADPERSISTENCE_THREADMESSAGES_H

@class EMThread, EMThreadObjectID, NSArray;

#import <Foundation/Foundation.h>

#import "EDMessagePersistence.h"
#import "_EDThreadPersistence_SQLHelper.h"

@interface _EDThreadPersistence_ThreadMessages : NSObject {
    EMThread *_thread;
}


@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly, nonatomic) _EDThreadPersistence_SQLHelper *sqlHelper; // ivar: _sqlHelper
@property (readonly, nonatomic) EMThread *thread;
@property (readonly, nonatomic) EMThreadObjectID *threadObjectID; // ivar: _threadObjectID
@property (readonly, nonatomic) NSInteger threadScopeDatabaseID; // ivar: _threadScopeDatabaseID
@property (readonly, nonatomic) NSArray *wrappedMessages; // ivar: _wrappedMessages


-(BOOL)addThreadReplacingExisting:(BOOL)arg0 journaled:(BOOL)arg1 ;
-(id)_displayWrappedMessageWithNewestReadWrappedMessage:(*id)arg0 ;
-(id)_iterateNewestUnreadWrappedMessagesInWrappedMessages:(id)arg0 iteratorBlock:(id)arg1 ;
-(id)_newestUnreadWrappedMessagesWithNewestReadWrappedMessage:(*id)arg0 ;
-(id)debugDescription;
-(id)initWithSQLHelper:(id)arg0 messagePersistence:(id)arg1 threadScopeDatabaseID:(NSInteger)arg2 threadObjectID:(id)arg3 wrappedMessages:(id)arg4 ;
-(id)updateThreadTableWithJournaled:(BOOL)arg0 ;


@end


#endif