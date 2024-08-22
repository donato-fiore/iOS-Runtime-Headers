// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICQINTERNETPRIVACYDETAILSPECIFIERPROVIDER_H
#define ICQINTERNETPRIVACYDETAILSPECIFIERPROVIDER_H

@class AIDAAccountManager, NSArray, NSString, PSSpecifier;
@protocol AAUISpecifierProvider, AAUISpecifierProviderDelegate, ICQInternetPrivacyDetailDelegate;

#import <Foundation/Foundation.h>

#import "ICQInternetPrivacyViewModel.h"

@interface ICQInternetPrivacyDetailSpecifierProvider : NSObject <AAUISpecifierProvider>



@property (retain, nonatomic) AIDAAccountManager *accountManager; // ivar: _accountManager
@property (retain, nonatomic) NSArray *banners; // ivar: _banners
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISpecifierProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<ICQInternetPrivacyDetailDelegate> *detailDelegate; // ivar: _detailDelegate
@property (retain, nonatomic) PSSpecifier *enableSwitchSpecifer; // ivar: _enableSwitchSpecifer
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (readonly) Class superclass;
@property (retain, nonatomic) ICQInternetPrivacyViewModel *viewModel; // ivar: _viewModel


-(id)_IPAddressLocationSpecifier;
-(id)_bannerSpecifiers;
-(id)_explanationSpecifiers;
-(id)_serviceEnabledForSpecifier:(id)arg0 ;
-(id)_serviceEnabledSpecifier;
-(id)_switchOffAlert;
-(id)_switchOffUnsupportedCellularAlert;
-(id)_switchOffUnsupportedWifiAlert;
-(id)_turnOffUnsupportedCellularAlert;
-(id)_turnOffUnsupportedWifiAlert;
-(id)_turnOnDNSAlert;
-(id)_turnOnSafariAlert;
-(id)initWithAccountManager:(id)arg0 ;
-(id)initWithViewModel:(id)arg0 accountManager:(id)arg1 ;
-(void)_IPAddressLocationSpecifierWasTapped:(id)arg0 ;
-(void)_openSystemStatusSpecifierWasTapped;
-(void)_refreshStatusAndPostNotification;
-(void)_reloadSpecifiers;
-(void)_setServiceEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)_startFetchingBannerModels;
-(void)_turnOffCellularSpecifierWasTapped;
-(void)_turnOffWifiSpecifierWasTapped;
-(void)_turnOnCellularSpecifierWasTapped;
-(void)_turnOnDNSSpecifierWasTapped;
-(void)_turnOnSafariSpecifierWasTapped;
-(void)_turnOnWifiSpecifierWasTapped;
-(void)_unsupportedCellularLearnMoreSpecifierWasTapped;
-(void)_unsupportedRegionLearnMoreSpecifierWasTapped;
-(void)_unsupportedWiFiLearnMoreSpecifierWasTapped;
-(void)_updateEnableStatusTo:(BOOL)arg0 ;
-(void)presentIncompatibleSitesHelp;


@end


#endif