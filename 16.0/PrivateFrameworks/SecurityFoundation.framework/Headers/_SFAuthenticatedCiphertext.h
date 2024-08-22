// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFAUTHENTICATEDCIPHERTEXT_H
#define _SFAUTHENTICATEDCIPHERTEXT_H

@class SFCiphertext, NSData;



@interface _SFAuthenticatedCiphertext : SFCiphertext {
    id *_authenticatedCiphertextInternal;
}


@property (readonly) NSData *authenticationCode;
@property (readonly) NSData *initializationVector;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)debugDescription;
-(id)initWithCiphertext:(id)arg0 authenticationCode:(id)arg1 initializationVector:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif