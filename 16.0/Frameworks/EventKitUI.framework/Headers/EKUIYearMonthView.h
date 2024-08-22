// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUIYEARMONTHVIEW_H
#define EKUIYEARMONTHVIEW_H

@class UIView, EKCalendarDate, NSString, NSSet, NSCalendar, UIColor, UIFont;
@protocol UIPointerInteractionDelegate;


#import "EKUIOverlayCalendarSignificantDatesProvider.h"

@interface EKUIYearMonthView : UIView <UIPointerInteractionDelegate>

 {
    EKCalendarDate *_endCalendarDate;
    NSString *_monthString;
    NSInteger _firstDayIndex;
    NSInteger _daysInWeek;
    NSInteger _todayIndex;
    NSSet *_firstOfOverlayMonthIndices;
    NSSet *_firstOfOverlayYearIndices;
    NSCalendar *_calendar;
    UIView *_hidingView;
    UIView *_previewContainerView;
}


@property (readonly, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) EKCalendarDate *calendarDate; // ivar: _calendarDate
@property (readonly, nonatomic) CGFloat circleFrameXAdjustment;
@property (readonly, nonatomic) CGFloat circleFrameYAdjustment;
@property (readonly, nonatomic) CGFloat circleSize;
@property (readonly, nonatomic) CGFloat circleSizeForDoubleDigit; // ivar: _circleSizeForDoubleDigit
@property (readonly, nonatomic) BOOL computeCircleFrameWithoutAdjustments; // ivar: _computeCircleFrameWithoutAdjustments
@property (readonly, nonatomic) UIColor *dayColor;
@property (readonly, nonatomic) NSString *dayColorKey;
@property (readonly, nonatomic) UIFont *dayNumberFont;
@property (readonly, nonatomic) CGFloat dayNumberKerning;
@property (readonly, nonatomic) CGFloat dayTextSize;
@property (readonly, nonatomic) NSInteger daysInWeek;
@property (readonly, nonatomic) CGFloat daysXAdjustLeft;
@property (readonly, nonatomic) CGFloat daysYAdjustTop;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIFont *headerFont;
@property (readonly, nonatomic) CGFloat headerFontKerning;
@property (readonly, nonatomic) CGFloat headerFontMaxSize;
@property (readonly, nonatomic) CGFloat headerFontMinSize;
@property (readonly, nonatomic) CGFloat headerXAdjust;
@property (readonly, nonatomic) BOOL opaque;
@property (retain, nonatomic) EKUIOverlayCalendarSignificantDatesProvider *overlaySignificantDatesProvider; // ivar: _overlaySignificantDatesProvider
@property (readonly, nonatomic) CGFloat roundedRectCornerRadius;
@property (readonly, nonatomic) BOOL showMonthName;
@property (readonly, nonatomic) BOOL showWeekDayInitials;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIFont *todayNumberFont;
@property (readonly, nonatomic) CGFloat todayNumberKerning;
@property (readonly, nonatomic) CGFloat todayTextSize;
@property (readonly, nonatomic) CGFloat todayTextYAdjustment;
@property (readonly, nonatomic) BOOL vibrant;
@property (readonly, nonatomic) CGFloat weekDayInitialsAdjustLeft;
@property (readonly, nonatomic) CGFloat weekDayInitialsAdjustTop;
@property (readonly, nonatomic) UIFont *weekDayInitialsFont;
@property (readonly, nonatomic) CGFloat xInset;
@property (readonly, nonatomic) CGFloat xSpacing;
@property (readonly, nonatomic) CGFloat yInset;
@property (readonly, nonatomic) CGFloat ySpacing;


+(CGFloat)heightForInterfaceOrientation:(NSInteger)arg0 windowSize:(struct CGSize )arg1 heightSizeClass:(NSInteger)arg2 ;
+(id)_defaultTextColor;
-(BOOL)_pointIntersectsMonthName:(struct CGPoint )arg0 ;
-(BOOL)_shouldUseRoundedRectInsteadOfCircle;
-(BOOL)containsCalendarDate:(id)arg0 ;
-(BOOL)isCurrentMonth;
-(BOOL)pointIsAboveMonthNameBaseline:(struct CGPoint )arg0 ;
-(BOOL)shouldAddPreciseInteractivity;
-(CGFloat)minHeaderFontSizeUsed;
-(NSInteger)_dayIndexForPoint:(struct CGPoint )arg0 ;
-(id)_containerForPreview;
-(id)_generatePreviewForDayIndex:(NSInteger)arg0 ;
-(id)_generatePreviewForMonthTitle;
-(id)_imageForDayNumber:(id)arg0 size:(struct CGSize )arg1 underlineThickness:(CGFloat)arg2 ;
-(id)_imageForDayNumber:(id)arg0 size:(struct CGSize )arg1 underlineThickness:(CGFloat)arg2 forPreview:(BOOL)arg3 ;
-(id)_imageForMonthDays:(NSInteger)arg0 size:(struct CGSize )arg1 underlineThickness:(CGFloat)arg2 ;
-(id)_imageForMonthName:(id)arg0 ;
-(id)_imageForMonthName:(id)arg0 forPreview:(BOOL)arg1 ;
-(id)_todayAttributes;
-(id)_weekDayInitialsImage;
-(id)calendarDateForPoint:(struct CGPoint )arg0 ;
-(id)initWithCalendarDate:(id)arg0 calendar:(id)arg1 ;
-(id)monthNameForDate:(id)arg0 ;
-(id)monthString;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(struct CGPoint )_monthNameOriginPoint;
-(struct CGPoint )headerOrigin;
-(struct CGRect )_monthNameFrame;
-(struct CGRect )frameForGridOfDays:(BOOL)arg0 ;
-(struct CGRect )frameForTodayHighlight;
-(struct CGSize )roundedRectSizeForDayNumberString:(id)arg0 ;
-(void)_adjustHidingViewToFrame:(struct CGRect )arg0 ;
-(void)_getMetricsForDayIndex:(NSInteger)arg0 textFrame:(struct CGRect *)arg1 circleFrame:(struct CGRect *)arg2 ;
-(void)_getTodayNumberTextFrame:(struct CGRect *)arg0 circleFrame:(struct CGRect *)arg1 ;
-(void)_reloadCachedValues;
-(void)_setUpInteraction;
-(void)_updateFirstOfMonthAndYearIndices;
-(void)_updateToday;
-(void)_warmImageCache;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)localeChanged;
-(void)overlaySignificantDatesChangedInRange:(id)arg0 ;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)pulseTodayCircle;
-(void)tintColorDidChange;
-(void)updateToday;


@end


#endif