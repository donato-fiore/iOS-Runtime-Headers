// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCALENDARSUBSCRIPTIONDETAILSEDITITEM_H
#define EKCALENDARSUBSCRIPTIONDETAILSEDITITEM_H



#import "EKCalendarEditItem.h"

@interface EKCalendarSubscriptionDetailsEditItem : EKCalendarEditItem



-(BOOL)configureWithCalendar:(id)arg0 ;
-(NSUInteger)numberOfSubitems;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(void)calendarEditor:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;


@end


#endif