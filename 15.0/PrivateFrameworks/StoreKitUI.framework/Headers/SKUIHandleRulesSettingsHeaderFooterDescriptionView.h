// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIHANDLERULESSETTINGSHEADERFOOTERDESCRIPTIONVIEW_H
#define SKUIHANDLERULESSETTINGSHEADERFOOTERDESCRIPTIONVIEW_H

@class NSMutableArray, UILabel;


#import "SKUISettingsHeaderFooterDescriptionView.h"
#import "SKUIHandleRulesSettingsHeaderFooterDescription.h"

@interface SKUIHandleRulesSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView {
    NSMutableArray *_buttons;
    SKUIHandleRulesSettingsHeaderFooterDescription *_description;
    UILabel *_label;
}




+(BOOL)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_labelWithDescription:(id)arg0 forWidth:(CGFloat)arg1 ;
+(struct CGSize )preferredSizeForSettingsHeaderFooterDescription:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 settingsHeaderFooterDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingsHeaderFooterDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(void)layoutSubviews;
-(void)reloadWithSettingsHeaderFooterDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;


@end


#endif