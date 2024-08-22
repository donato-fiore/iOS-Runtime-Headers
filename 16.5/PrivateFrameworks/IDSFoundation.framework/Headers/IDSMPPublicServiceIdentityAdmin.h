// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSMPPUBLICSERVICEIDENTITYADMIN_H
#define IDSMPPUBLICSERVICEIDENTITYADMIN_H



#import "IDSMPIdentity.h"

@interface IDSMPPublicServiceIdentityAdmin : IDSMPIdentity



+(id)publicServiceIdentityAdminWithDataRepresentation:(id)arg0 publicAccountIdentity:(id)arg1 error:(*id)arg2 ;
+(id)publicServiceIdentitySigningWithDataRepresentation:(id)arg0 publicAccountIdentity:(id)arg1 error:(*id)arg2 ;
-(id)dataRepresentationWithError:(*id)arg0 ;


@end


#endif