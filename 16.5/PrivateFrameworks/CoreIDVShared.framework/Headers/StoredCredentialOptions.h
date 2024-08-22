// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STOREDCREDENTIALOPTIONS_H
#define STOREDCREDENTIALOPTIONS_H

@class NSManagedObject;


#import "StoredCredential.h"

@interface StoredCredentialOptions : NSManagedObject

@property (nonatomic, retain) StoredCredential *credential;
@property (nonatomic) NSInteger deleteInactiveKeysAfterDays;
@property (nonatomic) NSInteger deleteIncompleteCredentialAfterDays;
@property (nonatomic) NSInteger payloadProtectionPolicy;
@property (nonatomic) NSInteger presentmentAuthPolicy;
@property (nonatomic) NSInteger readerAuthenticationPolicy;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif