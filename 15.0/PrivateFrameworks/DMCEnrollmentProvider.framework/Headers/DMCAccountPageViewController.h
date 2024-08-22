// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMCACCOUNTPAGEVIEWCONTROLLER_H
#define DMCACCOUNTPAGEVIEWCONTROLLER_H

@class ACUIDataclassConfigurationViewController;


#import "DMCManagedAccountsSpecifierProvider.h"
#import "DMCMDMDetailsSpecifierProvider.h"
#import "RMConfigurationsSpecifierProvider.h"

@interface DMCAccountPageViewController : ACUIDataclassConfigurationViewController

@property (retain, nonatomic) DMCManagedAccountsSpecifierProvider *managedAccountsProvider; // ivar: _managedAccountsProvider
@property (retain, nonatomic) DMCMDMDetailsSpecifierProvider *mdmSpecifierProvider; // ivar: _mdmSpecifierProvider
@property (retain, nonatomic) RMConfigurationsSpecifierProvider *rmConfigurationsProvider; // ivar: _rmConfigurationsProvider


-(id)specifiers;
-(id)titleForDeleteButton;
-(void)_reauthPasswordTapped:(id)arg0 ;
-(void)_reloadSpecifiersAndDeleteAccountButton;
-(void)_setupControllers;
-(void)_updateControllers;
-(void)viewDidLoad;


@end


#endif