// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTTTELEPHONYUTILITIES_H
#define RTTTELEPHONYUTILITIES_H

@class ACAccountStore, NSNumber, AXDispatchTimer, NSSet, CTXPCContexts, NSArray, CNContactStore, NSString, CTXPCServiceSubscriptionContext, NSMutableDictionary, CoreTelephonyClient;
@protocol CoreTelephonyClientCarrierBundleDelegate, TUCallCapabilitiesDelegatePrivate, TUCallCapabilitiesDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RTTTelephonyUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate, TUCallCapabilitiesDelegatePrivate, TUCallCapabilitiesDelegate>

 {
    ACAccountStore *_accountStore;
    NSNumber *_callCapabilitiesSupportsTelephonyCalls;
    AXDispatchTimer *_icloudAccountConsolidator;
    AXDispatchTimer *_icloudRelayConsolidator;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accountStoreQueue; // ivar: _accountStoreQueue
@property NSUInteger activeContextCount; // ivar: _activeContextCount
@property (retain) NSSet *allVoiceContexts; // ivar: _allVoiceContexts
@property (retain) CTXPCContexts *cachedActiveContexts; // ivar: _cachedActiveContexts
@property (retain) NSArray *cachedSubscriptionContexts; // ivar: _cachedSubscriptionContexts
@property (retain) NSNumber *callCapabilitiesSupportsTelephonyCalls;
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (retain) CTXPCServiceSubscriptionContext *defaultVoiceContext; // ivar: _defaultVoiceContext
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL headphoneJackSupportsTTY; // ivar: _headphoneJackSupportsTTY
@property (retain, nonatomic) NSMutableDictionary *phoneNumberInfoCache; // ivar: _phoneNumberInfoCache
@property (readonly) Class superclass;
@property (retain, nonatomic) CoreTelephonyClient *telephonyClient; // ivar: _telephonyClient
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *telephonyUpdateQueue; // ivar: _telephonyUpdateQueue


+(BOOL)TTYHardwareEnabledForAnyActiveContext;
+(BOOL)TTYSoftwareEnabledForAnyActiveContext;
+(BOOL)hardwareTTYIsSupported;
+(BOOL)hardwareTTYIsSupportedForContext:(id)arg0 ;
+(BOOL)isOnlyRTTSupported;
+(BOOL)isOnlyRTTSupportedForContext:(id)arg0 ;
+(BOOL)isRTTCallHoldSupportedForContext:(id)arg0 ;
+(BOOL)isRTTSupported;
+(BOOL)isRTTSupportedForContext:(id)arg0 ;
+(BOOL)isRelayRTTSupported;
+(BOOL)isTTYSupported;
+(BOOL)isTTYSupportedForContext:(id)arg0 ;
+(BOOL)relayIsSupported;
+(BOOL)relayIsSupportedForContext:(id)arg0 ;
+(BOOL)shouldUseRTT;
+(BOOL)shouldUseRTTForContext:(id)arg0 ;
+(BOOL)softwareTTYIsSupported;
+(BOOL)softwareTTYIsSupportedForContext:(id)arg0 ;
+(NSInteger)currentSupportedTextingType;
+(id)relayPhoneNumber;
+(id)relayPhoneNumberForContext:(id)arg0 ;
+(id)sharedCallCenter;
+(id)sharedUtilityProvider;
+(void)performCallCenterTask:(id)arg0 ;
-(BOOL)answerRTTCallAsMutedForCall:(id)arg0 ;
-(BOOL)contactIsTTYContact:(id)arg0 ;
-(BOOL)contactPathIsMe:(id)arg0 ;
-(BOOL)currentProcessHandlesCloudRelay;
-(BOOL)deviceIsTinker;
-(BOOL)isRTTCallHoldSupportedForContext:(id)arg0 ;
-(BOOL)isTTYOverIMSSupportedForContext:(id)arg0 ;
-(BOOL)isTTYSupportedForContext:(id)arg0 ;
-(BOOL)relayIsSupported;
-(BOOL)relayRTTIsSupported;
-(BOOL)reloadRelayPhoneNumbers;
-(NSUInteger)currentPreferredTransportMethod;
-(NSUInteger)currentPreferredTransportMethodForContext:(id)arg0 ;
-(id)activeContexts;
-(id)contactPathForCall:(id)arg0 ;
-(id)contextForCall:(id)arg0 ;
-(id)getCarrierValueForKey:(id)arg0 andContext:(id)arg1 ;
-(id)getCarrierValueForKeyHierarchy:(id)arg0 andContext:(id)arg1 ;
-(id)init;
-(id)labelFromUUID:(id)arg0 ;
-(id)myPhoneNumber;
-(id)phoneNumberForContext:(id)arg0 ;
-(id)phoneNumberFromUUID:(id)arg0 ;
-(id)relayNumberForContext:(id)arg0 ;
-(id)subscriptionContexts;
-(id)ttyMeContact;
-(void)_processiCloudAccountForRTT;
-(void)activeSubscriptionsDidChange;
-(void)carrierSettingsDidChange;
-(void)dealloc;
-(void)didChangeOutgoingRelayCallerID;
-(void)didChangeRelayCallingAvailability;
-(void)didChangeRelayCallingCapabilities;
-(void)didChangeTelephonyCallingSupport;
-(void)headphoneStateChangedNotification:(id)arg0 ;
-(void)iCloudAccountDidChange:(id)arg0 ;
-(void)iCloudRTTRelayDidChange:(id)arg0 ;
-(void)listenForCloudRelayChanges;
-(void)mediaServerDied;
-(void)purgePhoneNumberInfoCache;
-(void)registerNotifications;
-(void)reloadDefaultVoiceContext;
-(void)setTTYDictionaryAvailability:(BOOL)arg0 ;
-(void)subscriptionInfoDidChange;
-(void)updateHeadphoneState;


@end


#endif