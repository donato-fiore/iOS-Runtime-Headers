// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEVPNPROTOCOLIKEV2_H
#define NEVPNPROTOCOLIKEV2_H

@class NSArray, NSString;


#import "NEVPNProtocolIPSec.h"
#import "NEVPNIKEv2SecurityAssociationParameters.h"

@interface NEVPNProtocolIKEv2 : NEVPNProtocolIPSec

@property (readonly) NEVPNIKEv2SecurityAssociationParameters *IKESecurityAssociationParameters; // ivar: _IKESecurityAssociationParameters
@property (retain) NSArray *IKESecurityAssociationParametersArray; // ivar: _IKESecurityAssociationParametersArray
@property NSInteger certificateType; // ivar: _certificateType
@property (readonly) NEVPNIKEv2SecurityAssociationParameters *childSecurityAssociationParameters; // ivar: _childSecurityAssociationParameters
@property (retain) NSArray *childSecurityAssociationParametersArray; // ivar: _childSecurityAssociationParametersArray
@property NSInteger deadPeerDetectionRate; // ivar: _deadPeerDetectionRate
@property BOOL disableInitialContact; // ivar: _disableInitialContact
@property BOOL disableMOBIKE; // ivar: _disableMOBIKE
@property int disableMOBIKERetryOnWake; // ivar: _disableMOBIKERetryOnWake
@property BOOL disableRedirect; // ivar: _disableRedirect
@property BOOL enableFallback; // ivar: _enableFallback
@property BOOL enablePFS; // ivar: _enablePFS
@property BOOL enableRevocationCheck; // ivar: _enableRevocationCheck
@property NSInteger maximumTLSVersion; // ivar: _maximumTLSVersion
@property NSInteger minimumTLSVersion; // ivar: _minimumTLSVersion
@property NSUInteger mtu; // ivar: _mtu
@property int natKeepAliveOffloadEnable; // ivar: _natKeepAliveOffloadEnable
@property int natKeepAliveOffloadInterval; // ivar: _natKeepAliveOffloadInterval
@property BOOL opportunisticPFS; // ivar: _opportunisticPFS
@property (readonly) NSString *pluginType; // ivar: _pluginType
@property (copy) NSString *providerBundleIdentifier; // ivar: _providerBundleIdentifier
@property (copy) NSString *serverCertificateCommonName; // ivar: _serverCertificateCommonName
@property (copy) NSString *serverCertificateIssuerCommonName; // ivar: _serverCertificateIssuerCommonName
@property BOOL strictRevocationCheck; // ivar: _strictRevocationCheck
@property NSInteger tunnelKind; // ivar: _tunnelKind
@property BOOL useConfigurationAttributeInternalIPSubnet; // ivar: _useConfigurationAttributeInternalIPSubnet
@property BOOL wakeForRekey; // ivar: _wakeForRekey


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(id)clone;
-(id)copyLegacyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPluginType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif