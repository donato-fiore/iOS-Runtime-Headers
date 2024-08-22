// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNSHARINGPROFILEONBOARDINGPHOTOSELECTIONVIEWCONTROLLER_H
#define CNSHARINGPROFILEONBOARDINGPHOTOSELECTIONVIEWCONTROLLER_H

@class OBWelcomeController, OBBoldTrayButton, CNContact, NSString, CNMutableContact, OBLinkTrayButton;
@protocol CNSharingProfilePhotoPickerViewControllerDelegate, CNPhotoPickerViewControllerDelegate, AVTAvatarRecord, CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate;


#import "CNSharingProfileAvatarItemProviderConfiguration.h"
#import "CNSharingProfileLogger.h"
#import "CNPhotoPickerViewController.h"
#import "CNSharingProfilePhotoPickerViewController.h"

@interface CNSharingProfileOnboardingPhotoSelectionViewController : OBWelcomeController <CNSharingProfilePhotoPickerViewControllerDelegate, CNPhotoPickerViewControllerDelegate>



@property (retain, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *avatarItemProviderConfiguration; // ivar: _avatarItemProviderConfiguration
@property (retain, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (retain, nonatomic) OBBoldTrayButton *backButton; // ivar: _backButton
@property (retain, nonatomic) OBBoldTrayButton *confirmButton; // ivar: _confirmButton
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNSharingProfileLogger *logger; // ivar: _logger
@property (retain, nonatomic) CNPhotoPickerViewController *photoPickerViewController; // ivar: _photoPickerViewController
@property (retain, nonatomic) CNMutableContact *photoProviderContact; // ivar: _photoProviderContact
@property (retain, nonatomic) OBLinkTrayButton *setupLaterButton; // ivar: _setupLaterButton
@property (retain, nonatomic) CNSharingProfilePhotoPickerViewController *sharingPhotoPickerViewController; // ivar: _sharingPhotoPickerViewController
@property (readonly) Class superclass;


+(id)descriptorForRequiredKeys;
-(id)contentView;
-(id)initWithContact:(id)arg0 avatarRecord:(id)arg1 avatarItemProviderConfiguration:(id)arg2 ;
-(void)didTapBackButton:(id)arg0 ;
-(void)didTapDoneButton:(id)arg0 ;
-(void)didTapSetupLaterButton:(id)arg0 ;
-(void)loadView;
-(void)photoPicker:(id)arg0 didUpdatePhotoForContact:(id)arg1 withContactImage:(id)arg2 ;
-(void)photoPickerDidCancel:(id)arg0 ;
-(void)sharingPhotoPickerDidSelectAddItem:(id)arg0 ;
-(void)updateForContentSizeCategoryChange;


@end


#endif