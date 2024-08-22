// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLINICALAUTHORIZATIONSETTINGSVIEWCONTROLLER_H
#define HKCLINICALAUTHORIZATIONSETTINGSVIEWCONTROLLER_H

@class NSArray, NSString, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, HKSwitchTableViewCellDelegate, HKHealthPrivacyServicePromptController, HKHealthPrivacyServicePromptControllerDelegate;


#import "HKViewController.h"
#import "HKClinicalAuthorizationBinaryChoiceFooterView.h"
#import "HKClinicalAuthorizationSequenceContext.h"
#import "HKClinicalAuthorizationDisplayController.h"
#import "HKLookUpAppPrivacyPolicyURLOperation.h"

@interface HKClinicalAuthorizationSettingsViewController : HKViewController <UITableViewDataSource, UITableViewDelegate, HKSwitchTableViewCellDelegate, HKHealthPrivacyServicePromptController>



@property (readonly, nonatomic) HKClinicalAuthorizationBinaryChoiceFooterView *allowButtonsFooterView; // ivar: _allowButtonsFooterView
@property (copy, nonatomic) NSArray *appInformationSectionCells; // ivar: _appInformationSectionCells
@property (nonatomic) NSInteger authorizationMode; // ivar: _authorizationMode
@property (readonly, nonatomic, getter=shouldCommitUpdatesImmediately) BOOL commitUpdatesImmediately;
@property (readonly, nonatomic) HKClinicalAuthorizationSequenceContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKHealthPrivacyServicePromptControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKClinicalAuthorizationDisplayController *displayController; // ivar: _displayController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPrompting;
@property (retain, nonatomic) HKLookUpAppPrivacyPolicyURLOperation *lookUpAppPrivacyPolicyURLOperation; // ivar: _lookUpAppPrivacyPolicyURLOperation
@property (readonly, copy, nonatomic) NSString *readUsageDescription;
@property (copy, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)_cellAtIndexPathIsViewAppPrivacyPolicyCell:(id)arg0 ;
-(BOOL)_isShowingShareAuthorizationModeSection;
-(BOOL)_shouldDisplayAppInformationSection;
-(BOOL)_shouldDisplayShareAuthorizationModeSection;
-(BOOL)_shouldDisplayShareDataTypes;
-(BOOL)_shouldHighlightAppInformationCellAtIndexPath:(id)arg0 ;
-(BOOL)_shouldHighlightViewAppPrivacyPolicyCellAtIndexPath:(id)arg0 ;
-(BOOL)_shouldPresentStopSharingDialogueBeforeDisallowing;
-(BOOL)_tableViewSection:(NSInteger)arg0 isEqualToSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)_defaultShareAuthorizationMode;
-(NSInteger)_sectionForTableViewSection:(NSInteger)arg0 ;
-(NSInteger)_shareAuthorizationModeForIndexPath:(id)arg0 ;
-(NSInteger)_tableViewSectionForSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_appInformationCellForIndexPath:(id)arg0 ;
-(id)_createAllowButtonsFooterView;
-(id)_createAppInformationSectionCells;
-(id)_createHeaderViewWithSource:(id)arg0 ;
-(id)_doNotAllowButtonTitle;
-(id)_formatStringForShareAuthorizationModeFooterWithMode:(NSInteger)arg0 ;
-(id)_indexPathForShareAuthorizationMode:(NSInteger)arg0 ;
-(id)_indexPathForViewAppPrivacyPolicyCell;
-(id)_messageForStopSharingConfirmation;
-(id)_privacyPolicyURL;
-(id)_sectionsForAuthorizationController:(id)arg0 ;
-(id)_shareAuthorizationModeCellForIndexPath:(id)arg0 ;
-(id)_shareDataTypeCellForIndexPath:(id)arg0 ;
-(id)_shareUsageDescriptionCellForIndexPath:(id)arg0 ;
-(id)_titleForAppInformationFooter;
-(id)_titleForShareAuthorizationModeFooter;
-(id)_titleForShareDataTypesFooter;
-(id)_typeForIndexPath:(id)arg0 ;
-(id)_viewAppPrivacyPolicyCellForIndexPath:(id)arg0 ;
-(id)_visibleShareAuthorizationModeCellForMode:(NSInteger)arg0 ;
-(id)authorizationController;
-(id)footerStringforDate:(id)arg0 mode:(NSInteger)arg1 source:(id)arg2 ;
-(id)init;
-(id)initWithContext:(id)arg0 style:(NSInteger)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)source;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_allowButtonPressed:(id)arg0 ;
-(void)_configureInitialAuthorizationSettingsForPrompting;
-(void)_configureNavigationItemWithSource:(id)arg0 ;
-(void)_configureTableView;
-(void)_doNotAllowButtonPressed:(id)arg0 ;
-(void)_fetchPrivacyPolicyURLForSource:(id)arg0 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_hideShareAuthorizationModeSectionIfNeeded;
-(void)_presentConfirmationForStopSharingIfNeededWithAcceptHandler:(id)arg0 ;
-(void)_presentViewAppPrivacyPolicyURLErrorAlert;
-(void)_reloadSections;
-(void)_reloadViewAppPrivacyPolicyCell;
-(void)_shareAuthorizationModeCellPressed:(id)arg0 ;
-(void)_showShareAuthorizationModeSectionIfNeeded;
-(void)_updateAllowButtonEnabledStateAnimated:(BOOL)arg0 ;
-(void)_updateFooterButtonsTitles;
-(void)_updateForCurrentContentSizeCategory;
-(void)_updateShareAuthorizationModeSectionFooter;
-(void)_updateShareAuthorizationModeSectionVisibilityIfNeeded;
-(void)_updateTableViewBottomPadding;
-(void)_verifySections:(id)arg0 isEqualToSections:(id)arg1 afterInsertingSection:(id)arg2 ;
-(void)_viewAppPrivacyPolicyCellPressed:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)reloadAuthorizationSettings;
-(void)switchCellValueChanged:(id)arg0 value:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif