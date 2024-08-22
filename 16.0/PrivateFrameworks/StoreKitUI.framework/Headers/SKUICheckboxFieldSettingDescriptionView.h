// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUICHECKBOXFIELDSETTINGDESCRIPTIONVIEW_H
#define SKUICHECKBOXFIELDSETTINGDESCRIPTIONVIEW_H

@class UILabel, UISwitch, NSString;
@protocol UITextFieldDelegate;


#import "SKUIFieldSettingDescriptionView.h"
#import "SKUIInputViewElement.h"
#import "SKUIFieldSettingDescription.h"

@interface SKUICheckboxFieldSettingDescriptionView : SKUIFieldSettingDescriptionView <UITextFieldDelegate>

 {
    CGFloat _aggregateLabelWidth;
    SKUIInputViewElement *_inputViewElement;
    UILabel *_label;
    SKUIFieldSettingDescription *_settingDescription;
    UISwitch *_switch;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForSettingDescription:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(struct CGSize )preferredSizeForSettingDescription:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 settingDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(void)_addInputWithElement:(id)arg0 ;
-(void)_addLabelWithElement:(id)arg0 ;
-(void)_addSwitchWithElement:(id)arg0 ;
-(void)_switchValueChanged:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithSettingDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)tintColorDidChange;


@end


#endif