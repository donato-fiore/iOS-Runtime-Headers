// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMONTHDAYCELL_H
#define HKMONTHDAYCELL_H



#import "HKCalendarDayCell.h"

@interface HKMonthDayCell : HKCalendarDayCell {
    NSInteger _dayOfWeek;
}


@property (readonly, nonatomic) NSInteger circleState; // ivar: _circleState


+(CGFloat)dayLabelFontSize;
-(BOOL)_representsWeekendDay;
-(id)initWithDateCache:(id)arg0 ;
-(void)_updateFontAndCircle;
-(void)dealloc;
-(void)pressToTransition:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateWithDate:(id)arg0 dayOfMonth:(NSInteger)arg1 ;


@end


#endif