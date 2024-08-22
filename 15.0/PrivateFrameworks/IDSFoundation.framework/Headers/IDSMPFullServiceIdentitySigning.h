// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSMPFULLSERVICEIDENTITYSIGNING_H
#define IDSMPFULLSERVICEIDENTITYSIGNING_H

@class NSString;


#import "IDSMPIdentity.h"

@interface IDSMPFullServiceIdentitySigning : IDSMPIdentity

@property (readonly, nonatomic) NSInteger identityServiceType;
@property (readonly, nonatomic) NSString *identityServiceTypeName;


+(id)fullServiceIdentityWithFullAccountIdentity:(id)arg0 type:(NSInteger)arg1 error:(*id)arg2 ;
+(id)identityWithData:(id)arg0 accountIdentity:(id)arg1 error:(*id)arg2 ;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)publicServiceIdentitySigningWithError:(*id)arg0 ;


@end


#endif