// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVISUALIDENTITYEDITABLEPRIMARYAVATARVIEWCONTROLLER_H
#define CNVISUALIDENTITYEDITABLEPRIMARYAVATARVIEWCONTROLLER_H

@class UIViewController, CAShapeLayer, NSString, UIImageView, UIView, UIFont;
@protocol UITextViewDelegate, CNVisualIdentityPrimaryAvatarProvider, CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate;


#import "CNPhotoPickerProviderItem.h"
#import "CNVisualIdentityEditablePrimaryAvatarTextField.h"
#import "CNPhotoPickerVariantsManager.h"

@interface CNVisualIdentityEditablePrimaryAvatarViewController : UIViewController <UITextViewDelegate, CNVisualIdentityPrimaryAvatarProvider>



@property (retain, nonatomic) CAShapeLayer *clippingLayer; // ivar: _clippingLayer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat desiredFontSize; // ivar: _desiredFontSize
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *imageContainerView; // ivar: _imageContainerView
@property (retain, nonatomic) UIView *imageContentView; // ivar: _imageContentView
@property (retain, nonatomic) UIFont *originalFont; // ivar: _originalFont
@property (retain, nonatomic) CNPhotoPickerProviderItem *providerItem; // ivar: _providerItem
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *text;
@property (retain, nonatomic) CNVisualIdentityEditablePrimaryAvatarTextField *textField; // ivar: _textField
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // ivar: _variantsManager


-(BOOL)exceedsMaxCharacterCount:(NSInteger)arg0 containsEmoji:(BOOL)arg1 ;
-(BOOL)hasValidInputTypeForText:(id)arg0 ;
-(BOOL)isEmojiProviderItemType;
-(BOOL)isMonogramProviderItemType;
-(BOOL)primaryAvatarShouldDisplay;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(CGFloat)maxTextFieldSize;
-(id)initWithProviderItem:(id)arg0 variantsManager:(id)arg1 ;
-(id)initWithVariantsManager:(id)arg0 ;
-(id)updatedProviderItem;
-(id)updatedProviderItemWithText:(id)arg0 ;
-(id)viewForPrimaryAvatar;
-(void)adjustFontSizeToFitWidthForText:(id)arg0 ;
-(void)beginEditing;
-(void)centerTextFieldInContainerView;
-(void)endEditing;
-(void)layoutPrimaryAvatar;
-(void)populateViewWithTextEditableProviderItem:(id)arg0 imageType:(NSUInteger)arg1 ;
-(void)setupImageContainerView;
-(void)setupTextField;
-(void)setupViewWithProviderItem:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;
-(void)trimTextFieldTextIfNeeded:(id)arg0 ;
-(void)trimTextFieldTextIfNeeded:(id)arg0 containsEmoji:(BOOL)arg1 ;
-(void)updateContainerViewMask;
-(void)updatePrimaryAvatarForVisualIdentity:(id)arg0 ;
-(void)updateTextFieldFontSize:(CGFloat)arg0 ;
-(void)updateViewWithProviderItem:(id)arg0 ;
-(void)updateWithProviderItem:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif