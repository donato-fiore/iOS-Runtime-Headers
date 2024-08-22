// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEPACKETTUNNELNETWORKSETTINGS_H
#define NEPACKETTUNNELNETWORKSETTINGS_H

@class NSNumber;


#import "NETunnelNetworkSettings.h"
#import "NEIPv4Settings.h"
#import "NEIPv6Settings.h"

@interface NEPacketTunnelNetworkSettings : NETunnelNetworkSettings

@property (copy) NEIPv4Settings *IPv4Settings; // ivar: _IPv4Settings
@property (copy) NEIPv6Settings *IPv6Settings; // ivar: _IPv6Settings
@property (copy) NSNumber *MTU; // ivar: _MTU
@property (copy) NSNumber *tunnelOverheadBytes; // ivar: _tunnelOverheadBytes


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif