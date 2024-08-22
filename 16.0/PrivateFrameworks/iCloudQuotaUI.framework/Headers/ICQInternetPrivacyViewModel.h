// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQINTERNETPRIVACYVIEWMODEL_H
#define ICQINTERNETPRIVACYVIEWMODEL_H

@class NSString, NSArray, NSData, NSNumber, PrivacyProxyServiceStatus;

#import <Foundation/Foundation.h>


@interface ICQInternetPrivacyViewModel : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSString *IPAddressLocationDisabledTitle;
@property (readonly, copy, nonatomic) NSString *IPAddressLocationEnabledTitle;
@property (readonly, copy, nonatomic) NSString *IPAddressLocationMacTitle; // ivar: _IPAddressLocationMacTitle
@property (readonly, copy, nonatomic) NSString *IPAddressLocationSettingsMessage;
@property (readonly, copy, nonatomic) NSString *IPAddressLocationSettingsTitle;
@property (readonly, copy, nonatomic) NSString *IPAddressLocationTitle;
@property (readonly, copy, nonatomic) NSArray *bannerModels; // ivar: _bannerModels
@property (nonatomic, getter=isBeta) BOOL beta; // ivar: _beta
@property (readonly, copy, nonatomic) NSString *betaBannerMessageOnMac; // ivar: _betaBannerMessageOnMac
@property (readonly, copy, nonatomic) NSString *betaBannerTitleOnMac; // ivar: _betaBannerTitleOnMac
@property (copy, nonatomic) NSString *cellularName; // ivar: _cellularName
@property (readonly, copy, nonatomic) NSString *explanationButtonTitle;
@property (readonly, copy, nonatomic) NSString *explanationMessage;
@property (readonly, copy, nonatomic) NSString *explanationPrefPaneMessage; // ivar: _explanationPrefPaneMessage
@property (readonly, copy, nonatomic) NSString *explanationTitle;
@property (readonly, copy, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, copy, nonatomic) NSString *incompatibleSitesMessage;
@property (readonly, copy, nonatomic) NSString *internetPrivacyLearnMoreMessage;
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (retain, nonatomic) NSNumber *issueOrSuggestionCount; // ivar: _issueOrSuggestionCount
@property (readonly, copy, nonatomic) NSString *learnMoreButtonTitle;
@property (readonly, copy, nonatomic) NSString *learnMoreLinkTitle;
@property (readonly, copy, nonatomic) NSString *learnMoreTitle;
@property (readonly, copy, nonatomic) NSString *navTitle;
@property (readonly, copy, nonatomic) NSString *notSupportedTitle;
@property (readonly, copy, nonatomic) NSString *offTitle;
@property (readonly, copy, nonatomic) NSString *onTitle;
@property (readonly, copy, nonatomic) NSString *porcupineOffTitle; // ivar: _porcupineOffTitle
@property (readonly, copy, nonatomic) NSString *porcupineOnTitle; // ivar: _porcupineOnTitle
@property (readonly, copy, nonatomic) NSString *porcupineUnavailableTitle; // ivar: _porcupineUnavailableTitle
@property (nonatomic) NSUInteger proxyAccountType; // ivar: _proxyAccountType
@property (readonly, nonatomic) NSString *proxyAccountTypeDescription;
@property (retain, nonatomic) PrivacyProxyServiceStatus *proxyServiceStatus; // ivar: _proxyServiceStatus
@property (nonatomic) NSUInteger proxyUserTier; // ivar: _proxyUserTier
@property (readonly, nonatomic) NSString *proxyUserTierDescription;
@property (nonatomic) BOOL serviceIsLimited; // ivar: _serviceIsLimited
@property (nonatomic) NSUInteger status; // ivar: _status
@property (readonly, nonatomic) NSString *statusDescription;
@property (copy, nonatomic) NSString *statusStringForPrefPane; // ivar: _statusStringForPrefPane
@property (readonly, copy, nonatomic) NSString *switchOffAlertKeepUsing;
@property (readonly, copy, nonatomic) NSString *switchOffAlertLearnMore;
@property (readonly, copy, nonatomic) NSString *switchOffAlertMessage;
@property (readonly, copy, nonatomic) NSString *switchOffAlertPrefPaneTitle;
@property (readonly, copy, nonatomic) NSString *switchOffAlertTitle;
@property (readonly, copy, nonatomic) NSString *switchOffAlertTurnOff;
@property (readonly, copy, nonatomic) NSString *switchTitle;
@property (readonly, copy, nonatomic) NSString *turnOffButtonTitle; // ivar: _turnOffButtonTitle
@property (readonly, copy, nonatomic) NSString *turnOnDNSAlertMessage;
@property (readonly, copy, nonatomic) NSString *turnOnDNSAlertTitle;
@property (readonly, copy, nonatomic) NSString *turnOnPorcupineButtonTitle; // ivar: _turnOnPorcupineButtonTitle
@property (readonly, copy, nonatomic) NSString *turnOnSafariAlertMessage;
@property (readonly, copy, nonatomic) NSString *turnOnSafariAlertTitle;
@property (readonly, copy, nonatomic) NSString *unavailableTitle;
@property (readonly, copy, nonatomic) NSString *unsupportedCellularSwitchOffAlertMessage;
@property (readonly, copy, nonatomic) NSString *unsupportedSwitchOffAlertTitle;
@property (readonly, copy, nonatomic) NSString *unsupportedSwitchOffCancel;
@property (readonly, copy, nonatomic) NSString *unsupportedSwitchOffCompletely;
@property (readonly, copy, nonatomic) NSString *unsupportedSwitchOffNetworkOnly;
@property (readonly, copy, nonatomic) NSString *unsupportedSwitchOffProviderOnly;
@property (readonly, copy, nonatomic) NSString *unsupportedTurnOffAlertOk;
@property (readonly, copy, nonatomic) NSString *unsupportedTurnOffAlertTitle;
@property (readonly, copy, nonatomic) NSString *unsupportedTurnOffCellularAlertMessage;
@property (readonly, copy, nonatomic) NSString *unsupportedTurnOffWifiAlertMessage;
@property (readonly, copy, nonatomic) NSString *unsupportedWifiSwitchOffAlertMessage;
@property (readonly, copy, nonatomic) NSString *upgradeTitle;
@property (readonly, copy, nonatomic) NSString *waitingTitle;
@property (copy, nonatomic) NSString *wiFiName; // ivar: _wiFiName


-(NSUInteger)userTier;
-(id)country;
-(id)init;
-(id)issueTitle:(id)arg0 ;
-(id)suggestionTitle:(id)arg0 ;
-(id)unsupportedTurnOffAlertTitleFor:(id)arg0 ;
-(id)unsupportedTurnOffCellularAlertTitle;
-(void)_addNetworkOutageBannerTo:(id)arg0 withCompletion:(id)arg1 ;
-(void)_fetchAccountTypeWithCompletion:(id)arg0 ;
-(void)_fetchBannerModelsForPaidTier:(id)arg0 ;
-(void)_fetchUserTierWithCompletion:(id)arg0 ;
-(void)_refreshOverallStatusWithCompletion:(id)arg0 ;
-(void)_refreshServiceStatusWithCompletion:(id)arg0 ;
-(void)enableCellular:(BOOL)arg0 onNetworkName:(id)arg1 completion:(id)arg2 ;
-(void)enableDNS:(id)arg0 ;
-(void)enableLocationSharing:(BOOL)arg0 completion:(id)arg1 ;
-(void)enableSafari:(id)arg0 ;
-(void)enableWifi:(BOOL)arg0 onNetworkName:(id)arg1 completion:(id)arg2 ;
-(void)fetchBannerModels:(id)arg0 ;
-(void)isLocationSharingEnabled:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 completion:(id)arg1 ;
-(void)updateStatusStringForBannerModels:(id)arg0 ;


@end


#endif