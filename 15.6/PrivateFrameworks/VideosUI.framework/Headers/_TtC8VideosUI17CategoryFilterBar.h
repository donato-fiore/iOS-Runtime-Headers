// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8VIDEOSUI17CATEGORYFILTERBAR_H
#define _TTC8VIDEOSUI17CATEGORYFILTERBAR_H

@class UIScrollView;



@interface _TtC8VideosUI17CategoryFilterBar : UIScrollView {
    ? categories;
    ? selectionHandler;
    ? selectedCategory;
    ? lastKnownBounds;
    ? buttons;
    ? selectedButton;
    ? $__lazy_storage_$_selectedButtonBackgroundView;
    ? needsButtonsLayout;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)categoryButtonTapped:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif