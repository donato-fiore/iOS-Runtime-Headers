// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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


+(BOOL)predicate:(id)arg0 appliesToFlagChange:(id)arg1 ;
+(NSInteger)dateSortOrderFromSortDescriptors:(id)arg0 ;
+(id)_keyPathsForFlagChange:(id)arg0 ;
+(id)_predicateForKeyPath:(id)arg0 value:(id)arg1 ;
+(id)_predicateForMessagesInMailboxWithType:(id)arg0 ;
+(id)_predicateForMessagesInMailboxWithURL:(id)arg0 ;
+(id)_spotlightPredicateForPredicate:(id)arg0 ;
+(id)log;
+(id)mailboxScopeForPredicate:(id)arg0 withMailboxTypeResolver:(id)arg1 ;
+(id)mailboxURLsForPredicate:(id)arg0 ;
+(id)predicateForAccount:(id)arg0 ;
+(id)predicateForCCMeMessages;
+(id)predicateForExcludingMessagesInMailbox:(id)arg0 ;
+(id)predicateForExcludingMessagesInMailboxObjectID:(id)arg0 ;
+(id)predicateForExcludingMessagesInMailboxWithType:(NSInteger)arg0 ;
+(id)predicateForExcludingMessagesInMailboxWithURL:(id)arg0 ;
+(id)predicateForExcludingMessagesInMailboxes:(id)arg0 ;
+(id)predicateForExcludingMessagesInMailboxesWithObjectIDs:(id)arg0 ;
+(id)predicateForExcludingMessagesInMailboxesWithTypes:(id)arg0 ;
+(id)predicateForFlagColor:(NSUInteger)arg0 ;
+(id)predicateForFlaggedMessages;
+(id)predicateForIncludesMeMessages;
+(id)predicateForMessagesInConversation:(NSInteger)arg0 ;
+(id)predicateForMessagesInMailbox:(id)arg0 ;
+(id)predicateForMessagesInMailboxWithObjectID:(id)arg0 ;
+(id)predicateForMessagesInMailboxWithType:(NSInteger)arg0 ;
+(id)predicateForMessagesInMailboxes:(id)arg0 ;
+(id)predicateForMessagesInMailboxesWithObjectIDs:(id)arg0 ;
+(id)predicateForMessagesInMailboxesWithTypes:(id)arg0 ;
+(id)predicateForMessagesNewerThanDate:(id)arg0 ;
+(id)predicateForMessagesWithAttachments;
+(id)predicateForMessagesWithMailboxScope:(id)arg0 ;
+(id)predicateForMessagesWithSender:(id)arg0 ;
+(id)predicateForMessagesWithThreadScope:(id)arg0 ;
+(id)predicateForMuteMessages;
+(id)predicateForNotifyMessages;
+(id)predicateForReadMessages;
+(id)predicateForToMeMessages;
+(id)predicateForTodayMessages;
+(id)predicateForUnflaggedMessages;
+(id)predicateForUnreadMessages;
+(id)predicateForVIPMessages;
+(id)predicateFromPredicate:(id)arg0 ignoringKeyPaths:(id)arg1 ;
+(id)sortDescriptorForDateAscending:(BOOL)arg0 ;
+(id)spotlightPredicateForPredicate:(id)arg0 ;
+(id)threadScopeForPredicate:(id)arg0 ;


@end


#endif