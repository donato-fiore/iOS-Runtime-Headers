// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDINMEMORYTHREAD_H
#define EDINMEMORYTHREAD_H

@class NSMutableArray, EMMessage, NSArray, EFQuery, EMThread, EMThreadScope;
@protocol NSCopying, EMMailboxTypeResolver;

#import <Foundation/Foundation.h>


@interface EDInMemoryThread : NSObject <NSCopying>

 {
    NSMutableArray *_messages;
    NSMutableArray *_dateSortedMessages;
}


@property (retain, nonatomic) EMMessage *displayMessage; // ivar: _displayMessage
@property (readonly, nonatomic) NSObject<EMMailboxTypeResolver> *mailboxTypeResolver; // ivar: _mailboxTypeResolver
@property (readonly, copy, nonatomic) NSArray *messages;
@property (readonly, nonatomic) EMMessage *newestMessage;
@property (readonly, nonatomic) EFQuery *originatingQuery; // ivar: _originatingQuery
@property (retain, nonatomic) EMThread *thread; // ivar: _thread
@property (readonly, nonatomic) EMThreadScope *threadScope; // ivar: _threadScope


+(id)_dateSortDescriptors;
-(BOOL)_combinedHasAttachments;
-(BOOL)_combinedHasUnflagged;
-(BOOL)_combinedIsBlocked;
-(BOOL)_combinedIsVIP;
-(BOOL)_isSortedByDate:(id)arg0 ;
-(id)_calculateAndApplyChange;
-(id)_calculateChangesAfterRemovingMessages:(id)arg0 applyingChanges:(id)arg1 threadIsEmpty:(*BOOL)arg2 ;
-(id)_combinedCCList;
-(id)_combinedFlagColors;
-(id)_combinedFlags;
-(id)_combinedMailboxes;
-(id)_combinedSenderList;
-(id)_combinedToList;
-(id)_createThreadWithObjectID:(id)arg0 ;
-(id)_dateSortedMessages;
-(id)addMessages:(id)arg0 ;
-(id)changeMessages:(id)arg0 forKeyPaths:(id)arg1 threadIsEmpty:(*BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMessages:(id)arg0 originatingQuery:(id)arg1 mailboxTypeResolver:(id)arg2 ;
-(id)removeMessages:(id)arg0 threadIsEmpty:(*BOOL)arg1 ;
-(id)updateMessage:(id)arg0 fromOldObjectID:(id)arg1 ;
-(void)_addMessagesToThread:(id)arg0 ;
-(void)_recalculateDisplayMessage;


@end


#endif