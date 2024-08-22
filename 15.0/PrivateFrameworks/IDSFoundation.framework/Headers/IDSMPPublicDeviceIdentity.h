// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSMPPUBLICDEVICEIDENTITY_H
#define IDSMPPUBLICDEVICEIDENTITY_H



#import "IDSMPIdentity.h"

@interface IDSMPPublicDeviceIdentity : IDSMPIdentity



+(id)deviceIdentityFromDataRepresentation:(id)arg0 error:(*id)arg1 ;
+(id)deviceIdentityFromDataRepresentation:(id)arg0 publicAdminServiceIdentity:(id)arg1 error:(*id)arg2 ;
-(id)dataRepresentationWithError:(*id)arg0 ;


@end


#endif