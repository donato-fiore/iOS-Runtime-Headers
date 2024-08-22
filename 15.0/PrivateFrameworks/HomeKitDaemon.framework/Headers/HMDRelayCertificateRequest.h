// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDRELAYCERTIFICATEREQUEST_H
#define HMDRELAYCERTIFICATEREQUEST_H

@class HMFObject, NSData, NSString;



@interface HMDRelayCertificateRequest : HMFObject

@property (readonly, copy, nonatomic) NSData *challengeCertificate; // ivar: _challengeCertificate
@property (readonly, copy, nonatomic) NSString *challengeIdentifier; // ivar: _challengeIdentifier
@property (readonly, copy, nonatomic) NSData *challengeResponse; // ivar: _challengeResponse
@property (readonly, copy, nonatomic) NSData *publicKey; // ivar: _publicKey


+(id)shortDescription;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)init;
-(id)initWithPublicKey:(id)arg0 challengeIdentifier:(id)arg1 challengeResponse:(id)arg2 challengeCertificate:(id)arg3 ;
-(id)serializeWithError:(*id)arg0 ;
-(id)shortDescription;


@end


#endif