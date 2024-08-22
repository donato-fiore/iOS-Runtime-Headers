// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDAPPACCESSLISTVIEWCONTROLLER_H
#define WDAPPACCESSLISTVIEWCONTROLLER_H

@class HKTableViewController, HKHealthStore, HKAuthorizationStore, NSArray, UIFont, HKSample;



@interface WDAppAccessListViewController : HKTableViewController {
    HKHealthStore *_healthStore;
    HKAuthorizationStore *_authorizationStore;
}


@property (retain, nonatomic) NSArray *allowedApps; // ivar: _allowedApps
@property (retain, nonatomic) UIFont *bodyFont; // ivar: _bodyFont
@property (retain, nonatomic) NSArray *disallowedApps; // ivar: _disallowedApps
@property (retain, nonatomic) HKSample *sample; // ivar: _sample


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_identifierForCellInSection:(NSInteger)arg0 ;
-(id)_sourceForIndexPath:(id)arg0 ;
-(id)_textForCellAtIndexPath:(id)arg0 ;
-(id)initWithSample:(id)arg0 healthStore:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_handleReturnedImage:(id)arg0 forSource:(id)arg1 cell:(id)arg2 tableView:(id)arg3 fetchError:(id)arg4 ;
-(void)_loadIconForSource:(id)arg0 onCell:(id)arg1 ofTableView:(id)arg2 ;
-(void)_refreshAppAuthorizationData;
-(void)resetAccess;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif