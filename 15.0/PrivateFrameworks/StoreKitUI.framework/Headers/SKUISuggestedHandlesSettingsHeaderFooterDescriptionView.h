// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISUGGESTEDHANDLESSETTINGSHEADERFOOTERDESCRIPTIONVIEW_H
#define SKUISUGGESTEDHANDLESSETTINGSHEADERFOOTERDESCRIPTIONVIEW_H

@class NSMutableArray, UILabel;


#import "SKUISettingsHeaderFooterDescriptionView.h"
#import "SKUISuggestedHandlesSettingsHeaderFooterDescription.h"

@interface SKUISuggestedHandlesSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView {
    NSMutableArray *_buttons;
    SKUISuggestedHandlesSettingsHeaderFooterDescription *_description;
    UILabel *_label;
}




+(BOOL)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_helpLabelWithDescription:(id)arg0 forWidth:(CGFloat)arg1 ;
+(struct CGSize )preferredSizeForSettingsHeaderFooterDescription:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 settingsHeaderFooterDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingsHeaderFooterDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(void)_buttonAction:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithSettingsHeaderFooterDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;


@end


#endif