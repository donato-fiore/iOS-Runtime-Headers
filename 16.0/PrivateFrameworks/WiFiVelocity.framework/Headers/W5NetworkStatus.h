// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef W5NETWORKSTATUS_H
#define W5NETWORKSTATUS_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface W5NetworkStatus : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) unsigned int isAppleReachable; // ivar: _isAppleReachable
@property (copy, nonatomic) NSArray *primaryDNSAddresses; // ivar: _primaryDNSAddresses
@property (copy, nonatomic) NSArray *primaryIPv4Addresses; // ivar: _primaryIPv4Addresses
@property (copy, nonatomic) NSString *primaryIPv4InterfaceName; // ivar: _primaryIPv4InterfaceName
@property (copy, nonatomic) NSString *primaryIPv4Router; // ivar: _primaryIPv4Router
@property (copy, nonatomic) NSString *primaryIPv4ServiceID; // ivar: _primaryIPv4ServiceID
@property (copy, nonatomic) NSString *primaryIPv4ServiceName; // ivar: _primaryIPv4ServiceName
@property (copy, nonatomic) NSArray *primaryIPv6Addresses; // ivar: _primaryIPv6Addresses
@property (copy, nonatomic) NSString *primaryIPv6InterfaceName; // ivar: _primaryIPv6InterfaceName
@property (copy, nonatomic) NSString *primaryIPv6Router; // ivar: _primaryIPv6Router
@property (copy, nonatomic) NSString *primaryIPv6ServiceID; // ivar: _primaryIPv6ServiceID
@property (copy, nonatomic) NSString *primaryIPv6ServiceName; // ivar: _primaryIPv6ServiceName


+(BOOL)supportsSecureCoding;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNetworkStatus:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif