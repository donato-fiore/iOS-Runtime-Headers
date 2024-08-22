// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FACONFIRMIDENTITYVIEWCONTROLLER_H
#define FACONFIRMIDENTITYVIEWCONTROLLER_H

@class UIViewController, ACAccount, UIScrollView, UIView, UILabel, UIButton, AAUIProfilePictureStore, UIImage, NSValue, UIImagePickerController, NSString;
@protocol UIImagePickerControllerDelegate, UIActionSheetDelegate, UINavigationControllerDelegate, FAConfirmIdentityViewControllerDelegate;



@interface FAConfirmIdentityViewController : UIViewController <UIImagePickerControllerDelegate, UIActionSheetDelegate, UINavigationControllerDelegate>

 {
    ACAccount *_appleAccount;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIView *_profilePhotoView;
    UILabel *_nameLabel;
    UILabel *_emailLabel;
    UIButton *_continueButton;
    UIButton *_useDifferentIDButton;
    AAUIProfilePictureStore *_profilePictureStore;
    UIImage *_newProfilePicture;
    NSValue *_newProfilePictureCropRect;
    UIImagePickerController *_imagePicker;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FAConfirmIdentityViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldShowInviteeInstructions;
-(CGFloat)_heightForText:(id)arg0 width:(CGFloat)arg1 ;
-(id)initWithAppleAccount:(id)arg0 grandSlamSigner:(id)arg1 ;
-(id)instructions;
-(id)pageTitle;
-(id)titleForContinuebutton;
-(void)_addPhotoButtonWasTapped:(id)arg0 ;
-(void)_photoWasTapped:(id)arg0 ;
-(void)_showImagePickerForAvailableSources;
-(void)_updateFonts;
-(void)_updateViewsInPhotoArea:(id)arg0 ;
-(void)_useDifferentIDButtonWasTapped:(id)arg0 ;
-(void)continueButtonWasTapped:(id)arg0 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif