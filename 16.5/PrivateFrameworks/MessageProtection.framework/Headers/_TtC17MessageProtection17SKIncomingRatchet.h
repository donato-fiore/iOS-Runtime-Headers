// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MESSAGEPROTECTION17SKINCOMINGRATCHET_H
#define _TTC17MESSAGEPROTECTION17SKINCOMINGRATCHET_H

@class TtC17MessageProtection9SKRatchet;



@interface _TtC17MessageProtection17SKIncomingRatchet : TtC17MessageProtection9SKRatchet {
    ? ratchet;
    ? signingPublicKey;
    ? messageKeys;
}




-(id)init;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithKey:(id)arg0 index:(unsigned short)arg1 signingKey:(id)arg2 error:(*id)arg3 ;
-(id)openStatusWithIndex:(NSUInteger)arg0 encryptedMessage:(id)arg1 authenticating:(id)arg2 signature:(id)arg3 error:(*id)arg4 ;
-(id)serializedData;
-(id)signingKeyIdentifier;


@end


#endif