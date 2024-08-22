// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDMESSAGELISTITEMPREDICATES_H
#define EDMESSAGELISTITEMPREDICATES_H


#import <Foundation/Foundation.h>


@interface EDMessageListItemPredicates : NSObject



+(id)_objectIDsFromRightExpression:(id)arg0 ;
+(id)_predicateForAnyMailboxWithPredicate:(id)arg0 ;
+(id)_predicateForRecipientMessagesAddressesKey:(id)arg0 addresses:(id)arg1 ;
+(id)predicateForAnyRecipientPredicate:(id)arg0 ;
+(id)predicateForBody:(id)arg0 ;
+(id)predicateForMailboxTypePredicate:(id)arg0 mailboxes:(id)arg1 ;
+(id)predicateForMessageIDHeaderHashPredicate:(id)arg0 ;
+(id)predicateForMessagesFromVIPs:(id)arg0 ;
+(id)predicateForMessagesThatCCAddresses:(id)arg0 ;
+(id)predicateForMessagesToAddresses:(id)arg0 ;
+(id)predicateForMessagesWithObjectIDsPredicate:(id)arg0 objectIDConverter:(id)arg1 ;
+(id)predicateForSenderPredicate:(id)arg0 ;
+(id)predicateForSpotlightPredicate:(id)arg0 ;
+(id)predicateForSubjectPredicate:(id)arg0 ;


@end


#endif