// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMECARDSHARINGONBOARDINGEDITVIEWCONTROLLER_H
#define CNMECARDSHARINGONBOARDINGEDITVIEWCONTROLLER_H

@class CNMutableContact, CNContact, CNContactStore, NSString, UITextField;
@protocol UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate, CNPhotoPickerViewControllerDelegate, CNAvatarEditingManagerDelegate, CNPhotoPickerVariantListControllerDelegate, AVTAvatarRecord, CNMeCardSharingOnboardingEditViewControllerDelegate, CNMeCardSharingNameProvider;


#import "CNMeCardSharingOnboardingViewController.h"
#import "CNMeCardSharingOnboardingAvatarCarouselViewController.h"
#import "CNMeCardSharingOnboardingHeaderViewController.h"
#import "CNMeCardSharingPickerLayoutAttributes.h"
#import "CNSharingProfileLogger.h"
#import "CNPhotoPickerViewController.h"
#import "CNAvatarEditingManager.h"
#import "CNPhotoPickerVariantsManager.h"

@interface CNMeCardSharingOnboardingEditViewController : CNMeCardSharingOnboardingViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate, CNPhotoPickerViewControllerDelegate, CNAvatarEditingManagerDelegate, CNPhotoPickerVariantListControllerDelegate>



@property (retain, nonatomic) CNMutableContact *avatarCarouselEditingContact; // ivar: _avatarCarouselEditingContact
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselViewController *avatarCarouselViewController; // ivar: _avatarCarouselViewController
@property (retain, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNMeCardSharingOnboardingEditViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL delegateDoesRespondToOnboardingResultSelector; // ivar: _delegateDoesRespondToOnboardingResultSelector
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNMutableContact *editingContact; // ivar: _editingContact
@property (retain, nonatomic) NSString *editingFamilyName; // ivar: _editingFamilyName
@property (retain, nonatomic) NSString *editingGivenName; // ivar: _editingGivenName
@property (retain, nonatomic) UITextField *familyNameField; // ivar: _familyNameField
@property (retain, nonatomic) UITextField *givenNameField; // ivar: _givenNameField
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNMeCardSharingOnboardingHeaderViewController *headerViewController; // ivar: _headerViewController
@property (retain, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes; // ivar: _layoutAttributes
@property (readonly, nonatomic) CNSharingProfileLogger *logger; // ivar: _logger
@property (nonatomic) NSInteger nameOrder; // ivar: _nameOrder
@property (retain, nonatomic) NSObject<CNMeCardSharingNameProvider> *nameProvider; // ivar: _nameProvider
@property (retain, nonatomic) CNPhotoPickerViewController *photoPickerViewController; // ivar: _photoPickerViewController
@property (retain, nonatomic) CNAvatarEditingManager *posePicker; // ivar: _posePicker
@property (nonatomic) BOOL shouldSetAsMeContact; // ivar: _shouldSetAsMeContact
@property (readonly) Class superclass;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // ivar: _variantsManager


+(id)descriptorForRequiredKeys;
+(id)headerText;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)contactImageSourceForType:(NSUInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)confirmButtonTitle;
-(id)initWithContactStore:(id)arg0 contact:(id)arg1 nameProvider:(id)arg2 avatarRecord:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)textFieldForIndex:(NSInteger)arg0 ;
-(void)adjustInsetsForKeyboardOverlap:(CGFloat)arg0 ;
-(void)avatarCarouselViewControllerDidTapPhotoPickerCell:(id)arg0 ;
-(void)avatarCarouselViewControllerDidUpdateCenterMostItem:(id)arg0 ;
-(void)avatarEditingManager:(id)arg0 didFinishWithProviderItem:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)familyNameDidChange:(id)arg0 ;
-(void)finishOnboardingWithDidSaveToMeContact:(BOOL)arg0 ;
-(void)finishOnboardingWithProviderItem:(id)arg0 ;
-(void)givenNameDidChange:(id)arg0 ;
-(void)handleConfirmButtonTapped;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)notifyDelegateWithContactImage:(id)arg0 didSaveToMeContact:(BOOL)arg1 ;
-(void)photoPicker:(id)arg0 didUpdatePhotoForContact:(id)arg1 withContactImage:(id)arg2 ;
-(void)photoPickerDidCancel:(id)arg0 ;
-(void)photoPickerVariantListController:(id)arg0 didSelectProviderItem:(id)arg1 ;
-(void)photoPickerVariantListControllerDidCancel:(id)arg0 ;
-(void)presentErrorAlertForEmptyPhotoIfNeededWithCompletion:(id)arg0 ;
-(void)presentPhotoPickerVariantListForItem:(id)arg0 FromViewController:(id)arg1 ;
-(void)promptForSavingToMeCard;
-(void)saveDraftContact;
-(void)showAvatarPosePickerFromItem:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)updateAvatarCarouselContactName;
-(void)updateContact:(id)arg0 withImagePropertiesFromContact:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif