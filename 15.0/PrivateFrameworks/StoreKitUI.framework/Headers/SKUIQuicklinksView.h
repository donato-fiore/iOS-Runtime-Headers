// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIQUICKLINKSVIEW_H
#define SKUIQUICKLINKSVIEW_H

@class UIView, UIColor, UILabel, NSString;



@interface SKUIQuicklinksView : UIView {
    UIView *_borderView;
    UIColor *_titleColor;
    UILabel *_titleLabel;
}


@property (retain, nonatomic) UIView *collectionView; // ivar: _collectionView
@property (copy, nonatomic) NSString *title;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setColoringWithColorScheme:(id)arg0 ;


@end


#endif