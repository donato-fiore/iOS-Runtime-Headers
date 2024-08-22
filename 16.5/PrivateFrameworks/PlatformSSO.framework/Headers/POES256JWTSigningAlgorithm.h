// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POES256JWTSIGNINGALGORITHM_H
#define POES256JWTSIGNINGALGORITHM_H

@class NSString;
@protocol POJWTSigningAlgorithm;

#import <Foundation/Foundation.h>


@interface POES256JWTSigningAlgorithm : NSObject <POJWTSigningAlgorithm>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)verifySignature:(id)arg0 onData:(id)arg1 usingCertificateString:(id)arg2 ;
-(BOOL)verifySignature:(id)arg0 onData:(id)arg1 usingKey:(struct __SecKey *)arg2 ;
-(id)signData:(id)arg0 usingKey:(struct __SecKey *)arg1 ;


@end


#endif