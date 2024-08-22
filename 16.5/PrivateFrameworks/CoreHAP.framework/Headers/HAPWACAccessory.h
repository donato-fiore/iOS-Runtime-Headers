// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPWACACCESSORY_H
#define HAPWACACCESSORY_H

@class HMFObject, NSData, CUWiFiDevice, NSString, NSUUID, NSDictionary, NSNumber;



@interface HAPWACAccessory : HMFObject {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSUInteger authFeatures; // ivar: _authFeatures
@property (readonly, nonatomic) NSData *bssid; // ivar: _bssid
@property (readonly, nonatomic) CUWiFiDevice *cuWiFiDevice; // ivar: _cuWiFiDevice
@property (readonly, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (nonatomic) CGFloat discoveryTime; // ivar: _discoveryTime
@property (readonly, nonatomic) BOOL homeKitPaired; // ivar: _homeKitPaired
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isAirPlayAccessory;
@property (readonly, nonatomic) BOOL isHomeKitAccessory;
@property (readonly, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (readonly, nonatomic) NSString *model; // ivar: _model
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL pairSetupWAC; // ivar: _pairSetupWAC
@property (readonly, nonatomic) NSDictionary *rawScanResult; // ivar: _rawScanResult
@property (readonly, nonatomic) BOOL requiresOwnershipToken; // ivar: _requiresOwnershipToken
@property (readonly, nonatomic) NSNumber *rssi; // ivar: _rssi
@property (readonly, nonatomic) NSData *setupHash; // ivar: _setupHash
@property (readonly, nonatomic) NSString *ssid; // ivar: _ssid
@property (readonly, nonatomic) NSUInteger supportedWiFiBands; // ivar: _supportedWiFiBands
@property (readonly, nonatomic) BOOL supportsAirPlay; // ivar: _supportsAirPlay
@property (readonly, nonatomic) BOOL supportsCertAuth;
@property (readonly, nonatomic) BOOL supportsLegacyWAC;
@property (readonly, nonatomic) BOOL supportsTokenAuth;
@property (readonly, nonatomic) BOOL supportsWAC2;
@property (readonly, nonatomic) NSUInteger version; // ivar: _version
@property (readonly, nonatomic) NSNumber *wacCategory; // ivar: _wacCategory


-(id)description;
-(id)initWithName:(id)arg0 identifier:(id)arg1 category:(id)arg2 ssid:(id)arg3 deviceId:(id)arg4 flags:(unsigned int)arg5 ;
-(id)initWithWiFiDevice:(id)arg0 ;
-(void)__setupSupportedFlags:(unsigned int)arg0 ;
-(void)updateWithHAPWACAccessory:(id)arg0 ;


@end


#endif