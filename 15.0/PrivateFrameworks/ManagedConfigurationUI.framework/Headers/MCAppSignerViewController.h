// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCAPPSIGNERVIEWCONTROLLER_H
#define MCAPPSIGNERVIEWCONTROLLER_H

@protocol OS_dispatch_group;


#import "MCUITableViewController.h"
#import "MCUIAppSigner.h"

@interface MCAppSignerViewController : MCUITableViewController

@property (retain, nonatomic) MCUIAppSigner *appSigner; // ivar: _appSigner
@property (nonatomic) BOOL isNetworkReachable; // ivar: _isNetworkReachable
@property (retain, nonatomic) NSObject<OS_dispatch_group> *trustActionGroup; // ivar: _trustActionGroup


-(BOOL)_isAppRemovalAllowed;
-(BOOL)_isEnterpriseAppTrustAllowed;
-(BOOL)_isShowingTrustUntrustRowAllowed;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithAppSigner:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_appSignerWasAddedOnlineRequired:(BOOL)arg0 ;
-(void)_appSignersUpdated:(id)arg0 ;
-(void)_presentAppRemovalAlert;
-(void)_presentNetworkRequiredAlert;
-(void)_presentTrustAlert;
-(void)_presentVerifyAppAlert;
-(void)_setup;
-(void)_trustActionGroupVerifyAppsAndTrustSigner:(BOOL)arg0 ;
-(void)_trustAppSigner;
-(void)_verifyApps;
-(void)dealloc;
-(void)networkReachabilityChanged:(id)arg0 ;
-(void)removeAppSignerApps;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif