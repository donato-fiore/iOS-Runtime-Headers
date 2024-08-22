// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDETAILCONTEXTPRIVATEADDRESSCONFIG_H
#define WFDETAILCONTEXTPRIVATEADDRESSCONFIG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFDetailContextPrivateAddressConfig : NSObject

@property (readonly, nonatomic, getter=isAlwaysDisplayRandomAddress) BOOL alwaysDisplayRandomAddress; // ivar: _alwaysDisplayRandomAddress
@property (nonatomic, getter=isConnectedWithHardwareAddress) BOOL connectedWithHardwareAddress; // ivar: _connectedWithHardwareAddress
@property (nonatomic, getter=isEnabledForSecuredNetworks) BOOL enabledForSecuredNetworks; // ivar: _enabledForSecuredNetworks
@property (copy, nonatomic) NSString *hardwareMACAddress; // ivar: _hardwareMACAddress
@property (copy, nonatomic) NSString *randomMACAddress; // ivar: _randomMACAddress
@property (nonatomic, getter=isRandomMACAddressConfigurable) BOOL randomMACAddressConfigurable; // ivar: _randomMACAddressConfigurable
@property (nonatomic, getter=isRandomMACAddressDisabled) BOOL randomMACAddressDisabled; // ivar: _randomMACAddressDisabled
@property (nonatomic, getter=isRandomMACFeatureEnabled) BOOL randomMACFeatureEnabled; // ivar: _randomMACFeatureEnabled
@property (nonatomic, getter=isRandomMACSwitchOn) BOOL randomMACSwitchOn; // ivar: _randomMACSwitchOn


-(id)initWithRandomMACAddress:(id)arg0 hardwareMACAddress:(id)arg1 randomMACSwitchOn:(BOOL)arg2 randomMACFeatureEnabled:(BOOL)arg3 randomMACAddressConfigurable:(BOOL)arg4 enabledForSecureNetworks:(BOOL)arg5 randomMACAddressDisabled:(BOOL)arg6 connectedWithHardwareAddress:(BOOL)arg7 ;


@end


#endif