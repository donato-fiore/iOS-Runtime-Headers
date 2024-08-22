// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSBATCHINSERTREQUEST_H
#define NSBATCHINSERTREQUEST_H

@class NSString, NSArray;


#import "NSPersistentStoreRequest.h"
#import "NSEntityDescription.h"

@interface NSBatchInsertRequest : NSPersistentStoreRequest {
    id *_entity;
    id *_insertDictionaryHandler;
    id *_insertManagedObjectHandler;
    _insertRequestFlags _flags;
}


@property (copy) id *dictionaryHandler;
@property (readonly) NSEntityDescription *entity;
@property (readonly, copy) NSString *entityName;
@property (copy) id *managedObjectHandler;
@property (copy) NSArray *objectsToInsert; // ivar: _objectsToInsert
@property NSUInteger resultType;


+(id)batchInsertRequestWithEntityName:(id)arg0 dictionaryHandler:(id)arg1 ;
+(id)batchInsertRequestWithEntityName:(id)arg0 managedObjectHandler:(id)arg1 ;
+(id)batchInsertRequestWithEntityName:(id)arg0 objects:(id)arg1 ;
+(id)decodeFromXPCArchive:(id)arg0 withContext:(id)arg1 withPolicy:(id)arg2 ;
-(BOOL)_secureOperation;
-(NSUInteger)requestType;
-(id)description;
-(id)encodeForXPC;
-(id)init;
-(id)initWithEntity:(id)arg0 dictionaryHandler:(id)arg1 ;
-(id)initWithEntity:(id)arg0 managedObjectHandler:(id)arg1 ;
-(id)initWithEntity:(id)arg0 objects:(id)arg1 ;
-(id)initWithEntityName:(id)arg0 dictionaryHandler:(id)arg1 ;
-(id)initWithEntityName:(id)arg0 managedObjectHandler:(id)arg1 ;
-(id)initWithEntityName:(id)arg0 objects:(id)arg1 ;
-(void)_resolveEntityWithContext:(id)arg0 ;
-(void)_setSecureOperation:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif