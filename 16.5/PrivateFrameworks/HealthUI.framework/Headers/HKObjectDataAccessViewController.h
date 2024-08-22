// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKOBJECTDATAACCESSVIEWCONTROLLER_H
#define HKOBJECTDATAACCESSVIEWCONTROLLER_H

@class HKHealthStore, HKAuthorizationStore, HKSample, NSMutableDictionary, NSArray, UIFont;
@protocol HKSwitchTableViewCellDelegate;


#import "HKTableViewController.h"
#import "HKDisplayType.h"
#import "HKTitledIconHeaderView.h"

@interface HKObjectDataAccessViewController : HKTableViewController <HKSwitchTableViewCellDelegate>

 {
    HKHealthStore *_healthStore;
    HKAuthorizationStore *_authorizationStore;
    HKSample *_sample;
    NSMutableDictionary *_authorizationByApp;
    NSArray *_orderedApps;
    UIFont *_bodyFont;
    HKDisplayType *_displayType;
    HKTitledIconHeaderView *_headerView;
}




-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cellForSource:(id)arg0 tableView:(id)arg1 ;
-(id)_headerSubtitle;
-(id)_noAppsCell;
-(id)bodyFont;
-(id)initWithSample:(id)arg0 healthStore:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_handleReturnedImage:(id)arg0 forSource:(id)arg1 cell:(id)arg2 tableView:(id)arg3 fetchError:(id)arg4 ;
-(void)_loadIconForSource:(id)arg0 onCell:(id)arg1 ofTableView:(id)arg2 ;
-(void)_refreshAppAuthorizationData;
-(void)_setupHeaderViewSize;
-(void)dealloc;
-(void)switchCellValueChanged:(id)arg0 value:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif