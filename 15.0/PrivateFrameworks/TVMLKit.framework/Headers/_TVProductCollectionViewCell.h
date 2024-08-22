// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVPRODUCTCOLLECTIONVIEWCELL_H
#define _TVPRODUCTCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView, UIViewController;



@interface _TVProductCollectionViewCell : UICollectionViewCell {
    UIView *_titleView;
    UIEdgeInsets _activeMargins;
    BOOL _marginActive;
}


@property (nonatomic) UIEdgeInsets margins; // ivar: _margins
@property (nonatomic) UIEdgeInsets partialMargins; // ivar: _partialMargins
@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(BOOL)canBecomeFocused;
-(BOOL)isShowingTitleView;
-(id)preferredFocusEnvironments;
-(id)titleView;
-(void)disableMargins;
-(void)enableWithMargins:(struct UIEdgeInsets )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setTitleView:(id)arg0 margins:(struct UIEdgeInsets )arg1 show:(BOOL)arg2 ;
-(void)showTitleView:(BOOL)arg0 ;


@end


#endif