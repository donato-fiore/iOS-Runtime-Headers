// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEETHERNETTUNNELNETWORKSETTINGS_H
#define NEETHERNETTUNNELNETWORKSETTINGS_H

@class NSString;


#import "NEPacketTunnelNetworkSettings.h"

@interface NEEthernetTunnelNetworkSettings : NEPacketTunnelNetworkSettings

@property (copy) NSString *ethernetAddress; // ivar: _ethernetAddress


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTunnelRemoteAddress:(id)arg0 ethernetAddress:(id)arg1 mtu:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif