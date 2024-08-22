// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNSHARINGPROFILEONBOARDINGVARIANTVIEWCONTROLLER_H
#define CNSHARINGPROFILEONBOARDINGVARIANTVIEWCONTROLLER_H

@class OBWelcomeController, OBBoldTrayButton, NSLayoutConstraint, OBLinkTrayButton, NSString;
@protocol CNPhotoPickerVariantListControllerDelegate, CNSharingProfileOnboardingVariantViewControllerDelegate;


#import "CNPhotoPickerProviderItem.h"
#import "CNPhotoPickerVariantListController.h"
#import "CNPhotoPickerVariantsManager.h"

@interface CNSharingProfileOnboardingVariantViewController : OBWelcomeController <CNPhotoPickerVariantListControllerDelegate>



@property (retain, nonatomic) OBBoldTrayButton *backButton; // ivar: _backButton
@property (retain, nonatomic) OBBoldTrayButton *continueButton; // ivar: _continueButton
@property (retain, nonatomic) NSLayoutConstraint *heightLayoutConstraint; // ivar: _heightLayoutConstraint
@property (retain, nonatomic) CNPhotoPickerProviderItem *item; // ivar: _item
@property (weak, nonatomic) NSObject<CNSharingProfileOnboardingVariantViewControllerDelegate> *onboardingDelegate; // ivar: _onboardingDelegate
@property (retain, nonatomic) OBLinkTrayButton *poseButton; // ivar: _poseButton
@property (retain, nonatomic) CNPhotoPickerProviderItem *selectedItem; // ivar: _selectedItem
@property (retain, nonatomic) OBLinkTrayButton *setupLaterButton; // ivar: _setupLaterButton
@property (nonatomic) BOOL shouldShowPoseButton; // ivar: _shouldShowPoseButton
@property (retain, nonatomic) CNPhotoPickerVariantListController *variantListController; // ivar: _variantListController
@property (retain, nonatomic) NSString *variantName; // ivar: _variantName
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // ivar: _variantsManager


-(id)initWithVariantsManager:(id)arg0 originalItem:(id)arg1 selectedVariantIdentifier:(id)arg2 ;
-(void)didTapBack:(id)arg0 ;
-(void)didTapContinue:(id)arg0 ;
-(void)didTapPose:(id)arg0 ;
-(void)didTapSetupLater:(id)arg0 ;
-(void)photoPickerVariantListController:(id)arg0 didSelectProviderItem:(id)arg1 ;
-(void)photoPickerVariantListControllerDidCancel:(id)arg0 ;
-(void)updateOriginalItem:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif