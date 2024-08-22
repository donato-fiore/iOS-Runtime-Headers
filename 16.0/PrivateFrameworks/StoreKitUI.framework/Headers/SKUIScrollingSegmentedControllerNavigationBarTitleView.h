// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISCROLLINGSEGMENTEDCONTROLLERNAVIGATIONBARTITLEVIEW_H
#define SKUISCROLLINGSEGMENTEDCONTROLLERNAVIGATIONBARTITLEVIEW_H

@class UIView;


#import "SKUIInteractiveSegmentedControl.h"

@interface SKUIScrollingSegmentedControllerNavigationBarTitleView : UIView

@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (retain, nonatomic) SKUIInteractiveSegmentedControl *segmentedControl; // ivar: _segmentedControl
@property (nonatomic) CGFloat segmentedControlMinimumHeight; // ivar: _segmentedControlMinimumHeight


+(struct UIEdgeInsets )defaultLayoutMargins;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif