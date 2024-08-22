// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLSUMMARYNAVIGATIONBARTITLEVIEW_H
#define HUQUICKCONTROLSUMMARYNAVIGATIONBARTITLEVIEW_H

@class UINavigationBarTitleView, NSArray;


#import "HUQuickControlSummaryView.h"

@interface HUQuickControlSummaryNavigationBarTitleView : UINavigationBarTitleView

@property (retain, nonatomic) NSArray *contentConstraints; // ivar: _contentConstraints
@property (retain, nonatomic) HUQuickControlSummaryView *summaryView; // ivar: _summaryView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)transitionCompleted:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;
-(void)updateConstraints;


@end


#endif