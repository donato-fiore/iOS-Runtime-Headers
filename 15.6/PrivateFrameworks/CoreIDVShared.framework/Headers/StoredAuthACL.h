// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STOREDAUTHACL_H
#define STOREDAUTHACL_H

@class NSManagedObject, NSData, NSString;



@interface StoredAuthACL : NSManagedObject

@property (nonatomic) NSInteger aclType;
@property (nonatomic, copy) NSData *credentialUUIDs;
@property (nonatomic, copy) NSData *encryptedACL;
@property (nonatomic, copy) NSString *identifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif