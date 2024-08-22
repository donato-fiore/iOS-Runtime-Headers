// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSTODAYPAGEVIEW_H
#define CSTODAYPAGEVIEW_H

@class UIView, UIScrollView;


#import "CSPageViewBase.h"

@interface CSTodayPageView : CSPageViewBase

@property (nonatomic) CGFloat navigationBarTopInset; // ivar: _navigationBarTopInset
@property (retain, nonatomic) UIView *todayView; // ivar: _todayView
@property (retain, nonatomic) UIScrollView *widgetMajorScrollView; // ivar: _widgetMajorScrollView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_layoutTodayView;
-(void)layoutSubviews;


@end


#endif