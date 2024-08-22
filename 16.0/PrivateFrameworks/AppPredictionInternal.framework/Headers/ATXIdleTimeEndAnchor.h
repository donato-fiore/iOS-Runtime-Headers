// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXIDLETIMEENDANCHOR_H
#define ATXIDLETIMEENDANCHOR_H



#import "ATXAnchor.h"

@interface ATXIdleTimeEndAnchor : ATXAnchor



+(BOOL)isActive;
+(BOOL)shouldPredicateOnStartDate;
+(BOOL)shouldProcessContextStoreNotification;
+(BOOL)usesContextStoreForRealTimeNotifications;
+(CGFloat)minimumSecondsForBeingIdle;
+(CGFloat)secondsOfInfluence;
+(Class)supportedDuetDataProviderClass;
+(NSInteger)anchorType;
+(id)duetEventsPredicates;
+(id)fetchAnchorOccurrencesBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)invalidationPredicateForContextStoreRegistration;
+(id)keyPathForContextStore;
+(id)longDescription;
+(id)predicateForContextStoreRegistration;
+(id)sampleEvent;
+(void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)arg0 enterSelector:(SEL)arg1 exitSelector:(SEL)arg2 ;


@end


#endif