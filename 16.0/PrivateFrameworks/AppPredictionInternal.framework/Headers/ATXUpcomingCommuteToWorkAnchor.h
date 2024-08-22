// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXUPCOMINGCOMMUTETOWORKANCHOR_H
#define ATXUPCOMINGCOMMUTETOWORKANCHOR_H



#import "ATXAnchor.h"

@interface ATXUpcomingCommuteToWorkAnchor : ATXAnchor



+(BOOL)isActive;
+(BOOL)shouldPredicateOnStartDate;
+(BOOL)shouldProcessContextStoreNotification;
+(BOOL)usesContextStoreForRealTimeNotifications;
+(CGFloat)secondsOfInfluence;
+(Class)supportedDuetDataProviderClass;
+(NSInteger)anchorType;
+(id)anchorOccurenceDateFromDuetEvent:(id)arg0 ;
+(id)candidateQueryStartDateFromDuetEvent:(id)arg0 ;
+(id)duetEventsPredicates;
+(id)fetchAnchorOccurrencesBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)invalidationPredicateForContextStoreRegistration;
+(id)keyPathForContextStore;
+(id)longDescription;
+(id)predicateForContextStoreRegistration;
+(id)sampleEvent;


@end


#endif