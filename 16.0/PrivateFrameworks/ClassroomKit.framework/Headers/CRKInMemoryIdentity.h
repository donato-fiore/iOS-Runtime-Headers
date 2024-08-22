// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKINMEMORYIDENTITY_H
#define CRKINMEMORYIDENTITY_H

@class NSString;
@protocol CRKIdentity, CRKCertificate, CRKPrivateKey;

#import <Foundation/Foundation.h>


@interface CRKInMemoryIdentity : NSObject <CRKIdentity>



@property (readonly, nonatomic) NSObject<CRKCertificate> *certificate; // ivar: _certificate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CRKPrivateKey> *privateKey; // ivar: _privateKey
@property (readonly) Class superclass;
@property (readonly, nonatomic) *__SecIdentity underlyingIdentity;


+(id)identityWithConfiguration:(id)arg0 validityDateInterval:(id)arg1 ;
-(id)initWithCertificate:(id)arg0 privateKey:(id)arg1 ;


@end


#endif