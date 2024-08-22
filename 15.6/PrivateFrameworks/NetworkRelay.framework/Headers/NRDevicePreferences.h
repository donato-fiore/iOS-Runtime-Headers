// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRDEVICEPREFERENCES_H
#define NRDEVICEPREFERENCES_H

@class NSSet;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>

#import "NRDevicePreferencesQuickRelay.h"
#import "NRBluetoothLinkPreferences.h"
#import "NRDeviceIdentifier.h"

@interface NRDevicePreferences : NSObject {
    BOOL _internalDeviceSetupStarted;
    BOOL _internalDeviceSetupCompleted;
    os_unfair_lock_s _lock;
    NSUInteger _preferWiFiRequestCount;
    NSUInteger _quickRelayRequestCount;
    NRDevicePreferencesQuickRelay *_quickRelayPreference;
    NSObject<OS_xpc_object> *_connection;
    NRBluetoothLinkPreferences *_internalBluetoothLinkPreferences;
    NSSet *_internalPolicyTrafficClassifiers;
    NSUInteger _identifier;
}


@property (retain, nonatomic) NRBluetoothLinkPreferences *bluetoothLinkPreferences;
@property (retain, nonatomic) NRDeviceIdentifier *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic) BOOL hasPreferWiFiRequest;
@property (readonly, nonatomic) BOOL hasQuickRelayRequest;
@property (retain, nonatomic) NSSet *policyTrafficClassifiers;


-(id)description;
-(id)initWithDeviceIdentifier:(id)arg0 ;
-(void)addPreferWiFiRequest;
-(void)addQuickRelayRequest;
-(void)cancel;
-(void)dealloc;
-(void)deviceSetupCompleted;
-(void)deviceSetupStarted;
-(void)removeAllQuickRelayRequests;
-(void)removePreferWiFiRequest;
-(void)removeQuickRelayRequest;


@end


#endif