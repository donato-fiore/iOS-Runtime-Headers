// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STOREDCREDENTIAL_H
#define STOREDCREDENTIAL_H

@class NSManagedObject, NSDate, NSString, NSSet;


#import "StoredCredentialOptions.h"

@interface StoredCredential : NSManagedObject

@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSString *credentialIdentifier;
@property (nonatomic, retain) NSSet *cryptoKeys;
@property (nonatomic, retain) StoredCredentialOptions *options;
@property (nonatomic, copy) NSString *partition;
@property (nonatomic, retain) NSSet *payloads;
@property (nonatomic) NSInteger state;
@property (nonatomic, copy) NSDate *updatedAt;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif