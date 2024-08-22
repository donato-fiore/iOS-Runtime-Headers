// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCUILISTCONTROLLER_H
#define MCUILISTCONTROLLER_H

@class NSString, DMCEnrollmentInterface, NSArray;
@protocol UITableViewDelegate, MCUISpecifierProviderDelegate, DMCAccountSpecifierProviderDelegate;


#import "MCURLListenerListController.h"
#import "MCUIBridgeSpecifierProvider.h"
#import "MCUIMCSpecifierProvider.h"

@interface MCUIListController : MCURLListenerListController <UITableViewDelegate, MCUISpecifierProviderDelegate, DMCAccountSpecifierProviderDelegate>



@property (retain, nonatomic) MCUIBridgeSpecifierProvider *bridgeSpecifierProvider; // ivar: _bridgeSpecifierProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) DMCEnrollmentInterface *dmcEnrollmentInterface; // ivar: _dmcEnrollmentInterface
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *managedAccountSpecifiers; // ivar: _managedAccountSpecifiers
@property (retain, nonatomic) MCUIMCSpecifierProvider *mcSpecifierProvider; // ivar: _mcSpecifierProvider
@property (nonatomic) BOOL needsToReloadManageAccountSpecifiers; // ivar: _needsToReloadManageAccountSpecifiers
@property (nonatomic) int provisioningProfileInstalledToken; // ivar: _provisioningProfileInstalledToken
@property (nonatomic) int provisioningProfileRemovedToken; // ivar: _provisioningProfileRemovedToken
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *vpnBundleControllers; // ivar: _vpnBundleControllers
@property (retain, nonatomic) NSArray *vpnSpecifiers; // ivar: _vpnSpecifiers


-(BOOL)prepareHandlingURLForSpecifierID:(id)arg0 resourceDictionary:(id)arg1 animatePush:(*BOOL)arg2 ;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg0 ;
-(id)_specifiersForPhone;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)mcuiViewController;
-(id)specifiers;
-(void)_cleanCacheAndReloadSpecifiers;
-(void)_handleDeferredPush;
-(void)_loadManagedAccountSpecifiersWithCompletionHandler:(id)arg0 ;
-(void)_loadVPNSpecifiersWithCompletionHandler:(id)arg0 ;
-(void)_mcuiUpdated;
-(void)_showAccountDetailsPaneWithUsername:(id)arg0 completion:(id)arg1 ;
-(void)_watchFetchFailed:(id)arg0 ;
-(void)accountCellWasTapped:(id)arg0 ;
-(void)dealloc;
-(void)handleURL:(id)arg0 ;
-(void)reloadAccountSpecifiersForProvider:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif