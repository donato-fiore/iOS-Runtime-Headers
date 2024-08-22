// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLSUMMARYNAVIGATIONBARTITLEVIEW_H
#define HUQUICKCONTROLSUMMARYNAVIGATIONBARTITLEVIEW_H

@class UINavigationBarTitleView, NSArray, UIView;


#import "HUQuickControlSummaryView.h"

@interface HUQuickControlSummaryNavigationBarTitleView : UINavigationBarTitleView

@property (retain, nonatomic) NSArray *contentConstraints; // ivar: _contentConstraints
@property (nonatomic) CGFloat leadingMargin; // ivar: _leadingMargin
@property (nonatomic) CGFloat navigationBarMinHeight; // ivar: _navigationBarMinHeight
@property (readonly, nonatomic) HUQuickControlSummaryView *summaryView;
@property (retain, nonatomic) UIView *titleView; // ivar: _titleView
@property (nonatomic) CGFloat trailingMargin; // ivar: _trailingMargin


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)transitionCompleted:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)updateLeadingMargin:(CGFloat)arg0 ;
-(void)updateTitleView:(id)arg0 ;
-(void)updateTrailingMargin:(CGFloat)arg0 ;


@end


#endif