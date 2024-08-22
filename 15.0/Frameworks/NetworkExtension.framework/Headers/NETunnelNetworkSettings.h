// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NETUNNELNETWORKSETTINGS_H
#define NETUNNELNETWORKSETTINGS_H

@class NSString;
@protocol NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NEDNSSettings.h"
#import "NEProxySettings.h"

@interface NETunnelNetworkSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>



@property (copy) NEDNSSettings *DNSSettings; // ivar: _DNSSettings
@property (copy) NEProxySettings *proxySettings; // ivar: _proxySettings
@property (readonly) NSString *tunnelRemoteAddress; // ivar: _tunnelRemoteAddress


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTunnelRemoteAddress:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif