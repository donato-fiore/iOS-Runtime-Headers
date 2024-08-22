// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMICROLOCATIONVISITANCHOR_H
#define ATXMICROLOCATIONVISITANCHOR_H



#import "ATXAnchor.h"

@interface ATXMicrolocationVisitAnchor : ATXAnchor



+(BOOL)isActive;
+(BOOL)shouldPredicateOnStartDate;
+(BOOL)shouldProcessContextStoreNotification;
+(BOOL)usesContextStoreForRealTimeNotifications;
+(CGFloat)secondsOfInfluence;
+(Class)supportedDuetDataProviderClass;
+(NSInteger)anchorType;
+(id)duetEventsPredicates;
+(id)keyPathForContextStore;
+(id)longDescription;
+(id)predicateForContextStoreRegistration;
+(id)sampleEvent;
+(void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)arg0 selector:(SEL)arg1 ;
+(void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)arg0 ;


@end


#endif