// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTSELECTEDPNRSUBSCRIPTION_H
#define FTSELECTEDPNRSUBSCRIPTION_H

@class NSRecursiveLock, CoreTelephonyClient, NSString;
@protocol CoreTelephonyClientDelegate, CoreTelephonyClientSuppServicesDelegate;

#import <Foundation/Foundation.h>

#import "FTSelectedPNRSubscriptionCache.h"

@interface FTSelectedPNRSubscription : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSuppServicesDelegate>

 {
    NSRecursiveLock *_lock;
    CoreTelephonyClient *_coreTelephonyClient;
    FTSelectedPNRSubscriptionCache *_cache;
    BOOL _isCacheValid;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isPhoneNumber:(id)arg0 equivalentToExistingPhoneNumber:(id)arg1 ;
+(id)sharedInstance;
-(BOOL)_doesSubscriptionInfoContainMultipleLabels:(id)arg0 ;
-(BOOL)_doesSubscriptionInfoContainMultipleUniqueLabels:(id)arg0 ;
-(BOOL)_isIdentityFallbackProhibitedForDeviceBasedOnCapability:(NSInteger)arg0 subscriptionInfo:(id)arg1 ;
-(BOOL)_isInDualPhoneIdentityModeBasedOnCapability:(NSInteger)arg0 ;
-(BOOL)_legacy_isPhoneNumberEmergencyNumber:(id)arg0 ;
-(BOOL)isDeviceInDualPhoneIdentityMode;
-(BOOL)isPhoneNumberEmergencyNumber:(id)arg0 ;
-(BOOL)isSelectedPhoneNumberRegistrationSubscriptionContext:(id)arg0 ;
-(id)_firstPresentSubscriptionFromAvailableSubscriptions:(id)arg0 ;
-(id)_protected_reevaluateCacheIfNeededAndPersistUpdate:(BOOL)arg0 ;
-(id)_reevaluateCachedActiveSubscriptionWithError:(*id)arg0 ;
-(id)_reevaluateCachedSelectedPhoneNumberRegistrationWithSubscription:(id)arg0 activeContexts:(id)arg1 fallbackProhibited:(BOOL)arg2 persistUpdate:(BOOL)arg3 error:(*id)arg4 ;
-(id)_reevaluateCachedSelectedPhoneNumberWithContext:(id)arg0 error:(*id)arg1 ;
-(id)_reevaluateCachedSubscriptionWithError:(*id)arg0 ;
-(id)_subscriptionFromAvailableSubscriptions:(id)arg0 matchingSelectedLabel:(id)arg1 ;
-(id)init;
-(id)selectedPhoneNumberRegistrationSubscriptionWithError:(*id)arg0 ;
-(id)selectedRegistrationPhoneNumberWithError:(*id)arg0 ;
-(id)setSelectedPhoneNumberRegistrationSubscriptionNumber:(id)arg0 ;
-(void)_distributed_invalidateCache;
-(void)_protected_invalidateCache;
-(void)_reevaluateDualIdentityModeWithSubscriptionInfo:(id)arg0 ;
-(void)activeSubscriptionsDidChange;
-(void)dealloc;
-(void)dualSimCapabilityDidChange;
-(void)invalidateCache;
-(void)persistSelectedPhoneNumberRegistrationSubscriptionIfNeeded;
-(void)phoneNumberAvailable:(id)arg0 ;
-(void)phoneNumberChanged:(id)arg0 ;
-(void)subscriptionInfoDidChange;


@end


#endif