// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIACCESSIBILITYHUDVIEW_H
#define UIACCESSIBILITYHUDVIEW_H



#import "UIView.h"
#import "UIVisualEffectView.h"
#import "UIBlurEffect.h"
#import "UIImageView.h"
#import "UILabel.h"
#import "UIAccessibilityHUDItem.h"

@interface UIAccessibilityHUDView : UIView {
    UIView *_transformContainer;
    UIVisualEffectView *_effectView;
    UIBlurEffect *_blurEffect;
    UIVisualEffectView *_itemEffectView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIView *_customView;
}


@property (copy, nonatomic) UIAccessibilityHUDItem *item; // ivar: _item


+(struct CGSize )preferredHUDSize;
-(id)_contentEffectsForItem:(id)arg0 ;
-(id)containerViewForLayout;
-(id)customView;
-(id)imageView;
-(id)initWithHUDItem:(id)arg0 ;
-(id)layoutManager;
-(id)titleLabel;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )imageInsetsForLayout;
-(void)_show:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_updateLabelForItem;
-(void)dismissAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)layoutSubviews;
-(void)showAnimated:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif