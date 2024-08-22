// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASTAUTHINFORESULT_H
#define ASTAUTHINFORESULT_H

@class NSData;


#import "ASTSealablePayload.h"

@interface ASTAuthInfoResult : ASTSealablePayload

@property (retain, nonatomic) NSData *attestation; // ivar: _attestation
@property (retain, nonatomic) NSData *cert; // ivar: _cert
@property (nonatomic) NSInteger error; // ivar: _error
@property (nonatomic) NSInteger type; // ivar: _type


+(id)authInfoResultWithAttestation:(id)arg0 ;
+(id)authInfoResultWithAttestation:(id)arg0 certificate:(id)arg1 type:(NSInteger)arg2 error:(NSInteger)arg3 ;
+(id)sealedAuthInfoResultWithPayload:(id)arg0 signature:(id)arg1 ;
-(id)generatePayload;


@end


#endif