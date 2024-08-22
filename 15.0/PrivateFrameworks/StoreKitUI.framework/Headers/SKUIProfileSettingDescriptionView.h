// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPROFILESETTINGDESCRIPTIONVIEW_H
#define SKUIPROFILESETTINGDESCRIPTIONVIEW_H

@class UILabel;


#import "SKUISettingDescriptionView.h"
#import "SKUIImageView.h"

@interface SKUIProfileSettingDescriptionView : SKUISettingDescriptionView {
    UILabel *_handleLabel;
    BOOL _hasDisclosureChevron;
    SKUIImageView *_imageView;
    UILabel *_nameLabel;
}




+(BOOL)prefetchResourcesForSettingDescription:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(struct CGSize )preferredSizeForSettingDescription:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 settingDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)hasDisclosureChevron;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(void)layoutSubviews;
-(void)reloadWithSettingDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;


@end


#endif