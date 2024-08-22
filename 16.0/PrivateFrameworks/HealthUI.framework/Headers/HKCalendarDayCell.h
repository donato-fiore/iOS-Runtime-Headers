// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCALENDARDAYCELL_H
#define HKCALENDARDAYCELL_H

@class CALayer, UIFont, NSDate, UIColor;


#import "HKDateCache.h"

@interface HKCalendarDayCell : CALayer

@property (retain, nonatomic) UIFont *boldFont; // ivar: _boldFont
@property (readonly, nonatomic) CALayer *circle; // ivar: _circle
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) HKDateCache *dateCache; // ivar: _dateCache
@property (nonatomic) CGFloat dayDiameter; // ivar: _dayDiameter
@property (readonly, nonatomic) CALayer *dayLabel; // ivar: _dayLabel
@property (readonly, nonatomic) NSInteger dayOfMonth; // ivar: _dayOfMonth
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly, nonatomic) BOOL representsToday; // ivar: _representsToday
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor


+(void)clearImageCache;
-(CGFloat)_roundedRectCornerRadius;
-(id)_integerNumberFormatter;
-(id)_reusedImageForDateIndex:(NSInteger)arg0 color:(id)arg1 ;
-(id)debugDescription;
-(id)init;
-(id)initWithDateCache:(id)arg0 ;
-(struct CGSize )_roundedRectSizeForDayNumberString:(id)arg0 ;
-(void)layoutOnce;
-(void)updateDateTextForDayNumber:(NSInteger)arg0 textColor:(id)arg1 ;
-(void)updateWithDate:(id)arg0 dayOfMonth:(NSInteger)arg1 ;


@end


#endif