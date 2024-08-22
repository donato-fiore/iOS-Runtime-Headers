// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNMECARDSHARINGPICKERVIEWCONTROLLER_H
#define CNMECARDSHARINGPICKERVIEWCONTROLLER_H

@class UIViewController, UIView, OBBoldTrayButton, CNContact, CNContactStore, NSString, CNMutableContact, CNContactImage, OBLinkTrayButton, NSArray, UISwitch, UITableView;
@protocol UITableViewDelegate, UITableViewDataSource, CNMeCardSharingAvatarViewControllerDelegate, CNMeCardSharingEnabledDelegate, CNPhotoPickerViewControllerDelegate, CNMeCardSharingAvatarProvider, CNMeCardSharingPickerViewControllerDelegate;


#import "CNMeCardSharingAvatarViewController.h"
#import "CNMeCardSharingEnabledDataSource.h"
#import "CNMeCardSharingHeaderViewController.h"
#import "CNMeCardSharingPickerLayoutAttributes.h"
#import "CNPhotoPickerViewController.h"
#import "CNMeCardSharingAudienceDataSource.h"

@interface CNMeCardSharingPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CNMeCardSharingAvatarViewControllerDelegate, CNMeCardSharingEnabledDelegate, CNPhotoPickerViewControllerDelegate>



@property (retain, nonatomic) NSObject<CNMeCardSharingAvatarProvider> *avatarProvider; // ivar: _avatarProvider
@property (retain, nonatomic) CNMeCardSharingAvatarViewController *avatarViewController; // ivar: _avatarViewController
@property (retain, nonatomic) UIView *buttonTray; // ivar: _buttonTray
@property (retain, nonatomic) OBBoldTrayButton *confirmButton; // ivar: _confirmButton
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNMeCardSharingPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNMutableContact *draftContact; // ivar: _draftContact
@property (retain, nonatomic) CNContactImage *draftContactImage; // ivar: _draftContactImage
@property (retain, nonatomic) CNMeCardSharingEnabledDataSource *enabledDataSource; // ivar: _enabledDataSource
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNMeCardSharingHeaderViewController *headerViewController; // ivar: _headerViewController
@property (retain, nonatomic) OBLinkTrayButton *laterButton; // ivar: _laterButton
@property (retain, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes; // ivar: _layoutAttributes
@property (nonatomic) NSUInteger meCardSharingStatus;
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) CNPhotoPickerViewController *photoPicker; // ivar: _photoPicker
@property (retain, nonatomic) NSArray *sectionDataSources; // ivar: _sectionDataSources
@property (readonly, nonatomic) NSUInteger selectedNameFormat;
@property (readonly, nonatomic) NSUInteger selectedSharingAudience;
@property (retain, nonatomic) UISwitch *shareSwitch; // ivar: _shareSwitch
@property (readonly, nonatomic) NSString *sharedName;
@property (retain, nonatomic) CNMeCardSharingAudienceDataSource *sharingAudienceDataSource; // ivar: _sharingAudienceDataSource
@property (nonatomic) BOOL sharingEnabled; // ivar: _sharingEnabled
@property (nonatomic) BOOL shouldSetMeContact; // ivar: _shouldSetMeContact
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


+(id)descriptorForRequiredKeys;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithContact:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 contact:(id)arg1 nameProvider:(id)arg2 sharingEnabled:(BOOL)arg3 selectedNameFormat:(NSUInteger)arg4 selectedSharingAudience:(NSUInteger)arg5 mode:(NSUInteger)arg6 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)avatarViewControllerWasTapped:(id)arg0 ;
-(void)didTapDoneButton:(id)arg0 ;
-(void)didTapSetUpLaterButton:(id)arg0 ;
-(void)loadView;
-(void)photoPicker:(id)arg0 didUpdatePhotoForContact:(id)arg1 withContactImage:(id)arg2 ;
-(void)photoPickerDidCancel:(id)arg0 ;
-(void)saveDraftContact;
-(void)sharingEnabledDataSource:(id)arg0 didChangeEnabledState:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif