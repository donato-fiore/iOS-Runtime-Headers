// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKEVENTPROPOSEDTIMEDETAILITEM_H
#define EKEVENTPROPOSEDTIMEDETAILITEM_H

@class NSMutableDictionary, NSArray;


#import "EKEventDetailItem.h"

@interface EKEventProposedTimeDetailItem : EKEventDetailItem {
    NSMutableDictionary *_cellForAttendee;
    NSArray *_attendeesWithProposedTimes;
    BOOL _visibilityChanged;
}




-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(BOOL)detailItemVisibilityChanged;
-(BOOL)hasDetailViewControllerAtIndex:(NSUInteger)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(NSUInteger)numberOfSubitems;
-(id)attendeeForIndex:(NSUInteger)arg0 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(void)_updateCellsIfNeededForWidth:(CGFloat)arg0 ;
-(void)reset;
-(void)setCellPosition:(int)arg0 ;


@end


#endif