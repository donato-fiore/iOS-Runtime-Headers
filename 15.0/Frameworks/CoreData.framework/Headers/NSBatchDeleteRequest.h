// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSBATCHDELETEREQUEST_H
#define NSBATCHDELETEREQUEST_H



#import "NSPersistentStoreRequest.h"
#import "NSFetchRequest.h"

@interface NSBatchDeleteRequest : NSPersistentStoreRequest {
    NSFetchRequest *_deleteTarget;
    NSInteger _flags;
}


@property (readonly, copy) NSFetchRequest *fetchRequest;
@property NSUInteger resultType; // ivar: _resultType


+(id)decodeFromXPCArchive:(id)arg0 withContext:(id)arg1 withPolicy:(id)arg2 ;
-(BOOL)_secureOperation;
-(BOOL)shouldPerformSecureOperation;
-(NSUInteger)requestType;
-(id)description;
-(id)encodeForXPC;
-(id)initWithFetchRequest:(id)arg0 ;
-(id)initWithObjectIDs:(id)arg0 ;
-(void)_resolveEntityWithContext:(id)arg0 ;
-(void)_setSecureOperation:(BOOL)arg0 ;
-(void)dealloc;
-(void)setShouldPerformSecureOperation:(BOOL)arg0 ;


@end


#endif