// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRDEVICEOPERATIONALPROPERTIES_H
#define NRDEVICEOPERATIONALPROPERTIES_H

@class NSArray;


#import "NRDeviceProperties.h"

@interface NRDeviceOperationalProperties : NRDeviceProperties

@property (retain, nonatomic) NSArray *allowedLinkSubtypes; // ivar: _allowedLinkSubtypes
@property (retain, nonatomic) NSArray *allowedLinkTypes; // ivar: _allowedLinkTypes
@property (nonatomic) BOOL allowsDirectToCloud; // ivar: _allowsDirectToCloud
@property (nonatomic) BOOL allowsPermittedClientsOnly; // ivar: _allowsPermittedClientsOnly
@property (nonatomic) NSUInteger bluetoothEndpointType; // ivar: _bluetoothEndpointType
@property (nonatomic) NSUInteger bluetoothRole; // ivar: _bluetoothRole
@property (nonatomic) BOOL handlesLinkRecommendations; // ivar: _handlesLinkRecommendations
@property (nonatomic) BOOL isReachableOverWiFi; // ivar: _isReachableOverWiFi
@property (nonatomic) BOOL providesPhoneCallRelaySupport; // ivar: _providesPhoneCallRelaySupport
@property (nonatomic) NSUInteger proxyCapability; // ivar: _proxyCapability
@property (nonatomic) BOOL proxyProviderRequiresWiFi; // ivar: _proxyProviderRequiresWiFi
@property (nonatomic) BOOL requiresReachability; // ivar: _requiresReachability
@property (nonatomic) unsigned short version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)copyPropertiesForDefaultPairedPhone;
+(id)copyPropertiesForDefaultPairedWatch;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resolve;


@end


#endif