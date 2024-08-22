// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXANCHOR_H
#define ATXANCHOR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ATXAnchor : NSObject <NSCopying>



@property (retain, nonatomic) NSString *anchorEventIdentifier; // ivar: _anchorEventIdentifier


+(BOOL)isActive;
+(BOOL)shouldPredicateOnStartDate;
+(BOOL)shouldProcessContextStoreNotification;
+(BOOL)shouldProcessContextStoreNotificationForDict;
+(BOOL)shouldProcessContextStoreNotificationForNumber;
+(BOOL)usesContextStoreForRealTimeNotifications;
+(CGFloat)durationOfAnchorEvent:(id)arg0 ;
+(CGFloat)secondsOfInfluence;
+(Class)anchorClassFromAnchorTypeString:(id)arg0 ;
+(Class)supportedDuetDataProviderClass;
+(NSInteger)anchorType;
+(NSInteger)stringToAnchorType:(id)arg0 ;
+(id)anchorOccurenceDateFromDuetEvent:(id)arg0 ;
+(id)anchorTypeToAnchorClassName:(NSInteger)arg0 ;
+(id)anchorTypeToString:(NSInteger)arg0 ;
+(id)duetEventsPredicates;
+(id)fetchAnchorOccurrencesBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)invalidationPredicateForContextStoreRegistration;
+(id)keyPathForContextStore;
+(id)longDescription;
+(id)predicateForContextStoreRegistration;
+(id)sampleEvent;
+(int)pbAnchorEventTypeFromDuetEvent:(id)arg0 ;
+(void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)arg0 selector:(SEL)arg1 ;
// +(void)registerWithContextStoreForAnchorEntranceWithCallback:(id)arg0 notificationId:(unk)arg1 registrationPersistenceContext:(id)arg2  ;
// +(void)registerWithContextStoreForAnchorExitWithCallback:(id)arg0 notificationId:(unk)arg1 registrationPersistenceContext:(id)arg2  ;
+(void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)anchorTypeString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif