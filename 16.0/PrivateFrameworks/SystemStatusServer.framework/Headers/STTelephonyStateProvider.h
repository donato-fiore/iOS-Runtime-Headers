// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STTELEPHONYSTATEPROVIDER_H
#define STTELEPHONYSTATEPROVIDER_H

@class NSHashTable, CoreTelephonyClient, NSArray, RadiosPreferences, NSString;
@protocol BSDebugDescriptionProviding, CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSuppServicesDelegate, RadiosPreferencesDelegate, BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "STTelephonySubscriptionContext.h"

@interface STTelephonyStateProvider : NSObject <BSDebugDescriptionProviding, CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSuppServicesDelegate, RadiosPreferencesDelegate, BSInvalidatable>

 {
    *__CTServerConnection _serverConnection;
    BOOL _cachedDualSIMEnabled;
    BOOL _cachedRadioModuleDead;
    BOOL _containsCellularRadio;
    BOOL _airplaneModeEnabled;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueryQueue;
    CoreTelephonyClient *_coreTelephonyClient;
    STTelephonySubscriptionContext *_slot1SubscriptionContext;
    STTelephonySubscriptionContext *_slot2SubscriptionContext;
    NSArray *_cachedCTContexts;
    NSInteger _cachedSuppressesCellDataIndicator;
    NSInteger _cachedSuppressesCellIndicators;
    NSInteger _cachedNeedsUserIdentificationModule;
    RadiosPreferences *_radiosPreferences;
    *BOOL _telephonyDaemonRestartHandlerCanceled;
}


@property (readonly, nonatomic, getter=isCellularRadioCapabilityActive) BOOL cellularRadioCapabilityActive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDualSIMEnabled) BOOL dualSIMEnabled;
@property (readonly, nonatomic) BOOL hasCellularTelephony; // ivar: _hasCellularTelephony
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL needsUserIdentificationModule;
@property (readonly, nonatomic, getter=isRadioModuleDead) BOOL radioModuleDead;
@property (readonly) Class superclass;


-(BOOL)isSIMPresentForSlot:(NSInteger)arg0 ;
-(id)carrierBundleInfoForSlot:(NSInteger)arg0 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)mobileEquipmentInfoForSlot:(NSInteger)arg0 ;
-(id)subscriptionInfoForSlot:(NSInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
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