// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STOREDCRYPTOKEY_H
#define STOREDCRYPTOKEY_H

@class NSManagedObject, NSData, NSDate, NSString;


#import "StoredCredential.h"
#import "StoredPayload.h"

@interface StoredCryptoKey : NSManagedObject

@property (nonatomic, copy) NSData *attestation;
@property (nonatomic, copy) NSData *attestationSignature;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, retain) StoredCredential *credential;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) NSInteger keySlot;
@property (nonatomic, copy) NSString *keyType;
@property (nonatomic, retain) StoredPayload *payload;
@property (nonatomic, copy) NSData *publicKey;
@property (nonatomic, copy) NSData *publicKeyIdentifier;
@property (nonatomic, copy) NSDate *updatedAt;
@property (nonatomic, copy) NSString *usage;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif