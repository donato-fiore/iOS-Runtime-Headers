// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISETTINGDESCRIPTIONVIEW_H
#define SKUISETTINGDESCRIPTIONVIEW_H

@class UIView;



@interface SKUISettingDescriptionView : UIView

@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, nonatomic) BOOL hasDisclosureChevron;


+(BOOL)prefetchResourcesForSettingDescription:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(struct CGSize )preferredSizeForSettingDescription:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 settingDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(struct UIEdgeInsets )layoutMargins;
-(void)reloadWithSettingDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;


@end


#endif