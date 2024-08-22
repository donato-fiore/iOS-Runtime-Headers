// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCALENDARMONTHVIEW_H
#define PKCALENDARMONTHVIEW_H

@class UIView, NSArray, NSString;
@protocol PKCalendarDayViewDelegate;


#import "PKCalendarDayView.h"

@interface PKCalendarMonthView : UIView <PKCalendarDayViewDelegate>

 {
    NSArray *_dayViews;
    NSArray *_weekdayHeaders;
    PKCalendarDayView *_selectedDayView;
    UIView *_headerView;
    UIView *_headerSeparatorView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_formViewsWithDataSource:(id)arg0 appearance:(id)arg1 headerView:(id)arg2 ;
-(void)calendarDayViewTapped:(id)arg0 withDate:(id)arg1 ;
-(void)configureWithDataSource:(id)arg0 appearance:(id)arg1 headerView:(id)arg2 ;
-(void)layoutSubviews;


@end


#endif