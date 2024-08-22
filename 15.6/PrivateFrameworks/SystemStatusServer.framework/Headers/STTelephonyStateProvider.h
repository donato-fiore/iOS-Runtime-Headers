// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STTELEPHONYSTATEPROVIDER_H
#define STTELEPHONYSTATEPROVIDER_H

@class NSArray, CoreTelephonyClient, NSString, NSHashTable, RadiosPreferences;
@protocol BSDebugDescriptionProviding, CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientCarrierBundleDelegate, RadiosPreferencesDelegate, BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "STTelephonySubscriptionContext.h"

@interface STTelephonyStateProvider : NSObject <BSDebugDescriptionProviding, CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientCarrierBundleDelegate, RadiosPreferencesDelegate, BSInvalidatable>

 {
    *__CTServerConnection _serverConnection;
}


@property (nonatomic, getter=isAirplaneModeEnabled) BOOL airplaneModeEnabled; // ivar: _airplaneModeEnabled
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueryQueue; // ivar: _backgroundQueryQueue
@property (copy, nonatomic) NSArray *cachedCTContexts; // ivar: _cachedCTContexts
@property (nonatomic) BOOL cachedDualSIMEnabled; // ivar: _cachedDualSIMEnabled
@property (nonatomic) NSInteger cachedNeedsUserIdentificationModule; // ivar: _cachedNeedsUserIdentificationModule
@property (nonatomic) BOOL cachedRadioModuleDead; // ivar: _cachedRadioModuleDead
@property (nonatomic) NSInteger cachedSuppressesCellDataIndicator; // ivar: _cachedSuppressesCellDataIndicator
@property (nonatomic) NSInteger cachedSuppressesCellIndicators; // ivar: _cachedSuppressesCellIndicators
@property (readonly, nonatomic, getter=isCellularRadioCapabilityActive) BOOL cellularRadioCapabilityActive;
@property (readonly, nonatomic) BOOL containsCellularRadio; // ivar: _containsCellularRadio
@property (readonly, nonatomic) CoreTelephonyClient *coreTelephonyClient; // ivar: _coreTelephonyClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDualSIMEnabled) BOOL dualSIMEnabled;
@property (readonly, nonatomic) BOOL hasCellularTelephony; // ivar: _hasCellularTelephony
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (readonly, nonatomic) BOOL needsUserIdentificationModule;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // ivar: _observerQueue
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic, getter=isRadioModuleDead) BOOL radioModuleDead;
@property (readonly, nonatomic) RadiosPreferences *radiosPreferences; // ivar: _radiosPreferences
@property (retain, nonatomic) STTelephonySubscriptionContext *slot1SubscriptionContext; // ivar: _slot1SubscriptionContext
@property (retain, nonatomic) STTelephonySubscriptionContext *slot2SubscriptionContext; // ivar: _slot2SubscriptionContext
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressesCellDataIndicator;
@property (nonatomic) *BOOL telephonyDaemonRestartHandlerCanceled; // ivar: _telephonyDaemonRestartHandlerCanceled


-(BOOL)_hasCTContextForSlot:(NSInteger)arg0 ;
-(BOOL)_isSIMPresentForSlot:(NSInteger)arg0 ;
-(BOOL)isSIMPresentForSlot:(NSInteger)arg0 ;
-(NSInteger)_subscriptionSlotForContext:(id)arg0 ;
-(id)_backgroundQueryQueue_SIMStatusForCTContext:(id)arg0 ;
-(id)_backgroundQueryQueue_carrierBundleInfoForCTContext:(id)arg0 ;
-(id)_backgroundQueryQueue_mobileEquipmentInfoForCTContext:(id)arg0 ;
-(id)_backgroundQueryQueue_shortSIMLabelForCTContext:(id)arg0 ;
-(id)_backgroundQueryQueue_subscriptionContextWithInfoNotRequiringSIMForCTContext:(id)arg0 ;
-(id)_carrierNameForOperatorName:(id)arg0 withContext:(id)arg1 ;
-(id)_internalQueue_subscriptionContextForSlot:(NSInteger)arg0 ;
-(id)_newSubscriptionContext;
-(id)_subscriptionContextForCTContext:(id)arg0 ;
-(id)carrierBundleInfoForSlot:(NSInteger)arg0 ;
-(id)debugDescriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)mobileEquipmentInfoForSlot:(NSInteger)arg0 ;
-(id)subscriptionInfoForSlot:(NSInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct __CTServerConnection *)_serverConnection;
-(void)_airplaneModeDidChange:(BOOL)arg0 ;
-(void)_applyInfoNotRequiringSIMFromContext:(id)arg0 toContext:(id)arg1 ;
-(void)_cancelFakeCellularRegistrationForContext:(id)arg0 ;
-(void)_cancelFakeRegistrationForContext:(id)arg0 ;
-(void)_cancelFakeServiceForContext:(id)arg0 ;
-(void)_handleCellChangedForContext:(id)arg0 withCTContext:(id)arg1 ;
-(void)_handleNetworkReselectionNeeded:(BOOL)arg0 forCTContext:(id)arg1 ;
-(void)_handleTelephonyDaemonRestart;
-(void)_hideDataIndicatorChanged:(id)arg0 ;
-(void)_internalQueue_notifyObserversOfCarrierBundleInfoChangeForSlot:(NSInteger)arg0 ;
-(void)_internalQueue_notifyObserversOfMobileEquipmentInfoChangeForSlot:(NSInteger)arg0 ;
-(void)_internalQueue_notifyObserversOfSubscriptionInfoChangeForSlot:(NSInteger)arg0 ;
-(void)_logSubscriptionEvent:(id)arg0 ;
-(void)_logSubscriptionEvent:(id)arg0 forCTContext:(id)arg1 ;
-(void)_logSubscriptionEvent:(id)arg0 forContext:(id)arg1 ;
-(void)_postponementStateChanged;
-(void)_purgeSlot1SubscriptionState;
-(void)_purgeSlot2SubscriptionState;
-(void)_purgeSubscriptionState;
-(void)_queryCallForwardingStateForCTContext:(id)arg0 ;
-(void)_queryRegistrationStatusForCTContext:(id)arg0 ;
-(void)_querySubscriptionStateForCTContext:(id)arg0 ;
-(void)_reallySetOperatorName:(id)arg0 inSubscriptionContext:(id)arg1 ;
-(void)_registerForServerConnectionNotifications;
-(void)_serverConnectionDidError:(struct ? )arg0 ;
-(void)_setCachedCTRegistrationCellStatus:(id)arg0 displayStatus:(id)arg1 forcedHome:(BOOL)arg2 inSubscriptionContext:(id)arg3 ;
-(void)_setCallForwardingIndicator:(NSUInteger)arg0 inSubscriptionContext:(id)arg1 ;
-(void)_setCarrierBundleInfo:(id)arg0 inSubscriptionContext:(id)arg1 ;
-(void)_setCellRegistrationStatus:(NSUInteger)arg0 inSubscriptionContext:(id)arg1 ;
-(void)_setCellStatus:(id)arg0 displayStatus:(id)arg1 forcedHome:(BOOL)arg2 changeCausedBySIMRemoval:(BOOL)arg3 inSubscriptionContext:(id)arg4 withCTContext:(id)arg5 ;
-(void)_setNetworkReselectionNeeded:(BOOL)arg0 inContext:(id)arg1 withCTContext:(id)arg2 ;
-(void)_setOperatorName:(id)arg0 inSubscriptionContext:(id)arg1 ;
-(void)_setRegistrationRejectionCauseCode:(NSInteger)arg0 inContext:(id)arg1 ;
-(void)_setRegistrationStatus:(NSUInteger)arg0 inSubscriptionContext:(id)arg1 ;
-(void)_setSIMStatus:(id)arg0 inSubscriptionContext:(id)arg1 ;
-(void)_setSignalStrengthBars:(NSUInteger)arg0 maxBars:(NSUInteger)arg1 inSubscriptionContext:(id)arg2 ;
-(void)_setSuppressesCellIndicators:(NSInteger)arg0 ;
-(void)_startFakeCellularRegistrationIfNecessaryForContext:(id)arg0 ;
-(void)_startFakeRegistrationIfNecessaryForContext:(id)arg0 ;
-(void)_startFakeServiceIfNecessaryForContext:(id)arg0 ;
-(void)_stopFakeServiceForContext:(id)arg0 ;
-(void)_updateCallForwardingIndicatorForContext:(id)arg0 ;
-(void)_updateDataConnectedSubscriptionContextForCTContext:(id)arg0 ;
-(void)_updateDataConnectionType;
-(void)_updateDataConnectionTypeForContext:(id)arg0 ;
-(void)_updateDataStatus:(id)arg0 inSubscriptionContext:(id)arg1 ;
-(void)_updateDualSIMCapabilitySendingNotification:(BOOL)arg0 ;
-(void)_updateLastKnownNetworkCountryCodeInContext:(id)arg0 withCTContext:(id)arg1 ;
-(void)_updateNetworkCountryCode:(id)arg0 inContext:(id)arg1 withCTContext:(id)arg2 ;
-(void)_updateRegistrationNowInSubscriptionContext:(id)arg0 ;
-(void)_updateState;
-(void)addObserver:(id)arg0 ;
-(void)airplaneModeChanged;
-(void)carrierBundleChange:(id)arg0 ;
-(void)cellChanged:(id)arg0 cell:(id)arg1 ;
-(void)currentDataSimChanged:(id)arg0 ;
-(void)dataStatus:(id)arg0 dataStatusInfo:(id)arg1 ;
-(void)dealloc;
-(void)displayStatusChanged:(id)arg0 status:(id)arg1 ;
-(void)dualSimCapabilityDidChange;
-(void)invalidate;
-(void)networkReselectionNeeded:(id)arg0 ;
-(void)networkSelected:(id)arg0 success:(BOOL)arg1 mode:(id)arg2 ;
-(void)operatorBundleChange:(id)arg0 ;
-(void)operatorNameChanged:(id)arg0 name:(id)arg1 ;
-(void)preferredDataSimChanged:(id)arg0 ;
-(void)rejectCauseCodeChanged:(id)arg0 causeCode:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)servingNetworkChanged:(id)arg0 ;
-(void)signalStrengthChanged:(id)arg0 info:(id)arg1 ;
-(void)simStatusDidChange:(id)arg0 status:(id)arg1 ;
-(void)subscriptionInfoDidChange;
-(void)suppServicesEvent:(id)arg0 event:(int)arg1 settingsType:(int)arg2 data:(id)arg3 ;


@end


#endif