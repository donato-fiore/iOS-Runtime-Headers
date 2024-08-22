// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSMPPUBLICLEGACYIDENTITY_H
#define IDSMPPUBLICLEGACYIDENTITY_H

@protocol NSSecureCoding;


#import "IDSMPIdentity.h"

@interface IDSMPPublicLegacyIdentity : IDSMPIdentity <NSSecureCoding>



@property (readonly, nonatomic) *_SecMPPublicIdentity publicIdentity;


+(BOOL)supportsSecureCoding;
+(id)identityWithData:(id)arg0 error:(*id)arg1 ;
+(struct _SecMPPublicIdentity *)_createPublicIdentityFromData:(id)arg0 error:(*id)arg1 ;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPublicIdentity:(struct _SecMPPublicIdentity *)arg0 ;
-(id)signAndProtectData:(id)arg0 withSigner:(id)arg1 error:(*id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif