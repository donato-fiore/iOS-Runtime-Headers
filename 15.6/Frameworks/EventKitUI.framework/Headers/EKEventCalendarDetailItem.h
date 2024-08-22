// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTCALENDARDETAILITEM_H
#define EKEVENTCALENDARDETAILITEM_H

@class EKCalendar, UITableViewCell;


#import "EKEventDetailItem.h"

@interface EKEventCalendarDetailItem : EKEventDetailItem {
    EKCalendar *_calendar;
    UITableViewCell *_cell;
}




-(BOOL)_calendarCanBeChanged;
-(BOOL)_shouldAllowViewingDetailsForCalendar:(id)arg0 ;
-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(BOOL)editItemViewControllerSave:(id)arg0 ;
-(BOOL)eventViewController:(id)arg0 shouldSelectSubitem:(NSUInteger)arg1 ;
-(BOOL)hasDetailViewControllerAtIndex:(NSUInteger)arg0 ;
-(BOOL)minimalMode;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 withTraitCollection:(id)arg1 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(id)init;
-(void)_contentSizeCategoryChanged:(id)arg0 ;
-(void)dealloc;
-(void)reset;


@end


#endif