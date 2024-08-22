// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTATTENDEESDETAILITEM_H
#define EKEVENTATTENDEESDETAILITEM_H

@class NSMutableDictionary, UITableViewCell, NSArray, NSString;
@protocol EKEventDetailAttendeeCellDelegate, EKEditItemViewControllerDelegate;


#import "EKEventDetailItem.h"
#import "EKEventDetailAttendeesCell.h"
#import "CalendarModel.h"

@interface EKEventAttendeesDetailItem : EKEventDetailItem <EKEventDetailAttendeeCellDelegate, EKEditItemViewControllerDelegate>

 {
    NSMutableDictionary *_attendeesCells;
    UITableViewCell *_titleCell;
    EKEventDetailAttendeesCell *_cell;
    CalendarModel *_model;
    EKEventDetailAttendeesCell *_oldCell;
}


@property (retain, nonatomic) NSArray *attendees; // ivar: _attendees
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;


-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(BOOL)hasDetailViewControllerAtIndex:(NSUInteger)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 forceUpdate:(BOOL)arg2 ;
-(NSUInteger)numberOfSubitems;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(id)initWithModel:(id)arg0 ;
-(void)eventDetailAttendeeCellDidCompleteLoad:(id)arg0 ;
-(void)eventDetailAttendeeCellWantsRefreshForHeightChange;
-(void)eventDetailAttendeesCell:(id)arg0 requestViewControllerPresentation:(id)arg1 ;
-(void)eventViewController:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;
-(void)reset;


@end


#endif