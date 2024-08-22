// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSMPFULLDEVICEIDENTITYCONTAINER_H
#define IDSMPFULLDEVICEIDENTITYCONTAINER_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>

#import "IDSMPFullLegacyIdentity.h"
#import "IDSNGMFullDeviceIdentity.h"

@interface IDSMPFullDeviceIdentityContainer : NSObject

@property (retain, nonatomic) NSData *cachedLegacySerializedData; // ivar: _cachedLegacySerializedData
@property (readonly, nonatomic) IDSMPFullLegacyIdentity *legacyFullIdentity; // ivar: _legacyFullIdentity
@property (readonly, nonatomic) IDSNGMFullDeviceIdentity *ngmFullDeviceIdentity; // ivar: _ngmFullDeviceIdentity
@property (readonly, nonatomic) NSNumber *ngmVersion; // ivar: _ngmVersion


+(id)_identityWithLegacyFullIdentity:(id)arg0 ngmFullDeviceIdentity:(id)arg1 ngmVersion:(id)arg2 legacyFullIdentitySerializedData:(id)arg3 error:(*id)arg4 ;
+(id)identityWithDataRepresentation:(id)arg0 error:(*id)arg1 ;
+(id)identityWithLegacyFullIdentity:(id)arg0 ngmFullDeviceIdentity:(id)arg1 ngmVersion:(id)arg2 error:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_legacyUnsealMessage:(id)arg0 signedByPublicIdentity:(id)arg1 error:(*id)arg2 ;
-(id)_ngmSynchronouslyUnsealMessage:(id)arg0 signedByPublicIdentity:(id)arg1 error:(*id)arg2 ;
-(id)_ngmUnsealMessage:(id)arg0 signedByPublicIdentity:(id)arg1 ;
-(id)_ngmValidateEncryptingAndSigningIdentity:(id)arg0 forMessage:(id)arg1 ;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithFullLegacyIdentity:(id)arg0 ngmFullDeviceidentity:(id)arg1 ngmVersion:(id)arg2 legacyFullIdentitySerializedData:(id)arg3 ;
-(id)publicIdentityWithError:(*id)arg0 ;
-(id)unsealMessage:(id)arg0 signedByPublicIdentity:(id)arg1 usingIdentityWithIdentifier:(id)arg2 ;
-(id)unsealMessage:(id)arg0 signedByPublicIdentity:(id)arg1 usingIdentityWithIdentifier:(id)arg2 error:(*id)arg3 ;


@end


#endif