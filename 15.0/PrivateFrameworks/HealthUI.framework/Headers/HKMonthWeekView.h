// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMONTHWEEKVIEW_H
#define HKMONTHWEEKVIEW_H

@class CALayer, NSArray;


#import "HKCalendarWeekView.h"

@interface HKMonthWeekView : HKCalendarWeekView {
    BOOL _displaysMonthTitle;
    BOOL _displaysTopBorderLine;
    BOOL _isRTL;
    CALayer *_topBorderLine;
}


@property (nonatomic) BOOL accessoryContentsFetched; // ivar: _accessoryContentsFetched
@property (readonly, nonatomic) NSArray *accessoryViews; // ivar: _accessoryViews


-(BOOL)containsMonthTitle;
-(BOOL)supportsRTL;
-(Class)cellClass;
-(Class)monthTitleClass;
-(id)cellMatchingDate:(id)arg0 ;
-(id)initWithDateCache:(id)arg0 displaysMonthTitle:(BOOL)arg1 displaysTopBorderLine:(BOOL)arg2 ;
-(struct CGRect )_frameForTopBorderLine;
-(void)clearAccessoryViews;
-(void)layoutSubviews;
-(void)selectedCalendarDay:(id)arg0 ;
-(void)setMonthWeekStart:(id)arg0 ;
-(void)setTitleHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif