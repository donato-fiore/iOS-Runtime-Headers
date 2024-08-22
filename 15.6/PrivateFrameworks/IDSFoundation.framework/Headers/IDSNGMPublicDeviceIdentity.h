// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSNGMPUBLICDEVICEIDENTITY_H
#define IDSNGMPUBLICDEVICEIDENTITY_H


#import <Foundation/Foundation.h>


@interface IDSNGMPublicDeviceIdentity : NSObject



+(id)identityWithDataRepresentation:(id)arg0 error:(*id)arg1 ;
+(id)identityWithIdentityData:(id)arg0 prekeyData:(id)arg1 error:(*id)arg2 ;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)identityData;
-(id)prekeyData;
-(id)sealMessage:(id)arg0 signedByFullIdentity:(id)arg1 error:(*id)arg2 ;
-(id)sealMessage:(id)arg0 withEncryptedAttributes:(id)arg1 signedByFullIdentity:(id)arg2 error:(*id)arg3 ;


@end


#endif