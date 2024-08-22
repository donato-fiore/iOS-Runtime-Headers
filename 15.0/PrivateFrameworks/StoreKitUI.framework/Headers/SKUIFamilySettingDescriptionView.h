// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIFAMILYSETTINGDESCRIPTIONVIEW_H
#define SKUIFAMILYSETTINGDESCRIPTIONVIEW_H

@class UIActivityIndicatorView, UIImageView, UILabel;


#import "SKUISettingDescriptionView.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUISettingsFamilyViewElement.h"

@interface SKUIFamilySettingDescriptionView : SKUISettingDescriptionView {
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_iconImageView;
    UILabel *_labelView;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUISettingsFamilyViewElement *_viewElement;
    NSInteger _viewState;
}




+(BOOL)prefetchResourcesForSettingDescription:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(struct CGSize )preferredSizeForSettingDescription:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 settingDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(id)_attributedStringForKey:(id)arg0 ;
-(id)_attributedStringForViewState;
-(void)_layoutWithActivityIndicator;
-(void)_layoutWithLockup;
-(void)_setViewState:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithSettingDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;


@end


#endif