// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMECARDSHARINGSETTINGSVIEWCONTROLLER_H
#define CNMECARDSHARINGSETTINGSVIEWCONTROLLER_H

@class UIViewController, CNContact, CNContactStore, NSString, CNMutableContact, CNContactImage, UITextField, NSArray, UISwitch, UITableView;
@protocol UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, CNMeCardSharingSettingsHeaderViewControllerDelegate, CNMeCardSharingEnabledDelegate, CNPhotoPickerViewControllerDelegate, CNMeCardSharingAvatarProvider, CNMeCardSharingSettingsViewControllerDelegate, CNMeCardSharingNameProvider;


#import "CNMeCardSharingContactAvatarProvider.h"
#import "CNMeCardSharingEnabledDataSource.h"
#import "CNMeCardSharingSettingsHeaderViewController.h"
#import "CNMeCardSharingPickerLayoutAttributes.h"
#import "CNSharingProfileLogger.h"
#import "CNSharingProfileMeCardUpdater.h"
#import "CNMeCardSharingSettingsNameDataSource.h"
#import "CNPhotoPickerViewController.h"
#import "CNMeCardSharingAudienceDataSource.h"

@interface CNMeCardSharingSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, CNMeCardSharingSettingsHeaderViewControllerDelegate, CNMeCardSharingEnabledDelegate, CNPhotoPickerViewControllerDelegate>



@property (readonly, nonatomic) NSObject<CNMeCardSharingAvatarProvider> *avatarProvider; // ivar: _avatarProvider
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNMeCardSharingSettingsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNMutableContact *editingContact; // ivar: _editingContact
@property (retain, nonatomic) CNMeCardSharingContactAvatarProvider *editingContactAvatarProvider; // ivar: _editingContactAvatarProvider
@property (retain, nonatomic) CNContactImage *editingContactImage; // ivar: _editingContactImage
@property (retain, nonatomic) NSString *editingFamilyName; // ivar: _editingFamilyName
@property (retain, nonatomic) NSString *editingGivenName; // ivar: _editingGivenName
@property (readonly, nonatomic) CNMeCardSharingEnabledDataSource *enabledDataSource; // ivar: _enabledDataSource
@property (retain, nonatomic) UITextField *familyNameField; // ivar: _familyNameField
@property (retain, nonatomic) UITextField *givenNameField; // ivar: _givenNameField
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNMeCardSharingSettingsHeaderViewController *headerViewController; // ivar: _headerViewController
@property (nonatomic) CGFloat keyboardHeight; // ivar: _keyboardHeight
@property (readonly, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes; // ivar: _layoutAttributes
@property (readonly, nonatomic) CNSharingProfileLogger *logger; // ivar: _logger
@property (retain, nonatomic) CNSharingProfileMeCardUpdater *meCardUpdater; // ivar: _meCardUpdater
@property (readonly, nonatomic) CNMeCardSharingSettingsNameDataSource *nameDataSource; // ivar: _nameDataSource
@property (nonatomic) NSInteger nameOrder; // ivar: _nameOrder
@property (readonly, nonatomic) NSObject<CNMeCardSharingNameProvider> *nameProvider; // ivar: _nameProvider
@property (retain, nonatomic) CNPhotoPickerViewController *photoPicker; // ivar: _photoPicker
@property (retain, nonatomic) NSArray *sectionDataSources; // ivar: _sectionDataSources
@property (readonly, nonatomic) NSUInteger selectedSharingAudience;
@property (retain, nonatomic) UISwitch *shareSwitch; // ivar: _shareSwitch
@property (readonly, nonatomic) CNMeCardSharingAudienceDataSource *sharingAudienceDataSource; // ivar: _sharingAudienceDataSource
@property (readonly, nonatomic) BOOL sharingEnabled;
@property (nonatomic) BOOL shouldSetAsMeContact; // ivar: _shouldSetAsMeContact
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


+(id)descriptorForRequiredKeys;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithContactStore:(id)arg0 contact:(id)arg1 avatarProvider:(id)arg2 nameProvider:(id)arg3 sharingEnabled:(BOOL)arg4 selectedSharingAudience:(NSUInteger)arg5 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(id)textFieldForIndex:(NSInteger)arg0 ;
-(void)adjustInsetsForKeyboardOverlap:(CGFloat)arg0 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)familyNameDidChange:(id)arg0 ;
-(void)givenNameDidChange:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)notifyDelegateOfChangesWithDidSaveToMeCard:(BOOL)arg0 ;
-(void)photoPicker:(id)arg0 didUpdatePhotoForContact:(id)arg1 withContactImage:(id)arg2 ;
-(void)photoPickerDidCancel:(id)arg0 ;
-(void)presentErrorAlertForEmptyPhotoIfNeededWithCompletion:(id)arg0 ;
-(void)presentPhotoPickerControllerForContact:(id)arg0 ;
-(void)processSelectionForTableView:(id)arg0 indexPath:(id)arg1 ;
-(void)promptForSavingToMeCard;
-(void)saveDraftContact;
-(void)sharingEnabledDataSource:(id)arg0 didChangeEnabledState:(BOOL)arg1 ;
-(void)sharingSettingsHeaderWasTapped:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContact:(id)arg0 withImagePropertiesFromContact:(id)arg1 ;
-(void)updateVisibilityOfAudienceSection;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif