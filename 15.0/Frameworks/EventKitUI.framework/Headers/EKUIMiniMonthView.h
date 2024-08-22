// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKUIMINIMONTHVIEW_H
#define EKUIMINIMONTHVIEW_H

@class NSDateComponents;


#import "EKUIYearMonthView.h"

@interface EKUIMiniMonthView : EKUIYearMonthView {
    NSDateComponents *_dateComponents;
}


@property (retain, nonatomic) NSDateComponents *dateComponents;


+(CGFloat)heightForInterfaceOrientation:(NSInteger)arg0 windowSize:(struct CGSize )arg1 heightSizeClass:(NSInteger)arg2 ;
-(BOOL)opaque;
-(BOOL)showMonthName;
-(BOOL)showWeekDayInitials;
-(BOOL)vibrant;
-(CGFloat)_gridOfDaysHeightAdjustment;
-(CGFloat)_gridOfDaysYAdjustment;
-(CGFloat)circleFrameXAdjustment;
-(CGFloat)circleFrameYAdjustment;
-(CGFloat)circleSize;
-(CGFloat)circleSizeForDoubleDigit;
-(CGFloat)dayTextSize;
-(CGFloat)daysXAdjustLeft;
-(CGFloat)daysYAdjustTop;
-(CGFloat)headerFontKerning;
-(CGFloat)headerFontMaxSize;
-(CGFloat)headerFontMinSize;
-(CGFloat)headerXAdjust;
-(CGFloat)todayNumberKerning;
-(CGFloat)todayTextSize;
-(CGFloat)todayTextYAdjustment;
-(CGFloat)weekDayInitialsAdjustLeft;
-(CGFloat)weekDayInitialsAdjustTop;
-(CGFloat)xInset;
-(CGFloat)xSpacing;
-(CGFloat)yInset;
-(CGFloat)ySpacing;
-(id)dayColor;
-(id)dayColorKey;
-(id)dayNumberFont;
-(id)headerFont;
-(id)initWithCalendar:(id)arg0 dateComponents:(id)arg1 ;
-(id)todayNumberFont;
-(id)weekDayInitialsFont;
-(struct CGRect )frameForGridOfDays:(BOOL)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif