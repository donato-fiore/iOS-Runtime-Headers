// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKCALENDARITEMCALENDAREDITITEM_H
#define EKCALENDARITEMCALENDAREDITITEM_H



#import "EKCalendarItemEditItem.h"

@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem {
    NSUInteger _entityType;
}




-(BOOL)_shouldShowSourceForCalendar:(id)arg0 ;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg0 ;
-(BOOL)editItemViewControllerSave:(id)arg0 ;
-(BOOL)requiresReconfigurationOnSave;
-(BOOL)shouldAppearWithVisibility:(int)arg0 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithEntityType:(NSUInteger)arg0 ;


@end


#endif