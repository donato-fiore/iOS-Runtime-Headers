// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXIDLETIMEBEGINANCHOR_H
#define ATXIDLETIMEBEGINANCHOR_H



#import "ATXAnchor.h"

@interface ATXIdleTimeBeginAnchor : ATXAnchor



+(BOOL)isActive;
+(BOOL)shouldPredicateOnStartDate;
+(BOOL)shouldProcessContextStoreNotification;
+(BOOL)usesContextStoreForRealTimeNotifications;
+(CGFloat)minimumSecondsForBeingIdle;
+(CGFloat)secondsOfInfluence;
+(CGFloat)weightedAverageOfHoursFromDates:(id)arg0 ;
+(Class)supportedDuetDataProviderClass;
+(NSInteger)anchorType;
+(id)anchorOccurenceDateFromDuetEvent:(id)arg0 ;
+(id)duetEventsPredicates;
+(id)fetchAnchorOccurrencesBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)invalidationPredicateForContextStoreRegistration;
+(id)keyPathForContextStore;
+(id)longDescription;
+(id)predicateForContextStoreRegistration;
+(id)predictNextAnchorOccurrenceDate;
+(id)sampleEvent;
+(void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)arg0 selector:(SEL)arg1 ;


@end


#endif