// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKAUTHORIZATIONSETTINGSVIEWCONTROLLER_H
#define HKAUTHORIZATIONSETTINGSVIEWCONTROLLER_H

@class NSArray, UIBarButtonItem, NSString, HKHealthStore, HKSource, NSSet;
@protocol HKSwitchTableViewCellDelegate, HKSourceAuthorizationControllerDelegate, HKHealthPrivacyServicePickerControllerDelegate, HKHealthPrivacyServicePromptController, HKHealthPrivacyServicePromptControllerDelegate;


#import "HKTableViewController.h"
#import "HKDisplayCategoryController.h"
#import "HKSourceAuthorizationController.h"

@interface HKAuthorizationSettingsViewController : HKTableViewController <HKSwitchTableViewCellDelegate, HKSourceAuthorizationControllerDelegate, HKHealthPrivacyServicePickerControllerDelegate, HKHealthPrivacyServicePromptController>

 {
    NSArray *_documents;
    NSArray *_readingTypeOrdering;
    BOOL _requiresBackgroundAppRefreshDisclosure;
    BOOL _hasFetchedBackgroundAppRefreshStatus;
    BOOL _isBackgroundAppRefreshEnabled;
}


@property (retain) NSArray *actualSections; // ivar: _actualSections
@property (retain, nonatomic) UIBarButtonItem *cancelButtonItem; // ivar: _cancelButtonItem
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKHealthPrivacyServicePromptControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HKDisplayCategoryController *displayCategoryController; // ivar: _displayCategoryController
@property (retain, nonatomic) UIBarButtonItem *doneButtonItem; // ivar: _doneButtonItem
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly) BOOL isPrompting;
@property (copy, nonatomic) NSString *researchStudyUsageDescription; // ivar: _researchStudyUsageDescription
@property (copy, nonatomic) NSString *shareDescription; // ivar: _shareDescription
@property (retain, nonatomic) HKSource *source; // ivar: _source
@property (retain, nonatomic) HKSourceAuthorizationController *sourceAuthorizationController; // ivar: _sourceAuthorizationController
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) NSSet *typesToRead; // ivar: _typesToRead
@property (retain, nonatomic) NSSet *typesToShare; // ivar: _typesToShare
@property (copy, nonatomic) NSString *updateDescription; // ivar: _updateDescription


-(BOOL)_isTypeEnabledAtIndexPath:(id)arg0 ;
-(BOOL)_shouldDisplayHealthRecordsRequests;
-(BOOL)_shouldDisplayReadingSection;
-(BOOL)_shouldDisplaySharingSection;
-(BOOL)shouldPresent;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(NSInteger)authorizationSectionForSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_authorizationSettingCellForRowAtIndexPath:(id)arg0 ;
-(id)_localizedNameForSection:(NSInteger)arg0 type:(id)arg1 ;
-(id)_localizedSourceExplanationWithDescription:(id)arg0 forReadingSection:(BOOL)arg1 ;
-(id)_openAppCell;
-(id)_researchStudyExplanationCell;
-(id)_specialCellWithIdentifier:(id)arg0 ;
-(id)_toggleAllCell;
-(id)_typeForIndexPath:(id)arg0 section:(*NSInteger)arg1 ;
-(id)init;
-(id)initWithHealthStore:(id)arg0 style:(NSInteger)arg1 ;
-(id)sectionsForAuthController:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_addCancelAndDoneButtons;
-(void)_addHeaderView;
-(void)_configurationFailedWithError:(id)arg0 ;
-(void)_didFetchBackgroundAppRefreshStatus:(BOOL)arg0 ;
-(void)_done:(id)arg0 ;
-(void)_fetchBackgroundAppRefreshStatusWithHandler:(id)arg0 ;
-(void)_finishWithError:(id)arg0 ;
-(void)authorizationController:(id)arg0 parentTypeIsDisabled:(id)arg1 forType:(id)arg2 inSection:(NSInteger)arg3 ;
-(void)authorizationController:(id)arg0 subTypesEnabled:(id)arg1 forType:(id)arg2 inSection:(NSInteger)arg3 ;
-(void)pickerControllerDidFinish:(id)arg0 error:(id)arg1 ;
-(void)reloadAuthorizationSettings;
-(void)switchCellValueChanged:(id)arg0 value:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateAllowButtonEnabledState;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif