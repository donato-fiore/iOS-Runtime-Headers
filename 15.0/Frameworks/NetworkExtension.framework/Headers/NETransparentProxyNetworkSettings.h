// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NETRANSPARENTPROXYNETWORKSETTINGS_H
#define NETRANSPARENTPROXYNETWORKSETTINGS_H

@class NSArray;


#import "NETunnelNetworkSettings.h"

@interface NETransparentProxyNetworkSettings : NETunnelNetworkSettings

@property (copy) NSArray *excludedNetworkRules; // ivar: _excludedNetworkRules
@property (copy) NSArray *includedNetworkRules; // ivar: _includedNetworkRules
@property BOOL isFullyTransparent; // ivar: _isFullyTransparent


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)validateNetworkRule:(id)arg0 collectErrors:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif