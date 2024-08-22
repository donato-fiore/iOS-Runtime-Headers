// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMEWALLETKEYISOCREDENTIAL_H
#define HMDHOMEWALLETKEYISOCREDENTIAL_H

@class HMFObject, CIDCPayloadBuilder, NSString, NSData, HAPPairingIdentity;
@protocol CIDCPayloadBuilderDelegate, HMDHomeWalletKeyISOCredential;



@interface HMDHomeWalletKeyISOCredential : HMFObject <CIDCPayloadBuilderDelegate, HMDHomeWalletKeyISOCredential>



@property (readonly) CIDCPayloadBuilder *credentialBuilder; // ivar: _credentialBuilder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSData *deviceCredentialKeyExternalRepresentation; // ivar: _deviceCredentialKeyExternalRepresentation
@property (readonly) NSUInteger hash;
@property (readonly, copy) HAPPairingIdentity *pairingIdentity; // ivar: _pairingIdentity
@property (readonly) Class superclass;


-(id)initWithHAPPairingIdentity:(id)arg0 deviceCredentialKeyExternalRepresentation:(id)arg1 ;
-(void)encodeWithCompletion:(id)arg0 ;
-(void)signPayloadWithBuilder:(id)arg0 data:(id)arg1 completion:(id)arg2 ;


@end


#endif