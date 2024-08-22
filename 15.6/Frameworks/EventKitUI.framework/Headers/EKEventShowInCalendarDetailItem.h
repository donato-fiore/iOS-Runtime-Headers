// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTSHOWINCALENDARDETAILITEM_H
#define EKEVENTSHOWINCALENDARDETAILITEM_H

@class EKEvent, NSDate;


#import "EKEventDetailItem.h"
#import "EKUITableViewCell.h"
#import "EKDayPreviewController.h"

@interface EKEventShowInCalendarDetailItem : EKEventDetailItem {
    EKUITableViewCell *_cell;
    EKDayPreviewController *_containedDayViewController;
    EKEvent *_eventCopy;
}


@property (retain, nonatomic) NSDate *proposedTime; // ivar: _proposedTime


-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(id)_dayPreviewViewController;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(void)_createNewEventCopy;
-(void)_datesForPreviewViewControllerWithStartDate:(*id)arg0 endDate:(*id)arg1 ;
-(void)refreshCopiedEvents;
-(void)reset;
-(void)setEvent:(id)arg0 store:(id)arg1 ;


@end


#endif