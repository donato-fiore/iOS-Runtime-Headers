// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
@property (retain, nonatomic) MCUIMCSpecifierProvider *mcSpecifierProvider; // ivar: _mcSpecifierProvider
@property (nonatomic) int provisioningProfileInstalledToken; // ivar: _provisioningProfileInstalledToken
@property (nonatomic) int provisioningProfileRemovedToken; // ivar: _provisioningProfileRemovedToken
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *vpnBundleControllers; // ivar: _vpnBundleControllers
@property (retain, nonatomic) NSArray *vpnSpecifiers; // ivar: _vpnSpecifiers


-(BOOL)shouldDeferPushForSpecifierID:(id)arg0 ;
-(id)_specifiersForPhone;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)mcuiViewController;
-(id)specifiers;
-(void)_handleDeferredPush;
-(void)_loadVPNSpecifiersAsync;
-(void)_mcuiUpdated:(id)arg0 ;
-(void)_reloadSpecifiersOnMainQueue;
-(void)_showAccountDetailsPaneWithUsername:(id)arg0 completion:(id)arg1 ;
-(void)accountCellWasTapped:(id)arg0 ;
-(void)dealloc;
-(void)handleURL:(id)arg0 ;
-(void)mcuiReloadSpecifiers;
-(void)reloadAccountSpecifiersForProvider:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif