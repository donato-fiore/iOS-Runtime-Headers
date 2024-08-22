// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSMPPUBLICDEVICEIDENTITYCONTAINER_H
#define IDSMPPUBLICDEVICEIDENTITYCONTAINER_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "IDSMPPublicLegacyIdentity.h"
#import "IDSNGMPublicDeviceIdentity.h"

@interface IDSMPPublicDeviceIdentityContainer : NSObject

@property (readonly, nonatomic) IDSMPPublicLegacyIdentity *legacyPublicIdentity; // ivar: _legacyPublicIdentity
@property (readonly, nonatomic) IDSNGMPublicDeviceIdentity *ngmPublicDeviceIdentity; // ivar: _ngmPublicDeviceIdentity
@property (readonly, nonatomic) NSNumber *ngmVersion; // ivar: _ngmVersion


+(id)identityWithDataRepresentation:(id)arg0 error:(*id)arg1 ;
+(id)identityWithLegacyPublicIdentity:(id)arg0 ngmPublicDeviceIdentity:(id)arg1 ngmVersion:(id)arg2 error:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_legacySealMessage:(id)arg0 signedWithFullIdentity:(id)arg1 error:(*id)arg2 ;
-(id)_ngmSealMessage:(id)arg0 withEncryptedAttributes:(id)arg1 signedWithFullIdentity:(id)arg2 error:(*id)arg3 ;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithLegacyPublicIdentity:(id)arg0 ngmPublicDeviceIdentity:(id)arg1 ngmVersion:(id)arg2 ;
-(id)sealMessage:(id)arg0 withEncryptedAttributes:(id)arg1 signedByFullIdentity:(id)arg2 usedIdentityWithIdentifier:(*id)arg3 error:(*id)arg4 ;
-(id)sealMessage:(id)arg0 withEncryptedAttributes:(id)arg1 signedByFullIdentity:(id)arg2 usingIdentitiesWithIdentifier:(id)arg3 error:(*id)arg4 ;


@end


#endif