// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCLIENT_H
#define WFCLIENT_H

@class CWFInterface, NSRunLoop, NSString, NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFNetworkScanRecord.h"
#import "WFInterface.h"

@interface WFClient : NSObject

@property (nonatomic, getter=isWAPIEnabled) BOOL WAPIEnabled; // ivar: _WAPIEnabled
@property (nonatomic, getter=isWPA3EnterpriseEnabled) BOOL WPA3EnterpriseEnabled; // ivar: _WPA3EnterpriseEnabled
@property (nonatomic, getter=isWPA3PersonalEnabled) BOOL WPA3PersonalEnabled; // ivar: _WPA3PersonalEnabled
@property (nonatomic) NSUInteger airplaneModeBehavior; // ivar: _airplaneModeBehavior
@property (nonatomic) NSInteger askToJoinMode; // ivar: _askToJoinMode
@property (nonatomic) NSInteger autoInstantHotspotJoinOption; // ivar: _autoInstantHotspotJoinOption
@property (retain, nonatomic) CWFInterface *cInterface; // ivar: _cInterface
@property (retain) NSRunLoop *callbackRunLoop; // ivar: _callbackRunLoop
@property (nonatomic) NSUInteger cellularOutrankState; // ivar: _cellularOutrankState
@property (nonatomic) int cellularOutrankWiFiNotificationToken; // ivar: _cellularOutrankWiFiNotificationToken
@property (nonatomic) NSUInteger cellularOutrankWiFiSymtpomsState; // ivar: _cellularOutrankWiFiSymtpomsState
@property (nonatomic, getter=isCoreWiFiEnabled) BOOL coreWiFiEnabled; // ivar: _coreWiFiEnabled
@property (retain, nonatomic) WFNetworkScanRecord *currentNetwork; // ivar: _currentNetwork
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *currentNetworkQueue; // ivar: _currentNetworkQueue
@property (nonatomic, getter=isDiagnosticsEnabled) BOOL diagnosticsEnabled; // ivar: _diagnosticsEnabled
@property (getter=isDiagnosticsModeEnabled) BOOL diagnosticsModeEnabled; // ivar: _diagnosticsModeEnabled
@property BOOL extraLoggingEnabled; // ivar: _extraLoggingEnabled
@property (readonly) NSString *hardwareMACAddress;
@property (retain, nonatomic) WFInterface *interface; // ivar: _interface
@property (readonly, nonatomic) BOOL isKnownNetworkUIEnabled; // ivar: _isKnownNetworkUIEnabled
@property (nonatomic, getter=isManagedAppleID) BOOL managedAppleID; // ivar: _managedAppleID
@property *__WiFiManagerClient manager; // ivar: _manager
@property (nonatomic, getter=isMfpCapable) BOOL mfpCapable; // ivar: _mfpCapable
@property (nonatomic, getter=isNetworkRestrictionActive) BOOL networkRestrictionActive; // ivar: _networkRestrictionActive
@property (readonly, nonatomic, getter=isPowerModificationDisabled) BOOL powerModificationDisabled; // ivar: _powerModificationDisabled
@property BOOL powered; // ivar: _powered
@property (nonatomic, getter=isRandomFeatureForSecureNetworksEnabled) BOOL randomFeatureForSecureNetworksEnabled; // ivar: _randomFeatureForSecureNetworksEnabled
@property (nonatomic, getter=israndomMACFeatureEnabled) BOOL randomMACFeatureEnabled; // ivar: _randomMACFeatureEnabled
@property (retain) NSNumber *rssiThresholdNumber; // ivar: _rssiThresholdNumber
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialClientQueue; // ivar: _serialClientQueue
@property BOOL showAllHS20Networks; // ivar: _showAllHS20Networks
@property (nonatomic) BOOL userAutoJoinState; // ivar: _userAutoJoinState
@property (readonly, nonatomic) NSString *whitelistingUUID; // ivar: _whitelistingUUID
@property (getter=isWiFiHealthUIDisabled) BOOL wiFiHealthUIDisabled; // ivar: _wiFiHealthUIDisabled


+(id)sharedInstance;
-(BOOL)hasShownSBPickerDontAsk;
-(BOOL)isCellularOutrankingWiFi;
-(BOOL)isInfraAssociationAllowed;
-(NSInteger)_askToJoinModeFromWiFiAskToJoinPreference:(int)arg0 ;
-(NSInteger)_hotspotJoinOptionFromWiFiAutoHotspotMode:(int)arg0 ;
-(NSInteger)rssiThreshold;
-(id)_copyCurrentNetworks;
-(id)_getGeoTagsForNetwork:(struct __WiFiNetwork *)arg0 ;
-(id)_getScoreForNetwork:(struct __WiFiNetwork *)arg0 ;
-(id)init;
-(id)initWithCallbackRunLoop:(id)arg0 ;
-(id)newRandomMACAddressForSSID:(id)arg0 ;
-(void)_addNetwork:(struct __WiFiNetwork *)arg0 ;
-(void)_askToJoinNotification:(unsigned int)arg0 ;
-(void)_joinRecommendationWithID:(unsigned int)arg0 network:(struct __WiFiNetwork *)arg1 ;
-(void)_logWiFiManagerPropertyChange:(id)arg0 value:(BOOL)arg1 ;
-(void)_managedAppleIDStateDidChange:(BOOL)arg0 ;
-(void)_managedConfigurationDidChange:(id)arg0 ;
-(void)_notifyWiFiPropertyChanged:(id)arg0 value:(id)arg1 ;
-(void)_preferredNetworksDidChange:(id)arg0 ;
-(void)_registerForCellularRankingStateNotification;
-(void)_removeNetwork:(struct __WiFiNetwork *)arg0 ;
-(void)_scheduleCallbacksWithManager:(struct __WiFiManagerClient *)arg0 runLoop:(id)arg1 ;
-(void)_setAutoJoinEnabled:(BOOL)arg0 forNetwork:(struct __WiFiNetwork *)arg1 ;
-(void)_setupDefaultInterfaceWithManager:(struct __WiFiManagerClient *)arg0 coreWiFiInterface:(id)arg1 ;
-(void)_startMonitoringCoreWiFiEventsWithInterface:(id)arg0 ;
-(void)_trustNotificationWithID:(unsigned int)arg0 network:(struct __WiFiNetwork *)arg1 data:(id)arg2 ;
-(void)_unscheduleCallbacksWithManager:(struct __WiFiManagerClient *)arg0 ;
-(void)_updateAirplaneModeStickiness;
-(void)_updateAskToJoinMode;
-(void)_updateAutoInstantHotspotJoinOption;
-(void)_updateCellularRankingState;
-(void)_updateCoreWiFiEnabled;
-(void)_updateDebugProperties;
-(void)_updateDiagnosticsEnabled;
-(void)_updateManagedAppleIDState;
-(void)_updateNetwork:(struct __WiFiNetwork *)arg0 ;
-(void)_updateNetworkRestrictionActive;
-(void)_updatePowerModificationDisableState;
-(void)_updatePowerState;
-(void)_updateRandomMACFeatureEnabled;
-(void)_updateRandomMACFeatureForSecuredNetworksEnabled;
-(void)_updateWAPIEnabled;
-(void)_updateWPA3Properties:(struct __WiFiManagerClient *)arg0 ;
-(void)_updateWithDeviceAttachment:(struct __WiFiDeviceClient *)arg0 ;
-(void)_userAutoJoinStateDidChange:(BOOL)arg0 info:(id)arg1 ;
-(void)asyncMISDiscoveryState:(id)arg0 ;
-(void)asyncMISState:(id)arg0 ;
-(void)asyncPowered:(id)arg0 ;
-(void)asyncUserAutoJoinState:(id)arg0 ;
-(void)dealloc;
-(void)dispatchAskToJoinAction:(NSUInteger)arg0 notificationId:(unsigned int)arg1 network:(id)arg2 ;
-(void)dispatchCertificateTrustAction:(NSInteger)arg0 profile:(id)arg1 ;
-(void)dispatchJoinRecommendationAction:(NSInteger)arg0 profile:(id)arg1 ;
-(void)reloadConfiguration;
-(void)setAutoJoinEnabled:(BOOL)arg0 ;
-(void)setClientTypeAsForeground;
-(void)setEnableRandomMACForNetwork:(id)arg0 enable:(BOOL)arg1 randomMAC:(id)arg2 ;
-(void)setHasShownSBPickerDontAsk:(BOOL)arg0 ;
-(void)setIsCoreWiFiEnabled:(BOOL)arg0 ;
-(void)setMISDiscoveryState:(BOOL)arg0 immediateDisable:(BOOL)arg1 ;
-(void)setMISState:(BOOL)arg0 ;
-(void)setPowerModificationDisableState:(BOOL)arg0 ;


@end


#endif