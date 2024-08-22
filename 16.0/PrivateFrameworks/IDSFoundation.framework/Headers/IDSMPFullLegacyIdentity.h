// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSMPFULLLEGACYIDENTITY_H
#define IDSMPFULLLEGACYIDENTITY_H

@protocol NSSecureCoding;


#import "IDSMPIdentity.h"

@interface IDSMPFullLegacyIdentity : IDSMPIdentity <NSSecureCoding>



@property (readonly, nonatomic) *_SecMPFullIdentity fullIdentity;


+(BOOL)supportsSecureCoding;
+(id)identityWithData:(id)arg0 error:(*id)arg1 ;
+(id)identityWithDataProtectionClass:(unsigned int)arg0 error:(*id)arg1 ;
+(id)identityWithError:(*id)arg0 ;
+(struct _SecMPFullIdentity *)_createFullIdentityFromData:(id)arg0 error:(*id)arg1 ;
+(struct _SecMPFullIdentity *)_createFullIdentityWithDataProtectionClass:(unsigned int)arg0 error:(*id)arg1 ;
+(struct _SecMPFullIdentity *)_createFullIdentityWithError:(*id)arg0 ;
+(struct _SecMPPublicIdentity *)_copyPublicIdentityFromFullIdentity:(struct _SecMPFullIdentity *)arg0 error:(*id)arg1 ;
-(BOOL)didDataRepresentationFormatChangeFromDataRepresentation:(id)arg0 error:(*id)arg1 ;
-(BOOL)purgeFromKeychain:(*id)arg0 ;
-(BOOL)updateIdentityToDataProtectionClass:(unsigned int)arg0 error:(*id)arg1 ;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFullIdentity:(struct _SecMPFullIdentity *)arg0 ;
-(id)protectedHashOfMessageData:(id)arg0 error:(*id)arg1 ;
-(id)publicIdentityWithError:(*id)arg0 ;
-(id)verifyAndExposeData:(id)arg0 withSigner:(id)arg1 error:(*id)arg2 ;
-(unsigned int)dataProtectionClassWithError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif