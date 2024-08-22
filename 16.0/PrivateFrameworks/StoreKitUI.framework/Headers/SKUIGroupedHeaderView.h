// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIGROUPEDHEADERVIEW_H
#define SKUIGROUPEDHEADERVIEW_H

@class UIView, UILabel, NSString;



@interface SKUIGroupedHeaderView : UIView {
    UILabel *_titleLabel;
    UIView *_topBorder;
    UIView *_botBorder;
}


@property (nonatomic) BOOL hasBottomBorder;
@property (nonatomic) BOOL hasTopBorder;
@property (copy, nonatomic) NSString *title;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif