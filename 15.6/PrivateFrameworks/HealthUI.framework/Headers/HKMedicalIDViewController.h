// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMEDICALIDVIEWCONTROLLER_H
#define HKMEDICALIDVIEWCONTROLLER_H

@class UITableViewController, HKProfileStore, NSArray, NSString, HKHealthStore, _HKMedicalIDData, HKMedicalIDStore;
@protocol UITableViewDataSource, UITableViewDelegate, HKMedicalIDViewControllerDelegate, HKEmergencyCardDeletionDelegate, HKEmergencyCardRowHeightChangeDelegate, HKEmergencyCardContactUpdateDelegate, HKEmergencyCardPrimaryLanguageUpdateDelegate, HKEmergencyCardSelectionTableItemDelegate;


#import "HKEmergencyCardGroupTableItem.h"
#import "HKEmergencyCardNameAndPictureTableItem.h"
#import "HKEmergencyCardContactsTableItem.h"
#import "HKEmergencyCardPrimaryLanguageTableItem.h"
#import "HKMedicalIDNavigationController.h"

@interface HKMedicalIDViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, HKMedicalIDViewControllerDelegate, HKEmergencyCardDeletionDelegate, HKEmergencyCardRowHeightChangeDelegate, HKEmergencyCardContactUpdateDelegate, HKEmergencyCardPrimaryLanguageUpdateDelegate, HKEmergencyCardSelectionTableItemDelegate>

 {
    HKProfileStore *_profileStore;
    NSArray *_presentableTableItems;
    NSArray *_footers;
    NSArray *_headers;
    HKEmergencyCardGroupTableItem *_informationDataGroupItem;
    HKEmergencyCardNameAndPictureTableItem *_nameAndPictureItem;
    HKEmergencyCardContactsTableItem *_contactsItem;
    HKEmergencyCardPrimaryLanguageTableItem *_primaryLanguageItem;
    NSInteger _tableViewStyle;
    BOOL _inBuddy;
    NSArray *_localeItems;
    NSArray *_accumulatedNumberOfRowsForItems;
    int _medicalIDChangedToken;
    HKMedicalIDNavigationController *_medicalIDEditor;
    NSArray *_organDonationItems;
    BOOL _organDonationSignupAvailable;
}


@property (nonatomic) BOOL allowsEditing; // ivar: _allowsEditing
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKMedicalIDViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (nonatomic) BOOL inBridge; // ivar: _inBridge
@property (nonatomic) BOOL inEditMode; // ivar: _inEditMode
@property (nonatomic) NSInteger internalAccessType; // ivar: _internalAccessType
@property (nonatomic) BOOL isSecondaryProfileMedicalID; // ivar: _isSecondaryProfileMedicalID
@property (retain, nonatomic) _HKMedicalIDData *medicalID; // ivar: _medicalID
@property (retain, nonatomic) HKMedicalIDStore *medicalIDStore; // ivar: _medicalIDStore
@property (nonatomic) BOOL modernAppearance; // ivar: _modernAppearance
@property (nonatomic) BOOL shouldShowHints; // ivar: _shouldShowHints
@property (nonatomic) BOOL showsDeleteButton; // ivar: _showsDeleteButton
@property (nonatomic) BOOL showsDismissButton; // ivar: _showsDismissButton
@property (nonatomic) BOOL showsEditMedicalIDRowInViewMode; // ivar: _showsEditMedicalIDRowInViewMode
@property (nonatomic) BOOL showsEmergencyAccessState; // ivar: _showsEmergencyAccessState
@property (nonatomic) BOOL showsShowWhenLockedState; // ivar: _showsShowWhenLockedState
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *tableItems; // ivar: _tableItems


+(BOOL)isSupportedOnThisDevice;
-(BOOL)_canShowWhileLocked;
-(BOOL)_editable;
-(BOOL)_refreshEmergencyContacts:(BOOL)arg0 ;
-(BOOL)_shouldShowOrganDonation;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_preferredOrganDonationOrganization;
-(NSInteger)_rowIndexForTableItem:(id)arg0 atIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_fetchProfileFirstName;
-(id)_formatMedicalIDAccessPoint:(NSInteger)arg0 ;
-(id)_newViewForFooterInSection:(NSInteger)arg0 ;
-(id)_newViewForHeaderInSection:(NSInteger)arg0 ;
-(id)_tableItemForIndexPath:(id)arg0 ;
-(id)initInEditMode:(BOOL)arg0 ;
-(id)initInEditMode:(BOOL)arg0 inBuddy:(BOOL)arg1 organDonationSignupAvailable:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_adjustTableViewContentOffsetForVisibleView:(id)arg0 visibleRect:(struct CGRect )arg1 animated:(BOOL)arg2 ;
-(void)_buildEditModeTableItems;
-(void)_buildPresentableTableItems;
-(void)_buildTableItems;
-(void)_buildViewModeTableItems;
-(void)_cancelEditingTapped:(id)arg0 ;
-(void)_contactStoreDidChange:(id)arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_dismissMedicalIDEditor;
-(void)_doneEditingTapped:(id)arg0 ;
-(void)_doneTapped:(id)arg0 ;
-(void)_fetchDemographicInformation;
-(void)_forceDisableBiometricIfDeviceLocked;
-(void)_nextButtonTapped:(id)arg0 ;
-(void)_refreshMedicalIDInViewMode;
-(void)_reloadTableWithMedicalIDData:(id)arg0 ;
-(void)_showMedicalIDPreviewAsNext;
-(void)_submitAccessAnalytic;
-(void)_updateMedicalID;
-(void)_updateMedicalIDNameWithDemographicsInformation:(id)arg0 ;
-(void)dealloc;
-(void)deletionTableItemDidTapDelete:(id)arg0 ;
-(void)editButtonTapped:(id)arg0 ;
-(void)editMedicalID:(id)arg0 ;
-(void)editOrganDonation:(id)arg0 ;
-(void)localeDidChange:(id)arg0 ;
-(void)medicalIDViewControllerDidCancel:(id)arg0 ;
-(void)medicalIDViewControllerDidDelete:(id)arg0 ;
-(void)medicalIDViewControllerDidSave:(id)arg0 ;
-(void)selectionTableItemDidTap:(id)arg0 ;
-(void)tableItem:(id)arg0 heightDidChangeForRowIndex:(NSInteger)arg1 keepRectVisible:(struct CGRect )arg2 inView:(id)arg3 ;
-(void)tableItemDidBeginEditing:(id)arg0 keepRectVisible:(struct CGRect )arg1 inView:(id)arg2 ;
-(void)tableItemDidChangeSelection:(id)arg0 keepRectVisible:(struct CGRect )arg1 inView:(id)arg2 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)timeZoneDidChange:(id)arg0 ;
-(void)updateEmergencyContactTableItem;
-(void)updateNavigationBar;
-(void)updatePrimaryLanguageTableItem;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif