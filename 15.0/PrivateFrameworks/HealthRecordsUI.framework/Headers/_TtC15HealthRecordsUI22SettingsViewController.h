// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15HEALTHRECORDSUI22SETTINGSVIEWCONTROLLER_H
#define _TTC15HEALTHRECORDSUI22SETTINGSVIEWCONTROLLER_H

@class HKTableViewController;
@protocol HKClinicalAccountStoreStateChangeListener, HKSourceListDataSourceObserver;



@interface _TtC15HealthRecordsUI22SettingsViewController : HKTableViewController <HKClinicalAccountStoreStateChangeListener, HKSourceListDataSourceObserver>

 {
    ? accounts;
    ? appSourceModels;
    ? researchStudySourceModels;
    ? sourceLoadingToken;
    ? accountLoadingToken;
    ? factory;
    ? profile;
    ? $__lazy_storage_$_shouldEnableAddAccounts;
    ? sourceListDataSource;
}




-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithUsingInsetStyling:(BOOL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)clinicalAccountStore:(id)arg0 accountDidChange:(id)arg1 changeType:(NSInteger)arg2 ;
-(void)dealloc;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tapToRadar:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif