// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTUSERCONFIGURATION_H
#define FTUSERCONFIGURATION_H

@class NSMutableDictionary, NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface FTUserConfiguration : NSObject {
    NSMutableDictionary *_cellularDataAvailableCache;
    NSMutableDictionary *_wifiAllowedCache;
    *network_usage_policy_client_s _usageClient;
}


@property (readonly, nonatomic) BOOL _nonWifiFaceTimeEntitled;
@property (nonatomic) BOOL allowAnyNetwork;
@property (nonatomic) BOOL cellularFaceTimeEnabled;
@property (nonatomic) *__CTServerConnection ctServerConnection; // ivar: _ctServerConnection
@property (nonatomic) BOOL isDeviceInDualPhoneIdentityMode;
@property (nonatomic) BOOL isDeviceInManualPhoneSelectionMode;
@property (retain, nonatomic) NSMutableDictionary *nonBTAllowedCache; // ivar: _nonBTAllowedCache
@property (copy, nonatomic) NSArray *selectedPhoneNumberRegistrationSubscriptionLabels;
@property (readonly, copy, nonatomic) NSNumber *selectedPhoneNumberRegistrationSubscriptionNumber;
@property (nonatomic) BOOL shouldCacheCTConnection; // ivar: _shouldCacheCTConnection


+(id)sharedInstance;
-(BOOL)_adequateInternalOrCarrierInstall;
-(BOOL)_getCellularDataEnabledForBundleID:(id)arg0 ;
-(BOOL)_getNonBluetoothDataAllowedForBundleID:(id)arg0 ;
-(BOOL)_getWifiDataAllowedForBundleID:(id)arg0 ;
-(BOOL)cellularDataEnabledForBundleId:(id)arg0 ;
-(BOOL)nonBluetoothAllowedForBundleId:(id)arg0 ;
-(BOOL)wifiAllowedForBundleId:(id)arg0 ;
-(id)init;
-(void)_clearCaches;
-(void)_setAppCellularDataEnabled:(BOOL)arg0 ;
-(void)_setupUsageHandlerIfNeeded;
-(void)dealloc;
-(void)silentlySetSelectedPhoneNumberRegistrationSubscriptionLabels:(id)arg0 ;


@end


#endif