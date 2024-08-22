// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEVPNPROTOCOLPPP_H
#define NEVPNPROTOCOLPPP_H



#import "NEVPNProtocol.h"
#import "NEIPv4Settings.h"
#import "NEIPv6Settings.h"

@interface NEVPNProtocolPPP : NEVPNProtocol

@property (copy) NEIPv4Settings *IPv4Settings; // ivar: _IPv4Settings
@property (copy) NEIPv6Settings *IPv6Settings; // ivar: _IPv6Settings
@property NSInteger authenticationMethod; // ivar: _authenticationMethod
@property BOOL verboseLoggingEnabled; // ivar: _verboseLoggingEnabled


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)setServiceProtocolsInService:(struct __SCNetworkService *)arg0 ;
-(BOOL)updateWithServiceProtocolsFromService:(struct __SCNetworkService *)arg0 ;
-(id)copyLegacyDictionary;
-(id)copyLegacyDictionaryComplete:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif