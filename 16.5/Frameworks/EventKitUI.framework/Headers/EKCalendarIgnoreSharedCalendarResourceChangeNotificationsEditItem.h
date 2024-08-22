// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCALENDARIGNORESHAREDCALENDARRESOURCECHANGENOTIFICATIONSEDITITEM_H
#define EKCALENDARIGNORESHAREDCALENDARRESOURCECHANGENOTIFICATIONSEDITITEM_H



#import "EKCalendarAbstractSwitchEditItem.h"

@interface EKCalendarIgnoreSharedCalendarResourceChangeNotificationsEditItem : EKCalendarAbstractSwitchEditItem



-(BOOL)configureWithCalendar:(id)arg0 ;
-(BOOL)underlyingCalendarState;
-(id)cellText;
-(id)descriptionLabelText;
-(id)headerTitle;
-(void)setUnderlyingCalendarState:(BOOL)arg0 ;


@end


#endif