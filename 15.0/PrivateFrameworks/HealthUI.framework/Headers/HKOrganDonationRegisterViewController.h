// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKORGANDONATIONREGISTERVIEWCONTROLLER_H
#define HKORGANDONATIONREGISTERVIEWCONTROLLER_H

@class UITableViewController, HKHealthStore, UIButton, UIActivityIndicatorView, UIBarButtonItem, UIView, UIFont, NSString, NSArray, _HKMedicalIDData;
@protocol HKOrganDonationRegistrantDelegate, HKOrganDonationConnectionManagerDelegate, HKSimpleDataEntryItemToolbarDelegate;


#import "HKOrganDonationConnectionManager.h"
#import "HKOrganDonationRegistrant.h"

@interface HKOrganDonationRegisterViewController : UITableViewController <HKOrganDonationRegistrantDelegate, HKOrganDonationConnectionManagerDelegate, HKSimpleDataEntryItemToolbarDelegate>

 {
    HKOrganDonationConnectionManager *_connectionManager;
    HKHealthStore *_healthStore;
    UIButton *_continueButton;
    UIActivityIndicatorView *_loadingIndicator;
    UIBarButtonItem *_loadingIndicatorBarButtonItem;
    UIBarButtonItem *_updateBarButtonItem;
    UIView *_headerView;
    UIView *_footerView;
    BOOL _isLoading;
    BOOL _isUpdate;
    UIFont *_bodyFont;
}


@property (retain, nonatomic) NSString *completionButtonTitle; // ivar: _completionButtonTitle
@property (retain, nonatomic) NSArray *dataEntryItems; // ivar: _dataEntryItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData; // ivar: _medicalIDData
@property (retain, nonatomic) UIBarButtonItem *nextButton; // ivar: _nextButton
@property (retain, nonatomic) HKOrganDonationRegistrant *registrant; // ivar: _registrant
@property (copy, nonatomic) id *registrationCompletionHandler; // ivar: _registrationCompletionHandler
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_createTableFooterView;
-(id)_createTableHeaderView;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_handleAppWillEnterForegroundNotification:(id)arg0 ;
-(void)_handleResponse:(id)arg0 status:(NSInteger)arg1 ;
-(void)_headerTapped:(id)arg0 ;
-(void)_loadRegistrantInformationIfAvailableAndSetupRegisterView;
-(void)_reloadRegistrantInformationFromServer;
-(void)_setupRegisterViewWithDefaultDemographicsInformation;
-(void)_setupRegisterViewWithRegistrant:(id)arg0 ;
-(void)_setupRegisterViewWithRegistrant:(id)arg0 demographicsInformation:(id)arg1 ;
-(void)_toggleLoadingStatusIsLoading:(BOOL)arg0 ;
-(void)_toggleNextButtonEnabledState;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)dataEntryItemDonePressed:(id)arg0 ;
-(void)dataEntryItemNextPressed:(id)arg0 ;
-(void)dataEntryItemPrevPressed:(id)arg0 ;
-(void)dealloc;
-(void)focusItemAtIndex:(NSInteger)arg0 ;
-(void)nextButtonTapped:(id)arg0 ;
-(void)organDonationConnectionManagerDidRemoveCredential:(id)arg0 ;
-(void)organDonationConnectionManagerDidStoreCredential:(id)arg0 ;
-(void)organDonationRegistrantDidUpdateValue:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateButtonTapped:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif