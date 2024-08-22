// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCBAASIGNER_H
#define DCBAASIGNER_H


#import <Foundation/Foundation.h>


@interface DCBAASigner : NSObject



+(id)sharedSigner;
-(id)_attestationWithCertificates:(id)arg0 error:(*id)arg1 ;
-(id)_signatureForData:(id)arg0 withReferenceKey:(struct __SecKey *)arg1 error:(*id)arg2 ;
-(void)signatureForData:(id)arg0 completion:(id)arg1 ;
-(void)signaturesForData:(id)arg0 completion:(id)arg1 ;


@end


#endif