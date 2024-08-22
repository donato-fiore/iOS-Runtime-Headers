// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISWOOSHVIEW_H
#define SKUISWOOSHVIEW_H

@class UIView, UIButton, UILabel, UIControl, UICollectionView, NSString, UIColor;


#import "SKUILinkButton.h"

@interface SKUISwooshView : UIView {
    UIView *_borderView;
    UIButton *_seeAllButton;
    SKUILinkButton *_titleButton;
    UILabel *_titleLabel;
}


@property (readonly, nonatomic) UIControl *chevronTitleControl;
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (nonatomic) UIEdgeInsets collectionViewInsets; // ivar: _collectionViewInsets
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, nonatomic) UIControl *seeAllControl;
@property (copy, nonatomic) NSString *seeAllTitle;
@property (nonatomic) BOOL showsChevronForTitle; // ivar: _showsChevronForTitle
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIColor *titleColor; // ivar: _titleColor


-(id)_seeAllArrowImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)seeAllColorForControlState:(NSUInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setColoringWithColorScheme:(id)arg0 ;
-(void)setSeeAllColor:(id)arg0 forControlState:(NSUInteger)arg1 ;


@end


#endif