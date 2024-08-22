// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTPROPOSENEWTIMEITEM_H
#define EKEVENTPROPOSENEWTIMEITEM_H

@class UITableViewCell;


#import "EKEventDetailItem.h"

@interface EKEventProposeNewTimeItem : EKEventDetailItem {
    UITableViewCell *_cell;
    BOOL _cellNeedsUpdate;
}




+(BOOL)eventShowsProposeTime:(id)arg0 ;
-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(void)_updateCellIfNeededForWidth:(CGFloat)arg0 ;
-(void)reset;
-(void)setCellPosition:(int)arg0 ;


@end


#endif