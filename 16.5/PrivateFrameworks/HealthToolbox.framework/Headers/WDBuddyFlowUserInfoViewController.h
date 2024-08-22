// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDBUDDYFLOWUSERINFOVIEWCONTROLLER_H
#define WDBUDDYFLOWUSERINFOVIEWCONTROLLER_H

@class HKTableViewController, HKHealthStore, _HKMedicalIDData, HKTitledContactBuddyHeaderView, NSArray, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, WDUserActivityResponder, HKSimpleDataEntryItemToolbarDelegate, WDBuddyControllerUserInfoDelegate;


#import "WDProfile.h"
#import "WDUserDefaults.h"
#import "WDBuddyFlowContinueFooterView.h"
#import "WDBuddyFlowUserInfo.h"

@interface WDBuddyFlowUserInfoViewController : HKTableViewController <UITableViewDataSource, UITableViewDelegate, WDUserActivityResponder, HKSimpleDataEntryItemToolbarDelegate>

 {
    WDProfile *_profile;
    BOOL _isLastScreen;
    HKHealthStore *_healthStore;
    WDUserDefaults *_userDefaults;
    _HKMedicalIDData *_medicalIDData;
    HKTitledContactBuddyHeaderView *_headerView;
    WDBuddyFlowContinueFooterView *_footerView;
    BOOL _hasSetUpHeaderAndFooterViews;
}


@property (retain, nonatomic) NSArray *dataEntryItems; // ivar: _dataEntryItems
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WDBuddyControllerUserInfoDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) WDBuddyFlowUserInfo *userInfo; // ivar: _userInfo


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_createTableFooterView;
-(id)_createTableHeaderView;
-(id)applyTransitionActivity:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithProfile:(id)arg0 isLastScreen:(BOOL)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_configureHeaderView:(id)arg0 ;
-(void)_loadData;
-(void)_localeDidChange:(id)arg0 ;
-(void)_saveDataWithCompletion:(id)arg0 ;
-(void)_setupObservers;
-(void)_updateForCurrentSizeCategory;
-(void)applyChangeActivity:(id)arg0 ;
-(void)continueButtonTapped:(id)arg0 ;
-(void)dataEntryItemDonePressed:(id)arg0 ;
-(void)dataEntryItemNextPressed:(id)arg0 ;
-(void)dataEntryItemPrevPressed:(id)arg0 ;
-(void)dealloc;
-(void)focusItemAtIndex:(NSInteger)arg0 ;
-(void)setUpHeaderAndFooterViewsIfNeeded;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif