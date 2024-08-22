// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPPROXYAGENTNETWORKSTATISTICS_H
#define NSPPROXYAGENTNETWORKSTATISTICS_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NSPProxyAgentNetworkStatistics : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger egressProxyConnectionError; // ivar: _egressProxyConnectionError
@property (nonatomic) NSUInteger egressProxyUnavailableError; // ivar: _egressProxyUnavailableError
@property (nonatomic) NSUInteger incompleteHandshakeStall; // ivar: _incompleteHandshakeStall
@property (nonatomic) NSUInteger ingressProxyConnectionCertError; // ivar: _ingressProxyConnectionCertError
@property (nonatomic) NSUInteger ingressProxyConnectionDNSBlocked; // ivar: _ingressProxyConnectionDNSBlocked
@property (nonatomic) NSUInteger ingressProxyConnectionDNSTimeout; // ivar: _ingressProxyConnectionDNSTimeout
@property (nonatomic) NSUInteger ingressProxyConnectionError; // ivar: _ingressProxyConnectionError
@property (nonatomic) NSUInteger ingressProxyConnectionHostDown; // ivar: _ingressProxyConnectionHostDown
@property (nonatomic) NSUInteger ingressProxyConnectionHostUnreachable; // ivar: _ingressProxyConnectionHostUnreachable
@property (nonatomic) NSUInteger ingressProxyConnectionRefused; // ivar: _ingressProxyConnectionRefused
@property (nonatomic) NSUInteger ingressProxyConnectionTimeout; // ivar: _ingressProxyConnectionTimeout
@property (retain, nonatomic) NSDictionary *networkCharacteristics; // ivar: _networkCharacteristics
@property (nonatomic) NSUInteger originProxyConnectionError; // ivar: _originProxyConnectionError
@property (nonatomic) NSUInteger postHandshakeStall; // ivar: _postHandshakeStall
@property (nonatomic) NSUInteger proxyConnectionSuccess; // ivar: _proxyConnectionSuccess


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetStats;


@end


#endif