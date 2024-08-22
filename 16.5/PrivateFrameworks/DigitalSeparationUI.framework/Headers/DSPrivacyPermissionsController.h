// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSPRIVACYPERMISSIONSCONTROLLER_H
#define DSPRIVACYPERMISSIONSCONTROLLER_H

@class DSAppSharing, NSArray, NSString, NSMutableSet;
@protocol DSPrivacyPermissionsDelegate, DSController, DSNavigationDelegate;


#import "DSTableWelcomeController.h"
#import "DSTableView.h"

@interface DSPrivacyPermissionsController : DSTableWelcomeController <DSPrivacyPermissionsDelegate, DSController>



@property (retain, nonatomic) DSAppSharing *appSharing; // ivar: _appSharing
@property (retain, nonatomic) NSArray *apps; // ivar: _apps
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DSNavigationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *filteredApps; // ivar: _filteredApps
@property (retain, nonatomic) NSArray *filteredSensors; // ivar: _filteredSensors
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFiltered; // ivar: _isFiltered
@property (nonatomic) NSUInteger scope; // ivar: _scope
@property (retain, nonatomic) NSMutableSet *selectedApps; // ivar: _selectedApps
@property (retain, nonatomic) NSMutableSet *selectedSensors; // ivar: _selectedSensors
@property (retain, nonatomic) NSArray *sensors; // ivar: _sensors
@property (readonly) Class superclass;
@property (retain, nonatomic) DSTableView *tableView;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_addLinkButton;
-(void)_pushNextPane;
-(void)_updateButton;
-(void)_updateTitle;
-(void)addUnsharedPermissions:(id)arg0 andApps:(id)arg1 ;
-(void)collectPermissionsByType;
-(void)filterContentForSearchText:(id)arg0 category:(NSInteger)arg1 ;
-(void)handleResetErrors:(id)arg0 pushNextPane:(BOOL)arg1 ;
-(void)reloadData;
-(void)resetAllPermissions;
-(void)resetSelectedPermissions;
-(void)returnFromDetailAndDeleteApp:(id)arg0 ;
-(void)returnFromDetailAndResetPermissionForSelectedApps:(id)arg0 permission:(id)arg1 ;
-(void)returnFromDetailAndResetSelectedPermissions:(id)arg0 forApp:(id)arg1 ;
-(void)returnFromDetailAndStopAllSharingForPermission:(id)arg0 ;
-(void)searchBar:(id)arg0 selectedScopeButtonIndexDidChange:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif