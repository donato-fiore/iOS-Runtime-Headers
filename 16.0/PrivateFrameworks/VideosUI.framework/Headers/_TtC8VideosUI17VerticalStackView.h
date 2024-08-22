// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI17VERTICALSTACKVIEW_H
#define _TTC8VIDEOSUI17VERTICALSTACKVIEW_H



#import "VUIBaseView.h"

@interface _TtC8VideosUI17VerticalStackView : VUIBaseView {
    ? platterView;
    ? $__lazy_storage_$_expandableView;
    ? $__lazy_storage_$_panelView;
    ? footerView;
    ? layout;
    ? $__lazy_storage_$_platterContainerView;
    ? topPlatterGradient;
    ? bottomExpandableGradient;
    ? bottomPlatterGradient;
    ? lastExpandableViewFrame;
    ? lastPanelFrame;
    ? initialExpandableHeight;
    ? maxExpandableHeight;
    ? scrollDraggedOffset;
    ? isScrollable;
    ? isPartiallyExpanded;
    ? impressionsTracker;
}




-(CGFloat)bottomMarginWithBaselineMargin:(CGFloat)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif