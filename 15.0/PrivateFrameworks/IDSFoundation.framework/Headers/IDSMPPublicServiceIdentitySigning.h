// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSMPPUBLICSERVICEIDENTITYSIGNING_H
#define IDSMPPUBLICSERVICEIDENTITYSIGNING_H



#import "IDSMPIdentity.h"

@interface IDSMPPublicServiceIdentitySigning : IDSMPIdentity



+(id)publicServiceIdentitySigningWithDataRepresentation:(id)arg0 publicAccountIdentity:(id)arg1 error:(*id)arg2 ;
-(id)dataRepresentationWithError:(*id)arg0 ;


@end


#endif