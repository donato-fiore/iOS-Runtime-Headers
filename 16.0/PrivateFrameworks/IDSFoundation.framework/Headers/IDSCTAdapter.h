// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSCTADAPTER_H
#define IDSCTADAPTER_H

@class CoreTelephonyClient, NSString, NSHashTable, NSMutableDictionary, IMSystemMonitor;
@protocol CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientPNRDelegate, CoreTelephonyClientCarrierBundleDelegate, IMSystemMonitorListener;

#import <Foundation/Foundation.h>

#import "IDSCTAdapterCache.h"

@interface IDSCTAdapter : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientPNRDelegate, CoreTelephonyClientCarrierBundleDelegate, IMSystemMonitorListener>



@property (retain, nonatomic) IDSCTAdapterCache *cache; // ivar: _cache
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // ivar: _coreTelephonyClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL doesAnySIMSupportsSimultaneousVoiceAndDataRightNow;
@property (readonly, nonatomic) BOOL dualSIMCapabilityEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAnySIMInserted;
@property (readonly, nonatomic) BOOL isAnySIMUsable;
@property (retain, nonatomic) NSHashTable *listeners; // ivar: _listeners
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) NSMutableDictionary *registrationStateByLabelID; // ivar: _registrationStateByLabelID
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsIdentification;
@property (retain, nonatomic) IMSystemMonitor *systemMonitor; // ivar: _systemMonitor


+(BOOL)isPhoneNumber:(id)arg0 equivalentToExistingPhoneNumber:(id)arg1 ;
+(id)sharedInstance;
-(BOOL)_legacy_supportsSMSIdentification;
-(BOOL)isPNRNumber:(id)arg0 andPhoneBookNumber:(id)arg1 differentEnoughFromSIMIdentifier:(id)arg2 toReregisterWithNewNumber:(*id)arg3 ;
-(BOOL)isPhoneNumberEmergencyNumber:(id)arg0 ;
-(id)CTPNRForSIM:(id)arg0 ;
-(id)SIMForIdentifier:(id)arg0 ;
-(id)_unlocked_currentSIMsWithError:(*id)arg0 ;
-(id)carrierBundleValueFromAllSIMsForKey:(id)arg0 ofType:(Class)arg1 withFallback:(id)arg2 ;
-(id)carrierBundleValueFromSIM:(id)arg0 forKey:(id)arg1 ofType:(Class)arg2 withFallback:(id)arg3 ;
-(id)contextForSim:(id)arg0 ;
-(id)currentSIMsWithError:(*id)arg0 ;
-(id)initWithCoreTelephonyClient:(id)arg0 systemMonitor:(id)arg1 ;
-(void)SIMStatusDidChange:(id)arg0 status:(id)arg1 ;
-(void)_checkRegistrationStateForContext:(id)arg0 ;
-(void)_iterateListenersForSelector:(SEL)arg0 block:(id)arg1 ;
-(void)_locked_accessCache:(id)arg0 ;
-(void)_unlocked_iterateListenersForSelector:(SEL)arg0 block:(id)arg1 ;
-(void)addListener:(id)arg0 ;
-(void)carrierBundleChange:(id)arg0 ;
-(void)context:(id)arg0 capabilitiesChanged:(id)arg1 ;
-(void)context:(id)arg0 pnrSupportChanged:(BOOL)arg1 ;
-(void)dealloc;
-(void)didDetectSimDeactivation:(id)arg0 info:(id)arg1 ;
-(void)dualSimCapabilityDidChange;
-(void)operatorBundleChange:(id)arg0 ;
-(void)phoneNumberChanged:(id)arg0 ;
-(void)pnrReadyStateNotification:(id)arg0 regState:(BOOL)arg1 ;
-(void)removeListener:(id)arg0 ;
-(void)subscriptionInfoDidChange;
-(void)systemApplicationDidBecomeActive;


@end


#endif