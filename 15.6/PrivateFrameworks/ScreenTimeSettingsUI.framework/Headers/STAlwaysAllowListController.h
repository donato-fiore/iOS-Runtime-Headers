// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STALWAYSALLOWLISTCONTROLLER_H
#define STALWAYSALLOWLISTCONTROLLER_H

@class PSSpecifier, NSArray, NSSet;
@protocol STAlwaysAllowListControllerDelegate;


#import "STPINListViewController.h"
#import "STAlwaysAllowList.h"

@interface STAlwaysAllowListController : STPINListViewController

@property (retain, nonatomic) PSSpecifier *allowedAppsGroupSpecifier; // ivar: _allowedAppsGroupSpecifier
@property (retain, nonatomic) NSArray *allowedAppsSpecifiers; // ivar: _allowedAppsSpecifiers
@property (retain) PSSpecifier *allowedContactsSpecifier; // ivar: _allowedContactsSpecifier
@property (copy, nonatomic) STAlwaysAllowList *alwaysAllowList; // ivar: _alwaysAllowList
@property (retain, nonatomic) PSSpecifier *chooseAppsGroupSpecifier; // ivar: _chooseAppsGroupSpecifier
@property (retain, nonatomic) NSArray *chooseAppsSpecifiers; // ivar: _chooseAppsSpecifiers
@property (copy, nonatomic) NSArray *chooseBundleIDs; // ivar: _chooseBundleIDs
@property (weak, nonatomic) NSObject<STAlwaysAllowListControllerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSSet *installedBundleIDs; // ivar: _installedBundleIDs


-(BOOL)canBeShownFromSuspendedState;
-(BOOL)shouldReloadSpecifiersOnResume;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)_allowedContactsDuringDowntimeText:(id)arg0 ;
-(id)appSpecifiersForBundleIDs:(id)arg0 ;
-(id)createAllowedAppsSpecifiers;
-(id)createChooseAppsSpecifiers;
-(id)init;
-(id)removeMessagesConfirmationPrompt;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(void)_communicationLimitsDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)_insertAllowedAppSpecifier:(id)arg0 ;
-(void)_removeAllowedAppSpecifier:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeAllowedIdentifier:(id)arg0 withSpecifier:(id)arg1 ;
-(void)setCoordinator:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willResignActive;


@end


#endif