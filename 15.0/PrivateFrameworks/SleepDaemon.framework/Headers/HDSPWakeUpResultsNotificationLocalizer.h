// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPWAKEUPRESULTSNOTIFICATIONLOCALIZER_H
#define HDSPWAKEUPRESULTSNOTIFICATIONLOCALIZER_H

@class HKHealthStore;

#import <Foundation/Foundation.h>

#import "HDSPWakeUpResultsNotification.h"

@interface HDSPWakeUpResultsNotificationLocalizer : NSObject

@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) HDSPWakeUpResultsNotification *notification; // ivar: _notification


-(CGFloat)dailySleepDurationGoal;
-(NSInteger)weeklyGoalAchieved;
-(NSUInteger)category;
-(id)_embeddedNameLocalizedStringKey;
-(id)_embeddedNameSubstitutionStringKey;
-(id)_localizedBodyForOneDayNotification;
-(id)_localizedBodyForOneWeekDayNotification;
-(id)_localizedBodyForTwoWeekNotification;
-(id)_localizedStringKeyBase;
-(id)_regularLocalizedStringKey;
-(id)_regularSubstitutionStringKey;
-(id)initWithNotification:(id)arg0 healthStore:(id)arg1 ;
-(id)localizedBody;
-(id)localizedTitle;
-(id)userFirstName;


@end


#endif