// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXANCHOR_H
#define ATXANCHOR_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXAnchor : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *anchorEventIdentifier; // ivar: _anchorEventIdentifier


+(BOOL)isActive;
+(BOOL)shouldPredicateOnStartDate;
+(BOOL)shouldProcessContextStoreNotification;
+(BOOL)shouldProcessContextStoreNotificationForDict;
+(BOOL)shouldProcessContextStoreNotificationForNumber;
+(BOOL)supportsSecureCoding;
+(BOOL)usesContextStoreForRealTimeNotifications;
+(CGFloat)durationOfAnchorEvent:(id)arg0 ;
+(CGFloat)secondsOfInfluence;
+(Class)anchorClassFromAnchorTypeString:(id)arg0 ;
+(Class)supportedDuetDataProviderClass;
+(NSInteger)anchorType;
+(NSInteger)stringToAnchorType:(id)arg0 ;
+(id)allAnchorClasses;
+(id)anchorOccurenceDateFromDuetEvent:(id)arg0 ;
+(id)anchorTypeStringToClassName:(id)arg0 ;
+(id)anchorTypeToAnchorClassName:(NSInteger)arg0 ;
+(id)anchorTypeToString:(NSInteger)arg0 ;
+(id)candidateQueryStartDateFromDuetEvent:(id)arg0 ;
+(id)duetEventsPredicates;
+(id)fetchAnchorOccurrencesBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)invalidationPredicateForContextStoreRegistration;
+(id)keyPathForContextStore;
+(id)longDescription;
+(id)predicateForContextStoreRegistration;
+(id)sampleEvent;
+(int)pbAnchorEventTypeFromDuetEvent:(id)arg0 ;
+(void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)arg0 enterSelector:(SEL)arg1 exitSelector:(SEL)arg2 ;
// +(void)registerWithContextStoreForAnchorEntranceWithCallback:(id)arg0 notificationId:(unk)arg1 registrationPersistenceContext:(id)arg2  ;
// +(void)registerWithContextStoreForAnchorExitWithCallback:(id)arg0 notificationId:(unk)arg1 registrationPersistenceContext:(id)arg2  ;
+(void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)arg0 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)anchorTypeString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif