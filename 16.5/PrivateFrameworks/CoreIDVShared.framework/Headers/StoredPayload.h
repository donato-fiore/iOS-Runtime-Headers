// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STOREDPAYLOAD_H
#define STOREDPAYLOAD_H

@class NSManagedObject, NSDate, NSString, NSData;


#import "StoredCredential.h"
#import "StoredCryptoKey.h"

@interface StoredPayload : NSManagedObject

@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, retain) StoredCredential *credential;
@property (nonatomic, copy) NSString *docType;
@property (nonatomic, copy) NSData *elementIdentifiersByNamespace;
@property (nonatomic) NSInteger format;
@property (nonatomic, copy) NSData *ingestionHash;
@property (nonatomic, copy) NSData *payloadData;
@property (nonatomic, retain) StoredCryptoKey *payloadProtectionKey;
@property (nonatomic, retain) StoredCryptoKey *presentmentKey;
@property (nonatomic) NSInteger protectionType;
@property (nonatomic, copy) NSDate *updatedAt;
@property (nonatomic, copy) NSDate *validFrom;
@property (nonatomic, copy) NSDate *validUntil;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif