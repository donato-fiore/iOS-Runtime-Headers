// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIBUTTONFOOTERSETTINGSHEADERFOOTERDESCRIPTIONVIEW_H
#define SKUIBUTTONFOOTERSETTINGSHEADERFOOTERDESCRIPTIONVIEW_H

@class UIButton;


#import "SKUISettingsHeaderFooterDescriptionView.h"
#import "SKUIButtonViewElement.h"
#import "SKUIViewElement.h"

@interface SKUIButtonFooterSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView {
    UIButton *_button;
    SKUIButtonViewElement *_buttonElement;
    SKUIViewElement *_viewElement;
}




+(BOOL)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_buttonWithButtonElement:(id)arg0 ;
+(struct CGSize )preferredSizeForSettingsHeaderFooterDescription:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 settingsHeaderFooterDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingsHeaderFooterDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(void)_buttonTapped:(id)arg0 ;
-(void)_reloadWithButtonElement:(id)arg0 context:(id)arg1 ;
-(void)layoutSubviews;
-(void)reloadWithSettingsHeaderFooterDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;


@end


#endif