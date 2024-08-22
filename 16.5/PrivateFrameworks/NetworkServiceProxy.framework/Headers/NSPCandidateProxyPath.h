// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPCANDIDATEPROXYPATH_H
#define NSPCANDIDATEPROXYPATH_H

@class NSData, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NSPProxyTokenInfo.h"

@interface NSPCandidateProxyPath : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSData *domainFilter; // ivar: _domainFilter
@property (retain, nonatomic) NSPProxyTokenInfo *egressProxy; // ivar: _egressProxy
@property (retain, nonatomic) NSPProxyTokenInfo *ingressProxy; // ivar: _ingressProxy
@property (retain, nonatomic) NSString *preferredPathConfigURI; // ivar: _preferredPathConfigURI
@property (nonatomic) NSUInteger proxyPathWeight; // ivar: _proxyPathWeight


+(BOOL)supportsSecureCoding;
-(BOOL)matchEgress:(id)arg0 ;
-(BOOL)matchIngress:(id)arg0 ;
-(BOOL)proxyPathReady;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIngressProxy:(id)arg0 egressProxy:(id)arg1 proxyPathWeight:(NSUInteger)arg2 preferredPathConfigURI:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchDomainFilter:(id)arg0 ;


@end


#endif