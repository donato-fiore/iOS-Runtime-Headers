// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMSPAMFILTERHELPER_H
#define IMSPAMFILTERHELPER_H


#import <Foundation/Foundation.h>


@interface IMSpamFilterHelper : NSObject



+(BOOL)accountCountryIsCandidateForHawking:(id)arg0 ;
+(BOOL)accountCountryIsCandidateForSMSFilter:(id)arg0 ;
+(BOOL)accountCountryIsCandidateForiMessageJunk:(id)arg0 ;
+(BOOL)accountRegionIsCandidateForHawking:(id)arg0 ;
+(BOOL)anyParticipantIsCandidateForBlackhole:(id)arg0 ;
+(BOOL)anyParticipantIsKnownContact:(id)arg0 ;
+(BOOL)isBlackholeEnabledForEligibleAccounts:(BOOL)arg0 ;
+(BOOL)isChineseSpamFilteringEnabled;
+(BOOL)isFilterUnknownSendersEnabled;
+(BOOL)isInternationalSpamFilteringEnabled;
+(BOOL)isKnownContact:(id)arg0 ;
+(BOOL)isiMessageJunkFilterEnabled;
+(BOOL)receiverIsCandidateForAppleSMSFilterSubClassification:(id)arg0 ;
+(BOOL)receiverIsCandidateForDefaultAppleSMSFilter:(id)arg0 ;
+(BOOL)receiverIsCandidateForHawking:(id)arg0 ;
+(BOOL)receiverIsCandidateForSMSFilter:(id)arg0 ;
+(BOOL)receiverIsCandidateForiMessageJunk:(id)arg0 ;
+(BOOL)receiverIsEnabledForSMSFilter:(id)arg0 ;
+(BOOL)receivingID:(id)arg0 isCountryCode:(id)arg1 ;
+(BOOL)senderIsCandidateForBlackhole:(id)arg0 ;
+(BOOL)senderIsCandidateForSMSDowngrade:(id)arg0 ;
+(BOOL)senderIsChinaHandle:(id)arg0 ;
+(BOOL)senderIsKnownContact:(id)arg0 ;
+(BOOL)shouldBlackholeGroupMessageFromSender:(id)arg0 toRecipient:(id)arg1 ifRecipientIsCandidate:(BOOL)arg2 withOtherParticipants:(id)arg3 givenHistory:(BOOL)arg4 forEligibleAccounts:(BOOL)arg5 ;
+(BOOL)shouldBlackholeMessageFromSender:(id)arg0 toRecipient:(id)arg1 ifRecipientIsCandidate:(BOOL)arg2 givenHistory:(BOOL)arg3 forEligibleAccounts:(BOOL)arg4 ;
+(BOOL)shouldDowngradeToRecipient:(id)arg0 fromSender:(id)arg1 ifCapableOfSMS:(BOOL)arg2 withConversationDowngradeState:(BOOL)arg3 andConversationHistoryState:(BOOL)arg4 ;
+(BOOL)shouldShowSMSWarningForSender:(id)arg0 forRecipient:(id)arg1 withConversationHistory:(BOOL)arg2 ;
+(id)_cnRecordForAliases:(id)arg0 ;
+(id)accountRegionsEligibleForJunkFiltering;
+(id)defaultAccountRegionsEligibleForJunkFiltering;
+(id)defaultTelephonyCountryCodesEligibleForJunkFiltering;
+(id)internationalSpamFilterLearnMoreURL;
+(id)mapID:(id)arg0 usingKey:(id)arg1 ;
+(id)sanitizeParticipants:(id)arg0 excludingHandles:(id)arg1 ;
+(id)telephonyCountryCodesEligibleForJunkFiltering;
+(void)participantsAreiMessagable:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif