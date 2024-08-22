// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNSHARINGPROFILEONBOARDINGPOSEPICKERCONTROLLER_H
#define CNSHARINGPROFILEONBOARDINGPOSEPICKERCONTROLLER_H

@class OBWelcomeController, OBBoldTrayButton, NSLayoutConstraint, OBLinkTrayButton;
@protocol CNPhotoPickerVariantListControllerDelegate, AVTAvatarRecord, CNSharingProfileOnboardingPosePickerControllerDelegate;


#import "CNPhotoPickerVariantListController.h"
#import "CNPhotoPickerVariantsManager.h"

@interface CNSharingProfileOnboardingPosePickerController : OBWelcomeController <CNPhotoPickerVariantListControllerDelegate>



@property (retain, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (retain, nonatomic) OBBoldTrayButton *backButton; // ivar: _backButton
@property (weak, nonatomic) NSObject<CNSharingProfileOnboardingPosePickerControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (retain, nonatomic) OBBoldTrayButton *nextButton; // ivar: _nextButton
@property (retain, nonatomic) OBLinkTrayButton *setupLaterButton; // ivar: _setupLaterButton
@property (retain, nonatomic) CNPhotoPickerVariantListController *variantListController; // ivar: _variantListController
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // ivar: _variantsManager


-(id)initWithAvatarRecord:(id)arg0 variantsManager:(id)arg1 ;
-(void)didTapBack:(id)arg0 ;
-(void)didTapContinue:(id)arg0 ;
-(void)didTapSetupLater:(id)arg0 ;
-(void)photoPickerVariantListController:(id)arg0 didSelectProviderItem:(id)arg1 ;
-(void)photoPickerVariantListControllerDidCancel:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif