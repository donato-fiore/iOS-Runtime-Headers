// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIFLOATINGOVERLAYVIEW_H
#define SKUIFLOATINGOVERLAYVIEW_H

@class UIView;



@interface SKUIFloatingOverlayView : UIView

@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif