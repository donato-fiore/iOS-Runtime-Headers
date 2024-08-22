// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSURLPROTECTIONSPACE_H
#define NSURLPROTECTIONSPACE_H

@class NSURLProtectionSpaceInternal, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NSURLProtectionSpace : NSObject <NSSecureCoding, NSCopying>

 {
    NSURLProtectionSpaceInternal *_internal;
}


@property (readonly, copy) NSString *authenticationMethod;
@property (readonly, copy) NSString *host;
@property (readonly) BOOL isProxy;
@property (readonly) NSInteger port;
@property (readonly, copy) NSString *protocol;
@property (readonly, copy) NSString *proxyType;
@property (readonly, copy) NSString *realm;
@property (readonly) BOOL receivesCredentialSecurely;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithCFURLProtectionSpace:(struct _CFURLProtectionSpace *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)distinguishedNames;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHost:(id)arg0 port:(NSInteger)arg1 protocol:(id)arg2 realm:(id)arg3 authenticationMethod:(id)arg4 ;
-(id)initWithProxyHost:(id)arg0 port:(NSInteger)arg1 type:(id)arg2 realm:(id)arg3 authenticationMethod:(id)arg4 ;
-(struct _CFURLProtectionSpace *)_CFURLProtectionSpace;
-(struct _CFURLProtectionSpace *)_cfurlprtotectionspace;
-(struct __SecTrust *)serverTrust;
-(void)_setDistinguishedNames:(id)arg0 ;
-(void)_setServerTrust:(struct __SecTrust *)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif