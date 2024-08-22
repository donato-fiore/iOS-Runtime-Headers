// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SECCONCRETE_SEC_IDENTITY_H
#define SECCONCRETE_SEC_IDENTITY_H

@class NSString;
@protocol OS_sec_identity, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SecConcrete_sec_identity : NSObject <OS_sec_identity>

 {
    *__SecIdentity identity;
    *__CFArray certs;
    id *sign_block;
    id *decrypt_block;
    NSObject<OS_dispatch_queue> *operation_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(id)initWithCertificates:(struct __CFArray *)arg0 signBlock:(id)arg1 decryptBlock:(unk)arg2 queue:(id)arg3  ;
-(id)initWithIdentity:(struct __SecIdentity *)arg0 ;
-(id)initWithIdentityAndCertificates:(struct __SecIdentity *)arg0 certificates:(struct __CFArray *)arg1 ;
-(void)dealloc;


@end


#endif