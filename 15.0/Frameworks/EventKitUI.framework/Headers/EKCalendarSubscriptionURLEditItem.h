// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCALENDARSUBSCRIPTIONURLEDITITEM_H
#define EKCALENDARSUBSCRIPTIONURLEDITITEM_H

@class UITableViewCell, NSString;


#import "EKCalendarEditItem.h"

@interface EKCalendarSubscriptionURLEditItem : EKCalendarEditItem {
    UITableViewCell *_cell;
    NSString *_urlString;
}


@property (nonatomic) BOOL editable; // ivar: _editable
@property (retain, nonatomic) NSString *urlString;


-(BOOL)becomeFirstResponder;
-(BOOL)saveStateToCalendar:(id)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(NSInteger)_cellSelectionStyleForEditable:(BOOL)arg0 ;
-(id)_textFieldColorForEditable:(BOOL)arg0 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)headerTitle;
-(void)calendarEditor:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;


@end


#endif