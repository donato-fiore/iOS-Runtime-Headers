// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCALENDARDAYVIEW_H
#define PKCALENDARDAYVIEW_H

@class UIView, NSDate, UITapGestureRecognizer;
@protocol PKCalendarDayViewDelegate;


#import "PKCalendarDayLabelView.h"

@interface PKCalendarDayView : UIView {
    NSDate *_date;
    id<PKCalendarDayViewDelegate> *_delegate;
    PKCalendarDayLabelView *_dayLabelView;
    UITapGestureRecognizer *_tapRecognizer;
}


@property (retain, nonatomic) UIView *decorationView; // ivar: _decorationView
@property (nonatomic) BOOL hideDayLabel; // ivar: _hideDayLabel
@property (nonatomic, getter=isSelectable) BOOL selectable; // ivar: _selectable
@property (nonatomic, getter=isSelected) BOOL selected;


-(CGFloat)verticalMarginWithBounds:(struct CGRect )arg0 ;
-(id)initWithDate:(id)arg0 dayString:(id)arg1 delegate:(id)arg2 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_viewTapped;
-(void)layoutSubviews;


@end


#endif