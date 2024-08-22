// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCUIAPPSIGNERVIEWCONTROLLER_H
#define MCUIAPPSIGNERVIEWCONTROLLER_H

@protocol OS_dispatch_group, MCUIAppSignerUninstaller;


#import "MCUITableViewController.h"
#import "MCUIAppSigner.h"

@interface MCUIAppSignerViewController : MCUITableViewController

@property (readonly, nonatomic) MCUIAppSigner *appSigner; // ivar: _appSigner
@property (nonatomic) BOOL isNetworkReachable; // ivar: _isNetworkReachable
@property (retain, nonatomic) NSObject<OS_dispatch_group> *trustActionGroup; // ivar: _trustActionGroup
@property (retain, nonatomic) NSObject<MCUIAppSignerUninstaller> *uninstaller; // ivar: _uninstaller


-(BOOL)_isEnterpriseAppTrustAllowed;
-(BOOL)_showTrustUntrustRow;
-(BOOL)_showVerifyRowIncludeAlmostUntrustedApps:(BOOL)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithAppSigner:(id)arg0 ;
-(id)initWithAppSigner:(id)arg0 uninstaller:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_appSignerWasAddedOnlineRequired:(BOOL)arg0 ;
-(void)_appSignersUpdated:(id)arg0 ;
-(void)_presentAppRemovalAlert;
-(void)_presentNetworkRequiredAlert;
-(void)_presentTrustAlert;
-(void)_presentVerifyAppAlert;
-(void)_removeAppSignerApps;
-(void)_setup;
-(void)_trustActionGroupVerifyAppsAndTrustSigner:(BOOL)arg0 ;
-(void)_trustAppSigner;
-(void)_verifyApps;
-(void)dealloc;
-(void)networkReachabilityChanged:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif