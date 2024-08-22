// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPPROXYAGENTNETWORKSTATISTICS_H
#define NSPPROXYAGENTNETWORKSTATISTICS_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NSPProxyAgentNetworkStatistics : NSObject <NSSecureCoding, NSCopying>

 {
    NSDictionary *_networkCharacteristics;
    NSUInteger _proxyConnectionSuccess;
    NSUInteger _ingressProxyConnectionTimeout;
    NSUInteger _ingressProxyConnectionRefused;
    NSUInteger _ingressProxyConnectionHostDown;
    NSUInteger _ingressProxyConnectionHostUnreachable;
    NSUInteger _ingressProxyConnectionError;
    NSUInteger _ingressProxyConnectionDNSTimeout;
    NSUInteger _ingressProxyConnectionDNSBlocked;
    NSUInteger _ingressProxyConnectionCertError;
    NSUInteger _egressProxyConnectionError;
    NSUInteger _originProxyConnectionError;
    NSUInteger _egressProxyUnavailableError;
    NSUInteger _incompleteHandshakeStall;
    NSUInteger _postHandshakeStall;
}




+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif