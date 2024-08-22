// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSMPPUBLICACCOUNTIDENTITY_H
#define IDSMPPUBLICACCOUNTIDENTITY_H

@class NSData;


#import "IDSMPIdentity.h"

@interface IDSMPPublicAccountIdentity : IDSMPIdentity

@property (readonly, nonatomic) NSData *publicName;


+(id)publicAccountIdentitywithDataRepresentation:(id)arg0 error:(*id)arg1 ;
-(BOOL)verifySignature:(id)arg0 ofData:(id)arg1 error:(*id)arg2 ;
-(id)dataRepresentationWithError:(*id)arg0 ;


@end


#endif