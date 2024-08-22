// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISEGMENTEDTABLEHEADERVIEW_H
#define SKUISEGMENTEDTABLEHEADERVIEW_H

@class UIView, _UIBackdropView;



@interface SKUISegmentedTableHeaderView : UIView {
    UIView *_borderView;
}


@property (readonly, nonatomic) _UIBackdropView *backdropView; // ivar: _backdropView
@property (nonatomic) BOOL hidesBorderView;
@property (retain, nonatomic) UIView *segmentedControl; // ivar: _segmentedControl


-(id)_borderView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif