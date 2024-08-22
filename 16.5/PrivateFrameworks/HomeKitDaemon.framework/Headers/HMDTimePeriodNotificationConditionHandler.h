// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDTIMEPERIODNOTIFICATIONCONDITIONHANDLER_H
#define HMDTIMEPERIODNOTIFICATIONCONDITIONHANDLER_H

@class HMFObject, NSString;
@protocol HMFLogging, HMDNotificationConditionHandler, HMDTimePeriodNotificationConditionSunsetSunriseProvider, HMDTimePeriodNotificationConditionTimeProvider;


#import "HMDHome.h"

@interface HMDTimePeriodNotificationConditionHandler : HMFObject <HMFLogging, HMDNotificationConditionHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) NSObject<HMDTimePeriodNotificationConditionSunsetSunriseProvider> *sunriseSunsetProvider; // ivar: _sunriseSunsetProvider
@property (readonly) Class superclass;
@property (readonly) NSObject<HMDTimePeriodNotificationConditionTimeProvider> *timeProvider; // ivar: _timeProvider


+(id)logCategory;
-(BOOL)canHandleCondition:(id)arg0 ;
-(BOOL)conditionPasses:(id)arg0 registrationUser:(id)arg1 ;
-(id)_dateComponentsForTimePeriodElement:(id)arg0 home:(id)arg1 ;
-(id)_dateTodayMatchingComponents:(id)arg0 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithHome:(id)arg0 timeProvider:(id)arg1 sunriseSunsetProvider:(id)arg2 ;


@end


#endif