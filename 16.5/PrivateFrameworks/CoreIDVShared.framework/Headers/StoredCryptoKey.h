// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STOREDCRYPTOKEY_H
#define STOREDCRYPTOKEY_H

@class NSManagedObject, NSData, NSDate, NSString, NSSet;


#import "StoredCredential.h"
#import "StoredPayload.h"
#import "StoredAuthACL.h"

@interface StoredCryptoKey : NSManagedObject

@property (nonatomic, copy) NSData *attestation;
@property (nonatomic, copy) NSData *attestationSignature;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, retain) StoredCredential *credential;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSData *keyBlob;
@property (nonatomic) NSInteger keySlot;
@property (nonatomic, copy) NSString *keyType;
@property (nonatomic, retain) StoredPayload *payload;
@property (nonatomic, retain) StoredAuthACL *progenitorAuthACL;
@property (nonatomic, retain) StoredPayload *protectedPayload;
@property (nonatomic, copy) NSData *publicKey;
@property (nonatomic, copy) NSData *publicKeyIdentifier;
@property (nonatomic, retain) NSSet *relyingParties;
@property (nonatomic) NSInteger timesUsed;
@property (nonatomic, copy) NSDate *updatedAt;
@property (nonatomic, copy) NSString *usage;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif