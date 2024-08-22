// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSAVECHANGESREQUEST_H
#define NSSAVECHANGESREQUEST_H

@class NSSet, NSMutableArray;


#import "NSPersistentStoreRequest.h"

@interface NSSaveChangesRequest : NSPersistentStoreRequest {
    NSSet *_insertedObjects;
    NSSet *_updatedObjects;
    NSSet *_deletedObjects;
    NSSet *_optimisticallyLockedObjects;
    NSUInteger _flags;
    NSMutableArray *_mutatedObjectIDsNotifications;
}


@property (readonly) NSSet *deletedObjects;
@property (readonly) NSSet *insertedObjects;
@property (readonly) NSSet *lockedObjects;
@property (readonly) NSSet *updatedObjects;


+(void)initialize;
-(BOOL)_secureOperation;
-(NSUInteger)requestType;
-(id)description;
-(id)init;
-(id)initWithInsertedObjects:(id)arg0 updatedObjects:(id)arg1 deletedObjects:(id)arg2 lockedObjects:(id)arg3 ;
-(void)_setSecureOperation:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif