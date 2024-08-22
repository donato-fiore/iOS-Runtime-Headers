// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STALLOWANCELISTCONTROLLER_H
#define STALLOWANCELISTCONTROLLER_H

@class NSArray, NSDictionary, NSString, PSSpecifier;
@protocol STAllowanceDetailListControllerDelegate, STRootViewModelCoordinator;


#import "STPINListViewController.h"

@interface STAllowanceListController : STPINListViewController <STAllowanceDetailListControllerDelegate>



@property (copy) NSArray *allowanceSpecifiers; // ivar: _allowanceSpecifiers
@property (copy) NSDictionary *allowanceSpecifiersByBundleIdentifier; // ivar: _allowanceSpecifiersByBundleIdentifier
@property (retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // ivar: _coordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PSSpecifier *enableAllAllowancesSpecifier; // ivar: _enableAllAllowancesSpecifier
@property (readonly) NSUInteger hash;
@property (retain) PSSpecifier *informativeTextGroupSpecifier; // ivar: _informativeTextGroupSpecifier
@property BOOL shouldShowConfirmDeletionAlert; // ivar: _shouldShowConfirmDeletionAlert
@property (readonly) Class superclass;


-(BOOL)canBeShownFromSuspendedState;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)_allAllowancesEnabled:(id)arg0 ;
-(id)_informativeTextWithDevices:(id)arg0 hasWatchOSDevices:(BOOL)arg1 ;
-(id)_specifierForAllowance:(id)arg0 ;
-(id)_subtitleTextForAllowance:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(void)_adjustCellHeightForAllowanceSpecifier:(id)arg0 ;
-(void)_allowancesDidChange;
-(void)_devicesDidChange:(id)arg0 coordinator:(id)arg1 ;
-(void)_didFetchAppInfo:(id)arg0 ;
-(void)_hasWatchOSDevicesDidChange:(BOOL)arg0 coordinator:(id)arg1 ;
-(void)_reloadInformativeTextGroupSpecifierIfNeeded:(id)arg0 ;
-(void)_setAllAllowancesEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)_showAllowanceDetailController:(id)arg0 ;
-(void)_showConfirmDeletionView:(id)arg0 ;
-(void)addAllowance:(id)arg0 ;
-(void)allowanceDetailController:(id)arg0 didDeleteAllowance:(id)arg1 ;
-(void)allowanceDetailController:(id)arg0 didSaveAllowance:(id)arg1 ;
-(void)confirmDeletion:(id)arg0 ;
-(void)dealloc;
-(void)deleteAllowance:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)showStoreDemoAlert;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif