// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSSHARINGPERMISSIONSCONTROLLER_H
#define DSSHARINGPERMISSIONSCONTROLLER_H

@class NSError, NSString, DSSharingPermissions, NSMutableDictionary, DSSourceRepository, NSMutableSet;
@protocol DSSharingPermissionsDetailDelegate, DSController, DSNavigationDelegate, OS_dispatch_queue;


#import "DSTableWelcomeController.h"
#import "DSTableView.h"

@interface DSSharingPermissionsController : DSTableWelcomeController <DSSharingPermissionsDetailDelegate, DSController>

 {
    uint8_t _fetchState;
}


@property (retain, nonatomic) NSError *cachedFetchError; // ivar: _cachedFetchError
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DSNavigationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property NSUInteger fetchCompletedTime; // ivar: _fetchCompletedTime
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DSSharingPermissions *permissions; // ivar: _permissions
@property (retain, nonatomic) NSMutableDictionary *personIconCache; // ivar: _personIconCache
@property (retain, nonatomic) DSSourceRepository *repo; // ivar: _repo
@property (retain, nonatomic) NSMutableSet *selectedPeople; // ivar: _selectedPeople
@property (retain, nonatomic) NSMutableSet *selectedTypes; // ivar: _selectedTypes
@property (readonly) Class superclass;
@property (retain, nonatomic) DSTableView *tableView;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(void)initialize;
-(BOOL)isFindMyASource;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)personForIndexPath:(id)arg0 ;
-(id)sharingTypeForIndexPath:(id)arg0 ;
-(id)tableIconForPerson:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_addLinkButton;
-(void)_fetchCompletedWithError:(id)arg0 ;
-(void)_pushNextPane;
-(void)_updateButton;
-(void)_updateTitle;
-(void)addUnsharedPerson:(id)arg0 ;
-(void)addUnsharedSource:(id)arg0 resources:(id)arg1 ;
-(void)didEnterBackground;
-(void)fetchSharingPermissions;
-(void)filterContentForSearchText:(id)arg0 category:(NSInteger)arg1 ;
-(void)postAnalytics;
-(void)presentFetchErrorMessage:(id)arg0 ;
-(void)registerForNotifications;
-(void)reloadTableViewData;
-(void)requestNewFetchImmediately:(BOOL)arg0 ;
-(void)searchBar:(id)arg0 selectedScopeButtonIndexDidChange:(NSInteger)arg1 ;
-(void)setFetchNeeded;
-(void)setUrgentFetchNeeded;
-(void)sharingStoppedForPerson:(id)arg0 sourceNames:(id)arg1 ;
-(void)sharingStoppedForType:(id)arg0 people:(id)arg1 ;
-(void)stopAllSharing;
-(void)stopSelectedSharing;
-(void)stopSharingFailedWithError:(id)arg0 ;
-(void)stopSharingFlowCompleted;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)unregisterForNotifications;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif