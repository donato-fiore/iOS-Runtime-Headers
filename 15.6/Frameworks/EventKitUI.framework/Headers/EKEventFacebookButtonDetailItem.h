// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTFACEBOOKBUTTONDETAILITEM_H
#define EKEVENTFACEBOOKBUTTONDETAILITEM_H

@class UITableViewCell;


#import "EKEventDetailItem.h"

@interface EKEventFacebookButtonDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
}




-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(void)eventViewController:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;
-(void)layoutCellsForWidth:(CGFloat)arg0 position:(int)arg1 ;
-(void)reset;


@end


#endif