// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTDATEDETAILITEM_H
#define EKEVENTDATEDETAILITEM_H

@class NSDate, NSString;
@protocol EKCellShortener;


#import "EKEventDetailItem.h"
#import "PreferencesDoubleTwoPartValueCell.h"

@interface EKEventDateDetailItem : EKEventDetailItem <EKCellShortener>

 {
    PreferencesDoubleTwoPartValueCell *_cell;
    NSDate *_startDate;
    NSDate *_endDate;
    BOOL _indent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 forceUpdate:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)reset;
-(void)setEvent:(id)arg0 store:(id)arg1 ;
-(void)shortenCell:(id)arg0 ;


@end


#endif