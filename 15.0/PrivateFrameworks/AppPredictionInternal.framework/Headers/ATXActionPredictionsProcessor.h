// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXACTIONPREDICTIONSPROCESSOR_H
#define ATXACTIONPREDICTIONSPROCESSOR_H


#import <Foundation/Foundation.h>


@interface ATXActionPredictionsProcessor : NSObject



+(BOOL)actionPredictionsContainsAlarmAction:(id)arg0 ;
+(BOOL)isBlockedEmailAddressContainedInAddresses:(id)arg0 ;
+(BOOL)isBlockedPhoneNumberContainedInNumbers:(id)arg0 ;
+(BOOL)scoredActionsAreDuplicatesWithScoredAction1:(id)arg0 scoredAction2:(id)arg1 ;
+(BOOL)validTimeToSuggestAlarmForAlarmComponents:(id)arg0 currentDate:(id)arg1 ;
+(id)_contactIdentifiersReferencedByAction:(id)arg0 ;
+(id)hourAndMinuteComponentsFromDateComponents:(id)arg0 ;
+(id)indicesOfNonDuplicateScoredActions:(id)arg0 ;
+(id)removeAlarmActionsInconsistentWithAlarmAppState:(id)arg0 ;
+(id)removeAlarmActionsInconsistentWithAlarmAppState:(id)arg0 enabledAlarms:(id)arg1 disabledAlarms:(id)arg2 currentDate:(id)arg3 ;
+(id)removeDuplicateActionPredictions:(id)arg0 ;
+(id)removeDuplicateTVActionPredictions:(id)arg0 ;
+(id)removeMissingOrBlockedRecipientPredictions:(id)arg0 ;
+(id)removeRecentlyDeletedNotePredictions:(id)arg0 ;
+(id)userAlarms;
+(void)addEligibleCreateAlarmIndexesToAcceptedIndexes:(id)arg0 currentDate:(id)arg1 enabledAlarms:(id)arg2 idx:(NSUInteger)arg3 params:(id)arg4 parameterCombinations:(id)arg5 ;
+(void)addEligibleToggleAlarmIndexesToAcceptedIndexes:(id)arg0 currentDate:(id)arg1 disabledAlarms:(id)arg2 enabledAlarms:(id)arg3 idx:(NSUInteger)arg4 params:(id)arg5 parameterCombinations:(id)arg6 ;


@end


#endif