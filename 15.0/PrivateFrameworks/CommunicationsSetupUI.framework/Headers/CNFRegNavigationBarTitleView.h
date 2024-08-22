// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNFREGNAVIGATIONBARTITLEVIEW_H
#define CNFREGNAVIGATIONBARTITLEVIEW_H

@class UIView, UILabel, UIActivityIndicatorView, UINavigationItem;



@interface CNFRegNavigationBarTitleView : UIView {
    UILabel *_titleLabel;
    UIActivityIndicatorView *_activityIndicator;
}


@property (nonatomic) UINavigationItem *item; // ivar: _item


-(BOOL)_useSilverLookForBarStyle:(NSInteger)arg0 ;
-(id)_currentTextColorForBarStyle:(NSInteger)arg0 ;
-(id)_currentTextShadowColorForBarStyle:(NSInteger)arg0 ;
-(id)_defaultFont;
-(id)_titleTextColorForBarStyle:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithNavigationItem:(id)arg0 ;
-(struct CGSize )_currentTextShadowOffsetForBarStyle:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateTitleLabel;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif