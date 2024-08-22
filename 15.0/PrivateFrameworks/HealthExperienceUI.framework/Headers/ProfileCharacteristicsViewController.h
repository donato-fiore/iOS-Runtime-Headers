// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PROFILECHARACTERISTICSVIEWCONTROLLER_H
#define PROFILECHARACTERISTICSVIEWCONTROLLER_H

@class UITableViewController, HKHealthStore, HKDisplayTypeController, WDUserDefaults, HKBloodTypeObject, HKBiologicalSexObject, NSString, NSDateComponents, NSCalendar, UIDatePicker, UIPickerView, UIBarButtonItem, WDProfileHeaderView, WDProfileEditableTableViewCell, WDProfileTableViewCell, UITableViewCell, WDDisplayTypeDescriptionTableFooterView, NSArray, NSDictionary, UIImage, UIImageView, CNAvatarViewController, HKBirthdateChangeManager, NSDiffableDataSourceSnapshot;
@protocol UINavigationControllerDelegate, UIPickerViewDataSource, UIPickerViewDelegate;


#import "ProfileCharacteristicDiffableDataSource.h"

@interface ProfileCharacteristicsViewController : UITableViewController <UINavigationControllerDelegate, UIPickerViewDataSource, UIPickerViewDelegate>

 {
    HKHealthStore *_healthStore;
    HKDisplayTypeController *_displayTypeController;
    WDUserDefaults *_userDefaults;
    HKBloodTypeObject *_bloodTypeObject;
    NSInteger _bloodTypeDisplayValue;
    HKBiologicalSexObject *_biologicalSexObject;
    NSInteger _biologicalSexDisplayValue;
    NSInteger _fitzpatrickSkinTypeDisplayValue;
    NSInteger _wheelchairUseDisplayValue;
    NSUInteger _currentCardioFitnessMedicationsUse;
    NSString *_firstName;
    NSString *_lastName;
    NSDateComponents *_birthdate;
    NSDateComponents *_birthdateDisplayValue;
    NSCalendar *_gregorianCalendar;
    UIDatePicker *_birthdatePicker;
    UIPickerView *_bloodTypePicker;
    UIPickerView *_biologicalSexPicker;
    UIPickerView *_fitzpatrickSkinTypePicker;
    UIPickerView *_wheelchairUsePicker;
    UIBarButtonItem *_cancelButtonItem;
    UIBarButtonItem *_customLeftBarButtonItem;
    WDProfileHeaderView *_headerView;
    WDProfileEditableTableViewCell *_firstNameCell;
    WDProfileEditableTableViewCell *_lastNameCell;
    WDProfileTableViewCell *_birthdateCell;
    WDProfileTableViewCell *_biologicalSexCell;
    WDProfileTableViewCell *_bloodTypeCell;
    WDProfileTableViewCell *_fitzpatrickSkinTypeCell;
    WDProfileTableViewCell *_selectedCell;
    WDProfileTableViewCell *_wheelchairUseCell;
    UITableViewCell *_cardioFitnessMedicationsCell;
    UITableViewCell *_betaBlockerUseCell;
    UITableViewCell *_calciumChannelBlockerUseCell;
    WDDisplayTypeDescriptionTableFooterView *_footerView;
    int _activeCardioFitnessMedications;
    BOOL _nameRowsHidden;
    BOOL _cardioFitnessMedicationsSectionHidden;
    NSArray *_orderedSectionIdentifiers;
    NSDictionary *_orderedRowIdentifiersBySectionIdentifier;
    BOOL _isCancelling;
    BOOL _beginInEditMode;
}


@property (nonatomic) NSInteger accessType; // ivar: _accessType
@property (retain, nonatomic) UIImage *avatarImage; // ivar: _avatarImage
@property (retain, nonatomic) UIImageView *avatarOverrideImageView; // ivar: _avatarOverrideImageView
@property (retain, nonatomic) CNAvatarViewController *avatarViewController; // ivar: _avatarViewController
@property (retain, nonatomic) HKBirthdateChangeManager *birthdateChangeManager; // ivar: _birthdateChangeManager
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot; // ivar: _currentSnapshot
@property (retain, nonatomic) ProfileCharacteristicDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useMeContactForAvatarImage; // ivar: _useMeContactForAvatarImage


+(BOOL)cardioFitnessMedicationsSectionHiddenForProfileIdentifier:(id)arg0 ;
+(BOOL)nameRowsHiddenForProfileIdentifier:(id)arg0 ;
+(id)orderedRowIdentifiersBySectionIdentifierWithNameRowsHidden:(BOOL)arg0 andCardioFitnessMedicationsSectionHidden:(BOOL)arg1 ;
+(id)orderedSectionIdentifiersWithCardioFitnessMedicationsSectionHidden:(BOOL)arg0 ;
-(BOOL)shouldShowNameInHeaderView;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(NSInteger)_profileRowIdentifierForSection:(NSInteger)arg0 forRow:(NSInteger)arg1 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg0 ;
-(id)_birthdayCalendar;
-(id)_checkmarkedCircleImageView;
-(id)_circleImageView;
-(id)_createBetaBlockerCheckMarkCell;
-(id)_createCalciumChannelBlockerCheckMarkCell;
-(id)_dateAsAge:(id)arg0 ;
-(id)_displayStringForBiologicalSex:(NSInteger)arg0 ;
-(id)_displayStringForBirthDate:(id)arg0 ;
-(id)_displayStringForBloodType:(NSInteger)arg0 ;
-(id)_displayStringForFitzpatrickSkinType:(NSInteger)arg0 ;
-(id)_displayStringForWheelchairUse:(NSInteger)arg0 ;
-(id)_generalInfoFooterView;
-(id)_initialBirthdayValue;
-(id)_meContact;
-(id)_titleForFooterInTableViewSection:(NSInteger)arg0 sectionIdentifier:(id)arg1 ;
-(id)_wheelchairFooterTitle;
-(id)displayNumberOfActiveCardioFitnessMedications:(int)arg0 ;
-(id)getCellForIndexPath:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 inEditMode:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_adjustHeaderFrame;
-(void)_createBarButtonItems;
-(void)_createCells;
-(void)_createHeader;
-(void)_createPickers;
-(void)_enableEditing;
-(void)_fetchDataFromHealthStore;
-(void)_localeDidChange:(id)arg0 ;
-(void)_resetFirstAndLastNameValues;
-(void)_resetSelectedCell;
-(void)_timeZoneDidChange:(id)arg0 ;
-(void)_updateCellsWithDisplayValues;
-(void)_updateFirstAndLastNameCellsWithDisplayValues;
-(void)_updateFirstName:(id)arg0 lastName:(id)arg1 completion:(id)arg2 ;
-(void)_updateFooters;
-(void)_updatePickersWithDisplayValues;
-(void)birthdateChanged:(id)arg0 ;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)dealloc;
-(void)didClearBirthdate;
-(void)didUpdateName;
-(void)dismissButtonTapped:(id)arg0 ;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)setCardioFitnessMedicationCheckmarks;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setUpNavigationBar;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCheckMarksForCell:(id)arg0 option:(NSUInteger)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif