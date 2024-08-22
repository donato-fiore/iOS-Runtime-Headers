// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _IDSDEVICE_H
#define _IDSDEVICE_H

@class NSDictionary, CUTWeakReference, IDSEndpointCapabilities, NSString, NSArray, NSDate, NSUUID, NSData;

#import <Foundation/Foundation.h>


@interface _IDSDevice : NSObject {
    NSDictionary *_info;
    CUTWeakReference *_account;
    CUTWeakReference *_serviceReference;
    int _nearbyToken;
    BOOL _nearby;
    BOOL _connected;
    BOOL _immutableCloudConnected;
    BOOL _cloudConnected;
}


@property (readonly, nonatomic) IDSEndpointCapabilities *capabilities; // ivar: _capabilities
@property (readonly, nonatomic, getter=isCloudConnected) BOOL cloudConnected;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic) NSString *deviceColor;
@property (readonly, nonatomic) NSInteger deviceType;
@property (readonly, nonatomic) NSString *enclosureColor;
@property (readonly, nonatomic) NSArray *identities;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isDefaultPairedDevice;
@property (readonly, nonatomic) BOOL isHSATrusted;
@property (readonly, nonatomic) BOOL isLocallyPaired;
@property (readonly, nonatomic) NSDate *lastActivityDate;
@property (readonly, nonatomic) NSArray *linkedUserURIs;
@property (readonly, nonatomic) BOOL locallyPresent;
@property (readonly, nonatomic) NSUInteger maxCompatibilityVersion;
@property (readonly, nonatomic) NSUInteger minCompatibilityVersion;
@property (readonly, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isNearby) BOOL nearby;
@property (retain, nonatomic, setter=setNSUUID:) NSUUID *nsuuid;
@property (readonly, nonatomic) NSUInteger pairingProtocolVersion;
@property (readonly, nonatomic) NSString *productBuildVersion;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) NSData *pushToken;
@property (readonly, nonatomic) NSInteger relationship;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) NSUInteger serviceMinCompatibilityVersion;
@property (readonly, nonatomic) NSUUID *stableBluetoothIdentifier;
@property (readonly, nonatomic) BOOL supportsApplePay;
@property (readonly, nonatomic) BOOL supportsHandoff;
@property (readonly, nonatomic) BOOL supportsMMSRelay;
@property (readonly, nonatomic) BOOL supportsPhoneCalls;
@property (readonly, nonatomic) BOOL supportsSMSRelay;
@property (readonly, nonatomic) BOOL supportsTethering;
@property (readonly, nonatomic) BOOL supportsiCloudPairing;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *uniqueIDOverride;


-(BOOL)isTinker;
-(id)compactDescription;
-(id)description;
-(id)fullDescription;
-(id)initWithDictionary:(id)arg0 ;
-(void)_addIdentity:(id)arg0 ;
-(void)_cloudConnectedStateChanged;
-(void)_connectedStateChanged;
-(void)_nearbyStateChanged;
-(void)_setAccount:(id)arg0 ;
-(void)_stateChanged;
-(void)dealloc;


@end


#endif