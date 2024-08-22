// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTAVAILABILITYDETAILITEM_H
#define EKEVENTAVAILABILITYDETAILITEM_H

@class UITableViewCell, NSArray;


#import "EKEventDetailItem.h"

@interface EKEventAvailabilityDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    NSInteger _availability;
    NSUInteger _supportedAvailabilities;
    NSArray *_choices;
    NSUInteger _availabilityIndexInChoices;
}




-(BOOL)_canChangeAvailability;
-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(BOOL)editItemViewControllerSave:(id)arg0 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(void)reset;
-(void)setEvent:(id)arg0 store:(id)arg1 ;


@end


#endif