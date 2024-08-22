// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKCALENDARISAFFECTINGAVAILABILITYEDITITEM_H
#define EKCALENDARISAFFECTINGAVAILABILITYEDITITEM_H



#import "EKCalendarAbstractSwitchEditItem.h"

@interface EKCalendarIsAffectingAvailabilityEditItem : EKCalendarAbstractSwitchEditItem



-(BOOL)cellWrapsLongText;
-(BOOL)configureWithCalendar:(id)arg0 ;
-(BOOL)underlyingCalendarState;
-(id)cellText;
-(id)descriptionLabelText;
-(id)headerTitle;
-(void)setUnderlyingCalendarState:(BOOL)arg0 ;


@end


#endif