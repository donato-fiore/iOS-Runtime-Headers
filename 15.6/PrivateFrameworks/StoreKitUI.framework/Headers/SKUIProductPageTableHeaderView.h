// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIPRODUCTPAGETABLEHEADERVIEW_H
#define SKUIPRODUCTPAGETABLEHEADERVIEW_H

@class UIView, UILabel, NSString;



@interface SKUIProductPageTableHeaderView : UIView {
    UILabel *_titleLabel;
}


@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (copy, nonatomic) NSString *title;


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif