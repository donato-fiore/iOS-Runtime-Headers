// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCTSUBSCRIPTIONUTILITIES_H
#define IMCTSUBSCRIPTIONUTILITIES_H

@class NSMutableDictionary, CoreTelephonyClient, NSString, NSArray, IDSPhoneSubscriptionSelector;
@protocol CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate;

#import <Foundation/Foundation.h>

#import "IMCTXPCServiceSubscriptionInfo.h"

@interface IMCTSubscriptionUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate>



@property (retain, nonatomic) NSMutableDictionary *cachedCarrierSettings; // ivar: _cachedCarrierSettings
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // ivar: _coreTelephonyClient
@property (readonly, copy, nonatomic) NSString *ctPhoneNumber;
@property (readonly, nonatomic) NSArray *ctServiceSubscriptions;
@property (retain, nonatomic) IMCTXPCServiceSubscriptionInfo *ctSubscriptionInfo; // ivar: _ctSubscriptionInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSPhoneSubscriptionSelector *phoneSubscriptionSelector; // ivar: _phoneSubscriptionSelector
@property (readonly, copy, nonatomic) NSArray *registeredPhoneNumbers;
@property (readonly, copy, nonatomic) NSArray *registeredSIMIDs;
@property (readonly, copy, nonatomic) NSArray *registeredSubscriptionSlotIDs;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)deviceSupportsMultipleSubscriptions;
-(NSUInteger)numberOfSubscriptions;
-(id)_CTSIMSFromPhoneSubscriptions:(id)arg0 ;
-(id)_cachedCarrierKeyForKeyHierarchy:(id)arg0 bundleType:(NSInteger)arg1 ;
-(id)_cachedCarrierSettingsUniqueIDKeyForSubscriptionContext:(id)arg0 ;
-(id)_createSettingsDictionaryForUniqueID:(id)arg0 ;
-(id)_getCachedCarrierSettingValueForBundleKey:(id)arg0 uniqueID:(id)arg1 ;
-(id)_getCachedSettingOrReadFromBundleForCarrierBundleKey:(id)arg0 bundleType:(NSInteger)arg1 forContext:(id)arg2 defaultValue:(id)arg3 ;
-(id)_getCarrierSettingsForUniqueID:(id)arg0 ;
-(id)_iMessageService;
-(id)copyBundleValueForSubscriptionContext:(id)arg0 keyHierarchy:(id)arg1 bundleType:(NSInteger)arg2 defaultValue:(id)arg3 valueIfError:(id)arg4 ;
-(id)copyCarrierBundleValueForSubscriptionContext:(id)arg0 keyHierarchy:(id)arg1 defaultValue:(id)arg2 valueIfError:(id)arg3 ;
-(id)copyOperatorBundleValueForSubscriptionContext:(id)arg0 keyHierarchy:(id)arg1 defaultValue:(id)arg2 valueIfError:(id)arg3 ;
-(id)ctSubscriptionInfoWithError:(*id)arg0 ;
-(id)init;
-(id)newSubscriptionContextWithPhoneNumber:(id)arg0 labelID:(id)arg1 isDefaultVoice:(id)arg2 isDefaultData:(id)arg3 slot:(NSInteger)arg4 ;
-(id)newSubscriptionContextWithSlot:(NSInteger)arg0 ;
-(id)stringForBundleType:(NSInteger)arg0 ;
-(void)_setCachedCarrierSettingValue:(id)arg0 bundleKey:(id)arg1 uniqueID:(id)arg2 ;
-(void)_setCarrierSettings:(id)arg0 uniqueID:(id)arg1 ;
-(void)carrierBundleChange:(id)arg0 ;
-(void)resetCacheSubscriptionInfo;
-(void)subscriptionInfoDidChange;


@end


#endif