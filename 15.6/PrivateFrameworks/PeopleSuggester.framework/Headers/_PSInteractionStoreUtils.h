// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSINTERACTIONSTOREUTILS_H
#define _PSINTERACTIONSTOREUTILS_H


#import <Foundation/Foundation.h>


@interface _PSInteractionStoreUtils : NSObject



+(NSInteger)getHandleTypeFromHandleString:(id)arg0 ;
+(id)allAirDropInteractionsFromStore:(id)arg0 fetchLimit:(NSUInteger)arg1 ;
+(id)conversationIdFromInteraction:(id)arg0 bundleIds:(id)arg1 ;
+(id)conversationIdWithExactMatchWithContactHandles:(id)arg0 store:(id)arg1 bundleIds:(id)arg2 messageInteractionCache:(id)arg3 ;
+(id)conversationIdWithMaximalIntersectionWithContactIdentifiers:(id)arg0 store:(id)arg1 bundleIds:(id)arg2 meContactIdentifier:(id)arg3 ;
+(id)groupInteractionsContainingSearchStringInDisplayName:(id)arg0 excludingInteractionUUIDs:(id)arg1 account:(id)arg2 directions:(id)arg3 bundleIds:(id)arg4 startDate:(id)arg5 store:(id)arg6 fetchLimit:(NSUInteger)arg7 offset:(NSUInteger)arg8 ;
+(id)interactionsContainingSearchStringInDisplayName:(id)arg0 account:(id)arg1 directions:(id)arg2 bundleIds:(id)arg3 store:(id)arg4 fetchLimit:(NSUInteger)arg5 ;
+(id)interactionsFromStore:(id)arg0 referenceDate:(id)arg1 withMechanisms:(id)arg2 withAccount:(id)arg3 withBundleIds:(id)arg4 withTargetBundleIds:(id)arg5 withDirections:(id)arg6 fetchLimit:(NSUInteger)arg7 ;
+(id)interactionsFromStore:(id)arg0 referenceDate:(id)arg1 withMechanisms:(id)arg2 withAccount:(id)arg3 withBundleIds:(id)arg4 withTargetBundleIds:(id)arg5 withDirections:(id)arg6 singleRecipient:(BOOL)arg7 fetchLimit:(NSUInteger)arg8 ;
+(id)interactionsFromStore:(id)arg0 startDate:(id)arg1 tillDate:(id)arg2 withMechanisms:(id)arg3 withAccount:(id)arg4 withBundleIds:(id)arg5 withTargetBundleIds:(id)arg6 withDirections:(id)arg7 singleRecipient:(BOOL)arg8 fetchLimit:(NSUInteger)arg9 ;
+(id)interactionsFromStore:(id)arg0 startDate:(id)arg1 tillDate:(id)arg2 withMechanisms:(id)arg3 withAccount:(id)arg4 withBundleIds:(id)arg5 withTargetBundleIds:(id)arg6 withDirections:(id)arg7 withNsUserName:(id)arg8 singleRecipient:(BOOL)arg9 excludeAnonymousTemporaryRecipients:(BOOL)arg10 fetchLimit:(NSUInteger)arg11 fetchOffset:(NSUInteger)arg12 sortAscending:(BOOL)arg13 ;
+(id)interactionsFromStore:(id)arg0 startDate:(id)arg1 tillDate:(id)arg2 withMechanisms:(id)arg3 withAccount:(id)arg4 withBundleIds:(id)arg5 withTargetBundleIds:(id)arg6 withDirections:(id)arg7 withNsUserName:(id)arg8 singleRecipient:(BOOL)arg9 fetchLimit:(NSUInteger)arg10 ;
+(id)interactionsHyperRecentFromReferenceDate:(id)arg0 bundleIds:(id)arg1 recencyMargin:(CGFloat)arg2 store:(id)arg3 ;
+(id)interactionsMatchingAnyHandles:(id)arg0 account:(id)arg1 directions:(id)arg2 mechanisms:(id)arg3 bundleIds:(id)arg4 store:(id)arg5 fetchLimit:(NSUInteger)arg6 messageInteractionCache:(id)arg7 ;
+(id)interactionsMatchingAnyHandlesOrDomainIds:(id)arg0 account:(id)arg1 directions:(id)arg2 bundleIds:(id)arg3 store:(id)arg4 fetchLimit:(NSUInteger)arg5 ;
+(id)interactionsMatchingAnyHandlesOrDomainIds:(id)arg0 account:(id)arg1 directions:(id)arg2 bundleIds:(id)arg3 store:(id)arg4 fetchLimit:(NSUInteger)arg5 singleRecipientOnly:(BOOL)arg6 ;
+(id)interactionsMostRecentForBundleId:(id)arg0 store:(id)arg1 resultLimit:(NSUInteger)arg2 interactions:(id)arg3 ;
+(id)interactionsWithContactIdentifiers:(id)arg0 store:(id)arg1 bundleIds:(id)arg2 meContactIdentifier:(id)arg3 ;
+(id)mostRecentInteractionInvolvingMatchingIdentifier:(id)arg0 store:(id)arg1 bundleIds:(id)arg2 ;
+(id)mostRecentInteractionWithExactMatchingIdentifiers:(id)arg0 store:(id)arg1 bundleIds:(id)arg2 meContactIdentifier:(id)arg3 ;
+(id)mostRecentInteractionWithSenderOrRecipientMatchingContactIdentifier:(id)arg0 bundleIds:(id)arg1 store:(id)arg2 singleRecipient:(BOOL)arg3 ;
+(id)mostRecentInteractionWithSingleRecipientMatchingContactIdentifier:(id)arg0 store:(id)arg1 ;
+(id)mostRecentInteractionWithSingleRecipientMatchingHandle:(id)arg0 store:(id)arg1 ;
+(id)recentInteractionsFromStore:(id)arg0 bundleIDs:(id)arg1 ;
+(id)someIMessageInteractionInvolvingContactIdentifier:(id)arg0 store:(id)arg1 contactType:(NSUInteger)arg2 afterStartDate:(id)arg3 ;
+(id)someInteractionWithMatchingIdentifier:(id)arg0 store:(id)arg1 bundleIds:(id)arg2 afterStartDate:(id)arg3 ;


@end


#endif