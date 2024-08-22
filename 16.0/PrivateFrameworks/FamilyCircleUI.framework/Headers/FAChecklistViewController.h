// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FACHECKLISTVIEWCONTROLLER_H
#define FACHECKLISTVIEWCONTROLLER_H

@class UIViewController, HKHealthStore, HKMedicalIDStore, FMFSession, _HKMedicalIDData, NSArray, NSMutableDictionary, FASettingsPresetsResponse, AIDAAccountManager, AAUICustodianSetupFlowController, ACAccountStore, ACAccount, NSOperationQueue, RemoteUIController, AACustodianController, STSetupClient, NSSet, NSURL, NSDate, FASharedService, UIViewController<_TtP14FamilyCircleUI33FACheckListHostControllerProtocol_>, UINavigationItem, UILabel, NSString, FAFamilyCircle;
@protocol HKMedicalIDViewControllerDelegate, AAUICustodianSetupFlowControllerDelegate, HKMedicalIDEmergencyContactFlowDelegate, FAChecklistViewControllerDelegate;


#import "_TtC14FamilyCircleUI17LocationViewModel.h"
#import "FAChecklistStore.h"
#import "FAProfilePictureStore.h"

@interface FAChecklistViewController : UIViewController <HKMedicalIDViewControllerDelegate, AAUICustodianSetupFlowControllerDelegate, HKMedicalIDEmergencyContactFlowDelegate>

 {
    HKHealthStore *_healthStore;
    HKMedicalIDStore *_medicalIDStore;
    FMFSession *_session;
    NSUInteger _countMembersWithLocation;
    NSUInteger _countEmergencyContacts;
    _HKMedicalIDData *_medicalIDData;
    NSArray *_currEmergencyContacts;
    NSMutableDictionary *_childrenInFamily;
    NSMutableDictionary *_childPresetRecord;
    NSMutableDictionary *_existingChildPresetRecord;
    FASettingsPresetsResponse *_existingChildPresetResponse;
    NSArray *_listOfChildren;
    AIDAAccountManager *_accountManager;
    AAUICustodianSetupFlowController *_custodianSetupFlowController;
    ACAccountStore *_store;
    ACAccount *_appleAccount;
    NSOperationQueue *_networkActivityQueue;
    RemoteUIController *_remoteUIViewController;
    AACustodianController *_custodianController;
    STSetupClient *_setupClient;
    NSArray *_custodians;
    BOOL _isMissingParentContact;
    NSSet *_membersWithLocation;
    NSUInteger _countMembersIcloudPlus;
    NSURL *_icloudPlusUrl;
    _TtC14FamilyCircleUI17LocationViewModel *_locationViewModel;
    NSDate *_screenTimeModifiedDate;
    NSDate *_commLimitsModifiedDate;
    NSMutableDictionary *_screenTimeModifiedRecord;
    NSMutableDictionary *_commLimitsModifiedRecord;
    FASharedService *_locationSharedService;
    NSArray *_specifiers;
    UIViewController<_TtP14FamilyCircleUI33FACheckListHostControllerProtocol_> *_checklistHostController;
    UINavigationItem *_navItem;
    UILabel *_navigationBarTitleLabel;
    BOOL _isNavigationTitleViewDisplayed;
}


@property (retain, nonatomic) FAChecklistStore *checklistStore; // ivar: _checklistStore
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FAChecklistViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FAFamilyCircle *familyCircle; // ivar: _familyCircle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FAProfilePictureStore *profilePictureStore; // ivar: _profilePictureStore
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(NSUInteger)_handleSubscriptionListResponse:(id)arg0 ;
-(id)_childCommunicationLimitsForContactManagement:(id)arg0 ;
-(id)_childContactsRecord:(id)arg0 ;
-(id)_childPresetSpecifiers:(id)arg0 ;
-(id)_childrenRecord;
-(id)_custodianContactSpecifiers;
-(id)_getLocationSharedService:(id)arg0 ;
-(id)_icloudPlusSpecifiers;
-(id)_locationSpecifiersWithSharedCount:(NSUInteger)arg0 ;
-(id)_medicalSpecifiersWithMedicalIDData;
-(id)initWithAccountManager:(id)arg0 familyCircle:(id)arg1 profilePictureStore:(id)arg2 checklistStore:(id)arg3 ;
-(id)specifiers;
-(int)_contactsStatusForChild:(id)arg0 ;
-(void)_checkAndReloadAllSpecifiers;
-(void)_checklistHeaderView;
-(void)_fetchCommunicationLimitsModifiedDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)_fetchIcloudPlusMembership:(id)arg0 ;
-(void)_fetchPresetsForChild:(id)arg0 andCompletionHandler:(id)arg1 ;
-(void)_fetchScreenTimeModifiedDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)_manageChildContactsWasTapped:(id)arg0 ;
-(void)_reviewPresetsWasTapped:(id)arg0 ;
-(void)_setupCustodianTapped:(id)arg0 ;
-(void)_setupIcloudPlusWasTapped:(id)arg0 ;
-(void)_setupNavigationBarTitleView;
-(void)_shareMyLocationButtonWasTapped:(id)arg0 ;
-(void)_updateCommunicationLimitsSpecifierThen:(id)arg0 ;
-(void)_updateCustodianSpecifierThen:(id)arg0 ;
-(void)_updateICloudPlusSpecifierThen:(id)arg0 ;
-(void)_updateLocationSpecifierThen:(id)arg0 ;
-(void)_updateMedicalIDButtonWasTapped:(id)arg0 ;
-(void)_updateMedicalSpecifierThen:(id)arg0 ;
-(void)_updateScreenTimeSpecifierThen:(id)arg0 ;
-(void)custodianSetupFlowControllerDidFinish:(id)arg0 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)emergencyContactFlow:(id)arg0 didSelectContact:(id)arg1 ;
-(void)loadView;
-(void)medicalIDViewControllerDidCancel:(id)arg0 ;
-(void)medicalIDViewControllerDidFinish:(id)arg0 ;
-(void)medicalIDViewControllerDidSave:(id)arg0 ;
-(void)reloadSpecifiers;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif