// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDNOTIFICATIONCONDITIONCONVERTER_H
#define HMDNOTIFICATIONCONDITIONCONVERTER_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMDNotificationConditionConverter : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isTimePredicate:(id)arg0 ;
+(id)_presencePredicatesFromPredicate:(id)arg0 ;
+(id)_sunriseSunsetTimePeriodElementFromComparisonPredicate:(id)arg0 ;
+(id)_timeOfDayTimePeriodElementFromComparisonPredicate:(id)arg0 ;
+(id)_timePredicatesFromPredicate:(id)arg0 ;
+(id)conditionsFromPredicate:(id)arg0 ;
+(id)logCategory;
+(id)negateOffsetDateComponents:(id)arg0 ;
+(id)predicateFromPresenceCondition:(id)arg0 ;
+(id)predicateFromTimePeriodCondition:(id)arg0 ;
+(id)predicatesFromConditions:(id)arg0 ;
+(id)presenceNotificationConditionFromPredicate:(id)arg0 ;
+(id)timePeriodNotificationConditionFromPredicate:(id)arg0 ;


@end


#endif