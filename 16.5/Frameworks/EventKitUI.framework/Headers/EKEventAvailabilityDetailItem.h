// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTAVAILABILITYDETAILITEM_H
#define EKEVENTAVAILABILITYDETAILITEM_H

@class UITableViewCell;


#import "EKEventDetailItem.h"

@interface EKEventAvailabilityDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    NSInteger _availability;
}




-(BOOL)_canChangeAvailability;
-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(id)_choices;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(void)reset;
-(void)setEvent:(id)arg0 store:(id)arg1 ;


@end


#endif