// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKCALENDARITEMCALENDAREDITITEM_H
#define EKCALENDARITEMCALENDAREDITITEM_H



#import "EKCalendarItemEditItem.h"

@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem {
    NSUInteger _entityType;
}




-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg0 ;
-(BOOL)requiresReconfigurationOnSave;
-(BOOL)shouldAppearWithVisibility:(int)arg0 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)eligibleCalendars;
-(id)init;
-(id)initWithEntityType:(NSUInteger)arg0 ;
-(id)popupMenu:(id)arg0 ;


@end


#endif