// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSURLCREDENTIAL_H
#define NSURLCREDENTIAL_H

@class NSURLCredentialInternal;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying>

 {
    NSURLCredentialInternal *_internal;
}


@property (readonly) NSUInteger persistence;


+(BOOL)supportsSecureCoding;
+(id)credentialForTrust:(struct __SecTrust *)arg0 ;
+(id)credentialWithIdentity:(struct __SecIdentity *)arg0 certificates:(id)arg1 persistence:(NSUInteger)arg2 ;
+(id)credentialWithUser:(id)arg0 password:(id)arg1 persistence:(NSUInteger)arg2 ;
-(BOOL)_hasSWCACreatorAttribute;
-(BOOL)hasPassword;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithCFURLCredential:(struct _CFURLCredential *)arg0 ;
-(id)certificates;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentity:(struct __SecIdentity *)arg0 certificates:(id)arg1 persistence:(NSUInteger)arg2 ;
-(id)initWithTrust:(struct __SecTrust *)arg0 ;
-(id)initWithUser:(id)arg0 password:(id)arg1 persistence:(NSUInteger)arg2 ;
-(id)password;
-(id)user;
-(struct _CFURLCredential *)_CFURLCredential;
-(struct _CFURLCredential *)_cfurlcredential;
-(struct __SecIdentity *)identity;
-(void)_removeSWCACreatorAttribute;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif