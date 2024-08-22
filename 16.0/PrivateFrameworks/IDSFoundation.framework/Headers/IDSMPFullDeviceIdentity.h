// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSMPFULLDEVICEIDENTITY_H
#define IDSMPFULLDEVICEIDENTITY_H



#import "IDSMPIdentity.h"

@interface IDSMPFullDeviceIdentity : IDSMPIdentity



+(id)deviceIdentityFromDataRepresentation:(id)arg0 publicAdminServiceIdentity:(id)arg1 error:(*id)arg2 ;
+(id)deviceIdentityWithFullAdminServiceIdentity:(id)arg0 error:(*id)arg1 ;
-(BOOL)purgeFromKeychain:(*id)arg0 ;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)publicDeviceIdentityWithError:(*id)arg0 ;


@end


#endif