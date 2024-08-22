// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPCANDIDATEPROXYPATH_H
#define NSPCANDIDATEPROXYPATH_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NSPProxyTokenInfo.h"

@interface NSPCandidateProxyPath : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSPProxyTokenInfo *egressProxy; // ivar: _egressProxy
@property (retain, nonatomic) NSPProxyTokenInfo *ingressProxy; // ivar: _ingressProxy
@property (nonatomic) NSUInteger proxyPathWeight; // ivar: _proxyPathWeight


+(BOOL)supportsSecureCoding;
-(BOOL)matchEgress:(id)arg0 ;
-(BOOL)matchIngress:(id)arg0 ;
-(BOOL)proxyPathReady;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIngressProxy:(id)arg0 egressProxy:(id)arg1 proxyPathWeight:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif