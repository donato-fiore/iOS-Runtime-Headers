// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSNGMFULLDEVICEIDENTITY_H
#define IDSNGMFULLDEVICEIDENTITY_H


#import <Foundation/Foundation.h>


@interface IDSNGMFullDeviceIdentity : NSObject



+(id)identityWithAccess:(id)arg0 usageIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)identityWithDataRepresentation:(id)arg0 error:(*id)arg1 ;
-(BOOL)eraseFromKeyChain:(*id)arg0 ;
-(BOOL)shouldRollEncryptionIdentity;
-(BOOL)updateWithRegisteredTicket:(id)arg0 error:(*id)arg1 ;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)keyRollingTicketWithError:(*id)arg0 ;
-(id)publicDeviceIdentityWithError:(*id)arg0 ;
-(id)unsealMessage:(id)arg0 signedByPublicIdentity:(id)arg1 error:(*id)arg2 ;
-(void)unsealMessage:(id)arg0 signedByPublicIdentity:(id)arg1 decryptionBlock:(id)arg2 ;
-(void)unsealMessageAndAttributes:(id)arg0 signedByPublicIdentity:(id)arg1 decryptionBlock:(id)arg2 ;


@end


#endif