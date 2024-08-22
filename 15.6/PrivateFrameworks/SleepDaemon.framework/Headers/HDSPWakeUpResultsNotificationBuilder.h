// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPWAKEUPRESULTSNOTIFICATIONBUILDER_H
#define HDSPWAKEUPRESULTSNOTIFICATIONBUILDER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface HDSPWakeUpResultsNotificationBuilder : NSObject

@property (readonly, nonatomic) NSArray *daySummaries; // ivar: _daySummaries
@property (readonly, nonatomic) ? morningIndexRange; // ivar: _morningIndexRange
@property (readonly, nonatomic) NSString *userFirstName; // ivar: _userFirstName


-(BOOL)_didMeetSleepDurationGoalLastNight;
-(NSInteger)_randomNotificationVariantForCategory:(NSUInteger)arg0 ;
-(id)_notificationForCategory:(NSUInteger)arg0 morningIndexRange:(struct ? )arg1 goalAchieved:(id)arg2 ;
-(id)_sleepDurationGoalAchievedLastNightNotification;
-(id)_sleepDurationGoalAchievedShortWeekNotification;
-(id)_sleepDurationGoalAchievedTwoWeekNotification;
-(id)buildNotification;
-(id)initWithDaySummaries:(id)arg0 morningIndexRange:(struct ? )arg1 userFirstName:(id)arg2 ;


@end


#endif