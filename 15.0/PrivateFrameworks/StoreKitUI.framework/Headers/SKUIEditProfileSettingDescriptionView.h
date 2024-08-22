// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIEDITPROFILESETTINGDESCRIPTIONVIEW_H
#define SKUIEDITPROFILESETTINGDESCRIPTIONVIEW_H

@class CALayer, UIButton, UITextField, NSString;
@protocol UITextFieldDelegate;


#import "SKUISettingDescriptionView.h"
#import "SKUIClientContext.h"
#import "SKUIImageView.h"
#import "SKUIEditProfileSettingDescription.h"

@interface SKUIEditProfileSettingDescriptionView : SKUISettingDescriptionView <UITextFieldDelegate>

 {
    CALayer *_divider1;
    SKUIClientContext *_clientContext;
    UIButton *_editButton;
    UITextField *_nameField;
    UITextField *_handleField;
    SKUIImageView *_imageView;
    SKUIEditProfileSettingDescription *_settingDescription;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForSettingDescription:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_baselineFontForTextStyle:(id)arg0 ;
+(struct CGSize )preferredSizeForSettingDescription:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 settingDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)_textFieldWithPlaceholder:(id)arg0 ;
-(void)_editProfilePhoto;
-(void)_updateHandleTextFieldValidity;
-(void)layoutSubviews;
-(void)reloadWithSettingDescription:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif