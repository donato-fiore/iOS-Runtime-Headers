// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NGMFULLDEVICEIDENTITY_H
#define NGMFULLDEVICEIDENTITY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "SigningKey.h"

@interface NGMFullDeviceIdentity : NSObject

@property (retain, nonatomic) NSMutableArray *devicePrekeys; // ivar: _devicePrekeys
@property (retain, nonatomic) SigningKey *deviceSigningKey; // ivar: _deviceSigningKey


+(id)identityWithAccess:(id)arg0 error:(*id)arg1 ;
+(id)identityWithAccess:(id)arg0 usageIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)identityWithDataRepresentation:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteKeyWithTag:(id)arg0 ;
-(BOOL)eraseFromKeyChain:(*id)arg0 ;
-(BOOL)requiresMigration;
-(BOOL)shouldRollEncryptionIdentity;
-(BOOL)updateWithRegisteredTicket:(id)arg0 error:(*id)arg1 ;
-(id)batchSign:(id)arg0 forType:(NSInteger)arg1 error:(*id)arg2 ;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)description;
-(id)initWithSigningKey:(id)arg0 devicePrekeys:(id)arg1 ;
-(id)keyRollingTicketWithError:(*id)arg0 ;
-(id)publicDeviceIdentityWithError:(*id)arg0 ;
-(id)sign:(id)arg0 forType:(NSInteger)arg1 error:(*id)arg2 ;
-(id)signDataWithFormatter:(id)arg0 error:(*id)arg1 ;
-(id)unsealMessage:(id)arg0 signedByPublicIdentity:(id)arg1 error:(*id)arg2 ;
-(void)postMigrationKeychainCleanup;
-(void)unsealMessage:(id)arg0 signedByPublicIdentity:(id)arg1 decryptionBlock:(id)arg2 ;
-(void)unsealMessageAndAttributes:(id)arg0 signedByPublicIdentity:(id)arg1 decryptionBlock:(id)arg2 ;


@end


#endif