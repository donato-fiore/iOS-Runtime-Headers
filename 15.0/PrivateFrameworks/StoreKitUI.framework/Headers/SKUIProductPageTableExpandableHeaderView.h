// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPRODUCTPAGETABLEEXPANDABLEHEADERVIEW_H
#define SKUIPRODUCTPAGETABLEEXPANDABLEHEADERVIEW_H

@class UIControl, UILabel, UIView, NSString, UIColor;


#import "SKUIColorScheme.h"

@interface SKUIProductPageTableExpandableHeaderView : UIControl {
    UILabel *_actionLabel;
    UIView *_bottomBorderView;
    UILabel *_titleLabel;
    UIView *_topBorderView;
}


@property (copy, nonatomic) NSString *actionString;
@property (copy, nonatomic) UIColor *bottomBorderColor;
@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIColor *topBorderColor;


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif