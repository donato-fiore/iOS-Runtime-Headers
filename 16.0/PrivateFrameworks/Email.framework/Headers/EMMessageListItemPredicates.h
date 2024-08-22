// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMMESSAGELISTITEMPREDICATES_H
#define EMMESSAGELISTITEMPREDICATES_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EMMessageListItemPredicates : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isPredicateForMessagesInMailboxObjectIDs:(id)arg0 mailboxObjectIDs:(*id)arg1 ;
+(BOOL)_isPredicateForMessagesWithActiveFollowUp:(id)arg0 ;
+(BOOL)isPredicateForMessagesInMailboxObjectID:(id)arg0 mailboxObjectID:(*id)arg1 ;
+(BOOL)isPredicateForMessagesInMailboxWithType:(id)arg0 mailboxType:(*NSInteger)arg1 ;
+(BOOL)isPredicateForMessagesWithActiveFollowUp:(id)arg0 mailboxTypeResolver:(id)arg1 inSent:(*BOOL)arg2 sentMailboxObjectIDs:(*id)arg3 ;
+(BOOL)predicate:(id)arg0 appliesToFlagChange:(id)arg1 ;
+(NSInteger)dateSortOrderFromSortDescriptors:(id)arg0 ;
+(id)_dateRangePredicateForListItemKeyPath:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
+(id)_keyPathsForFlagChange:(id)arg0 ;
+(id)_predicateForAccountWithObjectID:(id)arg0 ;
+(id)_predicateForActiveFollowUpMessagesIncludeExpired:(BOOL)arg0 ;
+(id)_predicateForFollowUpMessages;
+(id)_predicateForKeyPath:(id)arg0 value:(id)arg1 ;
+(id)_predicateForMessagesInMailboxWithType:(id)arg0 ;
+(id)_predicateForMessagesInMailboxWithURL:(id)arg0 ;
+(id)_predicateForReadLaterMessagesFired:(BOOL)arg0 ;
+(id)_spotlightPredicateForPredicate:(id)arg0 ;
+(id)log;
+(id)mailboxScopeForPredicate:(id)arg0 withMailboxTypeResolver:(id)arg1 ;
+(id)mailboxURLsForPredicate:(id)arg0 ;
+(id)predicateForAccount:(id)arg0 ;
+(id)predicateForAnySenderBuckets:(id)arg0 ;
+(id)predicateForCCMeMessages;
+(id)predicateForExcludingMessagesInMailbox:(id)arg0 ;
+(id)predicateForExcludingMessagesInMailboxObjectID:(id)arg0 ;
+(id)predicateForExcludingMessagesInMailboxWithType:(NSInteger)arg0 ;
+(id)predicateForExcludingMessagesInMailboxWithURL:(id)arg0 ;
+(id)predicateForExcludingMessagesInMailboxes:(id)arg0 ;
+(id)predicateForExcludingMessagesInMailboxesWithObjectIDs:(id)arg0 ;
+(id)predicateForExcludingMessagesInMailboxesWithTypes:(id)arg0 ;
+(id)predicateForFiredReadLaterMessages;
+(id)predicateForFlagColor:(NSUInteger)arg0 ;
+(id)predicateForFlaggedMessages;
+(id)predicateForIncludesMeMessages;
+(id)predicateForIsVIP:(BOOL)arg0 ;
+(id)predicateForMessagesInConversation:(NSInteger)arg0 ;
+(id)predicateForMessagesInMailbox:(id)arg0 ;
+(id)predicateForMessagesInMailboxWithObjectID:(id)arg0 ;
+(id)predicateForMessagesInMailboxWithType:(NSInteger)arg0 ;
+(id)predicateForMessagesInMailboxes:(id)arg0 ;
+(id)predicateForMessagesInMailboxesWithObjectIDs:(id)arg0 ;
+(id)predicateForMessagesInMailboxesWithTypes:(id)arg0 ;
+(id)predicateForMessagesNewerThanDate:(id)arg0 ;
+(id)predicateForMessagesWithActiveFollowUp;
+(id)predicateForMessagesWithActiveFollowUpInAccountsOfMailboxes:(id)arg0 mailboxTypeResolver:(id)arg1 ;
+(id)predicateForMessagesWithActiveFollowUpInSent;
+(id)predicateForMessagesWithAttachments;
+(id)predicateForMessagesWithMailboxScope:(id)arg0 ;
+(id)predicateForMessagesWithSender:(id)arg0 ;
+(id)predicateForMessagesWithSenders:(id)arg0 ;
+(id)predicateForMessagesWithThreadScope:(id)arg0 ;
+(id)predicateForMessagesWithUnfiredFollowUp;
+(id)predicateForMessagesWithoutSender:(id)arg0 ;
+(id)predicateForMessagesWithoutSenders:(id)arg0 ;
+(id)predicateForMuteMessages;
+(id)predicateForNotifyMessages;
+(id)predicateForPrimaryBucketUnreadCountInMailboxes:(id)arg0 ;
+(id)predicateForReadLaterMessages;
+(id)predicateForReadLaterMessagesWithStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)predicateForReadMessages;
+(id)predicateForRecentMessages;
+(id)predicateForSendLaterMessages;
+(id)predicateForSendLaterMessagesWithStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)predicateForSenderBucket:(NSInteger)arg0 ;
+(id)predicateForToMeMessages;
+(id)predicateForTodayMessages;
+(id)predicateForUnfiredReadLaterMessagesInInbox;
+(id)predicateForUnflaggedMessages;
+(id)predicateForUnreadMessages;
+(id)predicateForUnsubscribableMessages;
+(id)predicateFromPredicate:(id)arg0 ignoringKeyPaths:(id)arg1 ;
+(id)predicateFromPredicate:(id)arg0 ignoringPredicates:(id)arg1 ;
+(id)sortDescriptorForDateAscending:(BOOL)arg0 ;
+(id)sortDescriptorForDisplayDateAscending:(BOOL)arg0 ;
+(id)spotlightPredicateForPredicate:(id)arg0 ;
+(id)threadScopeForPredicate:(id)arg0 withMailboxTypeResolver:(id)arg1 ;


@end


#endif