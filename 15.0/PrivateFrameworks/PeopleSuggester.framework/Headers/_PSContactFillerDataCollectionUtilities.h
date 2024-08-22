// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSCONTACTFILLERDATACOLLECTIONUTILITIES_H
#define _PSCONTACTFILLERDATACOLLECTIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface _PSContactFillerDataCollectionUtilities : NSObject



+(BOOL)doesSuggestionProxyMatch:(id)arg0 withInteraction:(id)arg1 ;
+(BOOL)doesTheRecipientsMatchInInteraction1:(id)arg0 interaction2:(id)arg1 ;
+(BOOL)recipientPredictedCorrectlyByRule:(id)arg0 interaction:(id)arg1 bundleId:(id)arg2 ;
+(CGFloat)enforceOneSignificantFigureForDouble:(CGFloat)arg0 ;
+(id)calculateNormalizedCallingFrequencyForContactGivenContactIdPredicate:(id)arg0 totalFrequency:(id)arg1 numberOfDaysToLookBack:(int)arg2 timeOfShareInteraction:(id)arg3 interactionStore:(id)arg4 direction:(id)arg5 ;
+(id)calculateNormalizedShareFrequencyForContactGivenContactIdPredicate:(id)arg0 totalFrequency:(id)arg1 numberOfDaysToLookBack:(int)arg2 timeOfShareInteraction:(id)arg3 interactionStore:(id)arg4 ;
+(id)calculateNormalizedTextingFrequencyForContactGivenContactIdPredicate:(id)arg0 totalFrequency:(id)arg1 numberOfDaysToLookBack:(int)arg2 timeOfShareInteraction:(id)arg3 interactionStore:(id)arg4 direction:(id)arg5 ;
+(id)filterRulesBasedOnInteractionGivenRuleList:(id)arg0 interaction:(id)arg1 ;
+(id)getBehaviorRulesGivenContext:(id)arg0 behaviorRetriever:(id)arg1 ;
+(id)getInteractionModelScoreForEvent:(id)arg0 forInteractionRecipients:(id)arg1 ;
+(id)getInteractionModelScoreForSuggestions:(id)arg0 forInteractionRecipients:(id)arg1 ;
+(id)getInteractionRecipientFromInteraction:(id)arg0 ;
+(id)getListOfContactsFromCashedMessagesInteraction:(id)arg0 cashedShareInteractions:(id)arg1 ;
+(id)getListOfContactsInteractedInTheLastNumberOfDays:(int)arg0 interactionStore:(id)arg1 limit:(int)arg2 ;
+(id)initContactPropertyCache:(id)arg0 timeOfShareInteraction:(id)arg1 interactionStore:(id)arg2 ;
+(id)resolveUniqueContactIdGivenInteraction:(id)arg0 ;
+(int)calculateTimeBucketGivenInteraction:(id)arg0 timeOfShareInteraction:(id)arg1 ;
+(int)calculateTimeSinceLastCallForContactGivenContactIdPredicate:(id)arg0 direction:(id)arg1 timeOfShareInteraction:(id)arg2 interactionCache:(id)arg3 ;
+(int)calculateTimeSinceLastShareForContactGivenContactIdPredicate:(id)arg0 timeOfShareInteraction:(id)arg1 interactionCache:(id)arg2 ;
+(int)calculateTimeSinceLastTextForContactGivenContactIdPredicate:(id)arg0 direction:(id)arg1 timeOfShareInteraction:(id)arg2 interactionCache:(id)arg3 ;
+(unsigned int)contactFillerBucketedValue:(NSUInteger)arg0 ;
+(unsigned int)enforceOneSignificantFigureForSmallDouble:(CGFloat)arg0 ;
+(void)calculateNormContantsGivenInteractionStore:(id)arg0 normConstants:(id)arg1 ;
+(void)extractFeaturesFromBehaviorRulesIntoPETMessage:(id)arg0 behaviorRules:(id)arg1 MLModelScores:(id)arg2 ;
+(void)extractFeaturesFromBehaviorRulesIntoPETMessage:(id)arg0 behaviorRules:(id)arg1 contextItems:(id)arg2 ruleRankingModel:(id)arg3 ;
+(void)extractFrequencyRecencyFeaturesIntoPETMessage:(id)arg0 recipientID:(id)arg1 interaction:(id)arg2 normConstants:(id)arg3 numberOfDaysToLookBack:(int)arg4 interactionStore:(id)arg5 timeOfShareInteraction:(id)arg6 contactPropertyCache:(id)arg7 interactionCache:(id)arg8 ;
+(void)extractUserFeaturesIntoPETMessage:(id)arg0 normConstants:(id)arg1 behaviorRetriever:(id)arg2 ;


@end


#endif