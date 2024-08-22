// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTPREVIEWDETAILITEM_H
#define EKEVENTPREVIEWDETAILITEM_H

@class UITableViewCell, EKEvent, NSDate;


#import "EKEventDetailItem.h"
#import "EKDayPreviewController.h"
#import "CalendarModel.h"

@interface EKEventPreviewDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    EKDayPreviewController *_containedDayViewController;
    EKEvent *_eventCopy;
    CalendarModel *_model;
}


@property (nonatomic) BOOL inlineDayViewRespectsSelectedCalendarsFilter; // ivar: _inlineDayViewRespectsSelectedCalendarsFilter
@property (retain, nonatomic) NSDate *proposedTime; // ivar: _proposedTime


-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 forceUpdate:(BOOL)arg2 ;
-(id)_dayPreviewViewController;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(id)initWithModel:(id)arg0 ;
-(void)_createNewEventCopy;
-(void)_datesForPreviewViewControllerWithStartDate:(*id)arg0 endDate:(*id)arg1 ;
-(void)eventViewController:(id)arg0 didSelectReadOnlySubitem:(NSUInteger)arg1 ;
-(void)refreshCopiedEvents;
-(void)reset;
-(void)setEvent:(id)arg0 store:(id)arg1 ;


@end


#endif