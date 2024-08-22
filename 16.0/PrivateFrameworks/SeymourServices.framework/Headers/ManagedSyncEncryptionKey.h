// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MANAGEDSYNCENCRYPTIONKEY_H
#define MANAGEDSYNCENCRYPTIONKEY_H

@class NSManagedObject, NSString, NSUUID, NSData;



@interface ManagedSyncEncryptionKey : NSManagedObject

@property (nonatomic, copy) NSString *etag;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSData *key;
@property (nonatomic, copy) NSString *zoneName;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif